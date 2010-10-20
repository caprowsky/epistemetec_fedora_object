<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function epistemetec_fedora_object_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function epistemetec_fedora_object_node_info() {
  $items = array(
    'fedora_obj' => array(
      'name' => t('Oggetti Fedora'),
      'module' => 'features',
      'description' => t('Tipo di contenuto utilizzato x correlare Oggetti Fedora con Nodi Drupal'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
