<?php
/**
 * @file
 * ddc_image.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ddc_image_image_default_styles() {
  $styles = array();

  // Exported image style: author.
  $styles['author'] = array(
    'label' => 'Author (70x70)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full.
  $styles['full'] = array(
    'label' => 'Full',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser.
  $styles['teaser'] = array(
    'label' => 'Teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
