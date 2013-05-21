<?php
$view = new view();
$view->name = 'ticket_allocation_report';
$view->description = '';
$view->tag = 'ticket_allocation';
$view->base_table = 'ticket_allocation';
$view->human_name = 'Allocated tickets';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Allocated tickets';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  11 => '11',
  19 => '19',
  18 => '18',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'created' => 'created',
  'ticket' => 'ticket',
  'order_number' => 'order_number',
  'title' => 'title',
  'name' => 'name',
  'name_1' => 'name_1',
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
  'ticket' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'title' => array(
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
  'name_1' => array(
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
$handler->display->display_options['empty']['area']['label'] = 'No ticket allocations found';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No ticket allocations found.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Ticket allocation: Commerce order */
$handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
$handler->display->display_options['relationships']['order_id']['table'] = 'ticket_allocation';
$handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
/* Relationship: Ticket allocation: Commerce product */
$handler->display->display_options['relationships']['product_id']['id'] = 'product_id';
$handler->display->display_options['relationships']['product_id']['table'] = 'ticket_allocation';
$handler->display->display_options['relationships']['product_id']['field'] = 'product_id';
/* Relationship: Ticket allocation: Ticket allocator */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'ticket_allocation';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Relationship: Commerce Order: Owner */
$handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['relationships']['uid_1']['table'] = 'commerce_order';
$handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
$handler->display->display_options['relationships']['uid_1']['relationship'] = 'order_id';
/* Field: Ticket allocation: Allocation date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'ticket_allocation';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: Ticket allocation: Ticket number */
$handler->display->display_options['fields']['ticket']['id'] = 'ticket';
$handler->display->display_options['fields']['ticket']['table'] = 'ticket_allocation';
$handler->display->display_options['fields']['ticket']['field'] = 'ticket';
/* Field: Commerce Order: Order number */
$handler->display->display_options['fields']['order_number']['id'] = 'order_number';
$handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_number']['field'] = 'order_number';
$handler->display->display_options['fields']['order_number']['relationship'] = 'order_id';
$handler->display->display_options['fields']['order_number']['label'] = 'Order';
$handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
/* Field: Commerce Product: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'commerce_product';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'product_id';
$handler->display->display_options['fields']['title']['label'] = 'Product purchased';
$handler->display->display_options['fields']['title']['link_to_product'] = 0;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['name']['label'] = 'Customer';
/* Field: User: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'users';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['label'] = 'Allocator';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/commerce/ticket-allocation/report';

/* Display: Data export */
$handler = $view->new_display('views_data_export', 'Data export', 'csv');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_data_export_csv';
$handler->display->display_options['style_options']['provide_file'] = 1;
$handler->display->display_options['style_options']['filename'] = '%view-%timestamp-full.csv';
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['style_options']['quote'] = 1;
$handler->display->display_options['style_options']['trim'] = 0;
$handler->display->display_options['style_options']['replace_newlines'] = 0;
$handler->display->display_options['style_options']['header'] = 1;
$handler->display->display_options['style_options']['keep_html'] = 0;
$handler->display->display_options['path'] = 'admin/commerce/ticket-allocation/report/export.csv';
$handler->display->display_options['displays'] = array(
  'default' => 'default',
  'page' => 'page',
);
$handler->display->display_options['use_batch'] = 'batch';
$handler->display->display_options['segment_size'] = '250';

/* Display: Totals */
$handler = $view->new_display('attachment', 'Totals', 'totals');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Ticket allocation: Commerce order */
$handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
$handler->display->display_options['relationships']['order_id']['table'] = 'ticket_allocation';
$handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Ticket allocation: Order */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'ticket_allocation';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['order_id']['label'] = 'Orders';
/* Field: Commerce Order: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'commerce_order';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'order_id';
$handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['uid']['label'] = 'Customers';
/* Field: Ticket allocation: Ticket number */
$handler->display->display_options['fields']['ticket']['id'] = 'ticket';
$handler->display->display_options['fields']['ticket']['table'] = 'ticket_allocation';
$handler->display->display_options['fields']['ticket']['field'] = 'ticket';
$handler->display->display_options['fields']['ticket']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['ticket']['label'] = 'Tickets';
$handler->display->display_options['displays'] = array(
  'default' => 'default',
  'page' => 'page',
);
$handler->display->display_options['inherit_exposed_filters'] = TRUE;

$views[$view->name] = $view;
