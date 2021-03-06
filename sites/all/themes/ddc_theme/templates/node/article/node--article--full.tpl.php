<?php
/**
 * @file
 * Template file for article full view.
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <article>
    <div class="media">
      <div class="pull-right">
        <?php print render($content['field_image']); ?>
      </div>
      <div class="media-body">
        <h1><?php print $title; ?></h1>
        <h4><?php print $sub_title; ?></h4>
        <?php print render($content['field_publication_date']); ?>
        <?php print render($content['body']); ?>
      </div>
      <?php print render($content['field_author']); ?>
    </div>
  </article>
</div>
