<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function da_wysiwyg_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "wysiwyg" && $api == "wysiwyg_default_format") {
    return array("version" => 2);
  }
}
