<?php
/**
 * @file
 * off_projects_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function off_projects_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'projects';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Projects';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'project_list',
      'display' => 'default',
      'args' => 'Open Food Foundation',
      'title' => 'Open Food Foundation',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'project_list',
      'display' => 'default',
      'args' => 'Open Source',
      'title' => 'Open Source',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'project_list',
      'display' => 'default',
      'args' => 'Closed Source',
      'title' => 'Closed Source',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Closed Source');
  t('Open Food Foundation');
  t('Open Source');
  t('Projects');

  $export['projects'] = $quicktabs;

  return $export;
}
