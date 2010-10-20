<?php

/**
 * Implementation of hook_strongarm().
 */
function epistemetec_fedora_object_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fedora_obj';
  $strongarm->value = 0;

  $export['comment_anonymous_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_fedora_obj';
  $strongarm->value = '3';

  $export['comment_controls_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fedora_obj';
  $strongarm->value = '4';

  $export['comment_default_mode_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_fedora_obj';
  $strongarm->value = '1';

  $export['comment_default_order_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fedora_obj';
  $strongarm->value = '50';

  $export['comment_default_per_page_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fedora_obj';
  $strongarm->value = '2';

  $export['comment_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fedora_obj';
  $strongarm->value = '0';

  $export['comment_form_location_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fedora_obj';
  $strongarm->value = '1';

  $export['comment_preview_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fedora_obj';
  $strongarm->value = '1';

  $export['comment_subject_field_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fedora_obj';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '20',
    'comment_settings' => '30',
    'menu' => '-2',
    'taxonomy' => '-3',
    'attachments' => '30',
  );

  $export['content_extra_weights_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fedora_obj';
  $strongarm->value = '0';

  $export['language_content_type_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fedora_obj';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fedora_obj';
  $strongarm->value = '1';

  $export['upload_fedora_obj'] = $strongarm;
  return $export;
}
