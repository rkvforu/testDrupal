<?php
/**
 * @file
 * blogs_article_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blogs_article_feature_node_info() {
  $items = array(
    'blog_articles' => array(
      'name' => t('blog_articles'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
