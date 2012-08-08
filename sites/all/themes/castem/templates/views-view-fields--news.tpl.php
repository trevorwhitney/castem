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
<div class="news-item">
  <div class="header">
    <h2><?php print $fields['title']->content; ?></h2>
  </div>
  <div class="content">
    <div class="inner-content">
      <?php print $fields['field_image']->content; ?>
      <?php print $fields['body']->content; ?>
      <div class="clear"></div>
    </div>
  </div>
  <?php 
    $user = user_load($fields['uid']->raw);
    $first_name = ucwords($user->field_first_name['und'][0]['value']);
    $last_name = ucwords($user->field_last_name['und'][0]['value']);
    $path = "/people/$user->name";
  ?>
  <span class="created-by">Submitted by <?php 
    print "<a href=\"$path\">$first_name $last_name</a>"; ?></span>
  <span class="created-on"><?php print $fields['created']->content; ?>
</div>
<div class="clear"></div>