<?php
/**
 * @file
 * _fcontent_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function _fcontent_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function _fcontent_types_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
