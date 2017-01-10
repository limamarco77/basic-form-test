<?php

/**
 * @file.
 *
 * Custom test form functions.
 */

/**
 * Function to allow users to purge urls on request.
 *
 * Implements hook_form().
 *
 * @param $form
 * @param $form_state
 * @return array
 */
function custom_test_form($form, &$form_state) {
  $form = array();

  $form['first_name'] = array(
    '#type' => 'textfield',
    '#title' => t('First Name'),
    '#default_value' => '',
    '#description' => t('Please enter your first name'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );

  return $form;
}

/**
 * Implements hook_submit().
 *
 * @param $form
 * @param $form_state
 */
function custom_test_form_submit($form, &$form_state) {
  drupal_set_message(t('Hello @first_name', array('@first_name' => $form_state['values']['first_name'])));
}