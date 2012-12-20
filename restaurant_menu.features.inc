<?php
/**
 * @file
 * restaurant_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function restaurant_menu_node_info() {
  $items = array(
    'menu' => array(
      'name' => t('Menu'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a menu with a title, types and images.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
