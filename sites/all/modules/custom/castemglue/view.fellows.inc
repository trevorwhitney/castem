<?php
$view = new view;
$view->name = 'fellows';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Fellows';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['row_class'] = 'fellow-listing';
$handler->display->display_options['style_options']['columns'] = array(
  'picture' => 'picture',
  'field_first_name' => 'field_first_name',
  'field_last_name' => 'field_first_name',
  'field_user_bio' => 'field_first_name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'picture' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_first_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '  ',
    'empty_column' => 0,
  ),
  'field_last_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_user_bio' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['override'] = 1;
$handler->display->display_options['style_options']['sticky'] = 0;
$handler->display->display_options['style_options']['empty_table'] = 0;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['picture']['alter']['external'] = 0;
$handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
$handler->display->display_options['fields']['picture']['alter']['html'] = 0;
$handler->display->display_options['fields']['picture']['element_type'] = 'div';
$handler->display->display_options['fields']['picture']['element_class'] = 'fellow-list-pic';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
$handler->display->display_options['fields']['picture']['empty'] = 'No picture on file';
$handler->display->display_options['fields']['picture']['hide_empty'] = 0;
$handler->display->display_options['fields']['picture']['empty_zero'] = 0;
$handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
/* Field: User: First Name */
$handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
$handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
$handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
$handler->display->display_options['fields']['field_first_name']['label'] = '';
$handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_first_name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_first_name']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_first_name']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_first_name']['element_type'] = 'span';
$handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_first_name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_first_name']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_first_name']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_first_name']['field_api_classes'] = 0;
/* Field: User: Last Name */
$handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
$handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
$handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
$handler->display->display_options['fields']['field_last_name']['label'] = '';
$handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_last_name']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_last_name']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_last_name']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_last_name']['element_type'] = 'span';
$handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_last_name']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_last_name']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_last_name']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_last_name']['field_api_classes'] = 0;
/* Field: User: Biography */
$handler->display->display_options['fields']['field_user_bio']['id'] = 'field_user_bio';
$handler->display->display_options['fields']['field_user_bio']['table'] = 'field_data_field_user_bio';
$handler->display->display_options['fields']['field_user_bio']['field'] = 'field_user_bio';
$handler->display->display_options['fields']['field_user_bio']['label'] = '';
$handler->display->display_options['fields']['field_user_bio']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_user_bio']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_user_bio']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_user_bio']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_user_bio']['element_type'] = 'div';
$handler->display->display_options['fields']['field_user_bio']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_user_bio']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_user_bio']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_user_bio']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_user_bio']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_user_bio']['field_api_classes'] = 0;
/* Sort criterion: User: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'users';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['value'] = array(
  4 => '4',
);
$handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

/* Display: Fellows */
$handler = $view->new_display('page', 'Fellows', 'fellows');
$handler->display->display_options['display_description'] = 'A list of program fellows.';
$handler->display->display_options['path'] = 'people/fellows';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Fellows';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-people';
$handler->display->display_options['menu']['context'] = 0;
