<?php
/**
 * @file
 * off_projects_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function off_projects_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function off_projects_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function off_projects_feature_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
