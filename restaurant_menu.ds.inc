<?php
/**
 * @file
 * restaurant_menu.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function restaurant_menu_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|menu|featured';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'menu';
  $ds_fieldsetting->view_mode = 'featured';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'p',
        'class' => '',
      ),
    ),
  );
  $export['node|menu|featured'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|menu|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'menu';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'p',
        'class' => '',
      ),
    ),
  );
  $export['node|menu|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function restaurant_menu_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|menu|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'menu';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-radix_burr';
  $ds_layout->settings = array(
    'regions' => array(
      'sidebar' => array(
        0 => 'field_menu_images',
      ),
      'contentmain' => array(
        1 => 'field_menu_types',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_menu_images' => 'sidebar',
      'field_menu_types' => 'contentmain',
      'body' => 'contentmain',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar' => 'div',
      'contentmain' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|menu|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|menu|featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'menu';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'panels-radix_burr';
  $ds_layout->settings = array(
    'regions' => array(
      'sidebar' => array(
        0 => 'field_menu_images',
      ),
      'contentmain' => array(
        1 => 'title',
        2 => 'field_menu_types',
      ),
    ),
    'fields' => array(
      'field_menu_images' => 'sidebar',
      'title' => 'contentmain',
      'field_menu_types' => 'contentmain',
    ),
    'limit' => array(
      'field_menu_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar' => 'div',
      'contentmain' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|menu|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|menu|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'menu';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_menu_images',
        1 => 'title',
        2 => 'field_menu_types',
      ),
    ),
    'fields' => array(
      'field_menu_images' => 'ds_content',
      'title' => 'ds_content',
      'field_menu_types' => 'ds_content',
    ),
    'limit' => array(
      'field_menu_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|menu|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|menu_categories|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'menu_categories';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-radix_boxton';
  $ds_layout->settings = array(
    'regions' => array(
      'contentmain' => array(
        0 => 'description',
      ),
    ),
    'fields' => array(
      'description' => 'contentmain',
    ),
    'classes' => array(),
    'wrappers' => array(
      'contentmain' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['taxonomy_term|menu_categories|default'] = $ds_layout;

  return $export;
}
