<?php
/**
 * @file
 * ddc_permission.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ddc_permission_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view hidden articles'.
  $permissions['view hidden articles'] = array(
    'name' => 'view hidden articles',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'ddc_hidden',
  );

  return $permissions;
}
