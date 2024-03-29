<?php
/**
 * @file
 * tbr_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function tbr_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: ds_code
  $profiles['ds_code'] = array(
    'format' => 'ds_code',
    'editor' => 'markitup',
    'settings' => FALSE,
    'rdf_mapping' => array(),
  );

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'HorizontalRule' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'Table' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
      'advanced__active_tab' => 'edit-basic',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: php_code
  $profiles['php_code'] = array(
    'format' => 'php_code',
    'editor' => 'markitup',
    'settings' => FALSE,
    'rdf_mapping' => array(),
  );

  return $profiles;
}
