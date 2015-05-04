<?php
/**
 * @file
 * bibsdb_new_materials.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_new_materials_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context_new_materials.conf|display|content|new-1"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_new_materials.conf|display|content|new-2"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_new_materials.conf|display|content|new-65b369a2-094f-4f8a-922f-031662ca7094"] = (object) array(
      'pid' => 'new-65b369a2-094f-4f8a-922f-031662ca7094',
      'panel' => 'main_content',
      'type' => 'new_materials',
      'subtype' => 'new_materials',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '65b369a2-094f-4f8a-922f-031662ca7094',
    );
  $overrides["page_manager_handlers.node_view_panel_context_new_materials.conf|display|panels|left_sidebar"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.node_view_panel_context_new_materials.conf|display|panels|main_content|0"] = 'new-65b369a2-094f-4f8a-922f-031662ca7094';
  $overrides["page_manager_handlers.node_view_panel_context_new_materials.conf|display|title_pane"] = 'new-65b369a2-094f-4f8a-922f-031662ca7094';
  $overrides["page_manager_handlers.node_view_panel_context_new_materials.conf|display|uuid"] = '3599791b-3458-4296-861c-2920d94cb3f5';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__new_materials.value|extra_fields|form|redirect"] = array(
    'weight' => 30,
  );

 return $overrides;
}
