<?php
/**
 * @file
 * ma_digitalheritage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ma_digitalheritage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_book_children'.
  $field_bases['field_book_children'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_children',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'duplicates' => 0,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'digital_heritage' => 'digital_heritage',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_book_parent'.
  $field_bases['field_book_parent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_parent',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'duplicates' => 0,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'digital_heritage' => 'digital_heritage',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_collection'.
  $field_bases['field_collection'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_collection',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'duplicates' => 1,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'collection' => 'collection',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_community_record_children'.
  $field_bases['field_community_record_children'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_community_record_children',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'duplicates' => 0,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'digital_heritage' => 'digital_heritage',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_community_record_parent'.
  $field_bases['field_community_record_parent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_community_record_parent',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'duplicates' => 0,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'digital_heritage' => 'digital_heritage',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_community_ref'.
  $field_bases['field_community_ref'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_community_ref',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'collection' => 0,
        'community' => 'community',
        'cultural_protocol_group' => 0,
        'dictionary_word' => 0,
        'digital_heritage' => 0,
        'page' => 0,
        'panel' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_dh_type'.
  $field_bases['field_dh_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dh_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'dh_type',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_gpx_file'.
  $field_bases['field_gpx_file'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpx_file',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'private',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_original_date'.
  $field_bases['field_original_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_original_date',
    'indexes' => array(
      'timestamp' => array(
        0 => 'timestamp',
      ),
      'timestamp_to' => array(
        0 => 'timestamp_to',
      ),
    ),
    'locked' => 0,
    'module' => 'partial_date',
    'settings' => array(
      'estimates' => array(
        'day' => array(
          '0|12' => 'The start of the month',
          '10|20' => 'The middle of the month',
          '18|31' => 'The end of the month',
        ),
        'hour' => array(
          '0|1' => 'Midnight',
          '6|12' => 'Morning',
          '6|18' => 'Day time',
          '12|13' => 'Noon',
          '12|18' => 'Afternoon',
          '18|6' => 'Night',
          '18|22' => 'Evening',
        ),
        'minute' => array(),
        'month' => array(
          '2|4' => 'Spring',
          '5|7' => 'Summer',
          '8|10' => 'Autumn',
          '11|1' => 'Winter',
        ),
        'second' => array(),
        'year' => array(
          '-60000|1600' => 'Pre-colonial',
          '900|1909' => '1900s',
          '1500|1599' => '16th century',
          '1600|1699' => '17th century',
          '1700|1799' => '18th century',
          '1800|1899' => '19th century',
          '1900|1999' => '20th century',
          '1910|1919' => '1910s',
          '1920|1929' => '1920s',
          '1930|1939' => '1930s',
          '1940|1949' => '1940s',
          '1950|1959' => '1950s',
          '1960|1969' => '1960s',
          '1970|1979' => '1970s',
          '1980|1989' => '1980s',
          '1990|1999' => '1990s',
          '2000|2099' => '21st century',
        ),
      ),
      'minimum_components' => array(
        'from_estimates_day' => 0,
        'from_estimates_hour' => 0,
        'from_estimates_minute' => 0,
        'from_estimates_month' => 0,
        'from_estimates_second' => 0,
        'from_estimates_year' => 0,
        'from_granularity_day' => 0,
        'from_granularity_hour' => 0,
        'from_granularity_minute' => 0,
        'from_granularity_month' => 0,
        'from_granularity_second' => 0,
        'from_granularity_timezone' => 0,
        'from_granularity_year' => 0,
        'to_estimates_day' => 0,
        'to_estimates_hour' => 0,
        'to_estimates_minute' => 0,
        'to_estimates_month' => 0,
        'to_estimates_second' => 0,
        'to_estimates_year' => 0,
        'to_granularity_day' => 0,
        'to_granularity_hour' => 0,
        'to_granularity_minute' => 0,
        'to_granularity_month' => 0,
        'to_granularity_second' => 0,
        'to_granularity_timezone' => 0,
        'to_granularity_year' => 0,
        'txt_long' => 0,
        'txt_short' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'partial_date_range',
  );

  // Exported field_base: 'field_people'.
  $field_bases['field_people'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_people',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'people',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_related_dh_items'.
  $field_bases['field_related_dh_items'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_dh_items',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'duplicates' => 1,
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'dh_nodes_available_to_dh',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_related_dictionary_words'.
  $field_bases['field_related_dictionary_words'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_dictionary_words',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'duplicates' => 1,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'dictionary_word' => 'dictionary_word',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_remove_all_geodata'.
  $field_bases['field_remove_all_geodata'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_remove_all_geodata',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_summary'.
  $field_bases['field_summary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_summary',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_transcription'.
  $field_bases['field_transcription'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_transcription',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_wkt_from_gpx_file'.
  $field_bases['field_wkt_from_gpx_file'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wkt_from_gpx_file',
    'indexes' => array(
      'bbox' => array(
        0 => 'top',
        1 => 'bottom',
        2 => 'left',
        3 => 'right',
      ),
      'bottom' => array(
        0 => 'bottom',
      ),
      'centroid' => array(
        0 => 'lat',
        1 => 'lon',
      ),
      'geohash' => array(
        0 => 'geohash',
      ),
      'lat' => array(
        0 => 'lat',
      ),
      'left' => array(
        0 => 'left',
      ),
      'lon' => array(
        0 => 'lon',
      ),
      'right' => array(
        0 => 'right',
      ),
      'top' => array(
        0 => 'top',
      ),
    ),
    'locked' => 0,
    'module' => 'geofield',
    'settings' => array(
      'backend' => 'default',
      'srid' => 4326,
    ),
    'translatable' => 0,
    'type' => 'geofield',
  );

  return $field_bases;
}
