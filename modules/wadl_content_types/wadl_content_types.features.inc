<?php
/**
 * @file
 * wadl_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wadl_content_types_node_info() {
  $items = array(
    'documentation' => array(
      'name' => t('API WADL Documentation Node'),
      'base' => 'node_content',
      'description' => t('Documentation Node For API. Part of the Devconnect API Documentation Package'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'method' => array(
      'name' => t('API WADL Method Node'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('ID'),
      'help' => '',
    ),
    'parameter' => array(
      'name' => t('API WADL Parameter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'resouce_base' => array(
      'name' => t('API WADL Resouce Base'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Base'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('API WADL Resource Node'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Path'),
      'help' => '',
    ),
  );
  return $items;
}
