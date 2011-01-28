<?php

/**
 * Implementation of hook_wysiwyg_default_format().
 */
function da_wysiwyg_wysiwyg_default_format() {
  $export = array();
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->format = 100;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 1,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'underline' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'link' => 1,
        'unlink' => 1,
      ),
      'font' => array(
        'formatselect' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 1,
    'block_formats' => 'p,h3,h4,h5,h6',
    'css_setting' => 'none',
    'css_path' => '',
    'css_classes' => '',
  );

  $export['100'] = $wysiwyg;
  return $export;
}
