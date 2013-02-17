<?php


function wadl_show() {
  $wadl = wadl_get_primary_wadl();
  if ($wadl === false) {
    drupal_goto("wadl/add");
  } else {
    $breadcrumb = array();
    $breadcrumb[] = l('Home', '<front>');
    $breadcrumb[] = l(drupal_get_title(), base_path() . request_uri());
    drupal_set_breadcrumb($breadcrumb);
    return drupal_render(node_view($wadl));
  }
}

function wadl_add() {
  global $user;
  $breadcrumb = array();
  $breadcrumb[] = l('Home', '<front>');
  $breadcrumb[] = l('Primary WADL', 'wadl');
  $breadcrumb[] = l(drupal_get_title(), base_path() . request_uri());
  drupal_set_breadcrumb($breadcrumb);
  module_load_include('inc', 'node', 'node.pages');
  $node_type='wadl';
  $form_id=$node_type.'_node_form';
  $node = wadl_get_primary_wadl();
  if ($node == false){
    $node = new stdClass();
    $node->uid=$user->uid;
    $node->name=(isset($user->name)?$user->name : '');
    $node->type=$node_type;
    $node->status = true;
    $node->promoted = false;
    $node->sticy = false;
    $node->language = LANGUAGE_NONE;
    $node->path['alias'] = "wadl/primary";
  }
  node_object_prepare($node);
  return drupal_get_form($form_id, $node);
}


function wadl_get_primary_wadl() {
  $node = false;
  $q = new EntityFieldQuery();
  $toReturn = $q->entityCondition("entity_type", "node")
    ->entityCondition("bundle", "wadl")
    ->propertyCondition('status', 1)
    ->addMetaData('account', user_load(1))
    ->execute();
  if (array_key_exists("node", $toReturn)) {
    $result = array_shift($toReturn['node']);
    $node = node_load($result->nid, $result->vid);
  }
  return $node;
}