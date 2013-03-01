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
    'wadl_application' => array(
      'name' => t('API WADL Application'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wadl_doc' => array(
      'name' => t('API WADL Documentation Node'),
      'base' => 'node_content',
      'description' => t('Documentation Node For API. Part of the Devconnect API Documentation Package'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wadl_method' => array(
      'name' => t('API WADL Method Node'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('ID'),
      'help' => '',
    ),
    'wadl_parameter' => array(
      'name' => t('API WADL Parameter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'wadl_resource' => array(
      'name' => t('API WADL Resource Node'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Path'),
      'help' => '',
    ),
    'wadl_resources' => array(
      'name' => t('API WADL Resouces Base'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Base'),
      'help' => '',
    ),
    'wadl_wadl' => array(
      'name' => t('API WADL'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
