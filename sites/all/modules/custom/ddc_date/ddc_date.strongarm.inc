<?php
/**
 * @file
 * ddc_date.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddc_date_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_eu_date';
  $strongarm->value = 'd/m/Y - H:i';
  $export['date_format_eu_date'] = $strongarm;

  return $export;
}
