<?php
/**
 * @file
 * official_documentation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function official_documentation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function official_documentation_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function official_documentation_node_info() {
  $items = array(
    'documentation_team' => array(
      'name' => t('Documentation old'),
      'base' => 'node_content',
      'description' => t('Official Documentation from the eCW documentation team'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
