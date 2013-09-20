<?php
/**
 * @file
 * official_documentation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function official_documentation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'documentation_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'documentation_all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Documentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'title' => 'title',
    'field_doc_date' => 'field_doc_date',
    'field_doc_file' => 'field_doc_file',
    'field_doc_product' => 'field_doc_product',
    'field_doc_version' => 'field_doc_version',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_product' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: File (field_doc_file:fid) */
  $handler->display->display_options['relationships']['field_doc_file_fid']['id'] = 'field_doc_file_fid';
  $handler->display->display_options['relationships']['field_doc_file_fid']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['relationships']['field_doc_file_fid']['field'] = 'field_doc_file_fid';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'documentation_team' => 'documentation_team',
  );
  /* Filter criterion: Content: Product (field_doc_product) */
  $handler->display->display_options['filters']['field_doc_product_tid']['id'] = 'field_doc_product_tid';
  $handler->display->display_options['filters']['field_doc_product_tid']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['filters']['field_doc_product_tid']['field'] = 'field_doc_product_tid';
  $handler->display->display_options['filters']['field_doc_product_tid']['value'] = '';
  $handler->display->display_options['filters']['field_doc_product_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['operator_id'] = 'field_doc_product_tid_op';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['label'] = 'Product (field_doc_product)';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['operator'] = 'field_doc_product_tid_op';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['identifier'] = 'field_doc_product_tid';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
  );
  $handler->display->display_options['filters']['field_doc_product_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_doc_product_tid']['vocabulary'] = 'product';
  /* Filter criterion: Content: Version (field_doc_version) */
  $handler->display->display_options['filters']['field_doc_version_tid']['id'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['filters']['field_doc_version_tid']['field'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['value'] = '';
  $handler->display->display_options['filters']['field_doc_version_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['operator_id'] = 'field_doc_version_tid_op';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['label'] = 'Version (field_doc_version)';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['operator'] = 'field_doc_version_tid_op';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['identifier'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
  );
  $handler->display->display_options['filters']['field_doc_version_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_doc_version_tid']['vocabulary'] = 'vocabulary_10';

  /* Display: All Table */
  $handler = $view->new_display('page', 'All Table', 'page');
  $handler->display->display_options['path'] = 'documentation-all';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_doc_product',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['label'] = '';
  $handler->display->display_options['fields']['field_doc_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['label'] = '';
  $handler->display->display_options['fields']['field_doc_product']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_product']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doc_product']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_doc_file_fid';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[uri]" target="_blank"><img alt="" src="/modules/file/icons/application-pdf.png" /></a>';
  $handler->display->display_options['path'] = 'documentation-all/list';

  /* Display: Table by category */
  $handler = $view->new_display('page', 'Table by category', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_doc_product',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_doc_date' => 'field_doc_date',
    'field_doc_file' => 'field_doc_file',
    'field_doc_product' => 'field_doc_product',
    'field_doc_version' => 'field_doc_version',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_product' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'File';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['label'] = '';
  $handler->display->display_options['fields']['field_doc_product']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  $handler->display->display_options['path'] = 'documentation-all/table';

  /* Display: All Table */
  $handler = $view->new_display('page', 'All Table', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_doc_file_fid';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'File';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[uri]" target="_blank"><img alt="" src="/modules/file/icons/application-pdf.png" /></a>';
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Updated Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  $handler->display->display_options['path'] = 'documentation-all/table/files';
  $handler->display->display_options['menu']['title'] = 'Test';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Quick Search */
  $handler = $view->new_display('page', 'Quick Search', 'page_4');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '2';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Please use the filters below and click "Apply" to find the documents you want';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_doc_file_fid';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'File';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[uri]" target="_blank"><img alt="" src="/modules/file/icons/application-pdf.png" /></a>';
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Updated Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  $handler->display->display_options['path'] = 'documentation-all/quick-search';
  $handler->display->display_options['menu']['title'] = 'Test';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['documentation_all'] = $view;

  return $export;
}
