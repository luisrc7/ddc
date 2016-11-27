<?php
/**
 * @file
 * Node template functions.
 */

/**
 * Implements hook_preprocess_node().
 */
function ddc_theme_preprocess_node(&$variables) {
  $node_type = $variables['node']->type;

  // We want to theme nodes by type and display mode.
  $variables['theme_hook_suggestions'][] = 'node__' . $node_type . '__' . $variables['view_mode'];

  $function_names = array(
    'ddc_theme_preprocess_node__' . $node_type . '__' . $variables['view_mode'],
    'ddc_theme_preprocess_node__' . $node_type,
  );

  foreach ($function_names as $function_name) {
    if (function_exists($function_name)) {
      $function_name($variables);
    }
  }
}

function ddc_theme_preprocess_node__article__teaser(&$variables) {
  // Create linked title.
  $variables['linked_title'] = l($variables['title'], 'node/' . $variables['nid']);

  // Common Article implementations.
  _article_common($variables);
}

function ddc_theme_preprocess_node__article__full(&$variables) {
  // Common Article implementations.
  _article_common($variables);
}

function _article_common(&$variables) {
  // Create sub-title.
  $field_subtitle = field_get_items('node', $variables['node'], 'field_subtitle');
  $variables['sub_title'] = $field_subtitle[0]['safe_value'];

  // Add Featured class.
  $field_featured = field_get_items('node', $variables['node'], 'field_featured');
  if (isset($field_featured) && $field_featured[0]['value'] == 1) {
    $variables['classes_array'][] = 'featured';
  }
}