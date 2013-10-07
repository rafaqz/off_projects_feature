<?php
/**
 * @file
 * off_projects_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function off_projects_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Open Source',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '21fde4db-1a82-49b3-829d-053dcfb092c0',
    'vocabulary_machine_name' => 'project_type',
  );
  $terms[] = array(
    'name' => 'Open Food Foundation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4ccd57b6-8cfb-498e-96d9-145c5cb7d343',
    'vocabulary_machine_name' => 'project_type',
  );
  $terms[] = array(
    'name' => 'Closed Source',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '87651d27-5164-4405-96bf-7df2b3c4335e',
    'vocabulary_machine_name' => 'project_type',
  );
  return $terms;
}
