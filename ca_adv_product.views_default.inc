<?php
/**
 * @file
 * ca_adv_product.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_adv_product_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_adv_product_sorting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Advanced Products Sorting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product' => 'ca_adv_product',
  );

  /* Display: CA Advanced Products: Parent Category Sort */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Parent Category Sort', 'ca_adv_product_parent_category_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  /* Filter criterion: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Parent Category Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Sub-Category Sort */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Sub-Category Sort', 'ca_adv_product_sub_category_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Sub-Category Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Product Sort */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Product Sort', 'ca_adv_product_product_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_ad_prod_parent_category) */
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['id'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['table'] = 'field_data_field_ca_ad_prod_parent_category';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['field'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product' => 'ca_adv_product',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Product Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Products Option Sort */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Products Option Sort', 'ca_adv_product_option_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_ad_prod_parent_category) */
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['id'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['table'] = 'field_data_field_ca_ad_prod_parent_category';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['field'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_option' => 'ca_adv_product_option',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Products Option Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_adv_product_sorting'] = $view;

  $view = new view();
  $view->name = 'ca_advanced_products_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Advanced Products Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product' => 'ca_adv_product',
  );

  /* Display: CA Advanced Products: Category Admin */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Category Admin', 'ca_adv_product_category_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Category Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Sub Category Admin */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Sub Category Admin', 'ca_adv_product_sub_cat_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Sub Category Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Product Admin */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Product Admin', 'ca_adv_product_product_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_ad_prod_parent_category) */
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['id'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['table'] = 'field_data_field_ca_ad_prod_parent_category';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['field'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Product Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Products Options Admin */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Products Options Admin', 'ca_adv_product_options_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_ad_prod_parent_category) */
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['id'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['table'] = 'field_data_field_ca_ad_prod_parent_category';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['field'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_option' => 'ca_adv_product_option',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Products Options Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_advanced_products_admin'] = $view;

  $view = new view();
  $view->name = 'ca_advanced_products_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Advanced Products List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product' => 'ca_adv_product',
  );

  /* Display: CA Advanced Products: Category List Grid Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Category List Grid Template One', 'ca_adv_product_category_list_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['id'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['table'] = 'field_data_field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['field'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  /* Filter criterion: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Category List Grid Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Sub Category List Grid Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Sub Category List Grid Template One', 'ca_adv_product_sub_cat_list_one');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['id'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['table'] = 'field_data_field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['field'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Sub Category List Grid Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Product List View Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Product List View Template One', 'ca_adv_product_product_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_adv_product_image']['id'] = 'field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['table'] = 'field_data_field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['field'] = 'field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_adv_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_class'] = 'ca-addtoany-feature';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_ad_prod_parent_category) */
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['id'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['table'] = 'field_data_field_ca_ad_prod_parent_category';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['field'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Product List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Category Options List View Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Category Options List View Template One', 'ca_adv_category_options_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['id'] = 'field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['table'] = 'field_data_field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['field'] = 'field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_ad_prod_parent_category) */
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['id'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['table'] = 'field_data_field_ca_ad_prod_parent_category';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['field'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_ad_prod_parent_category_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_option' => 'ca_adv_product_option',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Category Options List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Prod Cat Options List View Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Prod Cat Options List View Template One', 'ca_adv_prod_cat_options_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ca_ad_prod_parent_category_target_id']['id'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['relationships']['field_ca_ad_prod_parent_category_target_id']['table'] = 'field_data_field_ca_ad_prod_parent_category';
  $handler->display->display_options['relationships']['field_ca_ad_prod_parent_category_target_id']['field'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['relationships']['field_ca_ad_prod_parent_category_target_id']['label'] = 'Category';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ca_ad_prod_parent_category_node']['id'] = 'reverse_field_ca_ad_prod_parent_category_node';
  $handler->display->display_options['relationships']['reverse_field_ca_ad_prod_parent_category_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ca_ad_prod_parent_category_node']['field'] = 'reverse_field_ca_ad_prod_parent_category_node';
  $handler->display->display_options['relationships']['reverse_field_ca_ad_prod_parent_category_node']['relationship'] = 'field_ca_ad_prod_parent_category_target_id';
  $handler->display->display_options['relationships']['reverse_field_ca_ad_prod_parent_category_node']['label'] = 'product';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['id'] = 'field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['table'] = 'field_data_field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['field'] = 'field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ca_ad_prod_parent_category_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_option' => 'ca_adv_product_option',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Prod Cat Options List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Category List Flex Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Category List Flex Template One', 'ca_adv_product_category_flex_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['id'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['table'] = 'field_data_field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['field'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  /* Filter criterion: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['filters']['field_ca_adv_category_parent_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Category List Flex Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Sub Category List Flex Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Sub Category List Flex Template One', 'ca_adv_product_sub_cat_flex_one');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category Image */
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['id'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['table'] = 'field_data_field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['field'] = 'field_ca_ad_prod_category_image';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_ad_prod_category_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Category (field_ca_adv_category_parent) */
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['id'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['table'] = 'field_data_field_ca_adv_category_parent';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['field'] = 'field_ca_adv_category_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_adv_category_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_category' => 'ca_adv_product_category',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Sub Category List Flex Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_advanced_products_list'] = $view;

  $view = new view();
  $view->name = 'ca_advanced_products_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Advanced Products Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product' => 'ca_adv_product',
  );

  /* Display: CA Advanced Products: Node View Template One A */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Node View Template One A', 'ca_adv_product_node_1a');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_adv_product_image']['id'] = 'field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['table'] = 'field_data_field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['field'] = 'field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_adv_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Node View Template One A';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Advanced Products: Node View Template One B */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Node View Template One B', 'ca_adv_product_node_1b');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_adv_product_image']['id'] = 'field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['table'] = 'field_data_field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['field'] = 'field_ca_adv_product_image';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['settings'] = array(
    'colorbox_node_style' => 'default_thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_adv_product_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_adv_product_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Node View Template One B';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Advanced Products: Node Video Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Node Video Template One', 'ca_adv_product_node_video_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_ca_adv_product_video']['id'] = 'field_ca_adv_product_video';
  $handler->display->display_options['fields']['field_ca_adv_product_video']['table'] = 'field_data_field_ca_adv_product_video';
  $handler->display->display_options['fields']['field_ca_adv_product_video']['field'] = 'field_ca_adv_product_video';
  $handler->display->display_options['fields']['field_ca_adv_product_video']['label'] = '';
  $handler->display->display_options['fields']['field_ca_adv_product_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_adv_product_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_ca_adv_product_video']['settings'] = array(
    'file_view_mode' => 'worxco_video_displays_large',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Node Video Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Advanced Products: Products Option Node View Template One */
  $handler = $view->new_display('panel_pane', 'CA Advanced Products: Products Option Node View Template One', 'ca_adv_product_options_node_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['id'] = 'field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['table'] = 'field_data_field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['field'] = 'field_ca_adv_product_o_image';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_adv_product_o_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_adv_product_option' => 'ca_adv_product_option',
  );
  $handler->display->display_options['pane_title'] = 'CA Advanced Products: Products Options Node View Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA Node';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_advanced_products_node'] = $view;

  return $export;
}
