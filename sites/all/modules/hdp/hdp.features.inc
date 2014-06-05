<?php
/**
 * @file
 * hdp.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hdp_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hdp_node_info() {
  $items = array(
    'image_gallery' => array(
      'name' => t('Image gallery'),
      'base' => 'node_content',
      'description' => t('This is used to add images to image gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
