<?php
/**
 * @file
 * blogs_article_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blogs_article_feature_taxonomy_default_vocabularies() {
  return array(
    'blogs' => array(
      'name' => 'Blogs',
      'machine_name' => 'blogs',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
