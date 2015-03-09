<?php

/**
 * @file
 * Plugin to provide access control based upon ca_adv_product admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Advanced Product: list type'),
  'description' => t('Control access by advanced product list type.'),
  'callback' => 'ca_advanced_product_list_template_access_check',
  'settings form' => 'ca_advanced_product_list_template_access_settings',
  'settings form submit' => 'ca_advanced_product_list_template_access_settings_submit',
  'summary' => 'ca_advanced_product_list_template_access_summary',
);

/**
 * Settings form for the 'by advanced product list type' access plugin.
 */
function ca_advanced_product_list_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_advanced_product_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Advanced Product\'s list template'),
    '#options' => array(
      'ca_advanced_product_list_template_one' => t('Template one'),
      'ca_advanced_product_list_template_one_flex' => t('Template one Flex'),
      'ca_advanced_product_list_template_two' => t('Template two'),
      'ca_advanced_product_list_template_two_flex' => t('Template two Flex'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_advanced_product_list_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_advanced_product_list_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_advanced_product_list_template_access_check($conf, $context) {
  return $conf['ca_advanced_product_list_template'] == variable_get('ca_advanced_product_list_template', 'ca_advanced_product_list_template_one');
}

/**
 * Provide a summary description based upon the checked adv_product list type.
 */
function ca_advanced_product_list_template_access_summary($conf, $context) {
  if ($conf['ca_advanced_product_list_template'] == 'ca_advanced_product_list_template_one') {
    $template = t('Template one');
  }
  elseif ($conf['ca_advanced_product_list_template'] == 'ca_advanced_product_list_template_one_flex') {
    $template = t('Template one Flex');
  }
  elseif ($conf['ca_advanced_product_list_template'] == 'ca_advanced_product_list_template_two') {
    $template = t('Template two');
  }
  else {
    $template = t('Template two Flex');
  }

  return t('Display template is set to: ' . $template);
}
