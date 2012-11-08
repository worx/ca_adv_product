<?php
/**
 * @file
 * ca_adv_product.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_adv_product_user_default_roles() {
  $roles = array();

  // Exported role: advance product admin.
  $roles['advance product admin'] = array(
    'name' => 'advance product admin',
    'weight' => '6',
    'machine_name' => 'adv_product_admin',
  );

  return $roles;
}
