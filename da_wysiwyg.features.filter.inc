<?php

/**
 * Implementation of hook_filter_default_formats().
 */
function da_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG
  $formats['WYSIWYG'] = array(
    'name' => 'WYSIWYG',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'authorized user',
      '4' => 'manager',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'codefilter',
        'delta' => '0',
        'weight' => '0',
      ),
      '1' => array(
        'module' => 'wysiwyg_filter',
        'delta' => '0',
        'weight' => '1',
      ),
      '2' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '10',
      ),
    ),
  );

  return $formats;
}
