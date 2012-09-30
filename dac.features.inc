<?php
/**
 * @file
 * dac.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function dac_eck_bundle_info() {
  $items = array(
  'chart_gct' => array(
  'machine_name' => 'chart_gct',
  'entity_type' => 'chart',
  'name' => 'gct',
  'label' => 'Google Chart Tools',
),
  'data_sheet' => array(
  'machine_name' => 'data_sheet',
  'entity_type' => 'data',
  'name' => 'sheet',
  'label' => 'Sheet',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function dac_eck_entity_type_info() {
$items = array(
       'chart' => array(
  'name' => 'chart',
  'label' => 'Chart',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'changed' => array(
      'label' => 'Changed',
      'type' => 'integer',
      'behavior' => 'changed',
    ),
    'published' => array(
      'label' => 'Published',
      'type' => 'integer',
      'behavior' => 'published',
    ),
    'machine_name' => array(
      'label' => 'Machine Name',
      'type' => 'text',
      'behavior' => 'machine_name',
    ),
  ),
),
       'data' => array(
  'name' => 'data',
  'label' => 'Data',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'changed' => array(
      'label' => 'Changed',
      'type' => 'integer',
      'behavior' => 'changed',
    ),
    'published' => array(
      'label' => 'Published',
      'type' => 'integer',
      'behavior' => 'published',
    ),
    'machine_name' => array(
      'label' => 'Machine Name',
      'type' => 'text',
      'behavior' => 'machine_name',
    ),
  ),
),
  );
  return $items;
}
