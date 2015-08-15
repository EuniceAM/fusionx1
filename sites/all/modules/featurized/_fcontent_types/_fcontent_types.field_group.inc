<?php
/**
 * @file
 * _fcontent_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function _fcontent_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|profile|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Voters information',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_political_affiliation',
      2 => 'field_precinct',
      3 => 'field_services_rendered',
      4 => 'field_work_experience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_information|node|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|node|profile|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '0',
    'children' => array(
      0 => 'field_age',
      1 => 'field_barangay',
      2 => 'field_birthdate',
      3 => 'field_deceased',
      4 => 'field_imageko',
      5 => 'field_gender',
      6 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personal|node|profile|form'] = $field_group;

  return $export;
}
