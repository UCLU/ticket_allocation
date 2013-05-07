<?php
$view = new view();
$view->name = 'ticket_allocation';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_order';
$view->human_name = 'Ticket allocation';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Find';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select any filter and click on Find to see results';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'created' => 'created',
  'order_number' => 'order_number',
  'name' => 'name',
  'mail' => 'mail',
  'commerce_product' => 'commerce_product',
  'quantity' => 'quantity',
);
$handler->display->display_options['style_options']['default'] = 'created';
$handler->display->display_options['style_options']['info'] = array(
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'order_number' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'mail' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'commerce_product' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'quantity' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'No orders found';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No orders found.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Commerce Order: Referenced line item */
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
/* Relationship: Commerce Line item: Referenced product */
$handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
$handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
/* Relationship: Commerce Order: Owner */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: Commerce Order: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'commerce_order';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Date';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: Commerce Order: Order number */
$handler->display->display_options['fields']['order_number']['id'] = 'order_number';
$handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_number']['field'] = 'order_number';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
/* Field: Commerce Order: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['render_as_link'] = 0;
/* Field: Commerce Line item: Product */
$handler->display->display_options['fields']['commerce_product']['id'] = 'commerce_product';
$handler->display->display_options['fields']['commerce_product']['table'] = 'field_data_commerce_product';
$handler->display->display_options['fields']['commerce_product']['field'] = 'commerce_product';
$handler->display->display_options['fields']['commerce_product']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['commerce_product']['type'] = 'commerce_product_reference_title_link';
$handler->display->display_options['fields']['commerce_product']['settings'] = array(
  'show_quantity' => 0,
  'default_quantity' => '1',
  'combine' => 1,
  'show_single_product_attributes' => 0,
  'line_item_type' => 0,
);
/* Field: Commerce Line Item: Quantity */
$handler->display->display_options['fields']['quantity']['id'] = 'quantity';
$handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['quantity']['field'] = 'quantity';
$handler->display->display_options['fields']['quantity']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['quantity']['precision'] = '0';
/* Field: Commerce Order: Ticket allocation link */
$handler->display->display_options['fields']['ticket_allocation_link']['id'] = 'ticket_allocation_link';
$handler->display->display_options['fields']['ticket_allocation_link']['table'] = 'commerce_order';
$handler->display->display_options['fields']['ticket_allocation_link']['field'] = 'ticket_allocation_link';
$handler->display->display_options['fields']['ticket_allocation_link']['label'] = '';
$handler->display->display_options['fields']['ticket_allocation_link']['element_label_colon'] = FALSE;
/* Sort criterion: Commerce Order: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'commerce_order';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['expose']['label'] = 'Created date';
/* Contextual filter: Commerce Product: SKU */
$handler->display->display_options['arguments']['sku']['id'] = 'sku';
$handler->display->display_options['arguments']['sku']['table'] = 'commerce_product';
$handler->display->display_options['arguments']['sku']['field'] = 'sku';
$handler->display->display_options['arguments']['sku']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['arguments']['sku']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['sku']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['sku']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['sku']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['sku']['limit'] = '0';
/* Filter criterion: Commerce Order: Order number */
$handler->display->display_options['filters']['order_number']['id'] = 'order_number';
$handler->display->display_options['filters']['order_number']['table'] = 'commerce_order';
$handler->display->display_options['filters']['order_number']['field'] = 'order_number';
$handler->display->display_options['filters']['order_number']['exposed'] = TRUE;
$handler->display->display_options['filters']['order_number']['expose']['operator_id'] = 'order_number_op';
$handler->display->display_options['filters']['order_number']['expose']['label'] = 'Order number';
$handler->display->display_options['filters']['order_number']['expose']['operator'] = 'order_number_op';
$handler->display->display_options['filters']['order_number']['expose']['identifier'] = 'order_number';
$handler->display->display_options['filters']['order_number']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Commerce Order: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'commerce_order';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'Order email address';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);

/* Display: Embed */
$handler = $view->new_display('embed', 'Embed', 'embed');

$views[$view->name] = $view;
