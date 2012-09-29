# Data and Chart -- Drupal Module

# Data System
  - Sheet ('sheet')
  - (Planned) Database Table

# Chart System
  - Google Chart Tools (gct)
  
# Developer
$setting = array(
  'containerId' => '',
  'weight' => '',
  'data' => array(
    'type' => 'json',
    'url' => '/data/sheet/1/json',
  ),
  'chart' => array(
    'driver' => 'gct',
    'chartType' => '',
    'options' => array(
      'title' => '',
      'width' => '',
      'height' => '',
    ),
  ),
);
 