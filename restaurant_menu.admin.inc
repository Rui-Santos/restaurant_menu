<?php

/**
 * @file
 * Admin callbacks for the restaurant_menu module.
 */

/**
 * Page callback for admin/menus/add.
 */
function restaurant_menu_add_menu_admin() {
  // Return content for node/add/menu path.
  return menu_execute_active_handler('node/add/menu');
}