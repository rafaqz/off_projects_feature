<?php
/**
 * @file
 * projects_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function projects_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in project_type'.
  $permissions['add terms in project_type'] = array(
    'name' => 'add terms in project_type',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in project_type'.
  $permissions['delete terms in project_type'] = array(
    'name' => 'delete terms in project_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in project_type'.
  $permissions['edit terms in project_type'] = array(
    'name' => 'edit terms in project_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
