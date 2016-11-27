<?php
/**
 * @file
 * ddc_formatter.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function ddc_formatter_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'author';
  $formatter->label = 'Author';
  $formatter->description = 'Custom formatter for Author Taxonomy Field';
  $formatter->mode = 'php';
  $formatter->field_types = 'taxonomy_term_reference';
  $formatter->code = '$tid = $variables[\'#items\'][0][\'tid\'];
$term = taxonomy_term_load($tid);
$field_image = field_get_items(\'taxonomy_term\', $term, \'field_image\');
$result = \'<div class="media author">\';
if ($field_image) {
  $author_image = field_view_value(\'taxonomy_term\', $term, \'field_image\', $field_image[0], array(
    \'type\' => \'image\',
    \'settings\' => array(
      \'image_style\' => \'author\', //place your image style here
    ),
  ));
  $result .= \'<div class="author-image pull-left" >\' . render($author_image) . \'</div>\';
}
$result .= \'<div class="author-content">\';
$result .= \'<div class="author-name" >\' . render($term->name) . \'</div>\';
if (isset($term->description) && !empty($term->description)) {
  $result .= \'<div class="author-desc" >\' . render($term->description) . \'</div>\';
}
$result .= \'</div></div>\';

return $result;
';
  $formatter->fapi = '';
  $export['author'] = $formatter;

  return $export;
}
