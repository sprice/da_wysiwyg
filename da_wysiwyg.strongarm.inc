<?php

/**
 * Implementation of hook_strongarm().
 */
function da_wysiwyg_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_nofollow_policy_100';
  $strongarm->value = 'disabled';

  $export['wysiwyg_filter_nofollow_policy_100'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_parsed_100';
  $strongarm->value = array(
    'a' => array(
      'href' => array(
        'required' => TRUE,
      ),
      'target' => array(
        'values' => array(
          0 => '_blank',
        ),
      ),
      'title' => array(),
      'style' => array(),
    ),
    'b' => array(
      'style' => array(),
    ),
    'blockquote' => array(
      'style' => array(),
    ),
    'br' => array(
      'style' => array(),
    ),
    'cite' => array(
      'style' => array(),
    ),
    'code' => array(
      'style' => array(),
    ),
    'dd' => array(
      'style' => array(),
    ),
    'dl' => array(
      'style' => array(),
    ),
    'dt' => array(
      'style' => array(),
    ),
    'em' => array(
      'style' => array(),
    ),
    'h3' => array(
      'style' => array(),
    ),
    'h4' => array(
      'style' => array(),
    ),
    'h5' => array(
      'style' => array(),
    ),
    'h6' => array(
      'style' => array(),
    ),
    'hr' => array(
      'style' => array(),
    ),
    'li' => array(
      'style' => array(),
    ),
    'ol' => array(
      'style' => array(),
    ),
    'strikei' => array(
      'style' => array(),
    ),
    'strong' => array(
      'style' => array(),
    ),
    'ul' => array(
      'style' => array(),
    ),
  );

  $export['wysiwyg_filter_valid_elements_parsed_100'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_filter_valid_elements_raw_100';
  $strongarm->value = '@[style],
a[!href|target<_blank|title],
em, strong, strike i, b, 
ul, ol, li, dl, dt, dd, 
br, hr, 
blockquote, cite, code, 
h3, h4, h5, h6';

  $export['wysiwyg_filter_valid_elements_raw_100'] = $strongarm;
  return $export;
}
