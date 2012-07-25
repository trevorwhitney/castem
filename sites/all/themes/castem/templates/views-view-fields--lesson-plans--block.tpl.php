<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php 
  $download_image = array(
    'path' => "/sites/all/themes/castem/images/page_white_put.png",
    'alt' => 'download lesson',
    'title' => 'download this lesson plan',
    'attributes' => array('class' => 'download-lesson-img'),
  );
?>
<div class="lesson">
  <h4 class="lesson-title"><?php 
    print $fields['title']->content; ?></h4>
  <h4 class="created-at"><?php
    print $fields['created']->content; ?></h4>
  <p class="lesson-description"><?php 
    print $fields['field_short_summary']->content; ?></p>
  <span class="download-lesson"><a href="<?php 
    print $fields['field_lesson_plan_file']->content;?>"><?php
      print theme_image($download_image); ?>&nbsp;Download</a></span>
</div>