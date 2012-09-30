<?php
/**
 * @file
 * dac.features.field.inc
 */

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
  t('Default data of this chart.');
  t('Sheet');
  t('Spreadsheet for data input.');

  return $fields;
}
