<?php
/**
 * @file
 * official_documentation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function official_documentation_taxonomy_default_vocabularies() {
  return array(
    'product' => array(
      'name' => 'Product',
      'machine_name' => 'product',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_10' => array(
      'name' => 'Version',
      'machine_name' => 'vocabulary_10',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
