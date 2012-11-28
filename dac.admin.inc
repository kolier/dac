<?php

/**
 * @file
 * Admin configuration form of dac.
 */

/**
 * Used to enable/disable entity. @todo Not functioned.
 * 
 * @param array $form
 * @param array $form_state
 * @return array $form
 */
function dac_admin_config($form, &$form_state) {
  $dac_enable = variable_get('dac_enable', array('data' => array(), 'chart' => array()));
  
  $form['data'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Data'),
    '#options' => array('sheet' => t('Sheet')),
    '#default_value' => $dac_enable['data'],
  );
  
  $form['chart'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Chart'),
    '#options' => array('gct' => t('Googlt Chart Tools')),
    '#default_value' => $dac_enable['chart'],
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  
  return $form;
}

/**
 * Submit function for dac_admin_config().
 */
function dac_admin_config_submit($form, &$form_state) {
  $dac_enable = array(
    'data' => $form_state['values']['data'],
    'chart' => $form_state['values']['chart'],
  );
  
  variable_set('dac_enable', $dac_enable);
}
