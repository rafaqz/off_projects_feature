<?php
/**
 * @file
 * off_projects_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function off_projects_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-projects'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'projects',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'projects',
    'roles' => array(),
    'themes' => array(
      'custom_theme' => array(
        'region' => 'content_lower',
        'status' => 1,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
