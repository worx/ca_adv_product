<?php
/**
 * @file
 * ca_adv_product.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_adv_product_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_adv_product content.
  $permissions['create ca_adv_product content'] = array(
    'name' => 'create ca_adv_product content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: create ca_adv_product_category content.
  $permissions['create ca_adv_product_category content'] = array(
    'name' => 'create ca_adv_product_category content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: create ca_adv_product_option content.
  $permissions['create ca_adv_product_option content'] = array(
    'name' => 'create ca_adv_product_option content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_adv_product content.
  $permissions['delete any ca_adv_product content'] = array(
    'name' => 'delete any ca_adv_product content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_adv_product_category content.
  $permissions['delete any ca_adv_product_category content'] = array(
    'name' => 'delete any ca_adv_product_category content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_adv_product_option content.
  $permissions['delete any ca_adv_product_option content'] = array(
    'name' => 'delete any ca_adv_product_option content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_adv_product content.
  $permissions['delete own ca_adv_product content'] = array(
    'name' => 'delete own ca_adv_product content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_adv_product_category content.
  $permissions['delete own ca_adv_product_category content'] = array(
    'name' => 'delete own ca_adv_product_category content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_adv_product_option content.
  $permissions['delete own ca_adv_product_option content'] = array(
    'name' => 'delete own ca_adv_product_option content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_adv_product content.
  $permissions['edit any ca_adv_product content'] = array(
    'name' => 'edit any ca_adv_product content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_adv_product_category content.
  $permissions['edit any ca_adv_product_category content'] = array(
    'name' => 'edit any ca_adv_product_category content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_adv_product_option content.
  $permissions['edit any ca_adv_product_option content'] = array(
    'name' => 'edit any ca_adv_product_option content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_adv_product content.
  $permissions['edit own ca_adv_product content'] = array(
    'name' => 'edit own ca_adv_product content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_adv_product_category content.
  $permissions['edit own ca_adv_product_category content'] = array(
    'name' => 'edit own ca_adv_product_category content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_adv_product_option content.
  $permissions['edit own ca_adv_product_option content'] = array(
    'name' => 'edit own ca_adv_product_option content',
    'roles' => array(
      'administrator => 'administrator',
      'advance product admin => 'advance product admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
