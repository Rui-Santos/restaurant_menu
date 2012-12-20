<?php
/**
 * @file
 * restaurant_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function restaurant_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'menu_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Menu Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Images */
  $handler->display->display_options['fields']['field_menu_categories_images']['id'] = 'field_menu_categories_images';
  $handler->display->display_options['fields']['field_menu_categories_images']['table'] = 'field_data_field_menu_categories_images';
  $handler->display->display_options['fields']['field_menu_categories_images']['field'] = 'field_menu_categories_images';
  $handler->display->display_options['fields']['field_menu_categories_images']['label'] = '';
  $handler->display->display_options['fields']['field_menu_categories_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_menu_categories_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_menu_categories_images']['settings'] = array(
    'image_style' => 'panopoly_image_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_menu_categories_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_menu_categories_images']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'menu_categories' => 'menu_categories',
  );

  /* Display: Menu Categories */
  $handler = $view->new_display('panel_pane', 'Menu Categories', 'menu_categories');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Menus';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['menu_categories'] = $view;

  return $export;
}
