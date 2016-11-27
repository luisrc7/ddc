<?php

/**
 * @file
 * Aliases for different environments.
 */

$site = 'drupal_publishing';

/* Dev Desktop */
$aliases['local'] = array(
  'parent' => '@parent',
  'site' => 'deeson-dev-challenge',
  'env' => 'vdd',
  'scope' => 'local',
  'uri' => 'deeson-dev-challenge.dd',
);

/* Prod Environment */
$aliases['prod'] = array(
  'parent' => '@remote',
  'site' => 'deeson-dev-challenge',
  'env' => 'vdd',
  'scope' => 'prod',
  'uri' => 'http://default',
  'root' => '/home/codeatlantic/webapps/deeson',
  'remote-host' => '185.10.231.167',
  'remote-user' => 'codeatlantic',
);

$envs = array(
  'dev',
);

foreach ($envs as $env) {
  if (!file_exists($aliases[$env]['root'])) {
    $aliases[$env]['parent'] = '@parent,@remote';
  }
  else {
    unset($aliases[$env]['remote-host']);
  }
}

$options['ssh-options'] = '-o PasswordAuthentication=yes -i ~/.ssh/id_rsa';