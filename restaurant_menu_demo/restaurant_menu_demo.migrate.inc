<?php
/**
 * @file
 * Migration file for Restaurant Menu module
 */

/**
 * Implements hook_migrate_api().
 */
function restaurant_menu_demo_migrate_api() {
  return array(
    'api' => 2,
    'migrations' => array(
      'RestaurantMenuMigrateMenu' => array(
        'class_name' => 'RestaurantMenuMigrateMenuMigration',
      ),
    ),
  );
}

// Migration class
class RestaurantMenuMigrateMenuMigration extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import menu nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'restaurant_menu_demo') . '/import/menus.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('menu', array('text_format' => 'panopoly_html_text'));

    // Fields Mapping
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');

    $this->addFieldMapping('field_menu_featured', 'featured');

    $this->addFieldMapping('field_menu_categories', 'categories')->separator(', ');
    $this->addFieldMapping('field_menu_categories:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_menu_images', 'images');
    $this->addFieldMapping('field_menu_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_menu_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'restaurant_menu_demo') . '/import/images');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);
  }

  function csvcolumns() {
    // "Title", "Body", "Categories", "Images"
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Body');
    $columns[2] = array('categories', 'Categories');
    $columns[3] = array('images', 'Images');
    $columns[4] = array('featured', 'Featured');
    return $columns;
  }
}
