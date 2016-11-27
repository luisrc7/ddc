<?php
/**
 * @file
 * ddc_formatter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddc_formatter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
}
