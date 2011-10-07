<?php
// $Id$
/**
 * @file
 * Common settings for comScore Direct tag. hansdotcom@gmail.com
 * comscore_direct_form
 *
 */
function comscore_direct_form() {
  $form = array();
  $form['comscore_direct_id'] = array(
      '#title' => t('comScore site id'), 
      '#type' => 'textfield', 
      '#description' => t('<p>comScore ID (required)</p>'), 
      '#default_value' => variable_get('comscore_direct_id', ''),
      '#required' => TRUE,
  );
  $form['comscore_direct_genre'] = array(
      '#title' => t('comScore Genre of content'), 
      '#type' => 'textfield', 
      '#description' => t('<p>Alphanumeric value used for client specific custom classification (optional)</p>'), 
      '#default_value' => variable_get('comscore_direct_genre', '') 
  );
  $form['comscore_direct_package'] = array(
      '#title' => t('comScore Package'), 
      '#type' => 'textfield', 
      '#description' => t('<p>Alphanumeric value for customized aggregation to reflect sections or site centric advertising packages (optional)</p>'), 
      '#default_value' => variable_get('comscore_direct_package', '') 
  );
  $form['comscore_direct_clientseg'] = array(
      '#title' => t('comScore Client Segment ID'), 
      '#type' => 'textfield', 
      '#description' => t('<p>Alphanumeric value for Publisher’s own segment for the machine the content asset is being served to (optional)</p>'), 
      '#default_value' => variable_get('comscore_direct_clientseg', '') 
  );
  $form = system_settings_form($form);
  return $form;
}
