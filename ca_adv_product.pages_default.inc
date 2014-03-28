<?php
/**
 * @file
 * ca_adv_product.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_adv_product_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_product_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Product: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-product-node ca-adv-product-node-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_adv_product' => 'ca_adv_product',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first_left',
          1 => 'first_right',
        ),
        'parent' => 'main',
      ),
      'first_right' => array(
        'type' => 'region',
        'title' => 'First Right',
        'width' => '33.32406007612507',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'first_left' => array(
        'type' => 'region',
        'title' => 'First Left',
        'width' => '66.67593992387494',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'video_section_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'video_section_' => array(
        'type' => 'region',
        'title' => 'Video Section',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first_right' => NULL,
      'first_left' => NULL,
      'video_section' => NULL,
      'video_section_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3ae986eb-cc41-4c87-b596-a3e41769fad0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-177de870-6a1a-439d-9e95-1d383fc032fb';
    $pane->panel = 'first_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_node-ca_adv_product_node_1a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '177de870-6a1a-439d-9e95-1d383fc032fb';
    $display->content['new-177de870-6a1a-439d-9e95-1d383fc032fb'] = $pane;
    $display->panels['first_left'][0] = 'new-177de870-6a1a-439d-9e95-1d383fc032fb';
    $pane = new stdClass();
    $pane->pid = 'new-df490a22-11ea-4c57-98b2-e807cf46e8c8';
    $pane->panel = 'first_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_node-ca_adv_product_node_1b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df490a22-11ea-4c57-98b2-e807cf46e8c8';
    $display->content['new-df490a22-11ea-4c57-98b2-e807cf46e8c8'] = $pane;
    $display->panels['first_left'][1] = 'new-df490a22-11ea-4c57-98b2-e807cf46e8c8';
    $pane = new stdClass();
    $pane->pid = 'new-8eec0dd9-739a-470d-b311-0c6cdcd58dbe';
    $pane->panel = 'first_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8eec0dd9-739a-470d-b311-0c6cdcd58dbe';
    $display->content['new-8eec0dd9-739a-470d-b311-0c6cdcd58dbe'] = $pane;
    $display->panels['first_left'][2] = 'new-8eec0dd9-739a-470d-b311-0c6cdcd58dbe';
    $pane = new stdClass();
    $pane->pid = 'new-5f9194aa-28c6-4b1b-a1cf-0ef4b7749f8a';
    $pane->panel = 'first_left';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5f9194aa-28c6-4b1b-a1cf-0ef4b7749f8a';
    $display->content['new-5f9194aa-28c6-4b1b-a1cf-0ef4b7749f8a'] = $pane;
    $display->panels['first_left'][3] = 'new-5f9194aa-28c6-4b1b-a1cf-0ef4b7749f8a';
    $pane = new stdClass();
    $pane->pid = 'new-2efbc227-2e8e-4732-9449-dd40c8ed5be4';
    $pane->panel = 'first_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_list-ca_adv_prod_cat_options_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2efbc227-2e8e-4732-9449-dd40c8ed5be4';
    $display->content['new-2efbc227-2e8e-4732-9449-dd40c8ed5be4'] = $pane;
    $display->panels['first_right'][0] = 'new-2efbc227-2e8e-4732-9449-dd40c8ed5be4';
    $pane = new stdClass();
    $pane->pid = 'new-82040da2-566d-4128-a9fb-798a45252a80';
    $pane->panel = 'video_section_';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_node-ca_adv_product_node_video_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '82040da2-566d-4128-a9fb-798a45252a80';
    $display->content['new-82040da2-566d-4128-a9fb-798a45252a80'] = $pane;
    $display->panels['video_section_'][0] = 'new-82040da2-566d-4128-a9fb-798a45252a80';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_product_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_adv_product_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Adv Product: Category Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-adv-product-category-list ca-adv-product-category-list-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_adv_product_category' => 'ca_adv_product_category',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'First',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'second_left',
          1 => 'second_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'second_left' => array(
        'type' => 'region',
        'title' => 'Second Left',
        'width' => '66.67619592147895',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'second_right' => array(
        'type' => 'region',
        'title' => 'Second Right',
        'width' => '33.32380407852106',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'second_left' => NULL,
      'second_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '685eee84-7e8e-4643-9741-0fd0241ec983';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a7d70c34-59c0-47b5-b1ba-c0366515bee8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7d70c34-59c0-47b5-b1ba-c0366515bee8';
    $display->content['new-a7d70c34-59c0-47b5-b1ba-c0366515bee8'] = $pane;
    $display->panels['center'][0] = 'new-a7d70c34-59c0-47b5-b1ba-c0366515bee8';
    $pane = new stdClass();
    $pane->pid = 'new-78d5aeb8-b4ef-4f4a-8d27-36bede753abe';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_list-ca_adv_product_sub_cat_list_one';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78d5aeb8-b4ef-4f4a-8d27-36bede753abe';
    $display->content['new-78d5aeb8-b4ef-4f4a-8d27-36bede753abe'] = $pane;
    $display->panels['center'][1] = 'new-78d5aeb8-b4ef-4f4a-8d27-36bede753abe';
    $pane = new stdClass();
    $pane->pid = 'new-e319dafe-a932-4867-bfff-e1578bb96dd3';
    $pane->panel = 'second_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_list-ca_adv_product_product_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e319dafe-a932-4867-bfff-e1578bb96dd3';
    $display->content['new-e319dafe-a932-4867-bfff-e1578bb96dd3'] = $pane;
    $display->panels['second_left'][0] = 'new-e319dafe-a932-4867-bfff-e1578bb96dd3';
    $pane = new stdClass();
    $pane->pid = 'new-2a6983ed-be44-40f4-b704-d85bf5fcc4b7';
    $pane->panel = 'second_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_list-ca_adv_category_options_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a6983ed-be44-40f4-b704-d85bf5fcc4b7';
    $display->content['new-2a6983ed-be44-40f4-b704-d85bf5fcc4b7'] = $pane;
    $display->panels['second_right'][0] = 'new-2a6983ed-be44-40f4-b704-d85bf5fcc4b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_adv_product_node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_adv_product_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_add_new_category';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Add New Category';
  $page->admin_description = '';
  $page->path = 'product/add_category';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add New Category',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_add_new_category_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_add_new_category';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_adv_product_category',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_add_new_category'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_add_product';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Add Product';
  $page->admin_description = '';
  $page->path = 'node/%node/add_product';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_product_category' => 'ca_adv_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Product',
    'name' => 'navigation',
    'weight' => '9',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_add_product_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_add_product';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_adv_product:field_ca_ad_prod_parent_category',
    'context_admin_options_items' => 'ca_adv_product',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_ad_prod_parent_category',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_add_product'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_add_sub_category';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Add Sub Category';
  $page->admin_description = '';
  $page->path = 'node/%node/add_sub_category';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_product_category' => 'ca_adv_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add New Subcategory',
    'name' => 'navigation',
    'weight' => '19',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_add_sub_category_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_add_sub_category';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_adv_product_category:field_ca_adv_category_parent',
    'context_admin_options_items' => 'ca_adv_product_category',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_adv_category_parent',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_add_sub_category'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_category_admin';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Category Admin';
  $page->admin_description = '';
  $page->path = 'product/admin/adv-product-administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administration',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administer',
      'name' => 'navigation',
      'weight' => '20',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_category_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_category_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Advanced Product: Category Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-adv-product-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Categories';
  $display->uuid = '999c3ec8-f48d-44c8-a297-2caa963f462c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd0eada0-9642-4bd0-b460-8abe91d6de91';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_admin-ca_adv_product_category_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cd0eada0-9642-4bd0-b460-8abe91d6de91';
    $display->content['new-cd0eada0-9642-4bd0-b460-8abe91d6de91'] = $pane;
    $display->panels['middle'][0] = 'new-cd0eada0-9642-4bd0-b460-8abe91d6de91';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_category_admin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_parent_category_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Parent Category Sort';
  $page->admin_description = '';
  $page->path = 'product/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Categories',
    'name' => 'navigation',
    'weight' => '20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_parent_category_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_parent_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Advanced Product: Parent Product Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-adv-product-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Parent Categories';
  $display->uuid = '8041531a-0de5-4d15-b3d9-99c3c2f4a243';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0125e4c6-9827-4b67-9ef2-a6110836bf75';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_product_sorting-ca_adv_product_parent_category_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0125e4c6-9827-4b67-9ef2-a6110836bf75';
    $display->content['new-0125e4c6-9827-4b67-9ef2-a6110836bf75'] = $pane;
    $display->panels['middle'][0] = 'new-0125e4c6-9827-4b67-9ef2-a6110836bf75';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0125e4c6-9827-4b67-9ef2-a6110836bf75';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_parent_category_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_product_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Products Administration';
  $page->admin_description = '';
  $page->path = 'node/%node/admin/adv-product-administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_product_category' => 'ca_adv_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Admin',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administer',
      'name' => 'navigation',
      'weight' => '19',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_product_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_product_administration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Advanced Products Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-adv-product-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = '80c5b1f0-bded-40a2-915b-fb0a1e60a5c4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-23b1f8bc-6f26-46f5-93bc-3b5fadbc1e04';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_admin-ca_adv_product_sub_cat_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23b1f8bc-6f26-46f5-93bc-3b5fadbc1e04';
    $display->content['new-23b1f8bc-6f26-46f5-93bc-3b5fadbc1e04'] = $pane;
    $display->panels['middle'][0] = 'new-23b1f8bc-6f26-46f5-93bc-3b5fadbc1e04';
    $pane = new stdClass();
    $pane->pid = 'new-dc2db719-8c1b-415c-a280-fb6c6329fd1c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_admin-ca_adv_product_product_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dc2db719-8c1b-415c-a280-fb6c6329fd1c';
    $display->content['new-dc2db719-8c1b-415c-a280-fb6c6329fd1c'] = $pane;
    $display->panels['middle'][1] = 'new-dc2db719-8c1b-415c-a280-fb6c6329fd1c';
    $pane = new stdClass();
    $pane->pid = 'new-7a592488-948e-4de2-a124-740195aa7bbb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_admin-ca_adv_product_options_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7a592488-948e-4de2-a124-740195aa7bbb';
    $display->content['new-7a592488-948e-4de2-a124-740195aa7bbb'] = $pane;
    $display->panels['middle'][2] = 'new-7a592488-948e-4de2-a124-740195aa7bbb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_product_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_product_catalog';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Products Catalog';
  $page->admin_description = '';
  $page->path = 'product/view';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Products',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_product_catalog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_product_catalog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Advanced Products Category',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e8efc114-7c29-46ab-9271-200b0b64fd5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5594bcc1-b259-44ca-9dc3-704c02854fab';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_advanced_products_list-ca_adv_product_category_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5594bcc1-b259-44ca-9dc3-704c02854fab';
    $display->content['new-5594bcc1-b259-44ca-9dc3-704c02854fab'] = $pane;
    $display->panels['middle'][0] = 'new-5594bcc1-b259-44ca-9dc3-704c02854fab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_product_catalog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_product_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Products Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/admin/product_sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_product_category' => 'ca_adv_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Products',
    'name' => 'navigation',
    'weight' => '40',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_product_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_product_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Advanced Products Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-adv-product-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = 'c2d7ad7e-557f-4e9a-b514-5b42999455fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-141bcc4b-ad59-4ff2-9ac2-37c9c85c08f3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_product_sorting-ca_adv_product_product_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '141bcc4b-ad59-4ff2-9ac2-37c9c85c08f3';
    $display->content['new-141bcc4b-ad59-4ff2-9ac2-37c9c85c08f3'] = $pane;
    $display->panels['middle'][0] = 'new-141bcc4b-ad59-4ff2-9ac2-37c9c85c08f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-141bcc4b-ad59-4ff2-9ac2-37c9c85c08f3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_product_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_adv_product_sub_category_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Sub Category Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/admin/sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_product_category' => 'ca_adv_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Category Sort',
    'name' => 'navigation',
    'weight' => '29',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_adv_product_sub_category_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_adv_product_sub_category_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Advanced Product: Sub Category Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-adv-product-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Product Sub Categories';
  $display->uuid = '6255d220-61fd-430d-9307-3f786a870dc8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-351b1088-22d0-4ee9-a55c-430ffe186bc9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_product_sorting-ca_adv_product_sub_category_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '351b1088-22d0-4ee9-a55c-430ffe186bc9';
    $display->content['new-351b1088-22d0-4ee9-a55c-430ffe186bc9'] = $pane;
    $display->panels['middle'][0] = 'new-351b1088-22d0-4ee9-a55c-430ffe186bc9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-351b1088-22d0-4ee9-a55c-430ffe186bc9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_adv_product_sub_category_sort'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_advanced_product_add_product_option';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Add Products Option';
  $page->admin_description = '';
  $page->path = 'node/%node/add_product_option';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_product_category' => 'ca_adv_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Products Option',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_advanced_product_add_product_option_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_advanced_product_add_product_option';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'entityref_create_node:ca_adv_product_option:field_ca_ad_prod_parent_category',
    'context_admin_options_items' => 'ca_adv_product_option',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
    'context_admin_field' => 'field_ca_ad_prod_parent_category',
    'context_admin_custom_redirect' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_advanced_product_add_product_option'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_advanced_product_product_option_sort';
  $page->task = 'page';
  $page->admin_title = 'CA Advanced Product: Products Option Sort';
  $page->admin_description = '';
  $page->path = 'node/%node/admin/product_option_sort';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 60140418,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'ca_adv_product_category' => 'ca_adv_product_category',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Sort Products Options',
    'name' => 'navigation',
    'weight' => '41',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_advanced_product_product_option_sort_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_advanced_product_product_option_sort';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA Advanced Product: Products Option Sort',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-adv-product-admin',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products Options';
  $display->uuid = '84fe46bb-8093-4e25-95e0-233debc032be';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d168c54d-2daf-42f5-9aa7-df626bccac15';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_adv_product_sorting-ca_adv_product_option_sort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd168c54d-2daf-42f5-9aa7-df626bccac15';
    $display->content['new-d168c54d-2daf-42f5-9aa7-df626bccac15'] = $pane;
    $display->panels['middle'][0] = 'new-d168c54d-2daf-42f5-9aa7-df626bccac15';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_advanced_product_product_option_sort'] = $page;

  return $pages;

}
