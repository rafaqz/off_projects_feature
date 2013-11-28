<?php
/**
 * @file
 * off_projects_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function off_projects_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'A link to the node/add/project page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'add_project';
  $fe_block_boxes->body = '<p><a href="/node/add/project">Add Project</a></p>
';

  $export['add_project'] = $fe_block_boxes;

  return $export;
}
