<?php
/**
 * @file
 * solkit_wysiwyg.features.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function solkit_wysiwyg_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['editor'] = 'ckeditor'; /* WAS: 'tinymce' */
    $data['panopoly_wysiwyg_text']['settings'] = FALSE; /* WAS: array(
      'apply_source_formatting' => 0,
      'block_formats' => 'h1,h2,h3,h4,h5,h6',
      'buttons' => array(
        'captionfilter' => array(
          'captionfilter' => 1,
        ),
        'default' => array(
          'blockquote' => 1,
          'bold' => 1,
          'bullist' => 1,
          'charmap' => 1,
          'forecolor' => 1,
          'formatselect' => 1,
          'indent' => 1,
          'italic' => 1,
          'justifycenter' => 1,
          'justifyfull' => 1,
          'justifyleft' => 1,
          'justifyright' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'redo' => 1,
          'removeformat' => 1,
          'strikethrough' => 1,
          'underline' => 1,
          'undo' => 1,
          'unlink' => 1,
        ),
        'drupal' => array(
          'break' => 1,
          'media' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
          'pasteword' => 1,
        ),
        'pdw' => array(
          'pdw_toggle' => 1,
        ),
        'spellchecker' => array(
          'spellchecker' => 1,
        ),
      ),
      'convert_fonts_to_spans' => 1,
      'css_classes' => '',
      'css_path' => '',
      'css_setting' => 'theme',
      'default' => 1,
      'language' => 'en',
      'paste_auto_cleanup_on_paste' => 1,
      'path_loc' => 'bottom',
      'preformatted' => 0,
      'remove_linebreaks' => 1,
      'resizing' => 1,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'toolbar_align' => 'left',
      'toolbar_loc' => 'top',
      'user_choose' => 0,
      'verify_html' => 1,
    ) */
  }
}
