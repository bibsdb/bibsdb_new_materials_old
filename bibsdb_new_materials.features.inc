<?php
/**
 * @file
 * bibsdb_new_materials.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function bibsdb_new_materials_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context_new_materials'])) {
    $data['node_view_panel_context_new_materials']->conf['display']->title_pane = 0; /* WAS: 'new-2' */
    $data['node_view_panel_context_new_materials']->conf['display']->uuid = '3599791b-3458-4296-861c-2920d94cb3f5'; /* WAS: '' */
    unset($data['node_view_panel_context_new_materials']->conf['display']->content['new-1']);
    unset($data['node_view_panel_context_new_materials']->conf['display']->content['new-2']);
    unset($data['node_view_panel_context_new_materials']->conf['display']->panels['left_sidebar']);
    unset($data['node_view_panel_context_new_materials']->conf['display']->panels['main_content']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function bibsdb_new_materials_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__new_materials'])) {
    $data['field_bundle_settings_node__new_materials']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 30,
    ); /* WAS: '' */
  }
}
