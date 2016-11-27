<?php
/**
 * @file
 * ddc_date.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddc_date_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function ddc_date_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function ddc_date_date_format_types() {
  $format_types = array();
  // Exported date format type: eu_date
  $format_types['eu_date'] = 'EU Date';
  return $format_types;
}
