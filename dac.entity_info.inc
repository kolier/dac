<?php

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

/**
 * Implements hook_field_default_fields().
 */
function dac_field_default_fields() {
  $fields = array();

  // Exported field: 'chart-gct-field_chart_data'.
  $fields['chart-gct-field_chart_data'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_chart_data',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'field_data_sheet:value',
            'property' => 'id',
            'type' => 'none',
          ),
          'target_bundles' => array(),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'data',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
    'bundle' => 'gct',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Default data of this chart.',
    'display' => array(
    'default' => array(
    'label' => 'above',
    'module' => 'entityreference',
    'settings' => array(
    'link' => FALSE,
    ),
    'type' => 'entityreference_label',
    'weight' => 0,
    ),
    'teaser' => array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
    ),
    ),
    'entity_type' => 'chart',
    'field_name' => 'field_chart_data',
    'label' => 'Chart Data',
    'required' => 0,
    'settings' => array(
    'user_register_form' => FALSE,
    ),
    'widget' => array(
    'active' => 1,
    'module' => 'entityreference',
    'settings' => array(
    'match_operator' => 'CONTAINS',
    'path' => '',
    'size' => '60',
    ),
    'type' => 'entityreference_autocomplete',
    'weight' => '2',
    ),
    ),
  );

  // Exported field: 'chart-gct-field_chart_options'.
  $fields['chart-gct-field_chart_options'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_chart_options',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'dac',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'dac_chart_options',
    ),
    'field_instance' => array(
      'bundle' => 'gct',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Options of Google Chart Tools.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'dac',
          'settings' => array(),
          'type' => 'dac_none',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'chart',
      'field_name' => 'field_chart_options',
      'label' => 'Chart Options',
      'required' => 0,
      'settings' => array(
      'user_register_form' => FALSE,
      ),
      'widget' => array(
      'active' => 0,
      'module' => 'dac',
      'settings' => array(),
      'type' => 'dac_chart_options_textarea',
      'weight' => '4',
      ),
    ),
  );

  // Exported field: 'chart-gct-field_chart_type'.
  $fields['chart-gct-field_chart_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_chart_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'dac',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'dac_chart_type',
    ),
    'field_instance' => array(
      'bundle' => 'gct',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select the chartType of Google Chart Tools.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'dac',
          'settings' => array(),
          'type' => 'dac_none',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'chart',
      'field_name' => 'field_chart_type',
      'label' => 'Chart Type',
      'required' => 0,
      'settings' => array(
      'user_register_form' => FALSE,
      ),
      'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => '3',
      ),
    ),
  );

  // Exported field: 'data-sheet-field_data_sheet'.
  $fields['data-sheet-field_data_sheet'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_sheet',
      'foreign keys' => array(),
      'indexes' => array(
        'name' => array(
          0 => 'name',
        ),
      ),
      'locked' => '0',
      'module' => 'sheetnode',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'sheetfield',
    ),
    'field_instance' => array(
      'bundle' => 'sheet',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Spreadsheet for data input.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'sheetnode',
          'settings' => array(),
          'type' => 'sheetfield_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'data',
      'field_name' => 'field_data_sheet',
      'label' => 'Sheet',
      'required' => 0,
      'settings' => array(
      'user_register_form' => FALSE,
      ),
      'widget' => array(
      'active' => 0,
      'module' => 'sheetnode',
      'settings' => array(),
      'type' => 'sheetfield_spreadsheet',
      'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Chart Data');
  t('Chart Options');
  t('Chart Type');
  t('Default data of this chart.');
  t('Options of Google Chart Tools.');
  t('Select the chartType of Google Chart Tools.');
  t('Sheet');
  t('Spreadsheet for data input.');

  return $fields;
}
