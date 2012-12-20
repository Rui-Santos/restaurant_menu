<?php
/**
 * @file
 * restaurant_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function restaurant_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:menus
  $menu_links['main-menu:menus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menus',
    'router_path' => 'menus',
    'link_title' => 'Menus',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menus');


  return $menu_links;
}
