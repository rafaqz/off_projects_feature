<?php
/**
 * @file
 * off_projects_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function off_projects_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:closed_group:update field_project_type field'
  $permissions['node:closed_group:update field_project_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:view field_project_type field'
  $permissions['node:closed_group:view field_project_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update field_project_type field'
  $permissions['node:group:update field_project_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:view field_project_type field'
  $permissions['node:group:view field_project_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:add user'
  $permissions['node:project:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:administer group'
  $permissions['node:project:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create basic_page content'
  $permissions['node:project:create basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create closed_group content'
  $permissions['node:project:create closed_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create conversation content'
  $permissions['node:project:create conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:create group content'
  $permissions['node:project:create group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create knowledge_object content'
  $permissions['node:project:create knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:create organisation content'
  $permissions['node:project:create organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any basic_page content'
  $permissions['node:project:delete any basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any closed_group content'
  $permissions['node:project:delete any closed_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any conversation content'
  $permissions['node:project:delete any conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any group content'
  $permissions['node:project:delete any group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any knowledge_object content'
  $permissions['node:project:delete any knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete any organisation content'
  $permissions['node:project:delete any organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete own basic_page content'
  $permissions['node:project:delete own basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete own closed_group content'
  $permissions['node:project:delete own closed_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete own conversation content'
  $permissions['node:project:delete own conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:delete own group content'
  $permissions['node:project:delete own group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:delete own knowledge_object content'
  $permissions['node:project:delete own knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:delete own organisation content'
  $permissions['node:project:delete own organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:manage members'
  $permissions['node:project:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:manage permissions'
  $permissions['node:project:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:manage roles'
  $permissions['node:project:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:subscribe'
  $permissions['node:project:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:subscribe without approval'
  $permissions['node:project:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:unsubscribe'
  $permissions['node:project:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update any basic_page content'
  $permissions['node:project:update any basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update any closed_group content'
  $permissions['node:project:update any closed_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update any conversation content'
  $permissions['node:project:update any conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update any group content'
  $permissions['node:project:update any group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update any knowledge_object content'
  $permissions['node:project:update any knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update any organisation content'
  $permissions['node:project:update any organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update body field'
  $permissions['node:project:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_category field'
  $permissions['node:project:update field_category field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_first_name field'
  $permissions['node:project:update field_first_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_ko_file field'
  $permissions['node:project:update field_ko_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_ko_ref field'
  $permissions['node:project:update field_ko_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_last_name field'
  $permissions['node:project:update field_last_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_organisation_address field'
  $permissions['node:project:update field_organisation_address field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_organisation_image field'
  $permissions['node:project:update field_organisation_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_organisation_type field'
  $permissions['node:project:update field_organisation_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_organisation_website field'
  $permissions['node:project:update field_organisation_website field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_project_type field'
  $permissions['node:project:update field_project_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update group'
  $permissions['node:project:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_access field'
  $permissions['node:project:update group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_group field'
  $permissions['node:project:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update og_user_node field'
  $permissions['node:project:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update own basic_page content'
  $permissions['node:project:update own basic_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update own closed_group content'
  $permissions['node:project:update own closed_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update own conversation content'
  $permissions['node:project:update own conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update own group content'
  $permissions['node:project:update own group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update own knowledge_object content'
  $permissions['node:project:update own knowledge_object content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update own organisation content'
  $permissions['node:project:update own organisation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:view body field'
  $permissions['node:project:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_category field'
  $permissions['node:project:view field_category field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:view field_first_name field'
  $permissions['node:project:view field_first_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_ko_file field'
  $permissions['node:project:view field_ko_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_ko_ref field'
  $permissions['node:project:view field_ko_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_last_name field'
  $permissions['node:project:view field_last_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_organisation_address field'
  $permissions['node:project:view field_organisation_address field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_organisation_image field'
  $permissions['node:project:view field_organisation_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_organisation_type field'
  $permissions['node:project:view field_organisation_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_organisation_website field'
  $permissions['node:project:view field_organisation_website field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_project_type field'
  $permissions['node:project:view field_project_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view group_access field'
  $permissions['node:project:view group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view group_group field'
  $permissions['node:project:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view og_user_node field'
  $permissions['node:project:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
