<?php
/**
 * @file
 * bibsdb_new_materials.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bibsdb_new_materials_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ddelibra_search'
  $field_bases['field_ddelibra_search'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ddelibra_search',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
