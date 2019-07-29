/*
 * Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation. The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have included with MySQL.
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */


// Generated from MySQLParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


#include "MySQLBaseRecognizer.h"


namespace parsers {


class PARSERS_PUBLIC_TYPE MySQLParser : public MySQLBaseRecognizer {
public:
  enum {
    ACCOUNT_SYMBOL = 1, ASCII_SYMBOL = 2, ALWAYS_SYMBOL = 3, BACKUP_SYMBOL = 4, 
    BEGIN_SYMBOL = 5, BYTE_SYMBOL = 6, CACHE_SYMBOL = 7, CHARSET_SYMBOL = 8, 
    CHECKSUM_SYMBOL = 9, CLOSE_SYMBOL = 10, COMMENT_SYMBOL = 11, COMMIT_SYMBOL = 12, 
    CONTAINS_SYMBOL = 13, DEALLOCATE_SYMBOL = 14, DO_SYMBOL = 15, END_SYMBOL = 16, 
    EXECUTE_SYMBOL = 17, FLUSH_SYMBOL = 18, FOLLOWS_SYMBOL = 19, FORMAT_SYMBOL = 20, 
    GROUP_REPLICATION_SYMBOL = 21, HANDLER_SYMBOL = 22, HELP_SYMBOL = 23, 
    HOST_SYMBOL = 24, INSTALL_SYMBOL = 25, LANGUAGE_SYMBOL = 26, NO_SYMBOL = 27, 
    OPEN_SYMBOL = 28, OPTIONS_SYMBOL = 29, OWNER_SYMBOL = 30, PARSER_SYMBOL = 31, 
    PARTITION_SYMBOL = 32, PORT_SYMBOL = 33, PRECEDES_SYMBOL = 34, PREPARE_SYMBOL = 35, 
    REMOVE_SYMBOL = 36, REPAIR_SYMBOL = 37, RESET_SYMBOL = 38, RESTORE_SYMBOL = 39, 
    ROLLBACK_SYMBOL = 40, SAVEPOINT_SYMBOL = 41, SECURITY_SYMBOL = 42, SERVER_SYMBOL = 43, 
    SIGNED_SYMBOL = 44, SLAVE_SYMBOL = 45, SOCKET_SYMBOL = 46, SONAME_SYMBOL = 47, 
    START_SYMBOL = 48, STOP_SYMBOL = 49, TRUNCATE_SYMBOL = 50, UNICODE_SYMBOL = 51, 
    UNINSTALL_SYMBOL = 52, UPGRADE_SYMBOL = 53, WRAPPER_SYMBOL = 54, XA_SYMBOL = 55, 
    SHUTDOWN_SYMBOL = 56, ACTION_SYMBOL = 57, ADDDATE_SYMBOL = 58, AFTER_SYMBOL = 59, 
    AGAINST_SYMBOL = 60, AGGREGATE_SYMBOL = 61, ALGORITHM_SYMBOL = 62, ANALYZE_SYMBOL = 63, 
    ANY_SYMBOL = 64, AT_SYMBOL = 65, AUTHORS_SYMBOL = 66, AUTO_INCREMENT_SYMBOL = 67, 
    AUTOEXTEND_SIZE_SYMBOL = 68, AVG_ROW_LENGTH_SYMBOL = 69, AVG_SYMBOL = 70, 
    BINLOG_SYMBOL = 71, BIT_SYMBOL = 72, BLOCK_SYMBOL = 73, BOOL_SYMBOL = 74, 
    BOOLEAN_SYMBOL = 75, BTREE_SYMBOL = 76, CASCADED_SYMBOL = 77, CATALOG_NAME_SYMBOL = 78, 
    CHAIN_SYMBOL = 79, CHANGED_SYMBOL = 80, CHANNEL_SYMBOL = 81, CIPHER_SYMBOL = 82, 
    CLIENT_SYMBOL = 83, CLASS_ORIGIN_SYMBOL = 84, COALESCE_SYMBOL = 85, 
    CODE_SYMBOL = 86, COLLATION_SYMBOL = 87, COLUMN_NAME_SYMBOL = 88, COLUMN_FORMAT_SYMBOL = 89, 
    COLUMNS_SYMBOL = 90, COMMITTED_SYMBOL = 91, COMPACT_SYMBOL = 92, COMPLETION_SYMBOL = 93, 
    COMPRESSED_SYMBOL = 94, COMPRESSION_SYMBOL = 95, ENCRYPTION_SYMBOL = 96, 
    CONCURRENT_SYMBOL = 97, CONNECTION_SYMBOL = 98, CONSISTENT_SYMBOL = 99, 
    CONSTRAINT_CATALOG_SYMBOL = 100, CONSTRAINT_SCHEMA_SYMBOL = 101, CONSTRAINT_NAME_SYMBOL = 102, 
    CONTEXT_SYMBOL = 103, CONTRIBUTORS_SYMBOL = 104, CPU_SYMBOL = 105, CUBE_SYMBOL = 106, 
    CURRENT_SYMBOL = 107, CURSOR_NAME_SYMBOL = 108, DATA_SYMBOL = 109, DATAFILE_SYMBOL = 110, 
    DATETIME_SYMBOL = 111, DATE_SYMBOL = 112, DAY_SYMBOL = 113, DEFAULT_AUTH_SYMBOL = 114, 
    DEFINER_SYMBOL = 115, DELAY_KEY_WRITE_SYMBOL = 116, DES_KEY_FILE_SYMBOL = 117, 
    DIAGNOSTICS_SYMBOL = 118, DIRECTORY_SYMBOL = 119, DISABLE_SYMBOL = 120, 
    DISCARD_SYMBOL = 121, DISK_SYMBOL = 122, DUMPFILE_SYMBOL = 123, DUPLICATE_SYMBOL = 124, 
    DYNAMIC_SYMBOL = 125, ENDS_SYMBOL = 126, ENUM_SYMBOL = 127, ENGINE_SYMBOL = 128, 
    ENGINES_SYMBOL = 129, ERROR_SYMBOL = 130, ERRORS_SYMBOL = 131, ESCAPE_SYMBOL = 132, 
    EVENT_SYMBOL = 133, EVENTS_SYMBOL = 134, EVERY_SYMBOL = 135, EXPANSION_SYMBOL = 136, 
    EXPORT_SYMBOL = 137, EXTENDED_SYMBOL = 138, EXTENT_SIZE_SYMBOL = 139, 
    FAULTS_SYMBOL = 140, FAST_SYMBOL = 141, FOUND_SYMBOL = 142, ENABLE_SYMBOL = 143, 
    FULL_SYMBOL = 144, FILE_SYMBOL = 145, FILE_BLOCK_SIZE_SYMBOL = 146, 
    FILTER_SYMBOL = 147, FIRST_SYMBOL = 148, FIXED_SYMBOL = 149, GENERAL_SYMBOL = 150, 
    GEOMETRY_SYMBOL = 151, GEOMETRYCOLLECTION_SYMBOL = 152, GET_FORMAT_SYMBOL = 153, 
    GRANTS_SYMBOL = 154, GLOBAL_SYMBOL = 155, HASH_SYMBOL = 156, HOSTS_SYMBOL = 157, 
    HOUR_SYMBOL = 158, IDENTIFIED_SYMBOL = 159, IGNORE_SERVER_IDS_SYMBOL = 160, 
    INVOKER_SYMBOL = 161, IMPORT_SYMBOL = 162, INDEXES_SYMBOL = 163, INITIAL_SIZE_SYMBOL = 164, 
    INSTANCE_SYMBOL = 165, INNODB_SYMBOL = 166, IO_SYMBOL = 167, IPC_SYMBOL = 168, 
    ISOLATION_SYMBOL = 169, ISSUER_SYMBOL = 170, INSERT_METHOD_SYMBOL = 171, 
    JSON_SYMBOL = 172, KEY_BLOCK_SIZE_SYMBOL = 173, LAST_SYMBOL = 174, LEAVES_SYMBOL = 175, 
    LESS_SYMBOL = 176, LEVEL_SYMBOL = 177, LINESTRING_SYMBOL = 178, LIST_SYMBOL = 179, 
    LOCAL_SYMBOL = 180, LOCKS_SYMBOL = 181, LOGFILE_SYMBOL = 182, LOGS_SYMBOL = 183, 
    MAX_ROWS_SYMBOL = 184, MASTER_SYMBOL = 185, MASTER_HEARTBEAT_PERIOD_SYMBOL = 186, 
    MASTER_HOST_SYMBOL = 187, MASTER_PORT_SYMBOL = 188, MASTER_LOG_FILE_SYMBOL = 189, 
    MASTER_LOG_POS_SYMBOL = 190, MASTER_USER_SYMBOL = 191, MASTER_PASSWORD_SYMBOL = 192, 
    MASTER_SERVER_ID_SYMBOL = 193, MASTER_CONNECT_RETRY_SYMBOL = 194, MASTER_RETRY_COUNT_SYMBOL = 195, 
    MASTER_DELAY_SYMBOL = 196, MASTER_SSL_SYMBOL = 197, MASTER_SSL_CA_SYMBOL = 198, 
    MASTER_SSL_CAPATH_SYMBOL = 199, MASTER_TLS_VERSION_SYMBOL = 200, MASTER_SSL_CERT_SYMBOL = 201, 
    MASTER_SSL_CIPHER_SYMBOL = 202, MASTER_SSL_CRL_SYMBOL = 203, MASTER_SSL_CRLPATH_SYMBOL = 204, 
    MASTER_SSL_KEY_SYMBOL = 205, MASTER_AUTO_POSITION_SYMBOL = 206, MAX_CONNECTIONS_PER_HOUR_SYMBOL = 207, 
    MAX_QUERIES_PER_HOUR_SYMBOL = 208, MAX_STATEMENT_TIME_SYMBOL = 209, 
    MAX_SIZE_SYMBOL = 210, MAX_UPDATES_PER_HOUR_SYMBOL = 211, MAX_USER_CONNECTIONS_SYMBOL = 212, 
    MEDIUM_SYMBOL = 213, MEMORY_SYMBOL = 214, MERGE_SYMBOL = 215, MESSAGE_TEXT_SYMBOL = 216, 
    MICROSECOND_SYMBOL = 217, MIGRATE_SYMBOL = 218, MINUTE_SYMBOL = 219, 
    MIN_ROWS_SYMBOL = 220, MODIFY_SYMBOL = 221, MODE_SYMBOL = 222, MONTH_SYMBOL = 223, 
    MULTILINESTRING_SYMBOL = 224, MULTIPOINT_SYMBOL = 225, MULTIPOLYGON_SYMBOL = 226, 
    MUTEX_SYMBOL = 227, MYSQL_ERRNO_SYMBOL = 228, NAME_SYMBOL = 229, NAMES_SYMBOL = 230, 
    NATIONAL_SYMBOL = 231, NCHAR_SYMBOL = 232, NDBCLUSTER_SYMBOL = 233, 
    NEVER_SYMBOL = 234, NEXT_SYMBOL = 235, NEW_SYMBOL = 236, NO_WAIT_SYMBOL = 237, 
    NODEGROUP_SYMBOL = 238, NONE_SYMBOL = 239, NUMBER_SYMBOL = 240, NVARCHAR_SYMBOL = 241, 
    OFFSET_SYMBOL = 242, OLD_PASSWORD_SYMBOL = 243, ONE_SHOT_SYMBOL = 244, 
    ONE_SYMBOL = 245, PACK_KEYS_SYMBOL = 246, PAGE_SYMBOL = 247, PARTIAL_SYMBOL = 248, 
    PARTITIONING_SYMBOL = 249, PARTITIONS_SYMBOL = 250, PASSWORD_SYMBOL = 251, 
    PHASE_SYMBOL = 252, PLUGIN_DIR_SYMBOL = 253, PLUGIN_SYMBOL = 254, PLUGINS_SYMBOL = 255, 
    POINT_SYMBOL = 256, POLYGON_SYMBOL = 257, PRESERVE_SYMBOL = 258, PREV_SYMBOL = 259, 
    PRIVILEGES_SYMBOL = 260, PROCESS_SYMBOL = 261, PROCESSLIST_SYMBOL = 262, 
    PROFILE_SYMBOL = 263, PROFILES_SYMBOL = 264, PROXY_SYMBOL = 265, QUARTER_SYMBOL = 266, 
    QUERY_SYMBOL = 267, QUICK_SYMBOL = 268, READ_ONLY_SYMBOL = 269, REBUILD_SYMBOL = 270, 
    RECOVER_SYMBOL = 271, REDO_BUFFER_SIZE_SYMBOL = 272, REDOFILE_SYMBOL = 273, 
    REDUNDANT_SYMBOL = 274, RELAY_SYMBOL = 275, RELAYLOG_SYMBOL = 276, RELAY_LOG_FILE_SYMBOL = 277, 
    RELAY_LOG_POS_SYMBOL = 278, RELAY_THREAD_SYMBOL = 279, RELOAD_SYMBOL = 280, 
    REORGANIZE_SYMBOL = 281, REPEATABLE_SYMBOL = 282, REPLICATION_SYMBOL = 283, 
    REPLICATE_DO_DB_SYMBOL = 284, REPLICATE_IGNORE_DB_SYMBOL = 285, REPLICATE_DO_TABLE_SYMBOL = 286, 
    REPLICATE_IGNORE_TABLE_SYMBOL = 287, REPLICATE_WILD_DO_TABLE_SYMBOL = 288, 
    REPLICATE_WILD_IGNORE_TABLE_SYMBOL = 289, REPLICATE_REWRITE_DB_SYMBOL = 290, 
    RESUME_SYMBOL = 291, RETURNED_SQLSTATE_SYMBOL = 292, RETURNS_SYMBOL = 293, 
    REVERSE_SYMBOL = 294, ROLLUP_SYMBOL = 295, ROTATE_SYMBOL = 296, ROUTINE_SYMBOL = 297, 
    ROWS_SYMBOL = 298, ROW_COUNT_SYMBOL = 299, ROW_FORMAT_SYMBOL = 300, 
    ROW_SYMBOL = 301, RTREE_SYMBOL = 302, SCHEDULE_SYMBOL = 303, SCHEMA_NAME_SYMBOL = 304, 
    SECOND_SYMBOL = 305, SERIAL_SYMBOL = 306, SERIALIZABLE_SYMBOL = 307, 
    SESSION_SYMBOL = 308, SIMPLE_SYMBOL = 309, SHARE_SYMBOL = 310, SLOW_SYMBOL = 311, 
    SNAPSHOT_SYMBOL = 312, SOUNDS_SYMBOL = 313, SOURCE_SYMBOL = 314, SQL_AFTER_GTIDS_SYMBOL = 315, 
    SQL_AFTER_MTS_GAPS_SYMBOL = 316, SQL_BEFORE_GTIDS_SYMBOL = 317, SQL_CACHE_SYMBOL = 318, 
    SQL_BUFFER_RESULT_SYMBOL = 319, SQL_NO_CACHE_SYMBOL = 320, SQL_THREAD_SYMBOL = 321, 
    STACKED_SYMBOL = 322, STARTS_SYMBOL = 323, STATS_AUTO_RECALC_SYMBOL = 324, 
    STATS_PERSISTENT_SYMBOL = 325, STATS_SAMPLE_PAGES_SYMBOL = 326, STATUS_SYMBOL = 327, 
    STORAGE_SYMBOL = 328, STRING_SYMBOL = 329, SUBCLASS_ORIGIN_SYMBOL = 330, 
    SUBDATE_SYMBOL = 331, SUBJECT_SYMBOL = 332, SUBPARTITION_SYMBOL = 333, 
    SUBPARTITIONS_SYMBOL = 334, SUPER_SYMBOL = 335, SUSPEND_SYMBOL = 336, 
    SWAPS_SYMBOL = 337, SWITCHES_SYMBOL = 338, TABLE_NAME_SYMBOL = 339, 
    TABLES_SYMBOL = 340, TABLE_CHECKSUM_SYMBOL = 341, TABLESPACE_SYMBOL = 342, 
    TEMPORARY_SYMBOL = 343, TEMPTABLE_SYMBOL = 344, TEXT_SYMBOL = 345, THAN_SYMBOL = 346, 
    TRANSACTION_SYMBOL = 347, TRIGGERS_SYMBOL = 348, TIMESTAMP_SYMBOL = 349, 
    TIMESTAMP_ADD_SYMBOL = 350, TIMESTAMP_DIFF_SYMBOL = 351, TIME_SYMBOL = 352, 
    TYPES_SYMBOL = 353, TYPE_SYMBOL = 354, UDF_RETURNS_SYMBOL = 355, FUNCTION_SYMBOL = 356, 
    UNCOMMITTED_SYMBOL = 357, UNDEFINED_SYMBOL = 358, UNDO_BUFFER_SIZE_SYMBOL = 359, 
    UNDOFILE_SYMBOL = 360, UNKNOWN_SYMBOL = 361, UNTIL_SYMBOL = 362, USER_RESOURCES_SYMBOL = 363, 
    USER_SYMBOL = 364, USE_FRM_SYMBOL = 365, VARIABLES_SYMBOL = 366, VIEW_SYMBOL = 367, 
    VALUE_SYMBOL = 368, WARNINGS_SYMBOL = 369, WAIT_SYMBOL = 370, WEEK_SYMBOL = 371, 
    WORK_SYMBOL = 372, WEIGHT_STRING_SYMBOL = 373, X509_SYMBOL = 374, XID_SYMBOL = 375, 
    XML_SYMBOL = 376, YEAR_SYMBOL = 377, NOT2_SYMBOL = 378, CONCAT_PIPES_SYMBOL = 379, 
    INT_NUMBER = 380, LONG_NUMBER = 381, ULONGLONG_NUMBER = 382, EQUAL_OPERATOR = 383, 
    ASSIGN_OPERATOR = 384, NULL_SAFE_EQUAL_OPERATOR = 385, GREATER_OR_EQUAL_OPERATOR = 386, 
    GREATER_THAN_OPERATOR = 387, LESS_OR_EQUAL_OPERATOR = 388, LESS_THAN_OPERATOR = 389, 
    NOT_EQUAL_OPERATOR = 390, PLUS_OPERATOR = 391, MINUS_OPERATOR = 392, 
    MULT_OPERATOR = 393, DIV_OPERATOR = 394, MOD_OPERATOR = 395, LOGICAL_NOT_OPERATOR = 396, 
    BITWISE_NOT_OPERATOR = 397, SHIFT_LEFT_OPERATOR = 398, SHIFT_RIGHT_OPERATOR = 399, 
    LOGICAL_AND_OPERATOR = 400, BITWISE_AND_OPERATOR = 401, BITWISE_XOR_OPERATOR = 402, 
    LOGICAL_OR_OPERATOR = 403, BITWISE_OR_OPERATOR = 404, DOT_SYMBOL = 405, 
    COMMA_SYMBOL = 406, SEMICOLON_SYMBOL = 407, COLON_SYMBOL = 408, OPEN_PAR_SYMBOL = 409, 
    CLOSE_PAR_SYMBOL = 410, OPEN_CURLY_SYMBOL = 411, CLOSE_CURLY_SYMBOL = 412, 
    UNDERLINE_SYMBOL = 413, JSON_SEPARATOR_SYMBOL = 414, JSON_UNQUOTED_SEPARATOR_SYMBOL = 415, 
    AT_SIGN_SYMBOL = 416, AT_TEXT_SUFFIX = 417, AT_AT_SIGN_SYMBOL = 418, 
    NULL2_SYMBOL = 419, PARAM_MARKER = 420, HEX_NUMBER = 421, BIN_NUMBER = 422, 
    DECIMAL_NUMBER = 423, FLOAT_NUMBER = 424, ACCESSIBLE_SYMBOL = 425, ADD_SYMBOL = 426, 
    ALL_SYMBOL = 427, ALTER_SYMBOL = 428, ANALYSE_SYMBOL = 429, AND_SYMBOL = 430, 
    AS_SYMBOL = 431, ASC_SYMBOL = 432, ASENSITIVE_SYMBOL = 433, BEFORE_SYMBOL = 434, 
    BETWEEN_SYMBOL = 435, BIGINT_SYMBOL = 436, BINARY_SYMBOL = 437, BIN_NUM_SYMBOL = 438, 
    BIT_AND_SYMBOL = 439, BIT_OR_SYMBOL = 440, BIT_XOR_SYMBOL = 441, BLOB_SYMBOL = 442, 
    BOTH_SYMBOL = 443, BY_SYMBOL = 444, CALL_SYMBOL = 445, CASCADE_SYMBOL = 446, 
    CASE_SYMBOL = 447, CAST_SYMBOL = 448, CHANGE_SYMBOL = 449, CHAR_SYMBOL = 450, 
    CHECK_SYMBOL = 451, COLLATE_SYMBOL = 452, COLUMN_SYMBOL = 453, CONDITION_SYMBOL = 454, 
    CONSTRAINT_SYMBOL = 455, CONTINUE_SYMBOL = 456, CONVERT_SYMBOL = 457, 
    COUNT_SYMBOL = 458, CREATE_SYMBOL = 459, CROSS_SYMBOL = 460, CURDATE_SYMBOL = 461, 
    CURRENT_DATE_SYMBOL = 462, CURRENT_TIME_SYMBOL = 463, CURRENT_USER_SYMBOL = 464, 
    CURSOR_SYMBOL = 465, CURTIME_SYMBOL = 466, DATABASE_SYMBOL = 467, DATABASES_SYMBOL = 468, 
    DATE_ADD_SYMBOL = 469, DATE_SUB_SYMBOL = 470, DAY_HOUR_SYMBOL = 471, 
    DAY_MICROSECOND_SYMBOL = 472, DAY_MINUTE_SYMBOL = 473, DAY_SECOND_SYMBOL = 474, 
    DECIMAL_NUM_SYMBOL = 475, DECIMAL_SYMBOL = 476, DECLARE_SYMBOL = 477, 
    DEFAULT_SYMBOL = 478, DELAYED_SYMBOL = 479, DELETE_SYMBOL = 480, DESC_SYMBOL = 481, 
    DESCRIBE_SYMBOL = 482, DETERMINISTIC_SYMBOL = 483, DISTINCT_SYMBOL = 484, 
    DIV_SYMBOL = 485, DOUBLE_SYMBOL = 486, DROP_SYMBOL = 487, DUAL_SYMBOL = 488, 
    EACH_SYMBOL = 489, ELSE_SYMBOL = 490, ELSEIF_SYMBOL = 491, ENCLOSED_SYMBOL = 492, 
    END_OF_INPUT_SYMBOL = 493, ESCAPED_SYMBOL = 494, EXCHANGE_SYMBOL = 495, 
    EXISTS_SYMBOL = 496, EXIT_SYMBOL = 497, EXPIRE_SYMBOL = 498, EXTRACT_SYMBOL = 499, 
    FALSE_SYMBOL = 500, FETCH_SYMBOL = 501, FLOAT_SYMBOL = 502, FORCE_SYMBOL = 503, 
    FOREIGN_SYMBOL = 504, FOR_SYMBOL = 505, FROM_SYMBOL = 506, FULLTEXT_SYMBOL = 507, 
    GET_SYMBOL = 508, GENERATED_SYMBOL = 509, GRANT_SYMBOL = 510, GROUP_SYMBOL = 511, 
    GROUP_CONCAT_SYMBOL = 512, HAVING_SYMBOL = 513, HIGH_PRIORITY_SYMBOL = 514, 
    HOUR_MICROSECOND_SYMBOL = 515, HOUR_MINUTE_SYMBOL = 516, HOUR_SECOND_SYMBOL = 517, 
    IF_SYMBOL = 518, IGNORE_SYMBOL = 519, INDEX_SYMBOL = 520, INFILE_SYMBOL = 521, 
    INNER_SYMBOL = 522, INOUT_SYMBOL = 523, INSENSITIVE_SYMBOL = 524, INSERT_SYMBOL = 525, 
    INTERVAL_SYMBOL = 526, INTO_SYMBOL = 527, INT_SYMBOL = 528, IN_SYMBOL = 529, 
    IO_AFTER_GTIDS_SYMBOL = 530, IO_BEFORE_GTIDS_SYMBOL = 531, IS_SYMBOL = 532, 
    ITERATE_SYMBOL = 533, JOIN_SYMBOL = 534, KEYS_SYMBOL = 535, KEY_SYMBOL = 536, 
    KILL_SYMBOL = 537, LEADING_SYMBOL = 538, LEAVE_SYMBOL = 539, LEFT_SYMBOL = 540, 
    LIKE_SYMBOL = 541, LIMIT_SYMBOL = 542, LINEAR_SYMBOL = 543, LINES_SYMBOL = 544, 
    LOAD_SYMBOL = 545, LOCATOR_SYMBOL = 546, LOCK_SYMBOL = 547, LONGBLOB_SYMBOL = 548, 
    LONGTEXT_SYMBOL = 549, LONG_NUM_SYMBOL = 550, LONG_SYMBOL = 551, LOOP_SYMBOL = 552, 
    LOW_PRIORITY_SYMBOL = 553, MASTER_BIND_SYMBOL = 554, MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL = 555, 
    MATCH_SYMBOL = 556, MAX_SYMBOL = 557, MAXVALUE_SYMBOL = 558, MEDIUMBLOB_SYMBOL = 559, 
    MEDIUMINT_SYMBOL = 560, MEDIUMTEXT_SYMBOL = 561, MID_SYMBOL = 562, MINUTE_MICROSECOND_SYMBOL = 563, 
    MINUTE_SECOND_SYMBOL = 564, MIN_SYMBOL = 565, MODIFIES_SYMBOL = 566, 
    MOD_SYMBOL = 567, NATURAL_SYMBOL = 568, NCHAR_STRING_SYMBOL = 569, NEG_SYMBOL = 570, 
    NONBLOCKING_SYMBOL = 571, NOT_SYMBOL = 572, NOW_SYMBOL = 573, NO_WRITE_TO_BINLOG_SYMBOL = 574, 
    NULL_SYMBOL = 575, NUMERIC_SYMBOL = 576, OFFLINE_SYMBOL = 577, ON_SYMBOL = 578, 
    ONLINE_SYMBOL = 579, ONLY_SYMBOL = 580, OPTIMIZE_SYMBOL = 581, OPTIMIZER_COSTS_SYMBOL = 582, 
    OPTION_SYMBOL = 583, OPTIONALLY_SYMBOL = 584, ORDER_SYMBOL = 585, OR_SYMBOL = 586, 
    OUTER_SYMBOL = 587, OUTFILE_SYMBOL = 588, OUT_SYMBOL = 589, POSITION_SYMBOL = 590, 
    PRECISION_SYMBOL = 591, PRIMARY_SYMBOL = 592, PROCEDURE_SYMBOL = 593, 
    PURGE_SYMBOL = 594, RANGE_SYMBOL = 595, READS_SYMBOL = 596, READ_SYMBOL = 597, 
    READ_WRITE_SYMBOL = 598, REAL_SYMBOL = 599, REFERENCES_SYMBOL = 600, 
    REGEXP_SYMBOL = 601, RELEASE_SYMBOL = 602, RENAME_SYMBOL = 603, REPEAT_SYMBOL = 604, 
    REPLACE_SYMBOL = 605, REQUIRE_SYMBOL = 606, RESIGNAL_SYMBOL = 607, RESTRICT_SYMBOL = 608, 
    RETURN_SYMBOL = 609, REVOKE_SYMBOL = 610, RIGHT_SYMBOL = 611, SECOND_MICROSECOND_SYMBOL = 612, 
    SELECT_SYMBOL = 613, SENSITIVE_SYMBOL = 614, SEPARATOR_SYMBOL = 615, 
    SERVER_OPTIONS_SYMBOL = 616, SESSION_USER_SYMBOL = 617, SET_SYMBOL = 618, 
    SET_VAR_SYMBOL = 619, SHOW_SYMBOL = 620, SIGNAL_SYMBOL = 621, SMALLINT_SYMBOL = 622, 
    SPATIAL_SYMBOL = 623, SPECIFIC_SYMBOL = 624, SQLEXCEPTION_SYMBOL = 625, 
    SQLSTATE_SYMBOL = 626, SQLWARNING_SYMBOL = 627, SQL_BIG_RESULT_SYMBOL = 628, 
    SQL_CALC_FOUND_ROWS_SYMBOL = 629, SQL_SMALL_RESULT_SYMBOL = 630, SQL_SYMBOL = 631, 
    SSL_SYMBOL = 632, STARTING_SYMBOL = 633, STDDEV_SAMP_SYMBOL = 634, STDDEV_SYMBOL = 635, 
    STDDEV_POP_SYMBOL = 636, STD_SYMBOL = 637, STORED_SYMBOL = 638, STRAIGHT_JOIN_SYMBOL = 639, 
    SUBSTR_SYMBOL = 640, SUBSTRING_SYMBOL = 641, SUM_SYMBOL = 642, SYSDATE_SYMBOL = 643, 
    SYSTEM_USER_SYMBOL = 644, TABLE_REF_PRIORITY_SYMBOL = 645, TABLE_SYMBOL = 646, 
    TERMINATED_SYMBOL = 647, THEN_SYMBOL = 648, TINYBLOB_SYMBOL = 649, TINYINT_SYMBOL = 650, 
    TINYTEXT_SYMBOL = 651, TO_SYMBOL = 652, TRAILING_SYMBOL = 653, TRIGGER_SYMBOL = 654, 
    TRIM_SYMBOL = 655, TRUE_SYMBOL = 656, UNDO_SYMBOL = 657, UNION_SYMBOL = 658, 
    UNIQUE_SYMBOL = 659, UNLOCK_SYMBOL = 660, UNSIGNED_SYMBOL = 661, UPDATE_SYMBOL = 662, 
    USAGE_SYMBOL = 663, USE_SYMBOL = 664, USING_SYMBOL = 665, UTC_DATE_SYMBOL = 666, 
    UTC_TIMESTAMP_SYMBOL = 667, UTC_TIME_SYMBOL = 668, VALIDATION_SYMBOL = 669, 
    VALUES_SYMBOL = 670, VARBINARY_SYMBOL = 671, VARCHAR_SYMBOL = 672, VARIANCE_SYMBOL = 673, 
    VARYING_SYMBOL = 674, VAR_POP_SYMBOL = 675, VAR_SAMP_SYMBOL = 676, VIRTUAL_SYMBOL = 677, 
    WHEN_SYMBOL = 678, WHERE_SYMBOL = 679, WHILE_SYMBOL = 680, WITH_SYMBOL = 681, 
    WITH_CUBE_SYMBOL = 682, WITH_ROLLUP_SYMBOL = 683, WITHOUT_SYMBOL = 684, 
    WRITE_SYMBOL = 685, XOR_SYMBOL = 686, YEAR_MONTH_SYMBOL = 687, ZEROFILL_SYMBOL = 688, 
    PERSIST_SYMBOL = 689, ROLE_SYMBOL = 690, ADMIN_SYMBOL = 691, INVISIBLE_SYMBOL = 692, 
    VISIBLE_SYMBOL = 693, EXCEPT_SYMBOL = 694, COMPONENT_SYMBOL = 695, RECURSIVE_SYMBOL = 696, 
    JSON_OBJECTAGG_SYMBOL = 697, JSON_ARRAYAGG_SYMBOL = 698, OF_SYMBOL = 699, 
    SKIP_SYMBOL = 700, LOCKED_SYMBOL = 701, NOWAIT_SYMBOL = 702, GROUPING_SYMBOL = 703, 
    PERSIST_ONLY_SYMBOL = 704, HISTOGRAM_SYMBOL = 705, BUCKETS_SYMBOL = 706, 
    REMOTE_SYMBOL = 707, CLONE_SYMBOL = 708, CUME_DIST_SYMBOL = 709, DENSE_RANK_SYMBOL = 710, 
    EXCLUDE_SYMBOL = 711, FIRST_VALUE_SYMBOL = 712, FOLLOWING_SYMBOL = 713, 
    GROUPS_SYMBOL = 714, LAG_SYMBOL = 715, LAST_VALUE_SYMBOL = 716, LEAD_SYMBOL = 717, 
    NTH_VALUE_SYMBOL = 718, NTILE_SYMBOL = 719, NULLS_SYMBOL = 720, OTHERS_SYMBOL = 721, 
    OVER_SYMBOL = 722, PERCENT_RANK_SYMBOL = 723, PRECEDING_SYMBOL = 724, 
    RANK_SYMBOL = 725, RESPECT_SYMBOL = 726, ROW_NUMBER_SYMBOL = 727, TIES_SYMBOL = 728, 
    UNBOUNDED_SYMBOL = 729, WINDOW_SYMBOL = 730, EMPTY_SYMBOL = 731, JSON_TABLE_SYMBOL = 732, 
    NESTED_SYMBOL = 733, ORDINALITY_SYMBOL = 734, PATH_SYMBOL = 735, HISTORY_SYMBOL = 736, 
    REUSE_SYMBOL = 737, SRID_SYMBOL = 738, THREAD_PRIORITY_SYMBOL = 739, 
    RESOURCE_SYMBOL = 740, SYSTEM_SYMBOL = 741, VCPU_SYMBOL = 742, MASTER_PUBLIC_KEY_PATH_SYMBOL = 743, 
    GET_MASTER_PUBLIC_KEY_SYM = 744, RESTART_SYMBOL = 745, DEFINITION_SYMBOL = 746, 
    DESCRIPTION_SYMBOL = 747, ORGANIZATION_SYMBOL = 748, REFERENCE_SYMBOL = 749, 
    OPTIONAL_SYMBOL = 750, SECONDARY_SYMBOL = 751, SECONDARY_ENGINE_SYMBOL = 752, 
    SECONDARY_LOAD_SYMBOL = 753, SECONDARY_UNLOAD_SYMBOL = 754, ACTIVE_SYMBOL = 755, 
    INACTIVE_SYMBOL = 756, LATERAL_SYMBOL = 757, RETAIN_SYMBOL = 758, OLD_SYMBOL = 759, 
    WHITESPACE = 760, INVALID_INPUT = 761, UNDERSCORE_CHARSET = 762, IDENTIFIER = 763, 
    NCHAR_TEXT = 764, BACK_TICK_QUOTED_ID = 765, DOUBLE_QUOTED_TEXT = 766, 
    SINGLE_QUOTED_TEXT = 767, VERSION_COMMENT_START = 768, MYSQL_COMMENT_START = 769, 
    VERSION_COMMENT_END = 770, BLOCK_COMMENT = 771, POUND_COMMENT = 772, 
    DASHDASH_COMMENT = 773, NOT_EQUAL2_OPERATOR = 774
  };

  enum {
    RuleQuery = 0, RuleSimpleStatement = 1, RuleAlterStatement = 2, RuleAlterDatabase = 3, 
    RuleAlterEvent = 4, RuleAlterLogfileGroup = 5, RuleAlterLogfileGroupOptions = 6, 
    RuleAlterLogfileGroupOption = 7, RuleAlterServer = 8, RuleAlterTable = 9, 
    RuleAlterTableActions = 10, RuleAlterCommandList = 11, RuleAlterCommandsModifierList = 12, 
    RuleStandaloneAlterCommands = 13, RuleAlterPartition = 14, RuleAlterList = 15, 
    RuleAlterCommandsModifier = 16, RuleAlterListItem = 17, RulePlace = 18, 
    RuleRestrict = 19, RuleAlterOrderList = 20, RuleAlterAlgorithmOption = 21, 
    RuleAlterLockOption = 22, RuleIndexLockAndAlgorithm = 23, RuleWithValidation = 24, 
    RuleRemovePartitioning = 25, RuleAllOrPartitionNameList = 26, RuleReorgPartitionRule = 27, 
    RuleAlterTablespace = 28, RuleAlterUndoTablespace = 29, RuleUndoTableSpaceOptions = 30, 
    RuleUndoTableSpaceOption = 31, RuleAlterTablespaceOptions = 32, RuleAlterTablespaceOption = 33, 
    RuleChangeTablespaceOption = 34, RuleAlterView = 35, RuleViewTail = 36, 
    RuleViewSelect = 37, RuleViewCheckOption = 38, RuleCreateStatement = 39, 
    RuleCreateDatabase = 40, RuleCreateDatabaseOption = 41, RuleCreateTable = 42, 
    RuleTableElementList = 43, RuleTableElement = 44, RuleDuplicateAsQueryExpression = 45, 
    RuleQueryExpressionOrParens = 46, RuleCreateRoutine = 47, RuleCreateProcedure = 48, 
    RuleCreateFunction = 49, RuleCreateUdf = 50, RuleRoutineCreateOption = 51, 
    RuleRoutineAlterOptions = 52, RuleRoutineOption = 53, RuleCreateIndex = 54, 
    RuleIndexNameAndType = 55, RuleCreateIndexTarget = 56, RuleCreateLogfileGroup = 57, 
    RuleLogfileGroupOptions = 58, RuleLogfileGroupOption = 59, RuleCreateServer = 60, 
    RuleServerOptions = 61, RuleServerOption = 62, RuleCreateTablespace = 63, 
    RuleCreateUndoTablespace = 64, RuleTsDataFileName = 65, RuleTsDataFile = 66, 
    RuleTablespaceOptions = 67, RuleTablespaceOption = 68, RuleTsOptionInitialSize = 69, 
    RuleTsOptionUndoRedoBufferSize = 70, RuleTsOptionAutoextendSize = 71, 
    RuleTsOptionMaxSize = 72, RuleTsOptionExtentSize = 73, RuleTsOptionNodegroup = 74, 
    RuleTsOptionEngine = 75, RuleTsOptionWait = 76, RuleTsOptionComment = 77, 
    RuleTsOptionFileblockSize = 78, RuleTsOptionEncryption = 79, RuleCreateView = 80, 
    RuleViewReplaceOrAlgorithm = 81, RuleViewAlgorithm = 82, RuleViewSuid = 83, 
    RuleCreateTrigger = 84, RuleTriggerFollowsPrecedesClause = 85, RuleCreateEvent = 86, 
    RuleCreateRole = 87, RuleCreateSpatialReference = 88, RuleSrsAttribute = 89, 
    RuleDropStatement = 90, RuleDropDatabase = 91, RuleDropEvent = 92, RuleDropFunction = 93, 
    RuleDropProcedure = 94, RuleDropIndex = 95, RuleDropLogfileGroup = 96, 
    RuleDropLogfileGroupOption = 97, RuleDropServer = 98, RuleDropTable = 99, 
    RuleDropTableSpace = 100, RuleDropTrigger = 101, RuleDropView = 102, 
    RuleDropRole = 103, RuleDropSpatialReference = 104, RuleDropUndoTablespace = 105, 
    RuleRenameTableStatement = 106, RuleRenamePair = 107, RuleTruncateTableStatement = 108, 
    RuleImportStatement = 109, RuleCallStatement = 110, RuleDeleteStatement = 111, 
    RulePartitionDelete = 112, RuleDeleteStatementOption = 113, RuleDoStatement = 114, 
    RuleHandlerStatement = 115, RuleHandlerReadOrScan = 116, RuleInsertStatement = 117, 
    RuleInsertLockOption = 118, RuleInsertFromConstructor = 119, RuleFields = 120, 
    RuleInsertValues = 121, RuleInsertQueryExpression = 122, RuleValueList = 123, 
    RuleValues = 124, RuleInsertUpdateList = 125, RuleLoadStatement = 126, 
    RuleDataOrXml = 127, RuleXmlRowsIdentifiedBy = 128, RuleLoadDataFileTail = 129, 
    RuleLoadDataFileTargetList = 130, RuleFieldOrVariableList = 131, RuleReplaceStatement = 132, 
    RuleSelectStatement = 133, RuleSelectStatementWithInto = 134, RuleQueryExpression = 135, 
    RuleQueryExpressionBody = 136, RuleQueryExpressionParens = 137, RuleQuerySpecification = 138, 
    RuleSubquery = 139, RuleQuerySpecOption = 140, RuleLimitClause = 141, 
    RuleSimpleLimitClause = 142, RuleLimitOptions = 143, RuleLimitOption = 144, 
    RuleIntoClause = 145, RuleProcedureAnalyseClause = 146, RuleHavingClause = 147, 
    RuleWindowClause = 148, RuleWindowDefinition = 149, RuleWindowSpec = 150, 
    RuleWindowSpecDetails = 151, RuleWindowFrameClause = 152, RuleWindowFrameUnits = 153, 
    RuleWindowFrameExtent = 154, RuleWindowFrameStart = 155, RuleWindowFrameBetween = 156, 
    RuleWindowFrameBound = 157, RuleWindowFrameExclusion = 158, RuleWithClause = 159, 
    RuleCommonTableExpression = 160, RuleGroupByClause = 161, RuleOlapOption = 162, 
    RuleOrderClause = 163, RuleDirection = 164, RuleFromClause = 165, RuleTableReferenceList = 166, 
    RuleSelectOption = 167, RuleLockingClause = 168, RuleLockStrengh = 169, 
    RuleLockedRowAction = 170, RuleSelectItemList = 171, RuleSelectItem = 172, 
    RuleSelectAlias = 173, RuleWhereClause = 174, RuleTableReference = 175, 
    RuleEscapedTableReference = 176, RuleJoinedTable = 177, RuleNaturalJoinType = 178, 
    RuleInnerJoinType = 179, RuleOuterJoinType = 180, RuleTableFactor = 181, 
    RuleSingleTable = 182, RuleSingleTableParens = 183, RuleDerivedTable = 184, 
    RuleTableReferenceListParens = 185, RuleTableFunction = 186, RuleColumnsClause = 187, 
    RuleJtColumn = 188, RuleOnEmptyOrError = 189, RuleOnEmpty = 190, RuleOnError = 191, 
    RuleJtOnResponse = 192, RuleUnionOption = 193, RuleTableAlias = 194, 
    RuleIndexHintList = 195, RuleIndexHint = 196, RuleIndexHintType = 197, 
    RuleKeyOrIndex = 198, RuleConstraintKeyType = 199, RuleIndexHintClause = 200, 
    RuleIndexList = 201, RuleIndexListElement = 202, RuleUpdateStatement = 203, 
    RuleTransactionOrLockingStatement = 204, RuleTransactionStatement = 205, 
    RuleBeginWork = 206, RuleTransactionCharacteristic = 207, RuleSetTransactionCharacteristic = 208, 
    RuleIsolationLevel = 209, RuleSavepointStatement = 210, RuleLockStatement = 211, 
    RuleLockItem = 212, RuleLockOption = 213, RuleXaStatement = 214, RuleXaConvert = 215, 
    RuleXid = 216, RuleReplicationStatement = 217, RuleResetOption = 218, 
    RuleMasterResetOptions = 219, RuleReplicationLoad = 220, RuleChangeMaster = 221, 
    RuleChangeMasterOptions = 222, RuleMasterOption = 223, RuleMasterFileDef = 224, 
    RuleServerIdList = 225, RuleChangeReplication = 226, RuleFilterDefinition = 227, 
    RuleFilterDbList = 228, RuleFilterTableList = 229, RuleFilterStringList = 230, 
    RuleFilterWildDbTableString = 231, RuleFilterDbPairList = 232, RuleSlave = 233, 
    RuleSlaveUntilOptions = 234, RuleSlaveConnectionOptions = 235, RuleSlaveThreadOptions = 236, 
    RuleSlaveThreadOption = 237, RuleGroupReplication = 238, RulePreparedStatement = 239, 
    RuleExecuteStatement = 240, RuleExecuteVarList = 241, RuleCloneStatement = 242, 
    RuleDataDirSSL = 243, RuleSsl = 244, RuleAccountManagementStatement = 245, 
    RuleAlterUser = 246, RuleAlterUserTail = 247, RuleCreateUser = 248, 
    RuleCreateUserTail = 249, RuleDefaultRoleClause = 250, RuleRequireClause = 251, 
    RuleConnectOptions = 252, RuleAccountLockPasswordExpireOptions = 253, 
    RuleDropUser = 254, RuleGrant = 255, RuleGrantTargetList = 256, RuleGrantOptions = 257, 
    RuleVersionedRequireClause = 258, RuleRenameUser = 259, RuleRevoke = 260, 
    RuleOnTypeTo = 261, RuleAclType = 262, RuleSetPassword = 263, RuleRoleOrPrivilegesList = 264, 
    RuleRoleOrPrivilege = 265, RuleGrantIdentifier = 266, RuleRequireList = 267, 
    RuleRequireListElement = 268, RuleGrantOption = 269, RuleSetRole = 270, 
    RuleRoleList = 271, RuleRole = 272, RuleTableAdministrationStatement = 273, 
    RuleHistogram = 274, RuleCheckOption = 275, RuleRepairType = 276, RuleInstallUninstallStatment = 277, 
    RuleSetStatement = 278, RuleOptionValueNoOptionType = 279, RuleSetSystemVariable = 280, 
    RuleOptionValueFollowingOptionType = 281, RuleSetExprOrDefault = 282, 
    RuleOptionValueList = 283, RuleOptionValue = 284, RuleShowStatement = 285, 
    RuleShowCommandType = 286, RuleNonBlocking = 287, RuleFromOrIn = 288, 
    RuleInDb = 289, RuleProfileType = 290, RuleOtherAdministrativeStatement = 291, 
    RuleKeyCacheListOrParts = 292, RuleKeyCacheList = 293, RuleAssignToKeycache = 294, 
    RuleAssignToKeycachePartition = 295, RuleCacheKeyList = 296, RuleKeyUsageElement = 297, 
    RuleKeyUsageList = 298, RuleFlushOption = 299, RuleLogType = 300, RuleFlushTables = 301, 
    RuleFlushTablesOptions = 302, RulePreloadTail = 303, RulePreloadList = 304, 
    RulePreloadKeys = 305, RuleAdminPartition = 306, RuleResourceGroupManagement = 307, 
    RuleCreateResourceGroup = 308, RuleResourceGroupVcpuList = 309, RuleVcpuNumOrRange = 310, 
    RuleResourceGroupPriority = 311, RuleResourceGroupEnableDisable = 312, 
    RuleAlterResourceGroup = 313, RuleSetResourceGroup = 314, RuleThreadIdList = 315, 
    RuleDropResourceGroup = 316, RuleUtilityStatement = 317, RuleDescribeCommand = 318, 
    RuleExplainCommand = 319, RuleExplainableStatement = 320, RuleHelpCommand = 321, 
    RuleUseCommand = 322, RuleRestartServer = 323, RuleExpr = 324, RuleBoolPri = 325, 
    RuleCompOp = 326, RulePredicate = 327, RulePredicateOperations = 328, 
    RuleBitExpr = 329, RuleSimpleExpr = 330, RuleJsonOperator = 331, RuleSumExpr = 332, 
    RuleGroupingOperation = 333, RuleWindowFunctionCall = 334, RuleWindowingClause = 335, 
    RuleLeadLagInfo = 336, RuleNullTreatment = 337, RuleJsonFunction = 338, 
    RuleInSumExpr = 339, RuleIdentListArg = 340, RuleIdentList = 341, RuleFulltextOptions = 342, 
    RuleRuntimeFunctionCall = 343, RuleGeometryFunction = 344, RuleTimeFunctionParameters = 345, 
    RuleFractionalPrecision = 346, RuleWeightStringLevels = 347, RuleWeightStringLevelListItem = 348, 
    RuleDateTimeTtype = 349, RuleTrimFunction = 350, RuleSubstringFunction = 351, 
    RuleFunctionCall = 352, RuleUdfExprList = 353, RuleUdfExpr = 354, RuleVariable = 355, 
    RuleUserVariable = 356, RuleSystemVariable = 357, RuleInternalVariableName = 358, 
    RuleWhenExpression = 359, RuleThenExpression = 360, RuleElseExpression = 361, 
    RuleCastType = 362, RuleExprList = 363, RuleCharset = 364, RuleNotRule = 365, 
    RuleNot2Rule = 366, RuleInterval = 367, RuleIntervalTimeStamp = 368, 
    RuleExprListWithParentheses = 369, RuleExprWithParentheses = 370, RuleOrderList = 371, 
    RuleOrderExpression = 372, RuleGroupList = 373, RuleGroupingExpression = 374, 
    RuleChannel = 375, RuleCompoundStatement = 376, RuleReturnStatement = 377, 
    RuleIfStatement = 378, RuleIfBody = 379, RuleThenStatement = 380, RuleCompoundStatementList = 381, 
    RuleCaseStatement = 382, RuleElseStatement = 383, RuleLabeledBlock = 384, 
    RuleUnlabeledBlock = 385, RuleLabel = 386, RuleBeginEndBlock = 387, 
    RuleLabeledControl = 388, RuleUnlabeledControl = 389, RuleLoopBlock = 390, 
    RuleWhileDoBlock = 391, RuleRepeatUntilBlock = 392, RuleSpDeclarations = 393, 
    RuleSpDeclaration = 394, RuleVariableDeclaration = 395, RuleConditionDeclaration = 396, 
    RuleSpCondition = 397, RuleSqlstate = 398, RuleHandlerDeclaration = 399, 
    RuleHandlerCondition = 400, RuleCursorDeclaration = 401, RuleIterateStatement = 402, 
    RuleLeaveStatement = 403, RuleGetDiagnostics = 404, RuleSignalAllowedExpr = 405, 
    RuleStatementInformationItem = 406, RuleConditionInformationItem = 407, 
    RuleSignalInformationItemName = 408, RuleSignalStatement = 409, RuleResignalStatement = 410, 
    RuleSignalInformationItem = 411, RuleCursorOpen = 412, RuleCursorClose = 413, 
    RuleCursorFetch = 414, RuleSchedule = 415, RuleColumnDefinition = 416, 
    RuleCheckOrReferences = 417, RuleCheckConstraint = 418, RuleTableConstraintDef = 419, 
    RuleFieldDefinition = 420, RuleColumnAttribute = 421, RuleGcolAttribute = 422, 
    RuleReferences = 423, RuleDeleteOption = 424, RuleKeyList = 425, RuleKeyPart = 426, 
    RuleKeyListWithExpression = 427, RuleKeyPartOrExpression = 428, RuleKeyListVariants = 429, 
    RuleIndexType = 430, RuleIndexOption = 431, RuleCommonIndexOption = 432, 
    RuleVisibility = 433, RuleIndexTypeClause = 434, RuleFulltextIndexOption = 435, 
    RuleSpatialIndexOption = 436, RuleDataTypeDefinition = 437, RuleDataType = 438, 
    RuleNchar = 439, RuleVarchar = 440, RuleNvarchar = 441, RuleFieldLength = 442, 
    RuleFieldOptions = 443, RuleCharsetWithOptBinary = 444, RuleAscii = 445, 
    RuleUnicode = 446, RuleWsNumCodepoints = 447, RuleTypeDatetimePrecision = 448, 
    RuleCharsetName = 449, RuleCollationName = 450, RuleCreateTableOptions = 451, 
    RuleCreateTableOptionsSpaceSeparated = 452, RuleCreateTableOption = 453, 
    RuleTernaryOption = 454, RuleDefaultCollation = 455, RuleDefaultEncryption = 456, 
    RuleDefaultCharset = 457, RulePartitionClause = 458, RulePartitionTypeDef = 459, 
    RuleSubPartitions = 460, RulePartitionKeyAlgorithm = 461, RulePartitionDefinitions = 462, 
    RulePartitionDefinition = 463, RulePartitionValuesIn = 464, RulePartitionOption = 465, 
    RuleSubpartitionDefinition = 466, RulePartitionValueItemListParen = 467, 
    RulePartitionValueItem = 468, RuleDefinerClause = 469, RuleIfExists = 470, 
    RuleIfNotExists = 471, RuleProcedureParameter = 472, RuleFunctionParameter = 473, 
    RuleCollate = 474, RuleTypeWithOptCollate = 475, RuleSchemaIdentifierPair = 476, 
    RuleViewRefList = 477, RuleUpdateList = 478, RuleUpdateElement = 479, 
    RuleCharsetClause = 480, RuleFieldsClause = 481, RuleFieldTerm = 482, 
    RuleLinesClause = 483, RuleLineTerm = 484, RuleUserList = 485, RuleCreateUserList = 486, 
    RuleAlterUserList = 487, RuleCreateUserEntry = 488, RuleAlterUserEntry = 489, 
    RuleRetainCurrentPassword = 490, RuleDiscardOldPassword = 491, RuleReplacePassword = 492, 
    RuleUser = 493, RuleLikeClause = 494, RuleLikeOrWhere = 495, RuleOnlineOption = 496, 
    RuleNoWriteToBinLog = 497, RuleUsePartition = 498, RuleFieldIdentifier = 499, 
    RuleColumnName = 500, RuleColumnInternalRef = 501, RuleColumnInternalRefList = 502, 
    RuleColumnRef = 503, RuleInsertIdentifier = 504, RuleIndexName = 505, 
    RuleIndexRef = 506, RuleTableWild = 507, RuleSchemaName = 508, RuleSchemaRef = 509, 
    RuleProcedureName = 510, RuleProcedureRef = 511, RuleFunctionName = 512, 
    RuleFunctionRef = 513, RuleTriggerName = 514, RuleTriggerRef = 515, 
    RuleViewName = 516, RuleViewRef = 517, RuleTablespaceName = 518, RuleTablespaceRef = 519, 
    RuleLogfileGroupName = 520, RuleLogfileGroupRef = 521, RuleEventName = 522, 
    RuleEventRef = 523, RuleUdfName = 524, RuleServerName = 525, RuleServerRef = 526, 
    RuleEngineRef = 527, RuleTableName = 528, RuleFilterTableRef = 529, 
    RuleTableRefWithWildcard = 530, RuleTableRef = 531, RuleTableRefList = 532, 
    RuleTableAliasRefList = 533, RuleParameterName = 534, RuleLabelIdentifier = 535, 
    RuleLabelRef = 536, RuleRoleIdentifier = 537, RuleRoleRef = 538, RulePluginRef = 539, 
    RuleComponentRef = 540, RuleResourceGroupRef = 541, RuleWindowName = 542, 
    RulePureIdentifier = 543, RuleIdentifier = 544, RuleIdentifierList = 545, 
    RuleIdentifierListWithParentheses = 546, RuleQualifiedIdentifier = 547, 
    RuleSimpleIdentifier = 548, RuleDotIdentifier = 549, RuleUlong_number = 550, 
    RuleReal_ulong_number = 551, RuleUlonglong_number = 552, RuleReal_ulonglong_number = 553, 
    RuleLiteral = 554, RuleSignedLiteral = 555, RuleStringList = 556, RuleTextStringLiteral = 557, 
    RuleTextString = 558, RuleTextLiteral = 559, RuleTextStringNoLinebreak = 560, 
    RuleTextStringLiteralList = 561, RuleNumLiteral = 562, RuleBoolLiteral = 563, 
    RuleNullLiteral = 564, RuleTemporalLiteral = 565, RuleFloatOptions = 566, 
    RulePrecision = 567, RuleTextOrIdentifier = 568, RuleRoleIdentifierOrText = 569, 
    RuleSizeNumber = 570, RuleParentheses = 571, RuleEqual = 572, RuleOptionType = 573, 
    RuleVarIdentType = 574, RuleSetVarIdentType = 575, RuleIdentifierKeyword = 576, 
    RuleLabelKeyword = 577, RuleRoleOrIdentifierKeyword = 578, RuleRoleOrLabelKeyword = 579, 
    RuleRoleKeyword = 580
  };

  MySQLParser(antlr4::TokenStream *input);
  ~MySQLParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class QueryContext;
  class SimpleStatementContext;
  class AlterStatementContext;
  class AlterDatabaseContext;
  class AlterEventContext;
  class AlterLogfileGroupContext;
  class AlterLogfileGroupOptionsContext;
  class AlterLogfileGroupOptionContext;
  class AlterServerContext;
  class AlterTableContext;
  class AlterTableActionsContext;
  class AlterCommandListContext;
  class AlterCommandsModifierListContext;
  class StandaloneAlterCommandsContext;
  class AlterPartitionContext;
  class AlterListContext;
  class AlterCommandsModifierContext;
  class AlterListItemContext;
  class PlaceContext;
  class RestrictContext;
  class AlterOrderListContext;
  class AlterAlgorithmOptionContext;
  class AlterLockOptionContext;
  class IndexLockAndAlgorithmContext;
  class WithValidationContext;
  class RemovePartitioningContext;
  class AllOrPartitionNameListContext;
  class ReorgPartitionRuleContext;
  class AlterTablespaceContext;
  class AlterUndoTablespaceContext;
  class UndoTableSpaceOptionsContext;
  class UndoTableSpaceOptionContext;
  class AlterTablespaceOptionsContext;
  class AlterTablespaceOptionContext;
  class ChangeTablespaceOptionContext;
  class AlterViewContext;
  class ViewTailContext;
  class ViewSelectContext;
  class ViewCheckOptionContext;
  class CreateStatementContext;
  class CreateDatabaseContext;
  class CreateDatabaseOptionContext;
  class CreateTableContext;
  class TableElementListContext;
  class TableElementContext;
  class DuplicateAsQueryExpressionContext;
  class QueryExpressionOrParensContext;
  class CreateRoutineContext;
  class CreateProcedureContext;
  class CreateFunctionContext;
  class CreateUdfContext;
  class RoutineCreateOptionContext;
  class RoutineAlterOptionsContext;
  class RoutineOptionContext;
  class CreateIndexContext;
  class IndexNameAndTypeContext;
  class CreateIndexTargetContext;
  class CreateLogfileGroupContext;
  class LogfileGroupOptionsContext;
  class LogfileGroupOptionContext;
  class CreateServerContext;
  class ServerOptionsContext;
  class ServerOptionContext;
  class CreateTablespaceContext;
  class CreateUndoTablespaceContext;
  class TsDataFileNameContext;
  class TsDataFileContext;
  class TablespaceOptionsContext;
  class TablespaceOptionContext;
  class TsOptionInitialSizeContext;
  class TsOptionUndoRedoBufferSizeContext;
  class TsOptionAutoextendSizeContext;
  class TsOptionMaxSizeContext;
  class TsOptionExtentSizeContext;
  class TsOptionNodegroupContext;
  class TsOptionEngineContext;
  class TsOptionWaitContext;
  class TsOptionCommentContext;
  class TsOptionFileblockSizeContext;
  class TsOptionEncryptionContext;
  class CreateViewContext;
  class ViewReplaceOrAlgorithmContext;
  class ViewAlgorithmContext;
  class ViewSuidContext;
  class CreateTriggerContext;
  class TriggerFollowsPrecedesClauseContext;
  class CreateEventContext;
  class CreateRoleContext;
  class CreateSpatialReferenceContext;
  class SrsAttributeContext;
  class DropStatementContext;
  class DropDatabaseContext;
  class DropEventContext;
  class DropFunctionContext;
  class DropProcedureContext;
  class DropIndexContext;
  class DropLogfileGroupContext;
  class DropLogfileGroupOptionContext;
  class DropServerContext;
  class DropTableContext;
  class DropTableSpaceContext;
  class DropTriggerContext;
  class DropViewContext;
  class DropRoleContext;
  class DropSpatialReferenceContext;
  class DropUndoTablespaceContext;
  class RenameTableStatementContext;
  class RenamePairContext;
  class TruncateTableStatementContext;
  class ImportStatementContext;
  class CallStatementContext;
  class DeleteStatementContext;
  class PartitionDeleteContext;
  class DeleteStatementOptionContext;
  class DoStatementContext;
  class HandlerStatementContext;
  class HandlerReadOrScanContext;
  class InsertStatementContext;
  class InsertLockOptionContext;
  class InsertFromConstructorContext;
  class FieldsContext;
  class InsertValuesContext;
  class InsertQueryExpressionContext;
  class ValueListContext;
  class ValuesContext;
  class InsertUpdateListContext;
  class LoadStatementContext;
  class DataOrXmlContext;
  class XmlRowsIdentifiedByContext;
  class LoadDataFileTailContext;
  class LoadDataFileTargetListContext;
  class FieldOrVariableListContext;
  class ReplaceStatementContext;
  class SelectStatementContext;
  class SelectStatementWithIntoContext;
  class QueryExpressionContext;
  class QueryExpressionBodyContext;
  class QueryExpressionParensContext;
  class QuerySpecificationContext;
  class SubqueryContext;
  class QuerySpecOptionContext;
  class LimitClauseContext;
  class SimpleLimitClauseContext;
  class LimitOptionsContext;
  class LimitOptionContext;
  class IntoClauseContext;
  class ProcedureAnalyseClauseContext;
  class HavingClauseContext;
  class WindowClauseContext;
  class WindowDefinitionContext;
  class WindowSpecContext;
  class WindowSpecDetailsContext;
  class WindowFrameClauseContext;
  class WindowFrameUnitsContext;
  class WindowFrameExtentContext;
  class WindowFrameStartContext;
  class WindowFrameBetweenContext;
  class WindowFrameBoundContext;
  class WindowFrameExclusionContext;
  class WithClauseContext;
  class CommonTableExpressionContext;
  class GroupByClauseContext;
  class OlapOptionContext;
  class OrderClauseContext;
  class DirectionContext;
  class FromClauseContext;
  class TableReferenceListContext;
  class SelectOptionContext;
  class LockingClauseContext;
  class LockStrenghContext;
  class LockedRowActionContext;
  class SelectItemListContext;
  class SelectItemContext;
  class SelectAliasContext;
  class WhereClauseContext;
  class TableReferenceContext;
  class EscapedTableReferenceContext;
  class JoinedTableContext;
  class NaturalJoinTypeContext;
  class InnerJoinTypeContext;
  class OuterJoinTypeContext;
  class TableFactorContext;
  class SingleTableContext;
  class SingleTableParensContext;
  class DerivedTableContext;
  class TableReferenceListParensContext;
  class TableFunctionContext;
  class ColumnsClauseContext;
  class JtColumnContext;
  class OnEmptyOrErrorContext;
  class OnEmptyContext;
  class OnErrorContext;
  class JtOnResponseContext;
  class UnionOptionContext;
  class TableAliasContext;
  class IndexHintListContext;
  class IndexHintContext;
  class IndexHintTypeContext;
  class KeyOrIndexContext;
  class ConstraintKeyTypeContext;
  class IndexHintClauseContext;
  class IndexListContext;
  class IndexListElementContext;
  class UpdateStatementContext;
  class TransactionOrLockingStatementContext;
  class TransactionStatementContext;
  class BeginWorkContext;
  class TransactionCharacteristicContext;
  class SetTransactionCharacteristicContext;
  class IsolationLevelContext;
  class SavepointStatementContext;
  class LockStatementContext;
  class LockItemContext;
  class LockOptionContext;
  class XaStatementContext;
  class XaConvertContext;
  class XidContext;
  class ReplicationStatementContext;
  class ResetOptionContext;
  class MasterResetOptionsContext;
  class ReplicationLoadContext;
  class ChangeMasterContext;
  class ChangeMasterOptionsContext;
  class MasterOptionContext;
  class MasterFileDefContext;
  class ServerIdListContext;
  class ChangeReplicationContext;
  class FilterDefinitionContext;
  class FilterDbListContext;
  class FilterTableListContext;
  class FilterStringListContext;
  class FilterWildDbTableStringContext;
  class FilterDbPairListContext;
  class SlaveContext;
  class SlaveUntilOptionsContext;
  class SlaveConnectionOptionsContext;
  class SlaveThreadOptionsContext;
  class SlaveThreadOptionContext;
  class GroupReplicationContext;
  class PreparedStatementContext;
  class ExecuteStatementContext;
  class ExecuteVarListContext;
  class CloneStatementContext;
  class DataDirSSLContext;
  class SslContext;
  class AccountManagementStatementContext;
  class AlterUserContext;
  class AlterUserTailContext;
  class CreateUserContext;
  class CreateUserTailContext;
  class DefaultRoleClauseContext;
  class RequireClauseContext;
  class ConnectOptionsContext;
  class AccountLockPasswordExpireOptionsContext;
  class DropUserContext;
  class GrantContext;
  class GrantTargetListContext;
  class GrantOptionsContext;
  class VersionedRequireClauseContext;
  class RenameUserContext;
  class RevokeContext;
  class OnTypeToContext;
  class AclTypeContext;
  class SetPasswordContext;
  class RoleOrPrivilegesListContext;
  class RoleOrPrivilegeContext;
  class GrantIdentifierContext;
  class RequireListContext;
  class RequireListElementContext;
  class GrantOptionContext;
  class SetRoleContext;
  class RoleListContext;
  class RoleContext;
  class TableAdministrationStatementContext;
  class HistogramContext;
  class CheckOptionContext;
  class RepairTypeContext;
  class InstallUninstallStatmentContext;
  class SetStatementContext;
  class OptionValueNoOptionTypeContext;
  class SetSystemVariableContext;
  class OptionValueFollowingOptionTypeContext;
  class SetExprOrDefaultContext;
  class OptionValueListContext;
  class OptionValueContext;
  class ShowStatementContext;
  class ShowCommandTypeContext;
  class NonBlockingContext;
  class FromOrInContext;
  class InDbContext;
  class ProfileTypeContext;
  class OtherAdministrativeStatementContext;
  class KeyCacheListOrPartsContext;
  class KeyCacheListContext;
  class AssignToKeycacheContext;
  class AssignToKeycachePartitionContext;
  class CacheKeyListContext;
  class KeyUsageElementContext;
  class KeyUsageListContext;
  class FlushOptionContext;
  class LogTypeContext;
  class FlushTablesContext;
  class FlushTablesOptionsContext;
  class PreloadTailContext;
  class PreloadListContext;
  class PreloadKeysContext;
  class AdminPartitionContext;
  class ResourceGroupManagementContext;
  class CreateResourceGroupContext;
  class ResourceGroupVcpuListContext;
  class VcpuNumOrRangeContext;
  class ResourceGroupPriorityContext;
  class ResourceGroupEnableDisableContext;
  class AlterResourceGroupContext;
  class SetResourceGroupContext;
  class ThreadIdListContext;
  class DropResourceGroupContext;
  class UtilityStatementContext;
  class DescribeCommandContext;
  class ExplainCommandContext;
  class ExplainableStatementContext;
  class HelpCommandContext;
  class UseCommandContext;
  class RestartServerContext;
  class ExprContext;
  class BoolPriContext;
  class CompOpContext;
  class PredicateContext;
  class PredicateOperationsContext;
  class BitExprContext;
  class SimpleExprContext;
  class JsonOperatorContext;
  class SumExprContext;
  class GroupingOperationContext;
  class WindowFunctionCallContext;
  class WindowingClauseContext;
  class LeadLagInfoContext;
  class NullTreatmentContext;
  class JsonFunctionContext;
  class InSumExprContext;
  class IdentListArgContext;
  class IdentListContext;
  class FulltextOptionsContext;
  class RuntimeFunctionCallContext;
  class GeometryFunctionContext;
  class TimeFunctionParametersContext;
  class FractionalPrecisionContext;
  class WeightStringLevelsContext;
  class WeightStringLevelListItemContext;
  class DateTimeTtypeContext;
  class TrimFunctionContext;
  class SubstringFunctionContext;
  class FunctionCallContext;
  class UdfExprListContext;
  class UdfExprContext;
  class VariableContext;
  class UserVariableContext;
  class SystemVariableContext;
  class InternalVariableNameContext;
  class WhenExpressionContext;
  class ThenExpressionContext;
  class ElseExpressionContext;
  class CastTypeContext;
  class ExprListContext;
  class CharsetContext;
  class NotRuleContext;
  class Not2RuleContext;
  class IntervalContext;
  class IntervalTimeStampContext;
  class ExprListWithParenthesesContext;
  class ExprWithParenthesesContext;
  class OrderListContext;
  class OrderExpressionContext;
  class GroupListContext;
  class GroupingExpressionContext;
  class ChannelContext;
  class CompoundStatementContext;
  class ReturnStatementContext;
  class IfStatementContext;
  class IfBodyContext;
  class ThenStatementContext;
  class CompoundStatementListContext;
  class CaseStatementContext;
  class ElseStatementContext;
  class LabeledBlockContext;
  class UnlabeledBlockContext;
  class LabelContext;
  class BeginEndBlockContext;
  class LabeledControlContext;
  class UnlabeledControlContext;
  class LoopBlockContext;
  class WhileDoBlockContext;
  class RepeatUntilBlockContext;
  class SpDeclarationsContext;
  class SpDeclarationContext;
  class VariableDeclarationContext;
  class ConditionDeclarationContext;
  class SpConditionContext;
  class SqlstateContext;
  class HandlerDeclarationContext;
  class HandlerConditionContext;
  class CursorDeclarationContext;
  class IterateStatementContext;
  class LeaveStatementContext;
  class GetDiagnosticsContext;
  class SignalAllowedExprContext;
  class StatementInformationItemContext;
  class ConditionInformationItemContext;
  class SignalInformationItemNameContext;
  class SignalStatementContext;
  class ResignalStatementContext;
  class SignalInformationItemContext;
  class CursorOpenContext;
  class CursorCloseContext;
  class CursorFetchContext;
  class ScheduleContext;
  class ColumnDefinitionContext;
  class CheckOrReferencesContext;
  class CheckConstraintContext;
  class TableConstraintDefContext;
  class FieldDefinitionContext;
  class ColumnAttributeContext;
  class GcolAttributeContext;
  class ReferencesContext;
  class DeleteOptionContext;
  class KeyListContext;
  class KeyPartContext;
  class KeyListWithExpressionContext;
  class KeyPartOrExpressionContext;
  class KeyListVariantsContext;
  class IndexTypeContext;
  class IndexOptionContext;
  class CommonIndexOptionContext;
  class VisibilityContext;
  class IndexTypeClauseContext;
  class FulltextIndexOptionContext;
  class SpatialIndexOptionContext;
  class DataTypeDefinitionContext;
  class DataTypeContext;
  class NcharContext;
  class VarcharContext;
  class NvarcharContext;
  class FieldLengthContext;
  class FieldOptionsContext;
  class CharsetWithOptBinaryContext;
  class AsciiContext;
  class UnicodeContext;
  class WsNumCodepointsContext;
  class TypeDatetimePrecisionContext;
  class CharsetNameContext;
  class CollationNameContext;
  class CreateTableOptionsContext;
  class CreateTableOptionsSpaceSeparatedContext;
  class CreateTableOptionContext;
  class TernaryOptionContext;
  class DefaultCollationContext;
  class DefaultEncryptionContext;
  class DefaultCharsetContext;
  class PartitionClauseContext;
  class PartitionTypeDefContext;
  class SubPartitionsContext;
  class PartitionKeyAlgorithmContext;
  class PartitionDefinitionsContext;
  class PartitionDefinitionContext;
  class PartitionValuesInContext;
  class PartitionOptionContext;
  class SubpartitionDefinitionContext;
  class PartitionValueItemListParenContext;
  class PartitionValueItemContext;
  class DefinerClauseContext;
  class IfExistsContext;
  class IfNotExistsContext;
  class ProcedureParameterContext;
  class FunctionParameterContext;
  class CollateContext;
  class TypeWithOptCollateContext;
  class SchemaIdentifierPairContext;
  class ViewRefListContext;
  class UpdateListContext;
  class UpdateElementContext;
  class CharsetClauseContext;
  class FieldsClauseContext;
  class FieldTermContext;
  class LinesClauseContext;
  class LineTermContext;
  class UserListContext;
  class CreateUserListContext;
  class AlterUserListContext;
  class CreateUserEntryContext;
  class AlterUserEntryContext;
  class RetainCurrentPasswordContext;
  class DiscardOldPasswordContext;
  class ReplacePasswordContext;
  class UserContext;
  class LikeClauseContext;
  class LikeOrWhereContext;
  class OnlineOptionContext;
  class NoWriteToBinLogContext;
  class UsePartitionContext;
  class FieldIdentifierContext;
  class ColumnNameContext;
  class ColumnInternalRefContext;
  class ColumnInternalRefListContext;
  class ColumnRefContext;
  class InsertIdentifierContext;
  class IndexNameContext;
  class IndexRefContext;
  class TableWildContext;
  class SchemaNameContext;
  class SchemaRefContext;
  class ProcedureNameContext;
  class ProcedureRefContext;
  class FunctionNameContext;
  class FunctionRefContext;
  class TriggerNameContext;
  class TriggerRefContext;
  class ViewNameContext;
  class ViewRefContext;
  class TablespaceNameContext;
  class TablespaceRefContext;
  class LogfileGroupNameContext;
  class LogfileGroupRefContext;
  class EventNameContext;
  class EventRefContext;
  class UdfNameContext;
  class ServerNameContext;
  class ServerRefContext;
  class EngineRefContext;
  class TableNameContext;
  class FilterTableRefContext;
  class TableRefWithWildcardContext;
  class TableRefContext;
  class TableRefListContext;
  class TableAliasRefListContext;
  class ParameterNameContext;
  class LabelIdentifierContext;
  class LabelRefContext;
  class RoleIdentifierContext;
  class RoleRefContext;
  class PluginRefContext;
  class ComponentRefContext;
  class ResourceGroupRefContext;
  class WindowNameContext;
  class PureIdentifierContext;
  class IdentifierContext;
  class IdentifierListContext;
  class IdentifierListWithParenthesesContext;
  class QualifiedIdentifierContext;
  class SimpleIdentifierContext;
  class DotIdentifierContext;
  class Ulong_numberContext;
  class Real_ulong_numberContext;
  class Ulonglong_numberContext;
  class Real_ulonglong_numberContext;
  class LiteralContext;
  class SignedLiteralContext;
  class StringListContext;
  class TextStringLiteralContext;
  class TextStringContext;
  class TextLiteralContext;
  class TextStringNoLinebreakContext;
  class TextStringLiteralListContext;
  class NumLiteralContext;
  class BoolLiteralContext;
  class NullLiteralContext;
  class TemporalLiteralContext;
  class FloatOptionsContext;
  class PrecisionContext;
  class TextOrIdentifierContext;
  class RoleIdentifierOrTextContext;
  class SizeNumberContext;
  class ParenthesesContext;
  class EqualContext;
  class OptionTypeContext;
  class VarIdentTypeContext;
  class SetVarIdentTypeContext;
  class IdentifierKeywordContext;
  class LabelKeywordContext;
  class RoleOrIdentifierKeywordContext;
  class RoleOrLabelKeywordContext;
  class RoleKeywordContext; 

  class PARSERS_PUBLIC_TYPE QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SimpleStatementContext *simpleStatement();
    BeginWorkContext *beginWork();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class PARSERS_PUBLIC_TYPE SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterStatementContext *alterStatement();
    CreateStatementContext *createStatement();
    DropStatementContext *dropStatement();
    RenameTableStatementContext *renameTableStatement();
    TruncateTableStatementContext *truncateTableStatement();
    ImportStatementContext *importStatement();
    CallStatementContext *callStatement();
    DeleteStatementContext *deleteStatement();
    DoStatementContext *doStatement();
    HandlerStatementContext *handlerStatement();
    InsertStatementContext *insertStatement();
    LoadStatementContext *loadStatement();
    ReplaceStatementContext *replaceStatement();
    SelectStatementContext *selectStatement();
    UpdateStatementContext *updateStatement();
    TransactionOrLockingStatementContext *transactionOrLockingStatement();
    ReplicationStatementContext *replicationStatement();
    PreparedStatementContext *preparedStatement();
    CloneStatementContext *cloneStatement();
    AccountManagementStatementContext *accountManagementStatement();
    TableAdministrationStatementContext *tableAdministrationStatement();
    InstallUninstallStatmentContext *installUninstallStatment();
    SetStatementContext *setStatement();
    ShowStatementContext *showStatement();
    ResourceGroupManagementContext *resourceGroupManagement();
    OtherAdministrativeStatementContext *otherAdministrativeStatement();
    UtilityStatementContext *utilityStatement();
    GetDiagnosticsContext *getDiagnostics();
    SignalStatementContext *signalStatement();
    ResignalStatementContext *resignalStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class PARSERS_PUBLIC_TYPE AlterStatementContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    AlterTableContext *alterTable();
    AlterDatabaseContext *alterDatabase();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureRefContext *procedureRef();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionRefContext *functionRef();
    AlterViewContext *alterView();
    AlterEventContext *alterEvent();
    AlterTablespaceContext *alterTablespace();
    AlterUndoTablespaceContext *alterUndoTablespace();
    AlterLogfileGroupContext *alterLogfileGroup();
    AlterServerContext *alterServer();
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *ROTATE_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    RoutineAlterOptionsContext *routineAlterOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementContext* alterStatement();

  class PARSERS_PUBLIC_TYPE AlterDatabaseContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    antlr4::tree::TerminalNode *UPGRADE_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    antlr4::tree::TerminalNode *NAME_SYMBOL();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseContext* alterDatabase();

  class PARSERS_PUBLIC_TYPE AlterEventContext : public antlr4::ParserRuleContext {
  public:
    AlterEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventRefContext *eventRef();
    DefinerClauseContext *definerClause();
    std::vector<antlr4::tree::TerminalNode *> ON_SYMBOL();
    antlr4::tree::TerminalNode* ON_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE_SYMBOL();
    ScheduleContext *schedule();
    antlr4::tree::TerminalNode *COMPLETION_SYMBOL();
    antlr4::tree::TerminalNode *PRESERVE_SYMBOL();
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterEventContext* alterEvent();

  class PARSERS_PUBLIC_TYPE AlterLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupRefContext *logfileGroupRef();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    antlr4::tree::TerminalNode *UNDOFILE_SYMBOL();
    TextLiteralContext *textLiteral();
    AlterLogfileGroupOptionsContext *alterLogfileGroupOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupContext* alterLogfileGroup();

  class PARSERS_PUBLIC_TYPE AlterLogfileGroupOptionsContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterLogfileGroupOptionContext *> alterLogfileGroupOption();
    AlterLogfileGroupOptionContext* alterLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupOptionsContext* alterLogfileGroupOptions();

  class PARSERS_PUBLIC_TYPE AlterLogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLogfileGroupOptionContext* alterLogfileGroupOption();

  class PARSERS_PUBLIC_TYPE AlterServerContext : public antlr4::ParserRuleContext {
  public:
    AlterServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerRefContext *serverRef();
    ServerOptionsContext *serverOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterServerContext* alterServer();

  class PARSERS_PUBLIC_TYPE AlterTableContext : public antlr4::ParserRuleContext {
  public:
    AlterTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    OnlineOptionContext *onlineOption();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    AlterTableActionsContext *alterTableActions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableContext* alterTable();

  class PARSERS_PUBLIC_TYPE AlterTableActionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTableActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandListContext *alterCommandList();
    PartitionClauseContext *partitionClause();
    RemovePartitioningContext *removePartitioning();
    StandaloneAlterCommandsContext *standaloneAlterCommands();
    AlterCommandsModifierListContext *alterCommandsModifierList();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableActionsContext* alterTableActions();

  class PARSERS_PUBLIC_TYPE AlterCommandListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterCommandsModifierListContext *alterCommandsModifierList();
    AlterListContext *alterList();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandListContext* alterCommandList();

  class PARSERS_PUBLIC_TYPE AlterCommandsModifierListContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterCommandsModifierContext *> alterCommandsModifier();
    AlterCommandsModifierContext* alterCommandsModifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandsModifierListContext* alterCommandsModifierList();

  class PARSERS_PUBLIC_TYPE StandaloneAlterCommandsContext : public antlr4::ParserRuleContext {
  public:
    StandaloneAlterCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    AlterPartitionContext *alterPartition();
    antlr4::tree::TerminalNode *SECONDARY_LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StandaloneAlterCommandsContext* standaloneAlterCommands();

  class PARSERS_PUBLIC_TYPE AlterPartitionContext : public antlr4::ParserRuleContext {
  public:
    AlterPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    std::vector<NoWriteToBinLogContext *> noWriteToBinLog();
    NoWriteToBinLogContext* noWriteToBinLog(size_t i);
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *REBUILD_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *OPTIMIZE_SYMBOL();
    antlr4::tree::TerminalNode *ANALYZE_SYMBOL();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    std::vector<CheckOptionContext *> checkOption();
    CheckOptionContext* checkOption(size_t i);
    antlr4::tree::TerminalNode *REPAIR_SYMBOL();
    std::vector<RepairTypeContext *> repairType();
    RepairTypeContext* repairType(size_t i);
    antlr4::tree::TerminalNode *COALESCE_SYMBOL();
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    ReorgPartitionRuleContext *reorgPartitionRule();
    antlr4::tree::TerminalNode *REORGANIZE_SYMBOL();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *EXCHANGE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    WithValidationContext *withValidation();
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterPartitionContext* alterPartition();

  class PARSERS_PUBLIC_TYPE AlterListContext : public antlr4::ParserRuleContext {
  public:
    AlterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterListItemContext *> alterListItem();
    AlterListItemContext* alterListItem(size_t i);
    std::vector<CreateTableOptionsSpaceSeparatedContext *> createTableOptionsSpaceSeparated();
    CreateTableOptionsSpaceSeparatedContext* createTableOptionsSpaceSeparated(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    std::vector<AlterCommandsModifierContext *> alterCommandsModifier();
    AlterCommandsModifierContext* alterCommandsModifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterListContext* alterList();

  class PARSERS_PUBLIC_TYPE AlterCommandsModifierContext : public antlr4::ParserRuleContext {
  public:
    AlterCommandsModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterAlgorithmOptionContext *alterAlgorithmOption();
    AlterLockOptionContext *alterLockOption();
    WithValidationContext *withValidation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterCommandsModifierContext* alterCommandsModifier();

  class PARSERS_PUBLIC_TYPE AlterListItemContext : public antlr4::ParserRuleContext {
  public:
    AlterListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    IdentifierContext *identifier();
    FieldDefinitionContext *fieldDefinition();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    TableElementListContext *tableElementList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_SYMBOL();
    CheckOrReferencesContext *checkOrReferences();
    PlaceContext *place();
    TableConstraintDefContext *tableConstraintDef();
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    ColumnInternalRefContext *columnInternalRef();
    antlr4::tree::TerminalNode *MODIFY_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *FOREIGN_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    KeyOrIndexContext *keyOrIndex();
    IndexRefContext *indexRef();
    RestrictContext *restrict();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *KEYS_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();
    SignedLiteralContext *signedLiteral();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    VisibilityContext *visibility();
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    CollateContext *collate();
    antlr4::tree::TerminalNode *FORCE_SYMBOL();
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    AlterOrderListContext *alterOrderList();
    antlr4::tree::TerminalNode *UPGRADE_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONING_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterListItemContext* alterListItem();

  class PARSERS_PUBLIC_TYPE PlaceContext : public antlr4::ParserRuleContext {
  public:
    PlaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlaceContext* place();

  class PARSERS_PUBLIC_TYPE RestrictContext : public antlr4::ParserRuleContext {
  public:
    RestrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestrictContext* restrict();

  class PARSERS_PUBLIC_TYPE AlterOrderListContext : public antlr4::ParserRuleContext {
  public:
    AlterOrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<DirectionContext *> direction();
    DirectionContext* direction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterOrderListContext* alterOrderList();

  class PARSERS_PUBLIC_TYPE AlterAlgorithmOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterAlgorithmOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterAlgorithmOptionContext* alterAlgorithmOption();

  class PARSERS_PUBLIC_TYPE AlterLockOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterLockOptionContext* alterLockOption();

  class PARSERS_PUBLIC_TYPE IndexLockAndAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    IndexLockAndAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterAlgorithmOptionContext *alterAlgorithmOption();
    AlterLockOptionContext *alterLockOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexLockAndAlgorithmContext* indexLockAndAlgorithm();

  class PARSERS_PUBLIC_TYPE WithValidationContext : public antlr4::ParserRuleContext {
  public:
    WithValidationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALIDATION_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *WITHOUT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithValidationContext* withValidation();

  class PARSERS_PUBLIC_TYPE RemovePartitioningContext : public antlr4::ParserRuleContext {
  public:
    RemovePartitioningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMOVE_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONING_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RemovePartitioningContext* removePartitioning();

  class PARSERS_PUBLIC_TYPE AllOrPartitionNameListContext : public antlr4::ParserRuleContext {
  public:
    AllOrPartitionNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    IdentifierListContext *identifierList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllOrPartitionNameListContext* allOrPartitionNameList();

  class PARSERS_PUBLIC_TYPE ReorgPartitionRuleContext : public antlr4::ParserRuleContext {
  public:
    ReorgPartitionRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REORGANIZE_SYMBOL();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    NoWriteToBinLogContext *noWriteToBinLog();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    PartitionDefinitionsContext *partitionDefinitions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReorgPartitionRuleContext* reorgPartitionRule();

  class PARSERS_PUBLIC_TYPE AlterTablespaceContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    IdentifierContext *identifier();
    AlterTablespaceOptionsContext *alterTablespaceOptions();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *ACCESSIBLE_SYMBOL();
    antlr4::tree::TerminalNode *READ_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *READ_WRITE_SYMBOL();
    std::vector<ChangeTablespaceOptionContext *> changeTablespaceOption();
    ChangeTablespaceOptionContext* changeTablespaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceContext* alterTablespace();

  class PARSERS_PUBLIC_TYPE AlterUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    AlterUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *ACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *INACTIVE_SYMBOL();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUndoTablespaceContext* alterUndoTablespace();

  class PARSERS_PUBLIC_TYPE UndoTableSpaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    UndoTableSpaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UndoTableSpaceOptionContext *> undoTableSpaceOption();
    UndoTableSpaceOptionContext* undoTableSpaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UndoTableSpaceOptionsContext* undoTableSpaceOptions();

  class PARSERS_PUBLIC_TYPE UndoTableSpaceOptionContext : public antlr4::ParserRuleContext {
  public:
    UndoTableSpaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionEngineContext *tsOptionEngine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UndoTableSpaceOptionContext* undoTableSpaceOption();

  class PARSERS_PUBLIC_TYPE AlterTablespaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterTablespaceOptionContext *> alterTablespaceOption();
    AlterTablespaceOptionContext* alterTablespaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceOptionsContext* alterTablespaceOptions();

  class PARSERS_PUBLIC_TYPE AlterTablespaceOptionContext : public antlr4::ParserRuleContext {
  public:
    AlterTablespaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();
    TsOptionMaxSizeContext *tsOptionMaxSize();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();
    TsOptionEncryptionContext *tsOptionEncryption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTablespaceOptionContext* alterTablespaceOption();

  class PARSERS_PUBLIC_TYPE ChangeTablespaceOptionContext : public antlr4::ParserRuleContext {
  public:
    ChangeTablespaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();
    TsOptionMaxSizeContext *tsOptionMaxSize();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeTablespaceOptionContext* changeTablespaceOption();

  class PARSERS_PUBLIC_TYPE AlterViewContext : public antlr4::ParserRuleContext {
  public:
    AlterViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefContext *viewRef();
    ViewTailContext *viewTail();
    ViewAlgorithmContext *viewAlgorithm();
    DefinerClauseContext *definerClause();
    ViewSuidContext *viewSuid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterViewContext* alterView();

  class PARSERS_PUBLIC_TYPE ViewTailContext : public antlr4::ParserRuleContext {
  public:
    ViewTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS_SYMBOL();
    ViewSelectContext *viewSelect();
    ColumnInternalRefListContext *columnInternalRefList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewTailContext* viewTail();

  class PARSERS_PUBLIC_TYPE ViewSelectContext : public antlr4::ParserRuleContext {
  public:
    ViewSelectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionOrParensContext *queryExpressionOrParens();
    ViewCheckOptionContext *viewCheckOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewSelectContext* viewSelect();

  class PARSERS_PUBLIC_TYPE ViewCheckOptionContext : public antlr4::ParserRuleContext {
  public:
    ViewCheckOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *CASCADED_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewCheckOptionContext* viewCheckOption();

  class PARSERS_PUBLIC_TYPE CreateStatementContext : public antlr4::ParserRuleContext {
  public:
    CreateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    CreateDatabaseContext *createDatabase();
    CreateTableContext *createTable();
    CreateFunctionContext *createFunction();
    CreateProcedureContext *createProcedure();
    CreateUdfContext *createUdf();
    CreateLogfileGroupContext *createLogfileGroup();
    CreateViewContext *createView();
    CreateTriggerContext *createTrigger();
    CreateIndexContext *createIndex();
    CreateServerContext *createServer();
    CreateTablespaceContext *createTablespace();
    CreateEventContext *createEvent();
    CreateRoleContext *createRole();
    CreateSpatialReferenceContext *createSpatialReference();
    CreateUndoTablespaceContext *createUndoTablespace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateStatementContext* createStatement();

  class PARSERS_PUBLIC_TYPE CreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaNameContext *schemaName();
    IfNotExistsContext *ifNotExists();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseContext* createDatabase();

  class PARSERS_PUBLIC_TYPE CreateDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultCharsetContext *defaultCharset();
    DefaultCollationContext *defaultCollation();
    DefaultEncryptionContext *defaultEncryption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseOptionContext* createDatabaseOption();

  class PARSERS_PUBLIC_TYPE CreateTableContext : public antlr4::ParserRuleContext {
  public:
    CreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    IfNotExistsContext *ifNotExists();
    TableElementListContext *tableElementList();
    CreateTableOptionsContext *createTableOptions();
    PartitionClauseContext *partitionClause();
    DuplicateAsQueryExpressionContext *duplicateAsQueryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableContext* createTable();

  class PARSERS_PUBLIC_TYPE TableElementListContext : public antlr4::ParserRuleContext {
  public:
    TableElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableElementContext *> tableElement();
    TableElementContext* tableElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableElementListContext* tableElementList();

  class PARSERS_PUBLIC_TYPE TableElementContext : public antlr4::ParserRuleContext {
  public:
    TableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnDefinitionContext *columnDefinition();
    TableConstraintDefContext *tableConstraintDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableElementContext* tableElement();

  class PARSERS_PUBLIC_TYPE DuplicateAsQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    DuplicateAsQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionOrParensContext *queryExpressionOrParens();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DuplicateAsQueryExpressionContext* duplicateAsQueryExpression();

  class PARSERS_PUBLIC_TYPE QueryExpressionOrParensContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionOrParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    QueryExpressionParensContext *queryExpressionParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionOrParensContext* queryExpressionOrParens();

  class PARSERS_PUBLIC_TYPE CreateRoutineContext : public antlr4::ParserRuleContext {
  public:
    CreateRoutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *EOF();
    CreateProcedureContext *createProcedure();
    CreateFunctionContext *createFunction();
    CreateUdfContext *createUdf();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateRoutineContext* createRoutine();

  class PARSERS_PUBLIC_TYPE CreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    CreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureNameContext *procedureName();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CompoundStatementContext *compoundStatement();
    DefinerClauseContext *definerClause();
    std::vector<ProcedureParameterContext *> procedureParameter();
    ProcedureParameterContext* procedureParameter(size_t i);
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateProcedureContext* createProcedure();

  class PARSERS_PUBLIC_TYPE CreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    CreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    TypeWithOptCollateContext *typeWithOptCollate();
    CompoundStatementContext *compoundStatement();
    DefinerClauseContext *definerClause();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateFunctionContext* createFunction();

  class PARSERS_PUBLIC_TYPE CreateUdfContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    CreateUdfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    UdfNameContext *udfName();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *STRING_SYMBOL();
    antlr4::tree::TerminalNode *INT_SYMBOL();
    antlr4::tree::TerminalNode *REAL_SYMBOL();
    antlr4::tree::TerminalNode *DECIMAL_SYMBOL();
    antlr4::tree::TerminalNode *AGGREGATE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUdfContext* createUdf();

  class PARSERS_PUBLIC_TYPE RoutineCreateOptionContext : public antlr4::ParserRuleContext {
  public:
    RoutineCreateOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoutineOptionContext *routineOption();
    antlr4::tree::TerminalNode *DETERMINISTIC_SYMBOL();
    antlr4::tree::TerminalNode *NOT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineCreateOptionContext* routineCreateOption();

  class PARSERS_PUBLIC_TYPE RoutineAlterOptionsContext : public antlr4::ParserRuleContext {
  public:
    RoutineAlterOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoutineCreateOptionContext *> routineCreateOption();
    RoutineCreateOptionContext* routineCreateOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineAlterOptionsContext* routineAlterOptions();

  class PARSERS_PUBLIC_TYPE RoutineOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    antlr4::Token *security = nullptr;;
    RoutineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *CONTAINS_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *READS_SYMBOL();
    antlr4::tree::TerminalNode *MODIFIES_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineOptionContext* routineOption();

  class PARSERS_PUBLIC_TYPE CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateIndexTargetContext *createIndexTarget();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    IndexNameContext *indexName();
    OnlineOptionContext *onlineOption();
    antlr4::tree::TerminalNode *FULLTEXT_SYMBOL();
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    IndexLockAndAlgorithmContext *indexLockAndAlgorithm();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<FulltextIndexOptionContext *> fulltextIndexOption();
    FulltextIndexOptionContext* fulltextIndexOption(size_t i);
    std::vector<SpatialIndexOptionContext *> spatialIndexOption();
    SpatialIndexOptionContext* spatialIndexOption(size_t i);
    IndexTypeClauseContext *indexTypeClause();
    IndexNameAndTypeContext *indexNameAndType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexContext* createIndex();

  class PARSERS_PUBLIC_TYPE IndexNameAndTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexNameAndTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexNameContext *indexName();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexNameAndTypeContext* indexNameAndType();

  class PARSERS_PUBLIC_TYPE CreateIndexTargetContext : public antlr4::ParserRuleContext {
  public:
    CreateIndexTargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TableRefContext *tableRef();
    KeyListVariantsContext *keyListVariants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateIndexTargetContext* createIndexTarget();

  class PARSERS_PUBLIC_TYPE CreateLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    CreateLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupNameContext *logfileGroupName();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *UNDOFILE_SYMBOL();
    antlr4::tree::TerminalNode *REDOFILE_SYMBOL();
    LogfileGroupOptionsContext *logfileGroupOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateLogfileGroupContext* createLogfileGroup();

  class PARSERS_PUBLIC_TYPE LogfileGroupOptionsContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogfileGroupOptionContext *> logfileGroupOption();
    LogfileGroupOptionContext* logfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupOptionsContext* logfileGroupOptions();

  class PARSERS_PUBLIC_TYPE LogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionUndoRedoBufferSizeContext *tsOptionUndoRedoBufferSize();
    TsOptionNodegroupContext *tsOptionNodegroup();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();
    TsOptionCommentContext *tsOptionComment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupOptionContext* logfileGroupOption();

  class PARSERS_PUBLIC_TYPE CreateServerContext : public antlr4::ParserRuleContext {
  public:
    CreateServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerNameContext *serverName();
    antlr4::tree::TerminalNode *FOREIGN_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *WRAPPER_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    ServerOptionsContext *serverOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateServerContext* createServer();

  class PARSERS_PUBLIC_TYPE ServerOptionsContext : public antlr4::ParserRuleContext {
  public:
    ServerOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerOptionsContext* serverOptions();

  class PARSERS_PUBLIC_TYPE ServerOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    ServerOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *HOST_SYMBOL();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *SOCKET_SYMBOL();
    antlr4::tree::TerminalNode *OWNER_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *PORT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerOptionContext* serverOption();

  class PARSERS_PUBLIC_TYPE CreateTablespaceContext : public antlr4::ParserRuleContext {
  public:
    CreateTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceNameContext *tablespaceName();
    TsDataFileNameContext *tsDataFileName();
    antlr4::tree::TerminalNode *USE_SYMBOL();
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupRefContext *logfileGroupRef();
    TablespaceOptionsContext *tablespaceOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablespaceContext* createTablespace();

  class PARSERS_PUBLIC_TYPE CreateUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    CreateUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceNameContext *tablespaceName();
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    TsDataFileContext *tsDataFile();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUndoTablespaceContext* createUndoTablespace();

  class PARSERS_PUBLIC_TYPE TsDataFileNameContext : public antlr4::ParserRuleContext {
  public:
    TsDataFileNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_SYMBOL();
    TsDataFileContext *tsDataFile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsDataFileNameContext* tsDataFileName();

  class PARSERS_PUBLIC_TYPE TsDataFileContext : public antlr4::ParserRuleContext {
  public:
    TsDataFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    TextLiteralContext *textLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsDataFileContext* tsDataFile();

  class PARSERS_PUBLIC_TYPE TablespaceOptionsContext : public antlr4::ParserRuleContext {
  public:
    TablespaceOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TablespaceOptionContext *> tablespaceOption();
    TablespaceOptionContext* tablespaceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceOptionsContext* tablespaceOptions();

  class PARSERS_PUBLIC_TYPE TablespaceOptionContext : public antlr4::ParserRuleContext {
  public:
    TablespaceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionInitialSizeContext *tsOptionInitialSize();
    TsOptionAutoextendSizeContext *tsOptionAutoextendSize();
    TsOptionMaxSizeContext *tsOptionMaxSize();
    TsOptionExtentSizeContext *tsOptionExtentSize();
    TsOptionNodegroupContext *tsOptionNodegroup();
    TsOptionEngineContext *tsOptionEngine();
    TsOptionWaitContext *tsOptionWait();
    TsOptionCommentContext *tsOptionComment();
    TsOptionFileblockSizeContext *tsOptionFileblockSize();
    TsOptionEncryptionContext *tsOptionEncryption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceOptionContext* tablespaceOption();

  class PARSERS_PUBLIC_TYPE TsOptionInitialSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionInitialSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionInitialSizeContext* tsOptionInitialSize();

  class PARSERS_PUBLIC_TYPE TsOptionUndoRedoBufferSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionUndoRedoBufferSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionUndoRedoBufferSizeContext* tsOptionUndoRedoBufferSize();

  class PARSERS_PUBLIC_TYPE TsOptionAutoextendSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionAutoextendSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionAutoextendSizeContext* tsOptionAutoextendSize();

  class PARSERS_PUBLIC_TYPE TsOptionMaxSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionMaxSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionMaxSizeContext* tsOptionMaxSize();

  class PARSERS_PUBLIC_TYPE TsOptionExtentSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionExtentSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENT_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionExtentSizeContext* tsOptionExtentSize();

  class PARSERS_PUBLIC_TYPE TsOptionNodegroupContext : public antlr4::ParserRuleContext {
  public:
    TsOptionNodegroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionNodegroupContext* tsOptionNodegroup();

  class PARSERS_PUBLIC_TYPE TsOptionEngineContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEngineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionEngineContext* tsOptionEngine();

  class PARSERS_PUBLIC_TYPE TsOptionWaitContext : public antlr4::ParserRuleContext {
  public:
    TsOptionWaitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT_SYMBOL();
    antlr4::tree::TerminalNode *NO_WAIT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionWaitContext* tsOptionWait();

  class PARSERS_PUBLIC_TYPE TsOptionCommentContext : public antlr4::ParserRuleContext {
  public:
    TsOptionCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionCommentContext* tsOptionComment();

  class PARSERS_PUBLIC_TYPE TsOptionFileblockSizeContext : public antlr4::ParserRuleContext {
  public:
    TsOptionFileblockSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE_SYMBOL();
    SizeNumberContext *sizeNumber();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionFileblockSizeContext* tsOptionFileblockSize();

  class PARSERS_PUBLIC_TYPE TsOptionEncryptionContext : public antlr4::ParserRuleContext {
  public:
    TsOptionEncryptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TsOptionEncryptionContext* tsOptionEncryption();

  class PARSERS_PUBLIC_TYPE CreateViewContext : public antlr4::ParserRuleContext {
  public:
    CreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewNameContext *viewName();
    ViewTailContext *viewTail();
    ViewReplaceOrAlgorithmContext *viewReplaceOrAlgorithm();
    DefinerClauseContext *definerClause();
    ViewSuidContext *viewSuid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateViewContext* createView();

  class PARSERS_PUBLIC_TYPE ViewReplaceOrAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    ViewReplaceOrAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    ViewAlgorithmContext *viewAlgorithm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewReplaceOrAlgorithmContext* viewReplaceOrAlgorithm();

  class PARSERS_PUBLIC_TYPE ViewAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algorithm = nullptr;;
    ViewAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *UNDEFINED_SYMBOL();
    antlr4::tree::TerminalNode *MERGE_SYMBOL();
    antlr4::tree::TerminalNode *TEMPTABLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewAlgorithmContext* viewAlgorithm();

  class PARSERS_PUBLIC_TYPE ViewSuidContext : public antlr4::ParserRuleContext {
  public:
    ViewSuidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQL_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewSuidContext* viewSuid();

  class PARSERS_PUBLIC_TYPE CreateTriggerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *timing = nullptr;;
    antlr4::Token *event = nullptr;;
    CreateTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    TriggerNameContext *triggerName();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *EACH_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *BEFORE_SYMBOL();
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    DefinerClauseContext *definerClause();
    TriggerFollowsPrecedesClauseContext *triggerFollowsPrecedesClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTriggerContext* createTrigger();

  class PARSERS_PUBLIC_TYPE TriggerFollowsPrecedesClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ordering = nullptr;;
    TriggerFollowsPrecedesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *FOLLOWS_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerFollowsPrecedesClauseContext* triggerFollowsPrecedesClause();

  class PARSERS_PUBLIC_TYPE CreateEventContext : public antlr4::ParserRuleContext {
  public:
    CreateEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventNameContext *eventName();
    std::vector<antlr4::tree::TerminalNode *> ON_SYMBOL();
    antlr4::tree::TerminalNode* ON_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE_SYMBOL();
    ScheduleContext *schedule();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    CompoundStatementContext *compoundStatement();
    DefinerClauseContext *definerClause();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *COMPLETION_SYMBOL();
    antlr4::tree::TerminalNode *PRESERVE_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateEventContext* createEvent();

  class PARSERS_PUBLIC_TYPE CreateRoleContext : public antlr4::ParserRuleContext {
  public:
    CreateRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();
    IfNotExistsContext *ifNotExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateRoleContext* createRole();

  class PARSERS_PUBLIC_TYPE CreateSpatialReferenceContext : public antlr4::ParserRuleContext {
  public:
    CreateSpatialReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCE_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    std::vector<SrsAttributeContext *> srsAttribute();
    SrsAttributeContext* srsAttribute(size_t i);
    IfNotExistsContext *ifNotExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateSpatialReferenceContext* createSpatialReference();

  class PARSERS_PUBLIC_TYPE SrsAttributeContext : public antlr4::ParserRuleContext {
  public:
    SrsAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME_SYMBOL();
    antlr4::tree::TerminalNode *TEXT_SYMBOL();
    TextStringNoLinebreakContext *textStringNoLinebreak();
    antlr4::tree::TerminalNode *DEFINITION_SYMBOL();
    antlr4::tree::TerminalNode *ORGANIZATION_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    antlr4::tree::TerminalNode *DESCRIPTION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SrsAttributeContext* srsAttribute();

  class PARSERS_PUBLIC_TYPE DropStatementContext : public antlr4::ParserRuleContext {
  public:
    DropStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    DropDatabaseContext *dropDatabase();
    DropEventContext *dropEvent();
    DropFunctionContext *dropFunction();
    DropProcedureContext *dropProcedure();
    DropIndexContext *dropIndex();
    DropLogfileGroupContext *dropLogfileGroup();
    DropServerContext *dropServer();
    DropTableContext *dropTable();
    DropTableSpaceContext *dropTableSpace();
    DropTriggerContext *dropTrigger();
    DropViewContext *dropView();
    DropRoleContext *dropRole();
    DropSpatialReferenceContext *dropSpatialReference();
    DropUndoTablespaceContext *dropUndoTablespace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropStatementContext* dropStatement();

  class PARSERS_PUBLIC_TYPE DropDatabaseContext : public antlr4::ParserRuleContext {
  public:
    DropDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    SchemaRefContext *schemaRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropDatabaseContext* dropDatabase();

  class PARSERS_PUBLIC_TYPE DropEventContext : public antlr4::ParserRuleContext {
  public:
    DropEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    EventRefContext *eventRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropEventContext* dropEvent();

  class PARSERS_PUBLIC_TYPE DropFunctionContext : public antlr4::ParserRuleContext {
  public:
    DropFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    FunctionRefContext *functionRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropFunctionContext* dropFunction();

  class PARSERS_PUBLIC_TYPE DropProcedureContext : public antlr4::ParserRuleContext {
  public:
    DropProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    ProcedureRefContext *procedureRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropProcedureContext* dropProcedure();

  class PARSERS_PUBLIC_TYPE DropIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    DropIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexRefContext *indexRef();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    OnlineOptionContext *onlineOption();
    IndexLockAndAlgorithmContext *indexLockAndAlgorithm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropIndexContext* dropIndex();

  class PARSERS_PUBLIC_TYPE DropLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    LogfileGroupRefContext *logfileGroupRef();
    std::vector<DropLogfileGroupOptionContext *> dropLogfileGroupOption();
    DropLogfileGroupOptionContext* dropLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropLogfileGroupContext* dropLogfileGroup();

  class PARSERS_PUBLIC_TYPE DropLogfileGroupOptionContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TsOptionWaitContext *tsOptionWait();
    TsOptionEngineContext *tsOptionEngine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropLogfileGroupOptionContext* dropLogfileGroupOption();

  class PARSERS_PUBLIC_TYPE DropServerContext : public antlr4::ParserRuleContext {
  public:
    DropServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    ServerRefContext *serverRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropServerContext* dropServer();

  class PARSERS_PUBLIC_TYPE DropTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    DropTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefListContext *tableRefList();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableContext* dropTable();

  class PARSERS_PUBLIC_TYPE DropTableSpaceContext : public antlr4::ParserRuleContext {
  public:
    DropTableSpaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    std::vector<DropLogfileGroupOptionContext *> dropLogfileGroupOption();
    DropLogfileGroupOptionContext* dropLogfileGroupOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableSpaceContext* dropTableSpace();

  class PARSERS_PUBLIC_TYPE DropTriggerContext : public antlr4::ParserRuleContext {
  public:
    DropTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    TriggerRefContext *triggerRef();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTriggerContext* dropTrigger();

  class PARSERS_PUBLIC_TYPE DropViewContext : public antlr4::ParserRuleContext {
  public:
    DropViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    ViewRefListContext *viewRefList();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropViewContext* dropView();

  class PARSERS_PUBLIC_TYPE DropRoleContext : public antlr4::ParserRuleContext {
  public:
    DropRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropRoleContext* dropRole();

  class PARSERS_PUBLIC_TYPE DropSpatialReferenceContext : public antlr4::ParserRuleContext {
  public:
    DropSpatialReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCE_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropSpatialReferenceContext* dropSpatialReference();

  class PARSERS_PUBLIC_TYPE DropUndoTablespaceContext : public antlr4::ParserRuleContext {
  public:
    DropUndoTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    TablespaceRefContext *tablespaceRef();
    UndoTableSpaceOptionsContext *undoTableSpaceOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropUndoTablespaceContext* dropUndoTablespace();

  class PARSERS_PUBLIC_TYPE RenameTableStatementContext : public antlr4::ParserRuleContext {
  public:
    RenameTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    std::vector<RenamePairContext *> renamePair();
    RenamePairContext* renamePair(size_t i);
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameTableStatementContext* renameTableStatement();

  class PARSERS_PUBLIC_TYPE RenamePairContext : public antlr4::ParserRuleContext {
  public:
    RenamePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenamePairContext* renamePair();

  class PARSERS_PUBLIC_TYPE TruncateTableStatementContext : public antlr4::ParserRuleContext {
  public:
    TruncateTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TruncateTableStatementContext* truncateTableStatement();

  class PARSERS_PUBLIC_TYPE ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    TextStringLiteralListContext *textStringLiteralList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class PARSERS_PUBLIC_TYPE CallStatementContext : public antlr4::ParserRuleContext {
  public:
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL_SYMBOL();
    ProcedureRefContext *procedureRef();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExprListContext *exprList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallStatementContext* callStatement();

  class PARSERS_PUBLIC_TYPE DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    TableAliasRefListContext *tableAliasRefList();
    TableReferenceListContext *tableReferenceList();
    WithClauseContext *withClause();
    std::vector<DeleteStatementOptionContext *> deleteStatementOption();
    DeleteStatementOptionContext* deleteStatementOption(size_t i);
    antlr4::tree::TerminalNode *USING_SYMBOL();
    TableRefContext *tableRef();
    WhereClauseContext *whereClause();
    PartitionDeleteContext *partitionDelete();
    OrderClauseContext *orderClause();
    SimpleLimitClauseContext *simpleLimitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class PARSERS_PUBLIC_TYPE PartitionDeleteContext : public antlr4::ParserRuleContext {
  public:
    PartitionDeleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDeleteContext* partitionDelete();

  class PARSERS_PUBLIC_TYPE DeleteStatementOptionContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementOptionContext* deleteStatementOption();

  class PARSERS_PUBLIC_TYPE DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO_SYMBOL();
    ExprListContext *exprList();
    SelectItemListContext *selectItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoStatementContext* doStatement();

  class PARSERS_PUBLIC_TYPE HandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    HandlerReadOrScanContext *handlerReadOrScan();
    TableAliasContext *tableAlias();
    WhereClauseContext *whereClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerStatementContext* handlerStatement();

  class PARSERS_PUBLIC_TYPE HandlerReadOrScanContext : public antlr4::ParserRuleContext {
  public:
    HandlerReadOrScanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ValuesContext *values();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *PREV_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *LESS_THAN_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_THAN_OPERATOR();
    antlr4::tree::TerminalNode *LESS_OR_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_OR_EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerReadOrScanContext* handlerReadOrScan();

  class PARSERS_PUBLIC_TYPE InsertStatementContext : public antlr4::ParserRuleContext {
  public:
    InsertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    TableRefContext *tableRef();
    InsertFromConstructorContext *insertFromConstructor();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    InsertQueryExpressionContext *insertQueryExpression();
    InsertLockOptionContext *insertLockOption();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    UsePartitionContext *usePartition();
    InsertUpdateListContext *insertUpdateList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStatementContext* insertStatement();

  class PARSERS_PUBLIC_TYPE InsertLockOptionContext : public antlr4::ParserRuleContext {
  public:
    InsertLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *DELAYED_SYMBOL();
    antlr4::tree::TerminalNode *HIGH_PRIORITY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertLockOptionContext* insertLockOption();

  class PARSERS_PUBLIC_TYPE InsertFromConstructorContext : public antlr4::ParserRuleContext {
  public:
    InsertFromConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertValuesContext *insertValues();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertFromConstructorContext* insertFromConstructor();

  class PARSERS_PUBLIC_TYPE FieldsContext : public antlr4::ParserRuleContext {
  public:
    FieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InsertIdentifierContext *> insertIdentifier();
    InsertIdentifierContext* insertIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldsContext* fields();

  class PARSERS_PUBLIC_TYPE InsertValuesContext : public antlr4::ParserRuleContext {
  public:
    InsertValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueListContext *valueList();
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertValuesContext* insertValues();

  class PARSERS_PUBLIC_TYPE InsertQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    InsertQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionOrParensContext *queryExpressionOrParens();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldsContext *fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertQueryExpressionContext* insertQueryExpression();

  class PARSERS_PUBLIC_TYPE ValueListContext : public antlr4::ParserRuleContext {
  public:
    ValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode* OPEN_PAR_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode* CLOSE_PAR_SYMBOL(size_t i);
    std::vector<ValuesContext *> values();
    ValuesContext* values(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueListContext* valueList();

  class PARSERS_PUBLIC_TYPE ValuesContext : public antlr4::ParserRuleContext {
  public:
    ValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode* DEFAULT_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesContext* values();

  class PARSERS_PUBLIC_TYPE InsertUpdateListContext : public antlr4::ParserRuleContext {
  public:
    InsertUpdateListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *DUPLICATE_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    UpdateListContext *updateList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertUpdateListContext* insertUpdateList();

  class PARSERS_PUBLIC_TYPE LoadStatementContext : public antlr4::ParserRuleContext {
  public:
    LoadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    DataOrXmlContext *dataOrXml();
    antlr4::tree::TerminalNode *INFILE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();
    LoadDataFileTailContext *loadDataFileTail();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    UsePartitionContext *usePartition();
    CharsetClauseContext *charsetClause();
    XmlRowsIdentifiedByContext *xmlRowsIdentifiedBy();
    FieldsClauseContext *fieldsClause();
    LinesClauseContext *linesClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *CONCURRENT_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadStatementContext* loadStatement();

  class PARSERS_PUBLIC_TYPE DataOrXmlContext : public antlr4::ParserRuleContext {
  public:
    DataOrXmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *XML_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataOrXmlContext* dataOrXml();

  class PARSERS_PUBLIC_TYPE XmlRowsIdentifiedByContext : public antlr4::ParserRuleContext {
  public:
    XmlRowsIdentifiedByContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XmlRowsIdentifiedByContext* xmlRowsIdentifiedBy();

  class PARSERS_PUBLIC_TYPE LoadDataFileTailContext : public antlr4::ParserRuleContext {
  public:
    LoadDataFileTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    LoadDataFileTargetListContext *loadDataFileTargetList();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    antlr4::tree::TerminalNode *LINES_SYMBOL();
    antlr4::tree::TerminalNode *ROWS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadDataFileTailContext* loadDataFileTail();

  class PARSERS_PUBLIC_TYPE LoadDataFileTargetListContext : public antlr4::ParserRuleContext {
  public:
    LoadDataFileTargetListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FieldOrVariableListContext *fieldOrVariableList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadDataFileTargetListContext* loadDataFileTargetList();

  class PARSERS_PUBLIC_TYPE FieldOrVariableListContext : public antlr4::ParserRuleContext {
  public:
    FieldOrVariableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnRefContext *> columnRef();
    ColumnRefContext* columnRef(size_t i);
    std::vector<UserVariableContext *> userVariable();
    UserVariableContext* userVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOrVariableListContext* fieldOrVariableList();

  class PARSERS_PUBLIC_TYPE ReplaceStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    TableRefContext *tableRef();
    InsertFromConstructorContext *insertFromConstructor();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    InsertQueryExpressionContext *insertQueryExpression();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    UsePartitionContext *usePartition();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *DELAYED_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceStatementContext* replaceStatement();

  class PARSERS_PUBLIC_TYPE SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionContext *queryExpression();
    QueryExpressionParensContext *queryExpressionParens();
    SelectStatementWithIntoContext *selectStatementWithInto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementContext* selectStatement();

  class PARSERS_PUBLIC_TYPE SelectStatementWithIntoContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementWithIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SelectStatementWithIntoContext *selectStatementWithInto();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    QueryExpressionContext *queryExpression();
    IntoClauseContext *intoClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementWithIntoContext* selectStatementWithInto();

  class PARSERS_PUBLIC_TYPE QueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionBodyContext *queryExpressionBody();
    QueryExpressionParensContext *queryExpressionParens();
    WithClauseContext *withClause();
    ProcedureAnalyseClauseContext *procedureAnalyseClause();
    LockingClauseContext *lockingClause();
    OrderClauseContext *orderClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionContext* queryExpression();

  class PARSERS_PUBLIC_TYPE QueryExpressionBodyContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecificationContext *querySpecification();
    std::vector<QueryExpressionParensContext *> queryExpressionParens();
    QueryExpressionParensContext* queryExpressionParens(size_t i);
    antlr4::tree::TerminalNode *UNION_SYMBOL();
    UnionOptionContext *unionOption();
    QueryExpressionBodyContext *queryExpressionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionBodyContext* queryExpressionBody();
  QueryExpressionBodyContext* queryExpressionBody(int precedence);
  class PARSERS_PUBLIC_TYPE QueryExpressionParensContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    QueryExpressionParensContext *queryExpressionParens();
    QueryExpressionContext *queryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryExpressionParensContext* queryExpressionParens();

  class PARSERS_PUBLIC_TYPE QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT_SYMBOL();
    SelectItemListContext *selectItemList();
    std::vector<SelectOptionContext *> selectOption();
    SelectOptionContext* selectOption(size_t i);
    IntoClauseContext *intoClause();
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    WindowClauseContext *windowClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecificationContext* querySpecification();

  class PARSERS_PUBLIC_TYPE SubqueryContext : public antlr4::ParserRuleContext {
  public:
    SubqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryExpressionParensContext *queryExpressionParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubqueryContext* subquery();

  class PARSERS_PUBLIC_TYPE QuerySpecOptionContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *DISTINCT_SYMBOL();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN_SYMBOL();
    antlr4::tree::TerminalNode *HIGH_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *SQL_SMALL_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BIG_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_CALC_FOUND_ROWS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecOptionContext* querySpecOption();

  class PARSERS_PUBLIC_TYPE LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT_SYMBOL();
    LimitOptionsContext *limitOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseContext* limitClause();

  class PARSERS_PUBLIC_TYPE SimpleLimitClauseContext : public antlr4::ParserRuleContext {
  public:
    SimpleLimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT_SYMBOL();
    LimitOptionContext *limitOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleLimitClauseContext* simpleLimitClause();

  class PARSERS_PUBLIC_TYPE LimitOptionsContext : public antlr4::ParserRuleContext {
  public:
    LimitOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LimitOptionContext *> limitOption();
    LimitOptionContext* limitOption(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *OFFSET_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitOptionsContext* limitOptions();

  class PARSERS_PUBLIC_TYPE LimitOptionContext : public antlr4::ParserRuleContext {
  public:
    LimitOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *INT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitOptionContext* limitOption();

  class PARSERS_PUBLIC_TYPE IntoClauseContext : public antlr4::ParserRuleContext {
  public:
    IntoClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    antlr4::tree::TerminalNode *OUTFILE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *DUMPFILE_SYMBOL();
    std::vector<TextOrIdentifierContext *> textOrIdentifier();
    TextOrIdentifierContext* textOrIdentifier(size_t i);
    std::vector<UserVariableContext *> userVariable();
    UserVariableContext* userVariable(size_t i);
    CharsetClauseContext *charsetClause();
    FieldsClauseContext *fieldsClause();
    LinesClauseContext *linesClause();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntoClauseContext* intoClause();

  class PARSERS_PUBLIC_TYPE ProcedureAnalyseClauseContext : public antlr4::ParserRuleContext {
  public:
    ProcedureAnalyseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *ANALYSE_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureAnalyseClauseContext* procedureAnalyseClause();

  class PARSERS_PUBLIC_TYPE HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class PARSERS_PUBLIC_TYPE WindowClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW_SYMBOL();
    std::vector<WindowDefinitionContext *> windowDefinition();
    WindowDefinitionContext* windowDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowClauseContext* windowClause();

  class PARSERS_PUBLIC_TYPE WindowDefinitionContext : public antlr4::ParserRuleContext {
  public:
    WindowDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowNameContext *windowName();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    WindowSpecContext *windowSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowDefinitionContext* windowDefinition();

  class PARSERS_PUBLIC_TYPE WindowSpecContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    WindowSpecDetailsContext *windowSpecDetails();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowSpecContext* windowSpec();

  class PARSERS_PUBLIC_TYPE WindowSpecDetailsContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecDetailsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowNameContext *windowName();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();
    OrderClauseContext *orderClause();
    WindowFrameClauseContext *windowFrameClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowSpecDetailsContext* windowSpecDetails();

  class PARSERS_PUBLIC_TYPE WindowFrameClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameUnitsContext *windowFrameUnits();
    WindowFrameExtentContext *windowFrameExtent();
    WindowFrameExclusionContext *windowFrameExclusion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameClauseContext* windowFrameClause();

  class PARSERS_PUBLIC_TYPE WindowFrameUnitsContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameUnitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS_SYMBOL();
    antlr4::tree::TerminalNode *RANGE_SYMBOL();
    antlr4::tree::TerminalNode *GROUPS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameUnitsContext* windowFrameUnits();

  class PARSERS_PUBLIC_TYPE WindowFrameExtentContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameExtentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameStartContext *windowFrameStart();
    WindowFrameBetweenContext *windowFrameBetween();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameExtentContext* windowFrameExtent();

  class PARSERS_PUBLIC_TYPE WindowFrameStartContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDING_SYMBOL();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameStartContext* windowFrameStart();

  class PARSERS_PUBLIC_TYPE WindowFrameBetweenContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameBetweenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN_SYMBOL();
    std::vector<WindowFrameBoundContext *> windowFrameBound();
    WindowFrameBoundContext* windowFrameBound(size_t i);
    antlr4::tree::TerminalNode *AND_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameBetweenContext* windowFrameBetween();

  class PARSERS_PUBLIC_TYPE WindowFrameBoundContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WindowFrameStartContext *windowFrameStart();
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWING_SYMBOL();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameBoundContext* windowFrameBound();

  class PARSERS_PUBLIC_TYPE WindowFrameExclusionContext : public antlr4::ParserRuleContext {
  public:
    WindowFrameExclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLUDE_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    antlr4::tree::TerminalNode *TIES_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *OTHERS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameExclusionContext* windowFrameExclusion();

  class PARSERS_PUBLIC_TYPE WithClauseContext : public antlr4::ParserRuleContext {
  public:
    WithClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    std::vector<CommonTableExpressionContext *> commonTableExpression();
    CommonTableExpressionContext* commonTableExpression(size_t i);
    antlr4::tree::TerminalNode *RECURSIVE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithClauseContext* withClause();

  class PARSERS_PUBLIC_TYPE CommonTableExpressionContext : public antlr4::ParserRuleContext {
  public:
    CommonTableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    SubqueryContext *subquery();
    ColumnInternalRefListContext *columnInternalRefList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommonTableExpressionContext* commonTableExpression();

  class PARSERS_PUBLIC_TYPE GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();
    OlapOptionContext *olapOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByClauseContext* groupByClause();

  class PARSERS_PUBLIC_TYPE OlapOptionContext : public antlr4::ParserRuleContext {
  public:
    OlapOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *ROLLUP_SYMBOL();
    antlr4::tree::TerminalNode *CUBE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OlapOptionContext* olapOption();

  class PARSERS_PUBLIC_TYPE OrderClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    OrderListContext *orderList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderClauseContext* orderClause();

  class PARSERS_PUBLIC_TYPE DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectionContext* direction();

  class PARSERS_PUBLIC_TYPE FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *DUAL_SYMBOL();
    TableReferenceListContext *tableReferenceList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class PARSERS_PUBLIC_TYPE TableReferenceListContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableReferenceContext *> tableReference();
    TableReferenceContext* tableReference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferenceListContext* tableReferenceList();

  class PARSERS_PUBLIC_TYPE SelectOptionContext : public antlr4::ParserRuleContext {
  public:
    SelectOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuerySpecOptionContext *querySpecOption();
    antlr4::tree::TerminalNode *SQL_NO_CACHE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_CACHE_SYMBOL();
    antlr4::tree::TerminalNode *MAX_STATEMENT_TIME_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    Real_ulong_numberContext *real_ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectOptionContext* selectOption();

  class PARSERS_PUBLIC_TYPE LockingClauseContext : public antlr4::ParserRuleContext {
  public:
    LockingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    LockStrenghContext *lockStrengh();
    antlr4::tree::TerminalNode *OF_SYMBOL();
    TableAliasRefListContext *tableAliasRefList();
    LockedRowActionContext *lockedRowAction();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();
    antlr4::tree::TerminalNode *MODE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockingClauseContext* lockingClause();

  class PARSERS_PUBLIC_TYPE LockStrenghContext : public antlr4::ParserRuleContext {
  public:
    LockStrenghContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockStrenghContext* lockStrengh();

  class PARSERS_PUBLIC_TYPE LockedRowActionContext : public antlr4::ParserRuleContext {
  public:
    LockedRowActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKIP_SYMBOL();
    antlr4::tree::TerminalNode *LOCKED_SYMBOL();
    antlr4::tree::TerminalNode *NOWAIT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockedRowActionContext* lockedRowAction();

  class PARSERS_PUBLIC_TYPE SelectItemListContext : public antlr4::ParserRuleContext {
  public:
    SelectItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectItemContext *> selectItem();
    SelectItemContext* selectItem(size_t i);
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectItemListContext* selectItemList();

  class PARSERS_PUBLIC_TYPE SelectItemContext : public antlr4::ParserRuleContext {
  public:
    SelectItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableWildContext *tableWild();
    ExprContext *expr();
    SelectAliasContext *selectAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectItemContext* selectItem();

  class PARSERS_PUBLIC_TYPE SelectAliasContext : public antlr4::ParserRuleContext {
  public:
    SelectAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *AS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectAliasContext* selectAlias();

  class PARSERS_PUBLIC_TYPE WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class PARSERS_PUBLIC_TYPE TableReferenceContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableFactorContext *tableFactor();
    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    IdentifierContext *identifier();
    EscapedTableReferenceContext *escapedTableReference();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();
    std::vector<JoinedTableContext *> joinedTable();
    JoinedTableContext* joinedTable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferenceContext* tableReference();

  class PARSERS_PUBLIC_TYPE EscapedTableReferenceContext : public antlr4::ParserRuleContext {
  public:
    EscapedTableReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableFactorContext *tableFactor();
    std::vector<JoinedTableContext *> joinedTable();
    JoinedTableContext* joinedTable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EscapedTableReferenceContext* escapedTableReference();

  class PARSERS_PUBLIC_TYPE JoinedTableContext : public antlr4::ParserRuleContext {
  public:
    JoinedTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InnerJoinTypeContext *innerJoinType();
    TableReferenceContext *tableReference();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();
    OuterJoinTypeContext *outerJoinType();
    NaturalJoinTypeContext *naturalJoinType();
    TableFactorContext *tableFactor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinedTableContext* joinedTable();

  class PARSERS_PUBLIC_TYPE NaturalJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    NaturalJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NATURAL_SYMBOL();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *INNER_SYMBOL();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *OUTER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NaturalJoinTypeContext* naturalJoinType();

  class PARSERS_PUBLIC_TYPE InnerJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    InnerJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *INNER_SYMBOL();
    antlr4::tree::TerminalNode *CROSS_SYMBOL();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InnerJoinTypeContext* innerJoinType();

  class PARSERS_PUBLIC_TYPE OuterJoinTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    OuterJoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *OUTER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OuterJoinTypeContext* outerJoinType();

  class PARSERS_PUBLIC_TYPE TableFactorContext : public antlr4::ParserRuleContext {
  public:
    TableFactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleTableContext *singleTable();
    SingleTableParensContext *singleTableParens();
    DerivedTableContext *derivedTable();
    TableReferenceListParensContext *tableReferenceListParens();
    TableFunctionContext *tableFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableFactorContext* tableFactor();

  class PARSERS_PUBLIC_TYPE SingleTableContext : public antlr4::ParserRuleContext {
  public:
    SingleTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    UsePartitionContext *usePartition();
    TableAliasContext *tableAlias();
    IndexHintListContext *indexHintList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTableContext* singleTable();

  class PARSERS_PUBLIC_TYPE SingleTableParensContext : public antlr4::ParserRuleContext {
  public:
    SingleTableParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    SingleTableContext *singleTable();
    SingleTableParensContext *singleTableParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTableParensContext* singleTableParens();

  class PARSERS_PUBLIC_TYPE DerivedTableContext : public antlr4::ParserRuleContext {
  public:
    DerivedTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubqueryContext *subquery();
    TableAliasContext *tableAlias();
    ColumnInternalRefListContext *columnInternalRefList();
    antlr4::tree::TerminalNode *LATERAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DerivedTableContext* derivedTable();

  class PARSERS_PUBLIC_TYPE TableReferenceListParensContext : public antlr4::ParserRuleContext {
  public:
    TableReferenceListParensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    TableReferenceListContext *tableReferenceList();
    TableReferenceListParensContext *tableReferenceListParens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableReferenceListParensContext* tableReferenceListParens();

  class PARSERS_PUBLIC_TYPE TableFunctionContext : public antlr4::ParserRuleContext {
  public:
    TableFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    ColumnsClauseContext *columnsClause();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    TableAliasContext *tableAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableFunctionContext* tableFunction();

  class PARSERS_PUBLIC_TYPE ColumnsClauseContext : public antlr4::ParserRuleContext {
  public:
    ColumnsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<JtColumnContext *> jtColumn();
    JtColumnContext* jtColumn(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnsClauseContext* columnsClause();

  class PARSERS_PUBLIC_TYPE JtColumnContext : public antlr4::ParserRuleContext {
  public:
    JtColumnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *ORDINALITY_SYMBOL();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *PATH_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    CollateContext *collate();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();
    OnEmptyOrErrorContext *onEmptyOrError();
    antlr4::tree::TerminalNode *NESTED_SYMBOL();
    ColumnsClauseContext *columnsClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JtColumnContext* jtColumn();

  class PARSERS_PUBLIC_TYPE OnEmptyOrErrorContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyOrErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OnEmptyContext *onEmpty();
    OnErrorContext *onError();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnEmptyOrErrorContext* onEmptyOrError();

  class PARSERS_PUBLIC_TYPE OnEmptyContext : public antlr4::ParserRuleContext {
  public:
    OnEmptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JtOnResponseContext *jtOnResponse();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *EMPTY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnEmptyContext* onEmpty();

  class PARSERS_PUBLIC_TYPE OnErrorContext : public antlr4::ParserRuleContext {
  public:
    OnErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JtOnResponseContext *jtOnResponse();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnErrorContext* onError();

  class PARSERS_PUBLIC_TYPE JtOnResponseContext : public antlr4::ParserRuleContext {
  public:
    JtOnResponseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JtOnResponseContext* jtOnResponse();

  class PARSERS_PUBLIC_TYPE UnionOptionContext : public antlr4::ParserRuleContext {
  public:
    UnionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionOptionContext* unionOption();

  class PARSERS_PUBLIC_TYPE TableAliasContext : public antlr4::ParserRuleContext {
  public:
    TableAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasContext* tableAlias();

  class PARSERS_PUBLIC_TYPE IndexHintListContext : public antlr4::ParserRuleContext {
  public:
    IndexHintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexHintContext *> indexHint();
    IndexHintContext* indexHint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintListContext* indexHintList();

  class PARSERS_PUBLIC_TYPE IndexHintContext : public antlr4::ParserRuleContext {
  public:
    IndexHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexHintTypeContext *indexHintType();
    KeyOrIndexContext *keyOrIndex();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IndexListContext *indexList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    IndexHintClauseContext *indexHintClause();
    antlr4::tree::TerminalNode *USE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintContext* indexHint();

  class PARSERS_PUBLIC_TYPE IndexHintTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexHintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORCE_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintTypeContext* indexHintType();

  class PARSERS_PUBLIC_TYPE KeyOrIndexContext : public antlr4::ParserRuleContext {
  public:
    KeyOrIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyOrIndexContext* keyOrIndex();

  class PARSERS_PUBLIC_TYPE ConstraintKeyTypeContext : public antlr4::ParserRuleContext {
  public:
    ConstraintKeyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    KeyOrIndexContext *keyOrIndex();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintKeyTypeContext* constraintKeyType();

  class PARSERS_PUBLIC_TYPE IndexHintClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexHintClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *ORDER_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexHintClauseContext* indexHintClause();

  class PARSERS_PUBLIC_TYPE IndexListContext : public antlr4::ParserRuleContext {
  public:
    IndexListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexListElementContext *> indexListElement();
    IndexListElementContext* indexListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexListContext* indexList();

  class PARSERS_PUBLIC_TYPE IndexListElementContext : public antlr4::ParserRuleContext {
  public:
    IndexListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexListElementContext* indexListElement();

  class PARSERS_PUBLIC_TYPE UpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    UpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    TableReferenceListContext *tableReferenceList();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    UpdateListContext *updateList();
    WithClauseContext *withClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    WhereClauseContext *whereClause();
    OrderClauseContext *orderClause();
    SimpleLimitClauseContext *simpleLimitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateStatementContext* updateStatement();

  class PARSERS_PUBLIC_TYPE TransactionOrLockingStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionOrLockingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TransactionStatementContext *transactionStatement();
    SavepointStatementContext *savepointStatement();
    LockStatementContext *lockStatement();
    XaStatementContext *xaStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionOrLockingStatementContext* transactionOrLockingStatement();

  class PARSERS_PUBLIC_TYPE TransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    std::vector<TransactionCharacteristicContext *> transactionCharacteristic();
    TransactionCharacteristicContext* transactionCharacteristic(size_t i);
    antlr4::tree::TerminalNode *COMMIT_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *CHAIN_SYMBOL();
    antlr4::tree::TerminalNode *RELEASE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> NO_SYMBOL();
    antlr4::tree::TerminalNode* NO_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionStatementContext* transactionStatement();

  class PARSERS_PUBLIC_TYPE BeginWorkContext : public antlr4::ParserRuleContext {
  public:
    BeginWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginWorkContext* beginWork();

  class PARSERS_PUBLIC_TYPE TransactionCharacteristicContext : public antlr4::ParserRuleContext {
  public:
    TransactionCharacteristicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *CONSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *SNAPSHOT_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionCharacteristicContext* transactionCharacteristic();

  class PARSERS_PUBLIC_TYPE SetTransactionCharacteristicContext : public antlr4::ParserRuleContext {
  public:
    SetTransactionCharacteristicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION_SYMBOL();
    antlr4::tree::TerminalNode *LEVEL_SYMBOL();
    IsolationLevelContext *isolationLevel();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetTransactionCharacteristicContext* setTransactionCharacteristic();

  class PARSERS_PUBLIC_TYPE IsolationLevelContext : public antlr4::ParserRuleContext {
  public:
    IsolationLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *COMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *UNCOMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *SERIALIZABLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IsolationLevelContext* isolationLevel();

  class PARSERS_PUBLIC_TYPE SavepointStatementContext : public antlr4::ParserRuleContext {
  public:
    SavepointStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *CHAIN_SYMBOL();
    antlr4::tree::TerminalNode *RELEASE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> NO_SYMBOL();
    antlr4::tree::TerminalNode* NO_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SavepointStatementContext* savepointStatement();

  class PARSERS_PUBLIC_TYPE LockStatementContext : public antlr4::ParserRuleContext {
  public:
    LockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    std::vector<LockItemContext *> lockItem();
    LockItemContext* lockItem(size_t i);
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *BACKUP_SYMBOL();
    antlr4::tree::TerminalNode *UNLOCK_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockStatementContext* lockStatement();

  class PARSERS_PUBLIC_TYPE LockItemContext : public antlr4::ParserRuleContext {
  public:
    LockItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    LockOptionContext *lockOption();
    TableAliasContext *tableAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockItemContext* lockItem();

  class PARSERS_PUBLIC_TYPE LockOptionContext : public antlr4::ParserRuleContext {
  public:
    LockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *WRITE_SYMBOL();
    antlr4::tree::TerminalNode *LOW_PRIORITY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockOptionContext* lockOption();

  class PARSERS_PUBLIC_TYPE XaStatementContext : public antlr4::ParserRuleContext {
  public:
    XaStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA_SYMBOL();
    XidContext *xid();
    antlr4::tree::TerminalNode *END_SYMBOL();
    antlr4::tree::TerminalNode *PREPARE_SYMBOL();
    antlr4::tree::TerminalNode *COMMIT_SYMBOL();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *RECOVER_SYMBOL();
    XaConvertContext *xaConvert();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *SUSPEND_SYMBOL();
    antlr4::tree::TerminalNode *ONE_SYMBOL();
    antlr4::tree::TerminalNode *PHASE_SYMBOL();
    antlr4::tree::TerminalNode *JOIN_SYMBOL();
    antlr4::tree::TerminalNode *RESUME_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *MIGRATE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaStatementContext* xaStatement();

  class PARSERS_PUBLIC_TYPE XaConvertContext : public antlr4::ParserRuleContext {
  public:
    XaConvertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *XID_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XaConvertContext* xaConvert();

  class PARSERS_PUBLIC_TYPE XidContext : public antlr4::ParserRuleContext {
  public:
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    Ulong_numberContext *ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XidContext* xid();

  class PARSERS_PUBLIC_TYPE ReplicationStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplicationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *BEFORE_SYMBOL();
    ExprContext *expr();
    ChangeMasterContext *changeMaster();
    antlr4::tree::TerminalNode *RESET_SYMBOL();
    std::vector<ResetOptionContext *> resetOption();
    ResetOptionContext* resetOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    IfExistsContext *ifExists();
    IdentifierContext *identifier();
    SlaveContext *slave();
    ChangeReplicationContext *changeReplication();
    ReplicationLoadContext *replicationLoad();
    GroupReplicationContext *groupReplication();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicationStatementContext* replicationStatement();

  class PARSERS_PUBLIC_TYPE ResetOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    ResetOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    MasterResetOptionsContext *masterResetOptions();
    antlr4::tree::TerminalNode *CACHE_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetOptionContext* resetOption();

  class PARSERS_PUBLIC_TYPE MasterResetOptionsContext : public antlr4::ParserRuleContext {
  public:
    MasterResetOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MasterResetOptionsContext* masterResetOptions();

  class PARSERS_PUBLIC_TYPE ReplicationLoadContext : public antlr4::ParserRuleContext {
  public:
    ReplicationLoadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefContext *tableRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicationLoadContext* replicationLoad();

  class PARSERS_PUBLIC_TYPE ChangeMasterContext : public antlr4::ParserRuleContext {
  public:
    ChangeMasterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    ChangeMasterOptionsContext *changeMasterOptions();
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeMasterContext* changeMaster();

  class PARSERS_PUBLIC_TYPE ChangeMasterOptionsContext : public antlr4::ParserRuleContext {
  public:
    ChangeMasterOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MasterOptionContext *> masterOption();
    MasterOptionContext* masterOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeMasterOptionsContext* changeMasterOptions();

  class PARSERS_PUBLIC_TYPE MasterOptionContext : public antlr4::ParserRuleContext {
  public:
    MasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_HOST_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();
    antlr4::tree::TerminalNode *MASTER_BIND_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_USER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PORT_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_DELAY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH_SYMBOL();
    antlr4::tree::TerminalNode *GET_MASTER_PUBLIC_KEY_SYM();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS_SYMBOL();
    ServerIdListContext *serverIdList();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION_SYMBOL();
    MasterFileDefContext *masterFileDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MasterOptionContext* masterOption();

  class PARSERS_PUBLIC_TYPE MasterFileDefContext : public antlr4::ParserRuleContext {
  public:
    MasterFileDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringNoLinebreakContext *textStringNoLinebreak();
    antlr4::tree::TerminalNode *MASTER_LOG_POS_SYMBOL();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS_SYMBOL();
    Ulong_numberContext *ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MasterFileDefContext* masterFileDef();

  class PARSERS_PUBLIC_TYPE ServerIdListContext : public antlr4::ParserRuleContext {
  public:
    ServerIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<Ulong_numberContext *> ulong_number();
    Ulong_numberContext* ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerIdListContext* serverIdList();

  class PARSERS_PUBLIC_TYPE ChangeReplicationContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *FILTER_SYMBOL();
    std::vector<FilterDefinitionContext *> filterDefinition();
    FilterDefinitionContext* filterDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    ChannelContext *channel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeReplicationContext* changeReplication();

  class PARSERS_PUBLIC_TYPE FilterDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FilterDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLICATE_DO_DB_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FilterDbListContext *filterDbList();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE_SYMBOL();
    FilterTableListContext *filterTableList();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE_SYMBOL();
    FilterStringListContext *filterStringList();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB_SYMBOL();
    FilterDbPairListContext *filterDbPairList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDefinitionContext* filterDefinition();

  class PARSERS_PUBLIC_TYPE FilterDbListContext : public antlr4::ParserRuleContext {
  public:
    FilterDbListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaRefContext *> schemaRef();
    SchemaRefContext* schemaRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDbListContext* filterDbList();

  class PARSERS_PUBLIC_TYPE FilterTableListContext : public antlr4::ParserRuleContext {
  public:
    FilterTableListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FilterTableRefContext *> filterTableRef();
    FilterTableRefContext* filterTableRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterTableListContext* filterTableList();

  class PARSERS_PUBLIC_TYPE FilterStringListContext : public antlr4::ParserRuleContext {
  public:
    FilterStringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FilterWildDbTableStringContext *> filterWildDbTableString();
    FilterWildDbTableStringContext* filterWildDbTableString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterStringListContext* filterStringList();

  class PARSERS_PUBLIC_TYPE FilterWildDbTableStringContext : public antlr4::ParserRuleContext {
  public:
    FilterWildDbTableStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringNoLinebreakContext *textStringNoLinebreak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterWildDbTableStringContext* filterWildDbTableString();

  class PARSERS_PUBLIC_TYPE FilterDbPairListContext : public antlr4::ParserRuleContext {
  public:
    FilterDbPairListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemaIdentifierPairContext *> schemaIdentifierPair();
    SchemaIdentifierPairContext* schemaIdentifierPair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterDbPairListContext* filterDbPairList();

  class PARSERS_PUBLIC_TYPE SlaveContext : public antlr4::ParserRuleContext {
  public:
    SlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    SlaveConnectionOptionsContext *slaveConnectionOptions();
    SlaveThreadOptionsContext *slaveThreadOptions();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    SlaveUntilOptionsContext *slaveUntilOptions();
    ChannelContext *channel();
    antlr4::tree::TerminalNode *STOP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SlaveContext* slave();

  class PARSERS_PUBLIC_TYPE SlaveUntilOptionsContext : public antlr4::ParserRuleContext {
  public:
    SlaveUntilOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MasterFileDefContext *> masterFileDef();
    MasterFileDefContext* masterFileDef(size_t i);
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SlaveUntilOptionsContext* slaveUntilOptions();

  class PARSERS_PUBLIC_TYPE SlaveConnectionOptionsContext : public antlr4::ParserRuleContext {
  public:
    SlaveConnectionOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_OPERATOR();
    antlr4::tree::TerminalNode* EQUAL_OPERATOR(size_t i);
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_DIR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SlaveConnectionOptionsContext* slaveConnectionOptions();

  class PARSERS_PUBLIC_TYPE SlaveThreadOptionsContext : public antlr4::ParserRuleContext {
  public:
    SlaveThreadOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SlaveThreadOptionContext *> slaveThreadOption();
    SlaveThreadOptionContext* slaveThreadOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SlaveThreadOptionsContext* slaveThreadOptions();

  class PARSERS_PUBLIC_TYPE SlaveThreadOptionContext : public antlr4::ParserRuleContext {
  public:
    SlaveThreadOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELAY_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *SQL_THREAD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SlaveThreadOptionContext* slaveThreadOption();

  class PARSERS_PUBLIC_TYPE GroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    GroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP_REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *STOP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupReplicationContext* groupReplication();

  class PARSERS_PUBLIC_TYPE PreparedStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    PreparedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *PREPARE_SYMBOL();
    TextLiteralContext *textLiteral();
    UserVariableContext *userVariable();
    ExecuteStatementContext *executeStatement();
    antlr4::tree::TerminalNode *DEALLOCATE_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreparedStatementContext* preparedStatement();

  class PARSERS_PUBLIC_TYPE ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    ExecuteVarListContext *executeVarList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteStatementContext* executeStatement();

  class PARSERS_PUBLIC_TYPE ExecuteVarListContext : public antlr4::ParserRuleContext {
  public:
    ExecuteVarListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserVariableContext *> userVariable();
    UserVariableContext* userVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteVarListContext* executeVarList();

  class PARSERS_PUBLIC_TYPE CloneStatementContext : public antlr4::ParserRuleContext {
  public:
    CloneStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLONE_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *REMOTE_SYMBOL();
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    UserContext *user();
    antlr4::tree::TerminalNode *COLON_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    EqualContext *equal();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    DataDirSSLContext *dataDirSSL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CloneStatementContext* cloneStatement();

  class PARSERS_PUBLIC_TYPE DataDirSSLContext : public antlr4::ParserRuleContext {
  public:
    DataDirSSLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SslContext *ssl();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    EqualContext *equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataDirSSLContext* dataDirSSL();

  class PARSERS_PUBLIC_TYPE SslContext : public antlr4::ParserRuleContext {
  public:
    SslContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    antlr4::tree::TerminalNode *SSL_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SslContext* ssl();

  class PARSERS_PUBLIC_TYPE AccountManagementStatementContext : public antlr4::ParserRuleContext {
  public:
    AccountManagementStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterUserContext *alterUser();
    CreateUserContext *createUser();
    DropUserContext *dropUser();
    GrantContext *grant();
    RenameUserContext *renameUser();
    RevokeContext *revoke();
    SetPasswordContext *setPassword();
    SetRoleContext *setRole();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccountManagementStatementContext* accountManagementStatement();

  class PARSERS_PUBLIC_TYPE AlterUserContext : public antlr4::ParserRuleContext {
  public:
    AlterUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    AlterUserTailContext *alterUserTail();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserContext* alterUser();

  class PARSERS_PUBLIC_TYPE AlterUserTailContext : public antlr4::ParserRuleContext {
  public:
    AlterUserTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateUserTailContext *createUserTail();
    CreateUserListContext *createUserList();
    AlterUserListContext *alterUserList();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    ParenthesesContext *parentheses();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    ReplacePasswordContext *replacePassword();
    RetainCurrentPasswordContext *retainCurrentPassword();
    DiscardOldPasswordContext *discardOldPassword();
    UserContext *user();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    RoleListContext *roleList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserTailContext* alterUserTail();

  class PARSERS_PUBLIC_TYPE CreateUserContext : public antlr4::ParserRuleContext {
  public:
    CreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    CreateUserListContext *createUserList();
    DefaultRoleClauseContext *defaultRoleClause();
    CreateUserTailContext *createUserTail();
    IfNotExistsContext *ifNotExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserContext* createUser();

  class PARSERS_PUBLIC_TYPE CreateUserTailContext : public antlr4::ParserRuleContext {
  public:
    CreateUserTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequireClauseContext *requireClause();
    ConnectOptionsContext *connectOptions();
    AccountLockPasswordExpireOptionsContext *accountLockPasswordExpireOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserTailContext* createUserTail();

  class PARSERS_PUBLIC_TYPE DefaultRoleClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultRoleClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    RoleListContext *roleList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultRoleClauseContext* defaultRoleClause();

  class PARSERS_PUBLIC_TYPE RequireClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    RequireClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    RequireListContext *requireList();
    antlr4::tree::TerminalNode *SSL_SYMBOL();
    antlr4::tree::TerminalNode *X509_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireClauseContext* requireClause();

  class PARSERS_PUBLIC_TYPE ConnectOptionsContext : public antlr4::ParserRuleContext {
  public:
    ConnectOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> MAX_QUERIES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode* MAX_QUERIES_PER_HOUR_SYMBOL(size_t i);
    std::vector<Ulong_numberContext *> ulong_number();
    Ulong_numberContext* ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_UPDATES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode* MAX_UPDATES_PER_HOUR_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_CONNECTIONS_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode* MAX_CONNECTIONS_PER_HOUR_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX_USER_CONNECTIONS_SYMBOL();
    antlr4::tree::TerminalNode* MAX_USER_CONNECTIONS_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectOptionsContext* connectOptions();

  class PARSERS_PUBLIC_TYPE AccountLockPasswordExpireOptionsContext : public antlr4::ParserRuleContext {
  public:
    AccountLockPasswordExpireOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *UNLOCK_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *EXPIRE_SYMBOL();
    antlr4::tree::TerminalNode *HISTORY_SYMBOL();
    antlr4::tree::TerminalNode *REUSE_SYMBOL();
    antlr4::tree::TerminalNode *REQUIRE_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *NEVER_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccountLockPasswordExpireOptionsContext* accountLockPasswordExpireOptions();

  class PARSERS_PUBLIC_TYPE DropUserContext : public antlr4::ParserRuleContext {
  public:
    DropUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    UserListContext *userList();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropUserContext* dropUser();

  class PARSERS_PUBLIC_TYPE GrantContext : public antlr4::ParserRuleContext {
  public:
    GrantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT_SYMBOL();
    antlr4::tree::TerminalNode* GRANT_SYMBOL(size_t i);
    RoleOrPrivilegesListContext *roleOrPrivilegesList();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    UserListContext *userList();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    GrantIdentifierContext *grantIdentifier();
    GrantTargetListContext *grantTargetList();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    UserContext *user();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *ADMIN_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    AclTypeContext *aclType();
    VersionedRequireClauseContext *versionedRequireClause();
    GrantOptionsContext *grantOptions();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantContext* grant();

  class PARSERS_PUBLIC_TYPE GrantTargetListContext : public antlr4::ParserRuleContext {
  public:
    GrantTargetListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateUserListContext *createUserList();
    UserListContext *userList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantTargetListContext* grantTargetList();

  class PARSERS_PUBLIC_TYPE GrantOptionsContext : public antlr4::ParserRuleContext {
  public:
    GrantOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    std::vector<GrantOptionContext *> grantOption();
    GrantOptionContext* grantOption(size_t i);
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantOptionsContext* grantOptions();

  class PARSERS_PUBLIC_TYPE VersionedRequireClauseContext : public antlr4::ParserRuleContext {
  public:
    VersionedRequireClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequireClauseContext *requireClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionedRequireClauseContext* versionedRequireClause();

  class PARSERS_PUBLIC_TYPE RenameUserContext : public antlr4::ParserRuleContext {
  public:
    RenameUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    std::vector<UserContext *> user();
    UserContext* user(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO_SYMBOL();
    antlr4::tree::TerminalNode* TO_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RenameUserContext* renameUser();

  class PARSERS_PUBLIC_TYPE RevokeContext : public antlr4::ParserRuleContext {
  public:
    RevokeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE_SYMBOL();
    RoleOrPrivilegesListContext *roleOrPrivilegesList();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    UserListContext *userList();
    OnTypeToContext *onTypeTo();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    UserContext *user();
    GrantIdentifierContext *grantIdentifier();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();
    AclTypeContext *aclType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokeContext* revoke();

  class PARSERS_PUBLIC_TYPE OnTypeToContext : public antlr4::ParserRuleContext {
  public:
    OnTypeToContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON_SYMBOL();
    GrantIdentifierContext *grantIdentifier();
    AclTypeContext *aclType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnTypeToContext* onTypeTo();

  class PARSERS_PUBLIC_TYPE AclTypeContext : public antlr4::ParserRuleContext {
  public:
    AclTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AclTypeContext* aclType();

  class PARSERS_PUBLIC_TYPE SetPasswordContext : public antlr4::ParserRuleContext {
  public:
    SetPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode* PASSWORD_SYMBOL(size_t i);
    EqualContext *equal();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *OLD_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    UserContext *user();
    ReplacePasswordContext *replacePassword();
    RetainCurrentPasswordContext *retainCurrentPassword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetPasswordContext* setPassword();

  class PARSERS_PUBLIC_TYPE RoleOrPrivilegesListContext : public antlr4::ParserRuleContext {
  public:
    RoleOrPrivilegesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleOrPrivilegeContext *> roleOrPrivilege();
    RoleOrPrivilegeContext* roleOrPrivilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleOrPrivilegesListContext* roleOrPrivilegesList();

  class PARSERS_PUBLIC_TYPE RoleOrPrivilegeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *object = nullptr;;
    RoleOrPrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierOrTextContext *roleIdentifierOrText();
    antlr4::tree::TerminalNode *AT_TEXT_SUFFIX();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    ColumnInternalRefListContext *columnInternalRefList();
    antlr4::tree::TerminalNode *SELECT_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *REFERENCES_SYMBOL();
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    antlr4::tree::TerminalNode *USAGE_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    antlr4::tree::TerminalNode *RELOAD_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();
    antlr4::tree::TerminalNode *PROCESS_SYMBOL();
    antlr4::tree::TerminalNode *FILE_SYMBOL();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    antlr4::tree::TerminalNode *SUPER_SYMBOL();
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *DATABASES_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *ROUTINE_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *CLIENT_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleOrPrivilegeContext* roleOrPrivilege();

  class PARSERS_PUBLIC_TYPE GrantIdentifierContext : public antlr4::ParserRuleContext {
  public:
    GrantIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> MULT_OPERATOR();
    antlr4::tree::TerminalNode* MULT_OPERATOR(size_t i);
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    IdentifierContext *identifier();
    TableRefContext *tableRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantIdentifierContext* grantIdentifier();

  class PARSERS_PUBLIC_TYPE RequireListContext : public antlr4::ParserRuleContext {
  public:
    RequireListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequireListElementContext *> requireListElement();
    RequireListElementContext* requireListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND_SYMBOL();
    antlr4::tree::TerminalNode* AND_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireListContext* requireList();

  class PARSERS_PUBLIC_TYPE RequireListElementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *element = nullptr;;
    RequireListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringContext *textString();
    antlr4::tree::TerminalNode *CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *ISSUER_SYMBOL();
    antlr4::tree::TerminalNode *SUBJECT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequireListElementContext* requireListElement();

  class PARSERS_PUBLIC_TYPE GrantOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    GrantOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION_SYMBOL();
    antlr4::tree::TerminalNode *GRANT_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantOptionContext* grantOption();

  class PARSERS_PUBLIC_TYPE SetRoleContext : public antlr4::ParserRuleContext {
  public:
    SetRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    std::vector<RoleListContext *> roleList();
    RoleListContext* roleList(size_t i);
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *TO_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *EXCEPT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetRoleContext* setRole();

  class PARSERS_PUBLIC_TYPE RoleListContext : public antlr4::ParserRuleContext {
  public:
    RoleListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoleContext *> role();
    RoleContext* role(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleListContext* roleList();

  class PARSERS_PUBLIC_TYPE RoleContext : public antlr4::ParserRuleContext {
  public:
    RoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierOrTextContext *roleIdentifierOrText();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleContext* role();

  class PARSERS_PUBLIC_TYPE TableAdministrationStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    TableAdministrationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    TableRefListContext *tableRefList();
    antlr4::tree::TerminalNode *ANALYZE_SYMBOL();
    NoWriteToBinLogContext *noWriteToBinLog();
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    std::vector<CheckOptionContext *> checkOption();
    CheckOptionContext* checkOption(size_t i);
    antlr4::tree::TerminalNode *CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *OPTIMIZE_SYMBOL();
    HistogramContext *histogram();
    antlr4::tree::TerminalNode *REPAIR_SYMBOL();
    std::vector<RepairTypeContext *> repairType();
    RepairTypeContext* repairType(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAdministrationStatementContext* tableAdministrationStatement();

  class PARSERS_PUBLIC_TYPE HistogramContext : public antlr4::ParserRuleContext {
  public:
    HistogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *HISTOGRAM_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *BUCKETS_SYMBOL();
    antlr4::tree::TerminalNode *DROP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HistogramContext* histogram();

  class PARSERS_PUBLIC_TYPE CheckOptionContext : public antlr4::ParserRuleContext {
  public:
    CheckOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *UPGRADE_SYMBOL();
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *FAST_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUM_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *CHANGED_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckOptionContext* checkOption();

  class PARSERS_PUBLIC_TYPE RepairTypeContext : public antlr4::ParserRuleContext {
  public:
    RepairTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *USE_FRM_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepairTypeContext* repairType();

  class PARSERS_PUBLIC_TYPE InstallUninstallStatmentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *action = nullptr;;
    antlr4::Token *type = nullptr;;
    InstallUninstallStatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *INSTALL_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_SYMBOL();
    TextStringLiteralListContext *textStringLiteralList();
    antlr4::tree::TerminalNode *COMPONENT_SYMBOL();
    PluginRefContext *pluginRef();
    antlr4::tree::TerminalNode *UNINSTALL_SYMBOL();
    std::vector<ComponentRefContext *> componentRef();
    ComponentRefContext* componentRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstallUninstallStatmentContext* installUninstallStatment();

  class PARSERS_PUBLIC_TYPE SetStatementContext : public antlr4::ParserRuleContext {
  public:
    SetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    OptionValueNoOptionTypeContext *optionValueNoOptionType();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    SetTransactionCharacteristicContext *setTransactionCharacteristic();
    OptionValueFollowingOptionTypeContext *optionValueFollowingOptionType();
    OptionTypeContext *optionType();
    antlr4::tree::TerminalNode *ONE_SHOT_SYMBOL();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    OptionValueListContext *optionValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetStatementContext* setStatement();

  class PARSERS_PUBLIC_TYPE OptionValueNoOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionValueNoOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InternalVariableNameContext *internalVariableName();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();
    CharsetClauseContext *charsetClause();
    UserVariableContext *userVariable();
    ExprContext *expr();
    SetSystemVariableContext *setSystemVariable();
    antlr4::tree::TerminalNode *NAMES_SYMBOL();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    CollateContext *collate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueNoOptionTypeContext* optionValueNoOptionType();

  class PARSERS_PUBLIC_TYPE SetSystemVariableContext : public antlr4::ParserRuleContext {
  public:
    SetSystemVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_AT_SIGN_SYMBOL();
    InternalVariableNameContext *internalVariableName();
    SetVarIdentTypeContext *setVarIdentType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetSystemVariableContext* setSystemVariable();

  class PARSERS_PUBLIC_TYPE OptionValueFollowingOptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionValueFollowingOptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InternalVariableNameContext *internalVariableName();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueFollowingOptionTypeContext* optionValueFollowingOptionType();

  class PARSERS_PUBLIC_TYPE SetExprOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    SetExprOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetExprOrDefaultContext* setExprOrDefault();

  class PARSERS_PUBLIC_TYPE OptionValueListContext : public antlr4::ParserRuleContext {
  public:
    OptionValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OptionValueContext *> optionValue();
    OptionValueContext* optionValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueListContext* optionValueList();

  class PARSERS_PUBLIC_TYPE OptionValueContext : public antlr4::ParserRuleContext {
  public:
    OptionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionTypeContext *optionType();
    InternalVariableNameContext *internalVariableName();
    EqualContext *equal();
    SetExprOrDefaultContext *setExprOrDefault();
    OptionValueNoOptionTypeContext *optionValueNoOptionType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionValueContext* optionValue();

  class PARSERS_PUBLIC_TYPE ShowStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;;
    antlr4::Token *object = nullptr;;
    ShowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    FromOrInContext *fromOrIn();
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CharsetContext *charset();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    UserContext *user();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    UserListContext *userList();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    ProcedureRefContext *procedureRef();
    FunctionRefContext *functionRef();
    antlr4::tree::TerminalNode *AUTHORS_SYMBOL();
    antlr4::tree::TerminalNode *DATABASES_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGERS_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    antlr4::tree::TerminalNode *PLUGINS_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *MUTEX_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *ENGINES_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();
    antlr4::tree::TerminalNode *PROFILES_SYMBOL();
    antlr4::tree::TerminalNode *PROFILE_SYMBOL();
    antlr4::tree::TerminalNode *PROCESSLIST_SYMBOL();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    antlr4::tree::TerminalNode *CONTRIBUTORS_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();
    antlr4::tree::TerminalNode *GRANTS_SYMBOL();
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *PROCEDURE_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    NonBlockingContext *nonBlocking();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *RELAYLOG_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    antlr4::tree::TerminalNode *INDEXES_SYMBOL();
    antlr4::tree::TerminalNode *KEYS_SYMBOL();
    antlr4::tree::TerminalNode *VARIABLES_SYMBOL();
    SchemaRefContext *schemaRef();
    EventRefContext *eventRef();
    TriggerRefContext *triggerRef();
    ViewRefContext *viewRef();
    LikeOrWhereContext *likeOrWhere();
    ShowCommandTypeContext *showCommandType();
    InDbContext *inDb();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    TextStringContext *textString();
    Ulonglong_numberContext *ulonglong_number();
    LimitClauseContext *limitClause();
    ChannelContext *channel();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    WhereClauseContext *whereClause();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    std::vector<ProfileTypeContext *> profileType();
    ProfileTypeContext* profileType(size_t i);
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    OptionTypeContext *optionType();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGER_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    IfNotExistsContext *ifNotExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowStatementContext* showStatement();

  class PARSERS_PUBLIC_TYPE ShowCommandTypeContext : public antlr4::ParserRuleContext {
  public:
    ShowCommandTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCommandTypeContext* showCommandType();

  class PARSERS_PUBLIC_TYPE NonBlockingContext : public antlr4::ParserRuleContext {
  public:
    NonBlockingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NONBLOCKING_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonBlockingContext* nonBlocking();

  class PARSERS_PUBLIC_TYPE FromOrInContext : public antlr4::ParserRuleContext {
  public:
    FromOrInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromOrInContext* fromOrIn();

  class PARSERS_PUBLIC_TYPE InDbContext : public antlr4::ParserRuleContext {
  public:
    InDbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FromOrInContext *fromOrIn();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InDbContext* inDb();

  class PARSERS_PUBLIC_TYPE ProfileTypeContext : public antlr4::ParserRuleContext {
  public:
    ProfileTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLOCK_SYMBOL();
    antlr4::tree::TerminalNode *IO_SYMBOL();
    antlr4::tree::TerminalNode *CONTEXT_SYMBOL();
    antlr4::tree::TerminalNode *SWITCHES_SYMBOL();
    antlr4::tree::TerminalNode *PAGE_SYMBOL();
    antlr4::tree::TerminalNode *FAULTS_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *CPU_SYMBOL();
    antlr4::tree::TerminalNode *IPC_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SWAPS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProfileTypeContext* profileType();

  class PARSERS_PUBLIC_TYPE OtherAdministrativeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    OtherAdministrativeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    KeyCacheListOrPartsContext *keyCacheListOrParts();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *CACHE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *FLUSH_SYMBOL();
    FlushTablesContext *flushTables();
    std::vector<FlushOptionContext *> flushOption();
    FlushOptionContext* flushOption(size_t i);
    NoWriteToBinLogContext *noWriteToBinLog();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *KILL_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    PreloadTailContext *preloadTail();
    antlr4::tree::TerminalNode *LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OtherAdministrativeStatementContext* otherAdministrativeStatement();

  class PARSERS_PUBLIC_TYPE KeyCacheListOrPartsContext : public antlr4::ParserRuleContext {
  public:
    KeyCacheListOrPartsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyCacheListContext *keyCacheList();
    AssignToKeycachePartitionContext *assignToKeycachePartition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyCacheListOrPartsContext* keyCacheListOrParts();

  class PARSERS_PUBLIC_TYPE KeyCacheListContext : public antlr4::ParserRuleContext {
  public:
    KeyCacheListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignToKeycacheContext *> assignToKeycache();
    AssignToKeycacheContext* assignToKeycache(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyCacheListContext* keyCacheList();

  class PARSERS_PUBLIC_TYPE AssignToKeycacheContext : public antlr4::ParserRuleContext {
  public:
    AssignToKeycacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    CacheKeyListContext *cacheKeyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignToKeycacheContext* assignToKeycache();

  class PARSERS_PUBLIC_TYPE AssignToKeycachePartitionContext : public antlr4::ParserRuleContext {
  public:
    AssignToKeycachePartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CacheKeyListContext *cacheKeyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignToKeycachePartitionContext* assignToKeycachePartition();

  class PARSERS_PUBLIC_TYPE CacheKeyListContext : public antlr4::ParserRuleContext {
  public:
    CacheKeyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyOrIndexContext *keyOrIndex();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    KeyUsageListContext *keyUsageList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CacheKeyListContext* cacheKeyList();

  class PARSERS_PUBLIC_TYPE KeyUsageElementContext : public antlr4::ParserRuleContext {
  public:
    KeyUsageElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyUsageElementContext* keyUsageElement();

  class PARSERS_PUBLIC_TYPE KeyUsageListContext : public antlr4::ParserRuleContext {
  public:
    KeyUsageListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyUsageElementContext *> keyUsageElement();
    KeyUsageElementContext* keyUsageElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyUsageListContext* keyUsageList();

  class PARSERS_PUBLIC_TYPE FlushOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    FlushOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DES_KEY_FILE_SYMBOL();
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    antlr4::tree::TerminalNode *USER_RESOURCES_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    LogTypeContext *logType();
    antlr4::tree::TerminalNode *RELAY_SYMBOL();
    ChannelContext *channel();
    antlr4::tree::TerminalNode *CACHE_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushOptionContext* flushOption();

  class PARSERS_PUBLIC_TYPE LogTypeContext : public antlr4::ParserRuleContext {
  public:
    LogTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *GENERAL_SYMBOL();
    antlr4::tree::TerminalNode *SLOW_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogTypeContext* logType();

  class PARSERS_PUBLIC_TYPE FlushTablesContext : public antlr4::ParserRuleContext {
  public:
    FlushTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();
    IdentifierListContext *identifierList();
    FlushTablesOptionsContext *flushTablesOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushTablesContext* flushTables();

  class PARSERS_PUBLIC_TYPE FlushTablesOptionsContext : public antlr4::ParserRuleContext {
  public:
    FlushTablesOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *EXPORT_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *READ_SYMBOL();
    antlr4::tree::TerminalNode *LOCK_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlushTablesOptionsContext* flushTablesOptions();

  class PARSERS_PUBLIC_TYPE PreloadTailContext : public antlr4::ParserRuleContext {
  public:
    PreloadTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    AdminPartitionContext *adminPartition();
    CacheKeyListContext *cacheKeyList();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();
    PreloadListContext *preloadList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreloadTailContext* preloadTail();

  class PARSERS_PUBLIC_TYPE PreloadListContext : public antlr4::ParserRuleContext {
  public:
    PreloadListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PreloadKeysContext *> preloadKeys();
    PreloadKeysContext* preloadKeys(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreloadListContext* preloadList();

  class PARSERS_PUBLIC_TYPE PreloadKeysContext : public antlr4::ParserRuleContext {
  public:
    PreloadKeysContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    CacheKeyListContext *cacheKeyList();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreloadKeysContext* preloadKeys();

  class PARSERS_PUBLIC_TYPE AdminPartitionContext : public antlr4::ParserRuleContext {
  public:
    AdminPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    AllOrPartitionNameListContext *allOrPartitionNameList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdminPartitionContext* adminPartition();

  class PARSERS_PUBLIC_TYPE ResourceGroupManagementContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupManagementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateResourceGroupContext *createResourceGroup();
    AlterResourceGroupContext *alterResourceGroup();
    SetResourceGroupContext *setResourceGroup();
    DropResourceGroupContext *dropResourceGroup();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupManagementContext* resourceGroupManagement();

  class PARSERS_PUBLIC_TYPE CreateResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    CreateResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *SYSTEM_SYMBOL();
    EqualContext *equal();
    ResourceGroupVcpuListContext *resourceGroupVcpuList();
    ResourceGroupPriorityContext *resourceGroupPriority();
    ResourceGroupEnableDisableContext *resourceGroupEnableDisable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateResourceGroupContext* createResourceGroup();

  class PARSERS_PUBLIC_TYPE ResourceGroupVcpuListContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupVcpuListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VCPU_SYMBOL();
    std::vector<VcpuNumOrRangeContext *> vcpuNumOrRange();
    VcpuNumOrRangeContext* vcpuNumOrRange(size_t i);
    EqualContext *equal();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupVcpuListContext* resourceGroupVcpuList();

  class PARSERS_PUBLIC_TYPE VcpuNumOrRangeContext : public antlr4::ParserRuleContext {
  public:
    VcpuNumOrRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *MINUS_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VcpuNumOrRangeContext* vcpuNumOrRange();

  class PARSERS_PUBLIC_TYPE ResourceGroupPriorityContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupPriorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THREAD_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    EqualContext *equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupPriorityContext* resourceGroupPriority();

  class PARSERS_PUBLIC_TYPE ResourceGroupEnableDisableContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupEnableDisableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupEnableDisableContext* resourceGroupEnableDisable();

  class PARSERS_PUBLIC_TYPE AlterResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    ResourceGroupRefContext *resourceGroupRef();
    ResourceGroupVcpuListContext *resourceGroupVcpuList();
    ResourceGroupPriorityContext *resourceGroupPriority();
    ResourceGroupEnableDisableContext *resourceGroupEnableDisable();
    antlr4::tree::TerminalNode *FORCE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterResourceGroupContext* alterResourceGroup();

  class PARSERS_PUBLIC_TYPE SetResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    SetResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    ThreadIdListContext *threadIdList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetResourceGroupContext* setResourceGroup();

  class PARSERS_PUBLIC_TYPE ThreadIdListContext : public antlr4::ParserRuleContext {
  public:
    ThreadIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Real_ulong_numberContext *> real_ulong_number();
    Real_ulong_numberContext* real_ulong_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThreadIdListContext* threadIdList();

  class PARSERS_PUBLIC_TYPE DropResourceGroupContext : public antlr4::ParserRuleContext {
  public:
    DropResourceGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_SYMBOL();
    ResourceGroupRefContext *resourceGroupRef();
    antlr4::tree::TerminalNode *FORCE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropResourceGroupContext* dropResourceGroup();

  class PARSERS_PUBLIC_TYPE UtilityStatementContext : public antlr4::ParserRuleContext {
  public:
    UtilityStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescribeCommandContext *describeCommand();
    ExplainCommandContext *explainCommand();
    HelpCommandContext *helpCommand();
    UseCommandContext *useCommand();
    RestartServerContext *restartServer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UtilityStatementContext* utilityStatement();

  class PARSERS_PUBLIC_TYPE DescribeCommandContext : public antlr4::ParserRuleContext {
  public:
    DescribeCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableRefContext *tableRef();
    antlr4::tree::TerminalNode *DESCRIBE_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();
    TextStringContext *textString();
    ColumnRefContext *columnRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescribeCommandContext* describeCommand();

  class PARSERS_PUBLIC_TYPE ExplainCommandContext : public antlr4::ParserRuleContext {
  public:
    ExplainCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplainableStatementContext *explainableStatement();
    antlr4::tree::TerminalNode *DESCRIBE_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainCommandContext* explainCommand();

  class PARSERS_PUBLIC_TYPE ExplainableStatementContext : public antlr4::ParserRuleContext {
  public:
    ExplainableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    DeleteStatementContext *deleteStatement();
    InsertStatementContext *insertStatement();
    ReplaceStatementContext *replaceStatement();
    UpdateStatementContext *updateStatement();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainableStatementContext* explainableStatement();

  class PARSERS_PUBLIC_TYPE HelpCommandContext : public antlr4::ParserRuleContext {
  public:
    HelpCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HelpCommandContext* helpCommand();

  class PARSERS_PUBLIC_TYPE UseCommandContext : public antlr4::ParserRuleContext {
  public:
    UseCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseCommandContext* useCommand();

  class PARSERS_PUBLIC_TYPE RestartServerContext : public antlr4::ParserRuleContext {
  public:
    RestartServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTART_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestartServerContext* restartServer();

  class PARSERS_PUBLIC_TYPE ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE ExprOrContext : public ExprContext {
  public:
    ExprOrContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OR_SYMBOL();
    antlr4::tree::TerminalNode *LOGICAL_OR_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE ExprNotContext : public ExprContext {
  public:
    ExprNotContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NOT_SYMBOL();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE ExprIsContext : public ExprContext {
  public:
    ExprIsContext(ExprContext *ctx);

    antlr4::Token *type = nullptr;
    BoolPriContext *boolPri();
    antlr4::tree::TerminalNode *IS_SYMBOL();
    antlr4::tree::TerminalNode *TRUE_SYMBOL();
    antlr4::tree::TerminalNode *FALSE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    NotRuleContext *notRule();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE ExprAndContext : public ExprContext {
  public:
    ExprAndContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AND_SYMBOL();
    antlr4::tree::TerminalNode *LOGICAL_AND_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE ExprXorContext : public ExprContext {
  public:
    ExprXorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *XOR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class PARSERS_PUBLIC_TYPE BoolPriContext : public antlr4::ParserRuleContext {
  public:
    BoolPriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BoolPriContext() = default;
    void copyFrom(BoolPriContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprPredicateContext : public BoolPriContext {
  public:
    PrimaryExprPredicateContext(BoolPriContext *ctx);

    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprCompareContext : public BoolPriContext {
  public:
    PrimaryExprCompareContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    CompOpContext *compOp();
    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprAllAnyContext : public BoolPriContext {
  public:
    PrimaryExprAllAnyContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    CompOpContext *compOp();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    antlr4::tree::TerminalNode *ANY_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PrimaryExprIsNullContext : public BoolPriContext {
  public:
    PrimaryExprIsNullContext(BoolPriContext *ctx);

    BoolPriContext *boolPri();
    antlr4::tree::TerminalNode *IS_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    NotRuleContext *notRule();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BoolPriContext* boolPri();
  BoolPriContext* boolPri(int precedence);
  class PARSERS_PUBLIC_TYPE CompOpContext : public antlr4::ParserRuleContext {
  public:
    CompOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *NULL_SAFE_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_OR_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_THAN_OPERATOR();
    antlr4::tree::TerminalNode *LESS_OR_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *LESS_THAN_OPERATOR();
    antlr4::tree::TerminalNode *NOT_EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompOpContext* compOp();

  class PARSERS_PUBLIC_TYPE PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BitExprContext *> bitExpr();
    BitExprContext* bitExpr(size_t i);
    PredicateOperationsContext *predicateOperations();
    antlr4::tree::TerminalNode *SOUNDS_SYMBOL();
    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    NotRuleContext *notRule();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class PARSERS_PUBLIC_TYPE PredicateOperationsContext : public antlr4::ParserRuleContext {
  public:
    PredicateOperationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateOperationsContext() = default;
    void copyFrom(PredicateOperationsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE PredicateExprRegexContext : public PredicateOperationsContext {
  public:
    PredicateExprRegexContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *REGEXP_SYMBOL();
    BitExprContext *bitExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PredicateExprBetweenContext : public PredicateOperationsContext {
  public:
    PredicateExprBetweenContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *BETWEEN_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *AND_SYMBOL();
    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PredicateExprInContext : public PredicateOperationsContext {
  public:
    PredicateExprInContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *IN_SYMBOL();
    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PredicateExprLikeContext : public PredicateOperationsContext {
  public:
    PredicateExprLikeContext(PredicateOperationsContext *ctx);

    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *ESCAPE_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PredicateOperationsContext* predicateOperations();

  class PARSERS_PUBLIC_TYPE BitExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;;
    BitExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExprContext *simpleExpr();
    std::vector<BitExprContext *> bitExpr();
    BitExprContext* bitExpr(size_t i);
    antlr4::tree::TerminalNode *BITWISE_XOR_OPERATOR();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *DIV_OPERATOR();
    antlr4::tree::TerminalNode *MOD_OPERATOR();
    antlr4::tree::TerminalNode *DIV_SYMBOL();
    antlr4::tree::TerminalNode *MOD_SYMBOL();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    antlr4::tree::TerminalNode *SHIFT_LEFT_OPERATOR();
    antlr4::tree::TerminalNode *SHIFT_RIGHT_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_AND_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_OR_OPERATOR();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    ExprContext *expr();
    IntervalContext *interval();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitExprContext* bitExpr();
  BitExprContext* bitExpr(int precedence);
  class PARSERS_PUBLIC_TYPE SimpleExprContext : public antlr4::ParserRuleContext {
  public:
    SimpleExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SimpleExprContext() = default;
    void copyFrom(SimpleExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE SimpleExprConvertContext : public SimpleExprContext {
  public:
    SimpleExprConvertContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    CastTypeContext *castType();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprVariableContext : public SimpleExprContext {
  public:
    SimpleExprVariableContext(SimpleExprContext *ctx);

    VariableContext *variable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprCastContext : public SimpleExprContext {
  public:
    SimpleExprCastContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CAST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    CastTypeContext *castType();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprUnaryContext : public SimpleExprContext {
  public:
    SimpleExprUnaryContext(SimpleExprContext *ctx);

    antlr4::Token *op = nullptr;
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_NOT_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprOdbcContext : public SimpleExprContext {
  public:
    SimpleExprOdbcContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    IdentifierContext *identifier();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprRuntimeFunctionContext : public SimpleExprContext {
  public:
    SimpleExprRuntimeFunctionContext(SimpleExprContext *ctx);

    RuntimeFunctionCallContext *runtimeFunctionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprFunctionContext : public SimpleExprContext {
  public:
    SimpleExprFunctionContext(SimpleExprContext *ctx);

    FunctionCallContext *functionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprCollateContext : public SimpleExprContext {
  public:
    SimpleExprCollateContext(SimpleExprContext *ctx);

    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprMatchContext : public SimpleExprContext {
  public:
    SimpleExprMatchContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *MATCH_SYMBOL();
    IdentListArgContext *identListArg();
    antlr4::tree::TerminalNode *AGAINST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FulltextOptionsContext *fulltextOptions();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprWindowingFunctionContext : public SimpleExprContext {
  public:
    SimpleExprWindowingFunctionContext(SimpleExprContext *ctx);

    WindowFunctionCallContext *windowFunctionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprBinaryContext : public SimpleExprContext {
  public:
    SimpleExprBinaryContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    SimpleExprContext *simpleExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprColumnRefContext : public SimpleExprContext {
  public:
    SimpleExprColumnRefContext(SimpleExprContext *ctx);

    ColumnRefContext *columnRef();
    JsonOperatorContext *jsonOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprParamMarkerContext : public SimpleExprContext {
  public:
    SimpleExprParamMarkerContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *PARAM_MARKER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprSumContext : public SimpleExprContext {
  public:
    SimpleExprSumContext(SimpleExprContext *ctx);

    SumExprContext *sumExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprConvertUsingContext : public SimpleExprContext {
  public:
    SimpleExprConvertUsingContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CONVERT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprSubQueryContext : public SimpleExprContext {
  public:
    SimpleExprSubQueryContext(SimpleExprContext *ctx);

    SubqueryContext *subquery();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprGroupingOperationContext : public SimpleExprContext {
  public:
    SimpleExprGroupingOperationContext(SimpleExprContext *ctx);

    GroupingOperationContext *groupingOperation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprNotContext : public SimpleExprContext {
  public:
    SimpleExprNotContext(SimpleExprContext *ctx);

    Not2RuleContext *not2Rule();
    SimpleExprContext *simpleExpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprValuesContext : public SimpleExprContext {
  public:
    SimpleExprValuesContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprDefaultContext : public SimpleExprContext {
  public:
    SimpleExprDefaultContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleIdentifierContext *simpleIdentifier();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprListContext : public SimpleExprContext {
  public:
    SimpleExprListContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprIntervalContext : public SimpleExprContext {
  public:
    SimpleExprIntervalContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    IntervalContext *interval();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprCaseContext : public SimpleExprContext {
  public:
    SimpleExprCaseContext(SimpleExprContext *ctx);

    antlr4::tree::TerminalNode *CASE_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    ExprContext *expr();
    std::vector<WhenExpressionContext *> whenExpression();
    WhenExpressionContext* whenExpression(size_t i);
    std::vector<ThenExpressionContext *> thenExpression();
    ThenExpressionContext* thenExpression(size_t i);
    ElseExpressionContext *elseExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprConcatContext : public SimpleExprContext {
  public:
    SimpleExprConcatContext(SimpleExprContext *ctx);

    std::vector<SimpleExprContext *> simpleExpr();
    SimpleExprContext* simpleExpr(size_t i);
    antlr4::tree::TerminalNode *CONCAT_PIPES_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE SimpleExprLiteralContext : public SimpleExprContext {
  public:
    SimpleExprLiteralContext(SimpleExprContext *ctx);

    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SimpleExprContext* simpleExpr();
  SimpleExprContext* simpleExpr(int precedence);
  class PARSERS_PUBLIC_TYPE JsonOperatorContext : public antlr4::ParserRuleContext {
  public:
    JsonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_SEPARATOR_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *JSON_UNQUOTED_SEPARATOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonOperatorContext* jsonOperator();

  class PARSERS_PUBLIC_TYPE SumExprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    SumExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    InSumExprContext *inSumExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *AVG_SYMBOL();
    antlr4::tree::TerminalNode *DISTINCT_SYMBOL();
    WindowingClauseContext *windowingClause();
    antlr4::tree::TerminalNode *BIT_AND_SYMBOL();
    antlr4::tree::TerminalNode *BIT_OR_SYMBOL();
    antlr4::tree::TerminalNode *BIT_XOR_SYMBOL();
    JsonFunctionContext *jsonFunction();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *COUNT_SYMBOL();
    antlr4::tree::TerminalNode *ALL_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *MIN_SYMBOL();
    antlr4::tree::TerminalNode *MAX_SYMBOL();
    antlr4::tree::TerminalNode *STD_SYMBOL();
    antlr4::tree::TerminalNode *VARIANCE_SYMBOL();
    antlr4::tree::TerminalNode *STDDEV_SAMP_SYMBOL();
    antlr4::tree::TerminalNode *VAR_SAMP_SYMBOL();
    antlr4::tree::TerminalNode *SUM_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_CONCAT_SYMBOL();
    OrderClauseContext *orderClause();
    antlr4::tree::TerminalNode *SEPARATOR_SYMBOL();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SumExprContext* sumExpr();

  class PARSERS_PUBLIC_TYPE GroupingOperationContext : public antlr4::ParserRuleContext {
  public:
    GroupingOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUPING_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingOperationContext* groupingOperation();

  class PARSERS_PUBLIC_TYPE WindowFunctionCallContext : public antlr4::ParserRuleContext {
  public:
    WindowFunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesesContext *parentheses();
    WindowingClauseContext *windowingClause();
    antlr4::tree::TerminalNode *ROW_NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *RANK_SYMBOL();
    antlr4::tree::TerminalNode *DENSE_RANK_SYMBOL();
    antlr4::tree::TerminalNode *CUME_DIST_SYMBOL();
    antlr4::tree::TerminalNode *PERCENT_RANK_SYMBOL();
    antlr4::tree::TerminalNode *NTILE_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    SimpleExprContext *simpleExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *LEAD_SYMBOL();
    antlr4::tree::TerminalNode *LAG_SYMBOL();
    LeadLagInfoContext *leadLagInfo();
    NullTreatmentContext *nullTreatment();
    ExprWithParenthesesContext *exprWithParentheses();
    antlr4::tree::TerminalNode *FIRST_VALUE_SYMBOL();
    antlr4::tree::TerminalNode *LAST_VALUE_SYMBOL();
    antlr4::tree::TerminalNode *NTH_VALUE_SYMBOL();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFunctionCallContext* windowFunctionCall();

  class PARSERS_PUBLIC_TYPE WindowingClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER_SYMBOL();
    WindowNameContext *windowName();
    WindowSpecContext *windowSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowingClauseContext* windowingClause();

  class PARSERS_PUBLIC_TYPE LeadLagInfoContext : public antlr4::ParserRuleContext {
  public:
    LeadLagInfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *PARAM_MARKER();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeadLagInfoContext* leadLagInfo();

  class PARSERS_PUBLIC_TYPE NullTreatmentContext : public antlr4::ParserRuleContext {
  public:
    NullTreatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLS_SYMBOL();
    antlr4::tree::TerminalNode *RESPECT_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullTreatmentContext* nullTreatment();

  class PARSERS_PUBLIC_TYPE JsonFunctionContext : public antlr4::ParserRuleContext {
  public:
    JsonFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_ARRAYAGG_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<InSumExprContext *> inSumExpr();
    InSumExprContext* inSumExpr(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    WindowingClauseContext *windowingClause();
    antlr4::tree::TerminalNode *JSON_OBJECTAGG_SYMBOL();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonFunctionContext* jsonFunction();

  class PARSERS_PUBLIC_TYPE InSumExprContext : public antlr4::ParserRuleContext {
  public:
    InSumExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *ALL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InSumExprContext* inSumExpr();

  class PARSERS_PUBLIC_TYPE IdentListArgContext : public antlr4::ParserRuleContext {
  public:
    IdentListArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentListContext *identList();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentListArgContext* identListArg();

  class PARSERS_PUBLIC_TYPE IdentListContext : public antlr4::ParserRuleContext {
  public:
    IdentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleIdentifierContext *> simpleIdentifier();
    SimpleIdentifierContext* simpleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentListContext* identList();

  class PARSERS_PUBLIC_TYPE FulltextOptionsContext : public antlr4::ParserRuleContext {
  public:
    FulltextOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *BOOLEAN_SYMBOL();
    antlr4::tree::TerminalNode *MODE_SYMBOL();
    antlr4::tree::TerminalNode *NATURAL_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *EXPANSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FulltextOptionsContext* fulltextOptions();

  class PARSERS_PUBLIC_TYPE RuntimeFunctionCallContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    RuntimeFunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CURRENT_USER_SYMBOL();
    ParenthesesContext *parentheses();
    ExprWithParenthesesContext *exprWithParentheses();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *INSERT_SYMBOL();
    antlr4::tree::TerminalNode *INTERVAL_SYMBOL();
    antlr4::tree::TerminalNode *LEFT_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *MONTH_SYMBOL();
    antlr4::tree::TerminalNode *RIGHT_SYMBOL();
    antlr4::tree::TerminalNode *SECOND_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();
    TrimFunctionContext *trimFunction();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *ADDDATE_SYMBOL();
    antlr4::tree::TerminalNode *SUBDATE_SYMBOL();
    IntervalContext *interval();
    antlr4::tree::TerminalNode *CURDATE_SYMBOL();
    antlr4::tree::TerminalNode *CURTIME_SYMBOL();
    TimeFunctionParametersContext *timeFunctionParameters();
    antlr4::tree::TerminalNode *DATE_ADD_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SUB_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *EXTRACT_SYMBOL();
    DateTimeTtypeContext *dateTimeTtype();
    antlr4::tree::TerminalNode *GET_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *NOW_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *POSITION_SYMBOL();
    SubstringFunctionContext *substringFunction();
    antlr4::tree::TerminalNode *SYSDATE_SYMBOL();
    IntervalTimeStampContext *intervalTimeStamp();
    antlr4::tree::TerminalNode *TIMESTAMP_ADD_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_DIFF_SYMBOL();
    antlr4::tree::TerminalNode *UTC_DATE_SYMBOL();
    antlr4::tree::TerminalNode *UTC_TIME_SYMBOL();
    antlr4::tree::TerminalNode *UTC_TIMESTAMP_SYMBOL();
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();
    ExprListWithParenthesesContext *exprListWithParentheses();
    antlr4::tree::TerminalNode *COALESCE_SYMBOL();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    antlr4::tree::TerminalNode *DATABASE_SYMBOL();
    antlr4::tree::TerminalNode *IF_SYMBOL();
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MOD_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *OLD_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *QUARTER_SYMBOL();
    antlr4::tree::TerminalNode *REPEAT_SYMBOL();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    antlr4::tree::TerminalNode *WEEK_SYMBOL();
    antlr4::tree::TerminalNode *WEIGHT_STRING_SYMBOL();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    WsNumCodepointsContext *wsNumCodepoints();
    std::vector<Ulong_numberContext *> ulong_number();
    Ulong_numberContext* ulong_number(size_t i);
    WeightStringLevelsContext *weightStringLevels();
    GeometryFunctionContext *geometryFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuntimeFunctionCallContext* runtimeFunctionCall();

  class PARSERS_PUBLIC_TYPE GeometryFunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    GeometryFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CONTAINS_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();
    ExprListContext *exprList();
    ExprListWithParenthesesContext *exprListWithParentheses();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeometryFunctionContext* geometryFunction();

  class PARSERS_PUBLIC_TYPE TimeFunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    TimeFunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    FractionalPrecisionContext *fractionalPrecision();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimeFunctionParametersContext* timeFunctionParameters();

  class PARSERS_PUBLIC_TYPE FractionalPrecisionContext : public antlr4::ParserRuleContext {
  public:
    FractionalPrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FractionalPrecisionContext* fractionalPrecision();

  class PARSERS_PUBLIC_TYPE WeightStringLevelsContext : public antlr4::ParserRuleContext {
  public:
    WeightStringLevelsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEVEL_SYMBOL();
    std::vector<Real_ulong_numberContext *> real_ulong_number();
    Real_ulong_numberContext* real_ulong_number(size_t i);
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    std::vector<WeightStringLevelListItemContext *> weightStringLevelListItem();
    WeightStringLevelListItemContext* weightStringLevelListItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeightStringLevelsContext* weightStringLevels();

  class PARSERS_PUBLIC_TYPE WeightStringLevelListItemContext : public antlr4::ParserRuleContext {
  public:
    WeightStringLevelListItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ASC_SYMBOL();
    antlr4::tree::TerminalNode *DESC_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WeightStringLevelListItemContext* weightStringLevelListItem();

  class PARSERS_PUBLIC_TYPE DateTimeTtypeContext : public antlr4::ParserRuleContext {
  public:
    DateTimeTtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateTimeTtypeContext* dateTimeTtype();

  class PARSERS_PUBLIC_TYPE TrimFunctionContext : public antlr4::ParserRuleContext {
  public:
    TrimFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIM_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LEADING_SYMBOL();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *TRAILING_SYMBOL();
    antlr4::tree::TerminalNode *BOTH_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrimFunctionContext* trimFunction();

  class PARSERS_PUBLIC_TYPE SubstringFunctionContext : public antlr4::ParserRuleContext {
  public:
    SubstringFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBSTRING_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubstringFunctionContext* substringFunction();

  class PARSERS_PUBLIC_TYPE FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    UdfExprListContext *udfExprList();
    QualifiedIdentifierContext *qualifiedIdentifier();
    ExprListContext *exprList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class PARSERS_PUBLIC_TYPE UdfExprListContext : public antlr4::ParserRuleContext {
  public:
    UdfExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UdfExprContext *> udfExpr();
    UdfExprContext* udfExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UdfExprListContext* udfExprList();

  class PARSERS_PUBLIC_TYPE UdfExprContext : public antlr4::ParserRuleContext {
  public:
    UdfExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    SelectAliasContext *selectAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UdfExprContext* udfExpr();

  class PARSERS_PUBLIC_TYPE VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserVariableContext *userVariable();
    antlr4::tree::TerminalNode *ASSIGN_OPERATOR();
    ExprContext *expr();
    SystemVariableContext *systemVariable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class PARSERS_PUBLIC_TYPE UserVariableContext : public antlr4::ParserRuleContext {
  public:
    UserVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *AT_TEXT_SUFFIX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserVariableContext* userVariable();

  class PARSERS_PUBLIC_TYPE SystemVariableContext : public antlr4::ParserRuleContext {
  public:
    SystemVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_AT_SIGN_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    VarIdentTypeContext *varIdentType();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SystemVariableContext* systemVariable();

  class PARSERS_PUBLIC_TYPE InternalVariableNameContext : public antlr4::ParserRuleContext {
  public:
    InternalVariableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DotIdentifierContext *dotIdentifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InternalVariableNameContext* internalVariableName();

  class PARSERS_PUBLIC_TYPE WhenExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenExpressionContext* whenExpression();

  class PARSERS_PUBLIC_TYPE ThenExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenExpressionContext* thenExpression();

  class PARSERS_PUBLIC_TYPE ElseExpressionContext : public antlr4::ParserRuleContext {
  public:
    ElseExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseExpressionContext* elseExpression();

  class PARSERS_PUBLIC_TYPE CastTypeContext : public antlr4::ParserRuleContext {
  public:
    CastTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    FieldLengthContext *fieldLength();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    CharsetWithOptBinaryContext *charsetWithOptBinary();
    NcharContext *nchar();
    antlr4::tree::TerminalNode *SIGNED_SYMBOL();
    antlr4::tree::TerminalNode *INT_SYMBOL();
    antlr4::tree::TerminalNode *UNSIGNED_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    TypeDatetimePrecisionContext *typeDatetimePrecision();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *DECIMAL_SYMBOL();
    FloatOptionsContext *floatOptions();
    antlr4::tree::TerminalNode *JSON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastTypeContext* castType();

  class PARSERS_PUBLIC_TYPE ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListContext* exprList();

  class PARSERS_PUBLIC_TYPE CharsetContext : public antlr4::ParserRuleContext {
  public:
    CharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetContext* charset();

  class PARSERS_PUBLIC_TYPE NotRuleContext : public antlr4::ParserRuleContext {
  public:
    NotRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *NOT2_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotRuleContext* notRule();

  class PARSERS_PUBLIC_TYPE Not2RuleContext : public antlr4::ParserRuleContext {
  public:
    Not2RuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICAL_NOT_OPERATOR();
    antlr4::tree::TerminalNode *NOT2_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not2RuleContext* not2Rule();

  class PARSERS_PUBLIC_TYPE IntervalContext : public antlr4::ParserRuleContext {
  public:
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntervalTimeStampContext *intervalTimeStamp();
    antlr4::tree::TerminalNode *SECOND_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SECOND_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SECOND_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SECOND_SYMBOL();
    antlr4::tree::TerminalNode *DAY_MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_MONTH_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class PARSERS_PUBLIC_TYPE IntervalTimeStampContext : public antlr4::ParserRuleContext {
  public:
    IntervalTimeStampContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *SECOND_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *WEEK_SYMBOL();
    antlr4::tree::TerminalNode *MONTH_SYMBOL();
    antlr4::tree::TerminalNode *QUARTER_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalTimeStampContext* intervalTimeStamp();

  class PARSERS_PUBLIC_TYPE ExprListWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ExprListWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprListWithParenthesesContext* exprListWithParentheses();

  class PARSERS_PUBLIC_TYPE ExprWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ExprWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprWithParenthesesContext* exprWithParentheses();

  class PARSERS_PUBLIC_TYPE OrderListContext : public antlr4::ParserRuleContext {
  public:
    OrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrderExpressionContext *> orderExpression();
    OrderExpressionContext* orderExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderListContext* orderList();

  class PARSERS_PUBLIC_TYPE OrderExpressionContext : public antlr4::ParserRuleContext {
  public:
    OrderExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderExpressionContext* orderExpression();

  class PARSERS_PUBLIC_TYPE GroupListContext : public antlr4::ParserRuleContext {
  public:
    GroupListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GroupingExpressionContext *> groupingExpression();
    GroupingExpressionContext* groupingExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupListContext* groupList();

  class PARSERS_PUBLIC_TYPE GroupingExpressionContext : public antlr4::ParserRuleContext {
  public:
    GroupingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingExpressionContext* groupingExpression();

  class PARSERS_PUBLIC_TYPE ChannelContext : public antlr4::ParserRuleContext {
  public:
    ChannelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    antlr4::tree::TerminalNode *CHANNEL_SYMBOL();
    TextStringNoLinebreakContext *textStringNoLinebreak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelContext* channel();

  class PARSERS_PUBLIC_TYPE CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleStatementContext *simpleStatement();
    ReturnStatementContext *returnStatement();
    IfStatementContext *ifStatement();
    CaseStatementContext *caseStatement();
    LabeledBlockContext *labeledBlock();
    UnlabeledBlockContext *unlabeledBlock();
    LabeledControlContext *labeledControl();
    UnlabeledControlContext *unlabeledControl();
    LeaveStatementContext *leaveStatement();
    IterateStatementContext *iterateStatement();
    CursorOpenContext *cursorOpen();
    CursorFetchContext *cursorFetch();
    CursorCloseContext *cursorClose();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class PARSERS_PUBLIC_TYPE ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class PARSERS_PUBLIC_TYPE IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF_SYMBOL();
    antlr4::tree::TerminalNode* IF_SYMBOL(size_t i);
    IfBodyContext *ifBody();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class PARSERS_PUBLIC_TYPE IfBodyContext : public antlr4::ParserRuleContext {
  public:
    IfBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    ThenStatementContext *thenStatement();
    antlr4::tree::TerminalNode *ELSEIF_SYMBOL();
    IfBodyContext *ifBody();
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfBodyContext* ifBody();

  class PARSERS_PUBLIC_TYPE ThenStatementContext : public antlr4::ParserRuleContext {
  public:
    ThenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenStatementContext* thenStatement();

  class PARSERS_PUBLIC_TYPE CompoundStatementListContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompoundStatementContext *> compoundStatement();
    CompoundStatementContext* compoundStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON_SYMBOL();
    antlr4::tree::TerminalNode* SEMICOLON_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementListContext* compoundStatementList();

  class PARSERS_PUBLIC_TYPE CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE_SYMBOL();
    antlr4::tree::TerminalNode* CASE_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *END_SYMBOL();
    ExprContext *expr();
    std::vector<WhenExpressionContext *> whenExpression();
    WhenExpressionContext* whenExpression(size_t i);
    std::vector<ThenStatementContext *> thenStatement();
    ThenStatementContext* thenStatement(size_t i);
    ElseStatementContext *elseStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseStatementContext* caseStatement();

  class PARSERS_PUBLIC_TYPE ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class PARSERS_PUBLIC_TYPE LabeledBlockContext : public antlr4::ParserRuleContext {
  public:
    LabeledBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    BeginEndBlockContext *beginEndBlock();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledBlockContext* labeledBlock();

  class PARSERS_PUBLIC_TYPE UnlabeledBlockContext : public antlr4::ParserRuleContext {
  public:
    UnlabeledBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginEndBlockContext *beginEndBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlabeledBlockContext* unlabeledBlock();

  class PARSERS_PUBLIC_TYPE LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();
    antlr4::tree::TerminalNode *COLON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class PARSERS_PUBLIC_TYPE BeginEndBlockContext : public antlr4::ParserRuleContext {
  public:
    BeginEndBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    SpDeclarationsContext *spDeclarations();
    CompoundStatementListContext *compoundStatementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginEndBlockContext* beginEndBlock();

  class PARSERS_PUBLIC_TYPE LabeledControlContext : public antlr4::ParserRuleContext {
  public:
    LabeledControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();
    UnlabeledControlContext *unlabeledControl();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledControlContext* labeledControl();

  class PARSERS_PUBLIC_TYPE UnlabeledControlContext : public antlr4::ParserRuleContext {
  public:
    UnlabeledControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopBlockContext *loopBlock();
    WhileDoBlockContext *whileDoBlock();
    RepeatUntilBlockContext *repeatUntilBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlabeledControlContext* unlabeledControl();

  class PARSERS_PUBLIC_TYPE LoopBlockContext : public antlr4::ParserRuleContext {
  public:
    LoopBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP_SYMBOL();
    antlr4::tree::TerminalNode* LOOP_SYMBOL(size_t i);
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopBlockContext* loopBlock();

  class PARSERS_PUBLIC_TYPE WhileDoBlockContext : public antlr4::ParserRuleContext {
  public:
    WhileDoBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE_SYMBOL();
    antlr4::tree::TerminalNode* WHILE_SYMBOL(size_t i);
    ExprContext *expr();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileDoBlockContext* whileDoBlock();

  class PARSERS_PUBLIC_TYPE RepeatUntilBlockContext : public antlr4::ParserRuleContext {
  public:
    RepeatUntilBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT_SYMBOL();
    antlr4::tree::TerminalNode* REPEAT_SYMBOL(size_t i);
    CompoundStatementListContext *compoundStatementList();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *END_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatUntilBlockContext* repeatUntilBlock();

  class PARSERS_PUBLIC_TYPE SpDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    SpDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SpDeclarationContext *> spDeclaration();
    SpDeclarationContext* spDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON_SYMBOL();
    antlr4::tree::TerminalNode* SEMICOLON_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpDeclarationsContext* spDeclarations();

  class PARSERS_PUBLIC_TYPE SpDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SpDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationContext *variableDeclaration();
    ConditionDeclarationContext *conditionDeclaration();
    HandlerDeclarationContext *handlerDeclaration();
    CursorDeclarationContext *cursorDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpDeclarationContext* spDeclaration();

  class PARSERS_PUBLIC_TYPE VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierListContext *identifierList();
    DataTypeContext *dataType();
    CollateContext *collate();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class PARSERS_PUBLIC_TYPE ConditionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConditionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CONDITION_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    SpConditionContext *spCondition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionDeclarationContext* conditionDeclaration();

  class PARSERS_PUBLIC_TYPE SpConditionContext : public antlr4::ParserRuleContext {
  public:
    SpConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ulong_numberContext *ulong_number();
    SqlstateContext *sqlstate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpConditionContext* spCondition();

  class PARSERS_PUBLIC_TYPE SqlstateContext : public antlr4::ParserRuleContext {
  public:
    SqlstateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQLSTATE_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SqlstateContext* sqlstate();

  class PARSERS_PUBLIC_TYPE HandlerDeclarationContext : public antlr4::ParserRuleContext {
  public:
    HandlerDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    antlr4::tree::TerminalNode *HANDLER_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    std::vector<HandlerConditionContext *> handlerCondition();
    HandlerConditionContext* handlerCondition(size_t i);
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *CONTINUE_SYMBOL();
    antlr4::tree::TerminalNode *EXIT_SYMBOL();
    antlr4::tree::TerminalNode *UNDO_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerDeclarationContext* handlerDeclaration();

  class PARSERS_PUBLIC_TYPE HandlerConditionContext : public antlr4::ParserRuleContext {
  public:
    HandlerConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpConditionContext *spCondition();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SQLWARNING_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *FOUND_SYMBOL();
    antlr4::tree::TerminalNode *SQLEXCEPTION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerConditionContext* handlerCondition();

  class PARSERS_PUBLIC_TYPE CursorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CursorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CURSOR_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    SelectStatementContext *selectStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorDeclarationContext* cursorDeclaration();

  class PARSERS_PUBLIC_TYPE IterateStatementContext : public antlr4::ParserRuleContext {
  public:
    IterateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE_SYMBOL();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterateStatementContext* iterateStatement();

  class PARSERS_PUBLIC_TYPE LeaveStatementContext : public antlr4::ParserRuleContext {
  public:
    LeaveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE_SYMBOL();
    LabelRefContext *labelRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeaveStatementContext* leaveStatement();

  class PARSERS_PUBLIC_TYPE GetDiagnosticsContext : public antlr4::ParserRuleContext {
  public:
    GetDiagnosticsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET_SYMBOL();
    antlr4::tree::TerminalNode *DIAGNOSTICS_SYMBOL();
    std::vector<StatementInformationItemContext *> statementInformationItem();
    StatementInformationItemContext* statementInformationItem(size_t i);
    antlr4::tree::TerminalNode *CONDITION_SYMBOL();
    SignalAllowedExprContext *signalAllowedExpr();
    std::vector<ConditionInformationItemContext *> conditionInformationItem();
    ConditionInformationItemContext* conditionInformationItem(size_t i);
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *STACKED_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetDiagnosticsContext* getDiagnostics();

  class PARSERS_PUBLIC_TYPE SignalAllowedExprContext : public antlr4::ParserRuleContext {
  public:
    SignalAllowedExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    VariableContext *variable();
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalAllowedExprContext* signalAllowedExpr();

  class PARSERS_PUBLIC_TYPE StatementInformationItemContext : public antlr4::ParserRuleContext {
  public:
    StatementInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    VariableContext *variable();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementInformationItemContext* statementInformationItem();

  class PARSERS_PUBLIC_TYPE ConditionInformationItemContext : public antlr4::ParserRuleContext {
  public:
    ConditionInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    VariableContext *variable();
    IdentifierContext *identifier();
    SignalInformationItemNameContext *signalInformationItemName();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionInformationItemContext* conditionInformationItem();

  class PARSERS_PUBLIC_TYPE SignalInformationItemNameContext : public antlr4::ParserRuleContext {
  public:
    SignalInformationItemNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CATALOG_NAME_SYMBOL();
    antlr4::tree::TerminalNode *SCHEMA_NAME_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_NAME_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CURSOR_NAME_SYMBOL();
    antlr4::tree::TerminalNode *MESSAGE_TEXT_SYMBOL();
    antlr4::tree::TerminalNode *MYSQL_ERRNO_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalInformationItemNameContext* signalInformationItemName();

  class PARSERS_PUBLIC_TYPE SignalStatementContext : public antlr4::ParserRuleContext {
  public:
    SignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL_SYMBOL();
    IdentifierContext *identifier();
    SqlstateContext *sqlstate();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    std::vector<SignalInformationItemContext *> signalInformationItem();
    SignalInformationItemContext* signalInformationItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalStatementContext* signalStatement();

  class PARSERS_PUBLIC_TYPE ResignalStatementContext : public antlr4::ParserRuleContext {
  public:
    ResignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESIGNAL_SYMBOL();
    antlr4::tree::TerminalNode *SQLSTATE_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    std::vector<SignalInformationItemContext *> signalInformationItem();
    SignalInformationItemContext* signalInformationItem(size_t i);
    antlr4::tree::TerminalNode *VALUE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResignalStatementContext* resignalStatement();

  class PARSERS_PUBLIC_TYPE SignalInformationItemContext : public antlr4::ParserRuleContext {
  public:
    SignalInformationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignalInformationItemNameContext *signalInformationItemName();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    SignalAllowedExprContext *signalAllowedExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignalInformationItemContext* signalInformationItem();

  class PARSERS_PUBLIC_TYPE CursorOpenContext : public antlr4::ParserRuleContext {
  public:
    CursorOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorOpenContext* cursorOpen();

  class PARSERS_PUBLIC_TYPE CursorCloseContext : public antlr4::ParserRuleContext {
  public:
    CursorCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorCloseContext* cursorClose();

  class PARSERS_PUBLIC_TYPE CursorFetchContext : public antlr4::ParserRuleContext {
  public:
    CursorFetchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INTO_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *FROM_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CursorFetchContext* cursorFetch();

  class PARSERS_PUBLIC_TYPE ScheduleContext : public antlr4::ParserRuleContext {
  public:
    ScheduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT_SYMBOL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EVERY_SYMBOL();
    IntervalContext *interval();
    antlr4::tree::TerminalNode *STARTS_SYMBOL();
    antlr4::tree::TerminalNode *ENDS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScheduleContext* schedule();

  class PARSERS_PUBLIC_TYPE ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnNameContext *columnName();
    FieldDefinitionContext *fieldDefinition();
    CheckOrReferencesContext *checkOrReferences();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnDefinitionContext* columnDefinition();

  class PARSERS_PUBLIC_TYPE CheckOrReferencesContext : public antlr4::ParserRuleContext {
  public:
    CheckOrReferencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CheckConstraintContext *checkConstraint();
    ReferencesContext *references();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckOrReferencesContext* checkOrReferences();

  class PARSERS_PUBLIC_TYPE CheckConstraintContext : public antlr4::ParserRuleContext {
  public:
    CheckConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckConstraintContext* checkConstraint();

  class PARSERS_PUBLIC_TYPE TableConstraintDefContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    TableConstraintDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyListVariantsContext *keyListVariants();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    IndexNameAndTypeContext *indexNameAndType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *FULLTEXT_SYMBOL();
    KeyOrIndexContext *keyOrIndex();
    IndexNameContext *indexName();
    std::vector<FulltextIndexOptionContext *> fulltextIndexOption();
    FulltextIndexOptionContext* fulltextIndexOption(size_t i);
    antlr4::tree::TerminalNode *SPATIAL_SYMBOL();
    std::vector<SpatialIndexOptionContext *> spatialIndexOption();
    SpatialIndexOptionContext* spatialIndexOption(size_t i);
    KeyListContext *keyList();
    ReferencesContext *references();
    CheckConstraintContext *checkConstraint();
    antlr4::tree::TerminalNode *CONSTRAINT_SYMBOL();
    antlr4::tree::TerminalNode *FOREIGN_SYMBOL();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableConstraintDefContext* tableConstraintDef();

  class PARSERS_PUBLIC_TYPE FieldDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FieldDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();
    std::vector<ColumnAttributeContext *> columnAttribute();
    ColumnAttributeContext* columnAttribute(size_t i);
    CollateContext *collate();
    antlr4::tree::TerminalNode *GENERATED_SYMBOL();
    antlr4::tree::TerminalNode *ALWAYS_SYMBOL();
    antlr4::tree::TerminalNode *VIRTUAL_SYMBOL();
    antlr4::tree::TerminalNode *STORED_SYMBOL();
    std::vector<GcolAttributeContext *> gcolAttribute();
    GcolAttributeContext* gcolAttribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDefinitionContext* fieldDefinition();

  class PARSERS_PUBLIC_TYPE ColumnAttributeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;;
    ColumnAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullLiteralContext *nullLiteral();
    antlr4::tree::TerminalNode *NOT_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    SignedLiteralContext *signedLiteral();
    antlr4::tree::TerminalNode *NOW_SYMBOL();
    ExprWithParenthesesContext *exprWithParentheses();
    TimeFunctionParametersContext *timeFunctionParameters();
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *ON_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_INCREMENT_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();
    antlr4::tree::TerminalNode *SERIAL_SYMBOL();
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    CollateContext *collate();
    antlr4::tree::TerminalNode *COLUMN_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    antlr4::tree::TerminalNode *SRID_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnAttributeContext* columnAttribute();

  class PARSERS_PUBLIC_TYPE GcolAttributeContext : public antlr4::ParserRuleContext {
  public:
    GcolAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *PRIMARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GcolAttributeContext* gcolAttribute();

  class PARSERS_PUBLIC_TYPE ReferencesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *match = nullptr;;
    antlr4::Token *option = nullptr;;
    ReferencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES_SYMBOL();
    TableRefContext *tableRef();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();
    antlr4::tree::TerminalNode *MATCH_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> ON_SYMBOL();
    antlr4::tree::TerminalNode* ON_SYMBOL(size_t i);
    std::vector<DeleteOptionContext *> deleteOption();
    DeleteOptionContext* deleteOption(size_t i);
    antlr4::tree::TerminalNode *UPDATE_SYMBOL();
    antlr4::tree::TerminalNode *DELETE_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *PARTIAL_SYMBOL();
    antlr4::tree::TerminalNode *SIMPLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferencesContext* references();

  class PARSERS_PUBLIC_TYPE DeleteOptionContext : public antlr4::ParserRuleContext {
  public:
    DeleteOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT_SYMBOL();
    antlr4::tree::TerminalNode *CASCADE_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    NullLiteralContext *nullLiteral();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *ACTION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteOptionContext* deleteOption();

  class PARSERS_PUBLIC_TYPE KeyListContext : public antlr4::ParserRuleContext {
  public:
    KeyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<KeyPartContext *> keyPart();
    KeyPartContext* keyPart(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyListContext* keyList();

  class PARSERS_PUBLIC_TYPE KeyPartContext : public antlr4::ParserRuleContext {
  public:
    KeyPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    FieldLengthContext *fieldLength();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPartContext* keyPart();

  class PARSERS_PUBLIC_TYPE KeyListWithExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyListWithExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<KeyPartOrExpressionContext *> keyPartOrExpression();
    KeyPartOrExpressionContext* keyPartOrExpression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyListWithExpressionContext* keyListWithExpression();

  class PARSERS_PUBLIC_TYPE KeyPartOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyPartOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyPartContext *keyPart();
    ExprWithParenthesesContext *exprWithParentheses();
    DirectionContext *direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPartOrExpressionContext* keyPartOrExpression();

  class PARSERS_PUBLIC_TYPE KeyListVariantsContext : public antlr4::ParserRuleContext {
  public:
    KeyListVariantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyListWithExpressionContext *keyListWithExpression();
    KeyListContext *keyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyListVariantsContext* keyListVariants();

  class PARSERS_PUBLIC_TYPE IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algorithm = nullptr;;
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BTREE_SYMBOL();
    antlr4::tree::TerminalNode *RTREE_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexTypeContext* indexType();

  class PARSERS_PUBLIC_TYPE IndexOptionContext : public antlr4::ParserRuleContext {
  public:
    IndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    IndexTypeClauseContext *indexTypeClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexOptionContext* indexOption();

  class PARSERS_PUBLIC_TYPE CommonIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    CommonIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextLiteralContext *textLiteral();
    VisibilityContext *visibility();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommonIndexOptionContext* commonIndexOption();

  class PARSERS_PUBLIC_TYPE VisibilityContext : public antlr4::ParserRuleContext {
  public:
    VisibilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *INVISIBLE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VisibilityContext* visibility();

  class PARSERS_PUBLIC_TYPE IndexTypeClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *USING_SYMBOL();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexTypeClauseContext* indexTypeClause();

  class PARSERS_PUBLIC_TYPE FulltextIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    FulltextIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    antlr4::tree::TerminalNode *PARSER_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FulltextIndexOptionContext* fulltextIndexOption();

  class PARSERS_PUBLIC_TYPE SpatialIndexOptionContext : public antlr4::ParserRuleContext {
  public:
    SpatialIndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonIndexOptionContext *commonIndexOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpatialIndexOptionContext* spatialIndexOption();

  class PARSERS_PUBLIC_TYPE DataTypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    DataTypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeDefinitionContext* dataTypeDefinition();

  class PARSERS_PUBLIC_TYPE DataTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_SYMBOL();
    antlr4::tree::TerminalNode *TINYINT_SYMBOL();
    antlr4::tree::TerminalNode *SMALLINT_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUMINT_SYMBOL();
    antlr4::tree::TerminalNode *BIGINT_SYMBOL();
    FieldLengthContext *fieldLength();
    FieldOptionsContext *fieldOptions();
    antlr4::tree::TerminalNode *REAL_SYMBOL();
    antlr4::tree::TerminalNode *DOUBLE_SYMBOL();
    PrecisionContext *precision();
    antlr4::tree::TerminalNode *PRECISION_SYMBOL();
    antlr4::tree::TerminalNode *FLOAT_SYMBOL();
    antlr4::tree::TerminalNode *DECIMAL_SYMBOL();
    antlr4::tree::TerminalNode *NUMERIC_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    FloatOptionsContext *floatOptions();
    antlr4::tree::TerminalNode *BIT_SYMBOL();
    antlr4::tree::TerminalNode *BOOL_SYMBOL();
    antlr4::tree::TerminalNode *BOOLEAN_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    CharsetWithOptBinaryContext *charsetWithOptBinary();
    NcharContext *nchar();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *VARYING_SYMBOL();
    antlr4::tree::TerminalNode *VARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();
    antlr4::tree::TerminalNode *NVARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *VARBINARY_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    TypeDatetimePrecisionContext *typeDatetimePrecision();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *TINYBLOB_SYMBOL();
    antlr4::tree::TerminalNode *BLOB_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUMBLOB_SYMBOL();
    antlr4::tree::TerminalNode *LONGBLOB_SYMBOL();
    antlr4::tree::TerminalNode *LONG_SYMBOL();
    antlr4::tree::TerminalNode *TINYTEXT_SYMBOL();
    antlr4::tree::TerminalNode *TEXT_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUMTEXT_SYMBOL();
    antlr4::tree::TerminalNode *LONGTEXT_SYMBOL();
    StringListContext *stringList();
    antlr4::tree::TerminalNode *ENUM_SYMBOL();
    antlr4::tree::TerminalNode *SET_SYMBOL();
    antlr4::tree::TerminalNode *SERIAL_SYMBOL();
    antlr4::tree::TerminalNode *JSON_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRY_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

  class PARSERS_PUBLIC_TYPE NcharContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    NcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NcharContext* nchar();

  class PARSERS_PUBLIC_TYPE VarcharContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    VarcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARYING_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *VARCHAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarcharContext* varchar();

  class PARSERS_PUBLIC_TYPE NvarcharContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    NvarcharContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();
    antlr4::tree::TerminalNode *NVARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *CHAR_SYMBOL();
    antlr4::tree::TerminalNode *VARYING_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NvarcharContext* nvarchar();

  class PARSERS_PUBLIC_TYPE FieldLengthContext : public antlr4::ParserRuleContext {
  public:
    FieldLengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    Real_ulonglong_numberContext *real_ulonglong_number();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldLengthContext* fieldLength();

  class PARSERS_PUBLIC_TYPE FieldOptionsContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SIGNED_SYMBOL();
    antlr4::tree::TerminalNode* SIGNED_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNSIGNED_SYMBOL();
    antlr4::tree::TerminalNode* UNSIGNED_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ZEROFILL_SYMBOL();
    antlr4::tree::TerminalNode* ZEROFILL_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOptionsContext* fieldOptions();

  class PARSERS_PUBLIC_TYPE CharsetWithOptBinaryContext : public antlr4::ParserRuleContext {
  public:
    CharsetWithOptBinaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AsciiContext *ascii();
    UnicodeContext *unicode();
    antlr4::tree::TerminalNode *BYTE_SYMBOL();
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetWithOptBinaryContext* charsetWithOptBinary();

  class PARSERS_PUBLIC_TYPE AsciiContext : public antlr4::ParserRuleContext {
  public:
    AsciiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsciiContext* ascii();

  class PARSERS_PUBLIC_TYPE UnicodeContext : public antlr4::ParserRuleContext {
  public:
    UnicodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNICODE_SYMBOL();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnicodeContext* unicode();

  class PARSERS_PUBLIC_TYPE WsNumCodepointsContext : public antlr4::ParserRuleContext {
  public:
    WsNumCodepointsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WsNumCodepointsContext* wsNumCodepoints();

  class PARSERS_PUBLIC_TYPE TypeDatetimePrecisionContext : public antlr4::ParserRuleContext {
  public:
    TypeDatetimePrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDatetimePrecisionContext* typeDatetimePrecision();

  class PARSERS_PUBLIC_TYPE CharsetNameContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *BINARY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetNameContext* charsetName();

  class PARSERS_PUBLIC_TYPE CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollationNameContext* collationName();

  class PARSERS_PUBLIC_TYPE CreateTableOptionsContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionsContext* createTableOptions();

  class PARSERS_PUBLIC_TYPE CreateTableOptionsSpaceSeparatedContext : public antlr4::ParserRuleContext {
  public:
    CreateTableOptionsSpaceSeparatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateTableOptionContext *> createTableOption();
    CreateTableOptionContext* createTableOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionsSpaceSeparatedContext* createTableOptionsSpaceSeparated();

  class PARSERS_PUBLIC_TYPE CreateTableOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    antlr4::Token *format = nullptr;;
    antlr4::Token *method = nullptr;;
    CreateTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    EqualContext *equal();
    Ulonglong_numberContext *ulonglong_number();
    antlr4::tree::TerminalNode *MAX_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MIN_ROWS_SYMBOL();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *COMPRESSION_SYMBOL();
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_INCREMENT_SYMBOL();
    TernaryOptionContext *ternaryOption();
    antlr4::tree::TerminalNode *PACK_KEYS_SYMBOL();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC_SYMBOL();
    antlr4::tree::TerminalNode *STATS_PERSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES_SYMBOL();
    antlr4::tree::TerminalNode *CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE_SYMBOL();
    antlr4::tree::TerminalNode *ROW_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSED_SYMBOL();
    antlr4::tree::TerminalNode *REDUNDANT_SYMBOL();
    antlr4::tree::TerminalNode *COMPACT_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    TableRefListContext *tableRefList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *UNION_SYMBOL();
    DefaultCharsetContext *defaultCharset();
    DefaultCollationContext *defaultCollation();
    antlr4::tree::TerminalNode *INSERT_METHOD_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableOptionContext* createTableOption();

  class PARSERS_PUBLIC_TYPE TernaryOptionContext : public antlr4::ParserRuleContext {
  public:
    TernaryOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TernaryOptionContext* ternaryOption();

  class PARSERS_PUBLIC_TYPE DefaultCollationContext : public antlr4::ParserRuleContext {
  public:
    DefaultCollationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultCollationContext* defaultCollation();

  class PARSERS_PUBLIC_TYPE DefaultEncryptionContext : public antlr4::ParserRuleContext {
  public:
    DefaultEncryptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultEncryptionContext* defaultEncryption();

  class PARSERS_PUBLIC_TYPE DefaultCharsetContext : public antlr4::ParserRuleContext {
  public:
    DefaultCharsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultCharsetContext* defaultCharset();

  class PARSERS_PUBLIC_TYPE PartitionClauseContext : public antlr4::ParserRuleContext {
  public:
    PartitionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    PartitionTypeDefContext *partitionTypeDef();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    SubPartitionsContext *subPartitions();
    PartitionDefinitionsContext *partitionDefinitions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionClauseContext* partitionClause();

  class PARSERS_PUBLIC_TYPE PartitionTypeDefContext : public antlr4::ParserRuleContext {
  public:
    PartitionTypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionTypeDefContext() = default;
    void copyFrom(PartitionTypeDefContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class PARSERS_PUBLIC_TYPE PartitionDefRangeListContext : public PartitionTypeDefContext {
  public:
    PartitionDefRangeListContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *RANGE_SYMBOL();
    antlr4::tree::TerminalNode *LIST_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    IdentifierListContext *identifierList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PartitionDefKeyContext : public PartitionTypeDefContext {
  public:
    PartitionDefKeyContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *KEY_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
    PartitionKeyAlgorithmContext *partitionKeyAlgorithm();
    IdentifierListContext *identifierList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class PARSERS_PUBLIC_TYPE PartitionDefHashContext : public PartitionTypeDefContext {
  public:
    PartitionDefHashContext(PartitionTypeDefContext *ctx);

    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PartitionTypeDefContext* partitionTypeDef();

  class PARSERS_PUBLIC_TYPE SubPartitionsContext : public antlr4::ParserRuleContext {
  public:
    SubPartitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *KEY_SYMBOL();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();
    antlr4::tree::TerminalNode *LINEAR_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITIONS_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    PartitionKeyAlgorithmContext *partitionKeyAlgorithm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubPartitionsContext* subPartitions();

  class PARSERS_PUBLIC_TYPE PartitionKeyAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    PartitionKeyAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    Real_ulong_numberContext *real_ulong_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionKeyAlgorithmContext* partitionKeyAlgorithm();

  class PARSERS_PUBLIC_TYPE PartitionDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionsContext* partitionDefinitions();

  class PARSERS_PUBLIC_TYPE PartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *VALUES_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *THAN_SYMBOL();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    PartitionValuesInContext *partitionValuesIn();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    PartitionValueItemListParenContext *partitionValueItemListParen();
    antlr4::tree::TerminalNode *MAXVALUE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionDefinitionContext* partitionDefinition();

  class PARSERS_PUBLIC_TYPE PartitionValuesInContext : public antlr4::ParserRuleContext {
  public:
    PartitionValuesInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PartitionValueItemListParenContext *> partitionValueItemListParen();
    PartitionValueItemListParenContext* partitionValueItemListParen(size_t i);
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValuesInContext* partitionValuesIn();

  class PARSERS_PUBLIC_TYPE PartitionOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *option = nullptr;;
    PartitionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    EngineRefContext *engineRef();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    Real_ulong_numberContext *real_ulong_number();
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    antlr4::tree::TerminalNode *MAX_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MIN_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    TextLiteralContext *textLiteral();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *INDEX_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionOptionContext* partitionOption();

  class PARSERS_PUBLIC_TYPE SubpartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubpartitionDefinitionContext* subpartitionDefinition();

  class PARSERS_PUBLIC_TYPE PartitionValueItemListParenContext : public antlr4::ParserRuleContext {
  public:
    PartitionValueItemListParenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<PartitionValueItemContext *> partitionValueItem();
    PartitionValueItemContext* partitionValueItem(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValueItemListParenContext* partitionValueItemListParen();

  class PARSERS_PUBLIC_TYPE PartitionValueItemContext : public antlr4::ParserRuleContext {
  public:
    PartitionValueItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitExprContext *bitExpr();
    antlr4::tree::TerminalNode *MAXVALUE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValueItemContext* partitionValueItem();

  class PARSERS_PUBLIC_TYPE DefinerClauseContext : public antlr4::ParserRuleContext {
  public:
    DefinerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    UserContext *user();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinerClauseContext* definerClause();

  class PARSERS_PUBLIC_TYPE IfExistsContext : public antlr4::ParserRuleContext {
  public:
    IfExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_SYMBOL();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExistsContext* ifExists();

  class PARSERS_PUBLIC_TYPE IfNotExistsContext : public antlr4::ParserRuleContext {
  public:
    IfNotExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_SYMBOL();
    NotRuleContext *notRule();
    antlr4::tree::TerminalNode *EXISTS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfNotExistsContext* ifNotExists();

  class PARSERS_PUBLIC_TYPE ProcedureParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *type = nullptr;;
    ProcedureParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParameterContext *functionParameter();
    antlr4::tree::TerminalNode *IN_SYMBOL();
    antlr4::tree::TerminalNode *OUT_SYMBOL();
    antlr4::tree::TerminalNode *INOUT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureParameterContext* procedureParameter();

  class PARSERS_PUBLIC_TYPE FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterNameContext *parameterName();
    TypeWithOptCollateContext *typeWithOptCollate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParameterContext* functionParameter();

  class PARSERS_PUBLIC_TYPE CollateContext : public antlr4::ParserRuleContext {
  public:
    CollateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLATE_SYMBOL();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollateContext* collate();

  class PARSERS_PUBLIC_TYPE TypeWithOptCollateContext : public antlr4::ParserRuleContext {
  public:
    TypeWithOptCollateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    CollateContext *collate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeWithOptCollateContext* typeWithOptCollate();

  class PARSERS_PUBLIC_TYPE SchemaIdentifierPairContext : public antlr4::ParserRuleContext {
  public:
    SchemaIdentifierPairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<SchemaRefContext *> schemaRef();
    SchemaRefContext* schemaRef(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaIdentifierPairContext* schemaIdentifierPair();

  class PARSERS_PUBLIC_TYPE ViewRefListContext : public antlr4::ParserRuleContext {
  public:
    ViewRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ViewRefContext *> viewRef();
    ViewRefContext* viewRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewRefListContext* viewRefList();

  class PARSERS_PUBLIC_TYPE UpdateListContext : public antlr4::ParserRuleContext {
  public:
    UpdateListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UpdateElementContext *> updateElement();
    UpdateElementContext* updateElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateListContext* updateList();

  class PARSERS_PUBLIC_TYPE UpdateElementContext : public antlr4::ParserRuleContext {
  public:
    UpdateElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *DEFAULT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateElementContext* updateElement();

  class PARSERS_PUBLIC_TYPE CharsetClauseContext : public antlr4::ParserRuleContext {
  public:
    CharsetClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharsetContext *charset();
    CharsetNameContext *charsetName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsetClauseContext* charsetClause();

  class PARSERS_PUBLIC_TYPE FieldsClauseContext : public antlr4::ParserRuleContext {
  public:
    FieldsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    std::vector<FieldTermContext *> fieldTerm();
    FieldTermContext* fieldTerm(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldsClauseContext* fieldsClause();

  class PARSERS_PUBLIC_TYPE FieldTermContext : public antlr4::ParserRuleContext {
  public:
    FieldTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *ENCLOSED_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONALLY_SYMBOL();
    antlr4::tree::TerminalNode *ESCAPED_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldTermContext* fieldTerm();

  class PARSERS_PUBLIC_TYPE LinesClauseContext : public antlr4::ParserRuleContext {
  public:
    LinesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINES_SYMBOL();
    std::vector<LineTermContext *> lineTerm();
    LineTermContext* lineTerm(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinesClauseContext* linesClause();

  class PARSERS_PUBLIC_TYPE LineTermContext : public antlr4::ParserRuleContext {
  public:
    LineTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *TERMINATED_SYMBOL();
    antlr4::tree::TerminalNode *STARTING_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineTermContext* lineTerm();

  class PARSERS_PUBLIC_TYPE UserListContext : public antlr4::ParserRuleContext {
  public:
    UserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UserContext *> user();
    UserContext* user(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserListContext* userList();

  class PARSERS_PUBLIC_TYPE CreateUserListContext : public antlr4::ParserRuleContext {
  public:
    CreateUserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CreateUserEntryContext *> createUserEntry();
    CreateUserEntryContext* createUserEntry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserListContext* createUserList();

  class PARSERS_PUBLIC_TYPE AlterUserListContext : public antlr4::ParserRuleContext {
  public:
    AlterUserListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AlterUserEntryContext *> alterUserEntry();
    AlterUserEntryContext* alterUserEntry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserListContext* alterUserList();

  class PARSERS_PUBLIC_TYPE CreateUserEntryContext : public antlr4::ParserRuleContext {
  public:
    CreateUserEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserContext *user();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    TextStringContext *textString();
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateUserEntryContext* createUserEntry();

  class PARSERS_PUBLIC_TYPE AlterUserEntryContext : public antlr4::ParserRuleContext {
  public:
    AlterUserEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserContext *user();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    DiscardOldPasswordContext *discardOldPassword();
    antlr4::tree::TerminalNode *BY_SYMBOL();
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    antlr4::tree::TerminalNode *WITH_SYMBOL();
    TextOrIdentifierContext *textOrIdentifier();
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    RetainCurrentPasswordContext *retainCurrentPassword();
    antlr4::tree::TerminalNode *AS_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterUserEntryContext* alterUserEntry();

  class PARSERS_PUBLIC_TYPE RetainCurrentPasswordContext : public antlr4::ParserRuleContext {
  public:
    RetainCurrentPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETAIN_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetainCurrentPasswordContext* retainCurrentPassword();

  class PARSERS_PUBLIC_TYPE DiscardOldPasswordContext : public antlr4::ParserRuleContext {
  public:
    DiscardOldPasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *OLD_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiscardOldPasswordContext* discardOldPassword();

  class PARSERS_PUBLIC_TYPE ReplacePasswordContext : public antlr4::ParserRuleContext {
  public:
    ReplacePasswordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE_SYMBOL();
    TextStringContext *textString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplacePasswordContext* replacePassword();

  class PARSERS_PUBLIC_TYPE UserContext : public antlr4::ParserRuleContext {
  public:
    UserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextOrIdentifierContext *> textOrIdentifier();
    TextOrIdentifierContext* textOrIdentifier(size_t i);
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    antlr4::tree::TerminalNode *AT_TEXT_SUFFIX();
    antlr4::tree::TerminalNode *CURRENT_USER_SYMBOL();
    ParenthesesContext *parentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserContext* user();

  class PARSERS_PUBLIC_TYPE LikeClauseContext : public antlr4::ParserRuleContext {
  public:
    LikeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE_SYMBOL();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LikeClauseContext* likeClause();

  class PARSERS_PUBLIC_TYPE LikeOrWhereContext : public antlr4::ParserRuleContext {
  public:
    LikeOrWhereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LikeClauseContext *likeClause();
    WhereClauseContext *whereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LikeOrWhereContext* likeOrWhere();

  class PARSERS_PUBLIC_TYPE OnlineOptionContext : public antlr4::ParserRuleContext {
  public:
    OnlineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONLINE_SYMBOL();
    antlr4::tree::TerminalNode *OFFLINE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnlineOptionContext* onlineOption();

  class PARSERS_PUBLIC_TYPE NoWriteToBinLogContext : public antlr4::ParserRuleContext {
  public:
    NoWriteToBinLogContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoWriteToBinLogContext* noWriteToBinLog();

  class PARSERS_PUBLIC_TYPE UsePartitionContext : public antlr4::ParserRuleContext {
  public:
    UsePartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    IdentifierListWithParenthesesContext *identifierListWithParentheses();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsePartitionContext* usePartition();

  class PARSERS_PUBLIC_TYPE FieldIdentifierContext : public antlr4::ParserRuleContext {
  public:
    FieldIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DotIdentifierContext *dotIdentifier();
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldIdentifierContext* fieldIdentifier();

  class PARSERS_PUBLIC_TYPE ColumnNameContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    FieldIdentifierContext *fieldIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameContext* columnName();

  class PARSERS_PUBLIC_TYPE ColumnInternalRefContext : public antlr4::ParserRuleContext {
  public:
    ColumnInternalRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnInternalRefContext* columnInternalRef();

  class PARSERS_PUBLIC_TYPE ColumnInternalRefListContext : public antlr4::ParserRuleContext {
  public:
    ColumnInternalRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ColumnInternalRefContext *> columnInternalRef();
    ColumnInternalRefContext* columnInternalRef(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnInternalRefListContext* columnInternalRefList();

  class PARSERS_PUBLIC_TYPE ColumnRefContext : public antlr4::ParserRuleContext {
  public:
    ColumnRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdentifierContext *fieldIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnRefContext* columnRef();

  class PARSERS_PUBLIC_TYPE InsertIdentifierContext : public antlr4::ParserRuleContext {
  public:
    InsertIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnRefContext *columnRef();
    TableWildContext *tableWild();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertIdentifierContext* insertIdentifier();

  class PARSERS_PUBLIC_TYPE IndexNameContext : public antlr4::ParserRuleContext {
  public:
    IndexNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexNameContext* indexName();

  class PARSERS_PUBLIC_TYPE IndexRefContext : public antlr4::ParserRuleContext {
  public:
    IndexRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldIdentifierContext *fieldIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexRefContext* indexRef();

  class PARSERS_PUBLIC_TYPE TableWildContext : public antlr4::ParserRuleContext {
  public:
    TableWildContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT_SYMBOL();
    antlr4::tree::TerminalNode* DOT_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *MULT_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableWildContext* tableWild();

  class PARSERS_PUBLIC_TYPE SchemaNameContext : public antlr4::ParserRuleContext {
  public:
    SchemaNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaNameContext* schemaName();

  class PARSERS_PUBLIC_TYPE SchemaRefContext : public antlr4::ParserRuleContext {
  public:
    SchemaRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaRefContext* schemaRef();

  class PARSERS_PUBLIC_TYPE ProcedureNameContext : public antlr4::ParserRuleContext {
  public:
    ProcedureNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureNameContext* procedureName();

  class PARSERS_PUBLIC_TYPE ProcedureRefContext : public antlr4::ParserRuleContext {
  public:
    ProcedureRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureRefContext* procedureRef();

  class PARSERS_PUBLIC_TYPE FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class PARSERS_PUBLIC_TYPE FunctionRefContext : public antlr4::ParserRuleContext {
  public:
    FunctionRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionRefContext* functionRef();

  class PARSERS_PUBLIC_TYPE TriggerNameContext : public antlr4::ParserRuleContext {
  public:
    TriggerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerNameContext* triggerName();

  class PARSERS_PUBLIC_TYPE TriggerRefContext : public antlr4::ParserRuleContext {
  public:
    TriggerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerRefContext* triggerRef();

  class PARSERS_PUBLIC_TYPE ViewNameContext : public antlr4::ParserRuleContext {
  public:
    ViewNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewNameContext* viewName();

  class PARSERS_PUBLIC_TYPE ViewRefContext : public antlr4::ParserRuleContext {
  public:
    ViewRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewRefContext* viewRef();

  class PARSERS_PUBLIC_TYPE TablespaceNameContext : public antlr4::ParserRuleContext {
  public:
    TablespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceNameContext* tablespaceName();

  class PARSERS_PUBLIC_TYPE TablespaceRefContext : public antlr4::ParserRuleContext {
  public:
    TablespaceRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablespaceRefContext* tablespaceRef();

  class PARSERS_PUBLIC_TYPE LogfileGroupNameContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupNameContext* logfileGroupName();

  class PARSERS_PUBLIC_TYPE LogfileGroupRefContext : public antlr4::ParserRuleContext {
  public:
    LogfileGroupRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogfileGroupRefContext* logfileGroupRef();

  class PARSERS_PUBLIC_TYPE EventNameContext : public antlr4::ParserRuleContext {
  public:
    EventNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventNameContext* eventName();

  class PARSERS_PUBLIC_TYPE EventRefContext : public antlr4::ParserRuleContext {
  public:
    EventRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventRefContext* eventRef();

  class PARSERS_PUBLIC_TYPE UdfNameContext : public antlr4::ParserRuleContext {
  public:
    UdfNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UdfNameContext* udfName();

  class PARSERS_PUBLIC_TYPE ServerNameContext : public antlr4::ParserRuleContext {
  public:
    ServerNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerNameContext* serverName();

  class PARSERS_PUBLIC_TYPE ServerRefContext : public antlr4::ParserRuleContext {
  public:
    ServerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServerRefContext* serverRef();

  class PARSERS_PUBLIC_TYPE EngineRefContext : public antlr4::ParserRuleContext {
  public:
    EngineRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextOrIdentifierContext *textOrIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EngineRefContext* engineRef();

  class PARSERS_PUBLIC_TYPE TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableNameContext* tableName();

  class PARSERS_PUBLIC_TYPE FilterTableRefContext : public antlr4::ParserRuleContext {
  public:
    FilterTableRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterTableRefContext* filterTableRef();

  class PARSERS_PUBLIC_TYPE TableRefWithWildcardContext : public antlr4::ParserRuleContext {
  public:
    TableRefWithWildcardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRefWithWildcardContext* tableRefWithWildcard();

  class PARSERS_PUBLIC_TYPE TableRefContext : public antlr4::ParserRuleContext {
  public:
    TableRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedIdentifierContext *qualifiedIdentifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRefContext* tableRef();

  class PARSERS_PUBLIC_TYPE TableRefListContext : public antlr4::ParserRuleContext {
  public:
    TableRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableRefContext *> tableRef();
    TableRefContext* tableRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRefListContext* tableRefList();

  class PARSERS_PUBLIC_TYPE TableAliasRefListContext : public antlr4::ParserRuleContext {
  public:
    TableAliasRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableRefWithWildcardContext *> tableRefWithWildcard();
    TableRefWithWildcardContext* tableRefWithWildcard(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasRefListContext* tableAliasRefList();

  class PARSERS_PUBLIC_TYPE ParameterNameContext : public antlr4::ParserRuleContext {
  public:
    ParameterNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterNameContext* parameterName();

  class PARSERS_PUBLIC_TYPE LabelIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LabelIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    LabelKeywordContext *labelKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelIdentifierContext* labelIdentifier();

  class PARSERS_PUBLIC_TYPE LabelRefContext : public antlr4::ParserRuleContext {
  public:
    LabelRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelRefContext* labelRef();

  class PARSERS_PUBLIC_TYPE RoleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    RoleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    RoleKeywordContext *roleKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleIdentifierContext* roleIdentifier();

  class PARSERS_PUBLIC_TYPE RoleRefContext : public antlr4::ParserRuleContext {
  public:
    RoleRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierContext *roleIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleRefContext* roleRef();

  class PARSERS_PUBLIC_TYPE PluginRefContext : public antlr4::ParserRuleContext {
  public:
    PluginRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PluginRefContext* pluginRef();

  class PARSERS_PUBLIC_TYPE ComponentRefContext : public antlr4::ParserRuleContext {
  public:
    ComponentRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentRefContext* componentRef();

  class PARSERS_PUBLIC_TYPE ResourceGroupRefContext : public antlr4::ParserRuleContext {
  public:
    ResourceGroupRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceGroupRefContext* resourceGroupRef();

  class PARSERS_PUBLIC_TYPE WindowNameContext : public antlr4::ParserRuleContext {
  public:
    WindowNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowNameContext* windowName();

  class PARSERS_PUBLIC_TYPE PureIdentifierContext : public antlr4::ParserRuleContext {
  public:
    PureIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *BACK_TICK_QUOTED_ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PureIdentifierContext* pureIdentifier();

  class PARSERS_PUBLIC_TYPE IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PureIdentifierContext *pureIdentifier();
    IdentifierKeywordContext *identifierKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class PARSERS_PUBLIC_TYPE IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class PARSERS_PUBLIC_TYPE IdentifierListWithParenthesesContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListWithParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListWithParenthesesContext* identifierListWithParentheses();

  class PARSERS_PUBLIC_TYPE QualifiedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DotIdentifierContext *dotIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdentifierContext* qualifiedIdentifier();

  class PARSERS_PUBLIC_TYPE SimpleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<DotIdentifierContext *> dotIdentifier();
    DotIdentifierContext* dotIdentifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleIdentifierContext* simpleIdentifier();

  class PARSERS_PUBLIC_TYPE DotIdentifierContext : public antlr4::ParserRuleContext {
  public:
    DotIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DotIdentifierContext* dotIdentifier();

  class PARSERS_PUBLIC_TYPE Ulong_numberContext : public antlr4::ParserRuleContext {
  public:
    Ulong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ulong_numberContext* ulong_number();

  class PARSERS_PUBLIC_TYPE Real_ulong_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_ulong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_ulong_numberContext* real_ulong_number();

  class PARSERS_PUBLIC_TYPE Ulonglong_numberContext : public antlr4::ParserRuleContext {
  public:
    Ulonglong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ulonglong_numberContext* ulonglong_number();

  class PARSERS_PUBLIC_TYPE Real_ulonglong_numberContext : public antlr4::ParserRuleContext {
  public:
    Real_ulonglong_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_ulonglong_numberContext* real_ulonglong_number();

  class PARSERS_PUBLIC_TYPE LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextLiteralContext *textLiteral();
    NumLiteralContext *numLiteral();
    TemporalLiteralContext *temporalLiteral();
    NullLiteralContext *nullLiteral();
    BoolLiteralContext *boolLiteral();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *BIN_NUMBER();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class PARSERS_PUBLIC_TYPE SignedLiteralContext : public antlr4::ParserRuleContext {
  public:
    SignedLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    Ulong_numberContext *ulong_number();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedLiteralContext* signedLiteral();

  class PARSERS_PUBLIC_TYPE StringListContext : public antlr4::ParserRuleContext {
  public:
    StringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<TextStringContext *> textString();
    TextStringContext* textString(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringListContext* stringList();

  class PARSERS_PUBLIC_TYPE TextStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;;
    TextStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringLiteralContext* textStringLiteral();

  class PARSERS_PUBLIC_TYPE TextStringContext : public antlr4::ParserRuleContext {
  public:
    TextStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();
    antlr4::tree::TerminalNode *HEX_NUMBER();
    antlr4::tree::TerminalNode *BIN_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringContext* textString();

  class PARSERS_PUBLIC_TYPE TextLiteralContext : public antlr4::ParserRuleContext {
  public:
    TextLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringLiteralContext *> textStringLiteral();
    TextStringLiteralContext* textStringLiteral(size_t i);
    antlr4::tree::TerminalNode *NCHAR_TEXT();
    antlr4::tree::TerminalNode *UNDERSCORE_CHARSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextLiteralContext* textLiteral();

  class PARSERS_PUBLIC_TYPE TextStringNoLinebreakContext : public antlr4::ParserRuleContext {
  public:
    TextStringNoLinebreakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringNoLinebreakContext* textStringNoLinebreak();

  class PARSERS_PUBLIC_TYPE TextStringLiteralListContext : public antlr4::ParserRuleContext {
  public:
    TextStringLiteralListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextStringLiteralContext *> textStringLiteral();
    TextStringLiteralContext* textStringLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA_SYMBOL();
    antlr4::tree::TerminalNode* COMMA_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextStringLiteralListContext* textStringLiteralList();

  class PARSERS_PUBLIC_TYPE NumLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_NUMBER();
    antlr4::tree::TerminalNode *LONG_NUMBER();
    antlr4::tree::TerminalNode *ULONGLONG_NUMBER();
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *FLOAT_NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumLiteralContext* numLiteral();

  class PARSERS_PUBLIC_TYPE BoolLiteralContext : public antlr4::ParserRuleContext {
  public:
    BoolLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_SYMBOL();
    antlr4::tree::TerminalNode *FALSE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolLiteralContext* boolLiteral();

  class PARSERS_PUBLIC_TYPE NullLiteralContext : public antlr4::ParserRuleContext {
  public:
    NullLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_SYMBOL();
    antlr4::tree::TerminalNode *NULL2_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullLiteralContext* nullLiteral();

  class PARSERS_PUBLIC_TYPE TemporalLiteralContext : public antlr4::ParserRuleContext {
  public:
    TemporalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemporalLiteralContext* temporalLiteral();

  class PARSERS_PUBLIC_TYPE FloatOptionsContext : public antlr4::ParserRuleContext {
  public:
    FloatOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldLengthContext *fieldLength();
    PrecisionContext *precision();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatOptionsContext* floatOptions();

  class PARSERS_PUBLIC_TYPE PrecisionContext : public antlr4::ParserRuleContext {
  public:
    PrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> INT_NUMBER();
    antlr4::tree::TerminalNode* INT_NUMBER(size_t i);
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionContext* precision();

  class PARSERS_PUBLIC_TYPE TextOrIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TextOrIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SINGLE_QUOTED_TEXT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextOrIdentifierContext* textOrIdentifier();

  class PARSERS_PUBLIC_TYPE RoleIdentifierOrTextContext : public antlr4::ParserRuleContext {
  public:
    RoleIdentifierOrTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleIdentifierContext *roleIdentifier();
    TextStringLiteralContext *textStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleIdentifierOrTextContext* roleIdentifierOrText();

  class PARSERS_PUBLIC_TYPE SizeNumberContext : public antlr4::ParserRuleContext {
  public:
    SizeNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Real_ulonglong_numberContext *real_ulonglong_number();
    PureIdentifierContext *pureIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SizeNumberContext* sizeNumber();

  class PARSERS_PUBLIC_TYPE ParenthesesContext : public antlr4::ParserRuleContext {
  public:
    ParenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenthesesContext* parentheses();

  class PARSERS_PUBLIC_TYPE EqualContext : public antlr4::ParserRuleContext {
  public:
    EqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *ASSIGN_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualContext* equal();

  class PARSERS_PUBLIC_TYPE OptionTypeContext : public antlr4::ParserRuleContext {
  public:
    OptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionTypeContext* optionType();

  class PARSERS_PUBLIC_TYPE VarIdentTypeContext : public antlr4::ParserRuleContext {
  public:
    VarIdentTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarIdentTypeContext* varIdentType();

  class PARSERS_PUBLIC_TYPE SetVarIdentTypeContext : public antlr4::ParserRuleContext {
  public:
    SetVarIdentTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERSIST_SYMBOL();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *PERSIST_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetVarIdentTypeContext* setVarIdentType();

  class PARSERS_PUBLIC_TYPE IdentifierKeywordContext : public antlr4::ParserRuleContext {
  public:
    IdentifierKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelKeywordContext *labelKeyword();
    RoleOrIdentifierKeywordContext *roleOrIdentifierKeyword();
    antlr4::tree::TerminalNode *EXECUTE_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();
    antlr4::tree::TerminalNode *RESTART_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierKeywordContext* identifierKeyword();

  class PARSERS_PUBLIC_TYPE LabelKeywordContext : public antlr4::ParserRuleContext {
  public:
    LabelKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleOrLabelKeywordContext *roleOrLabelKeyword();
    antlr4::tree::TerminalNode *EVENT_SYMBOL();
    antlr4::tree::TerminalNode *FILE_SYMBOL();
    antlr4::tree::TerminalNode *NONE_SYMBOL();
    antlr4::tree::TerminalNode *PROCESS_SYMBOL();
    antlr4::tree::TerminalNode *PROXY_SYMBOL();
    antlr4::tree::TerminalNode *RELOAD_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *RESOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SUPER_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelKeywordContext* labelKeyword();

  class PARSERS_PUBLIC_TYPE RoleOrIdentifierKeywordContext : public antlr4::ParserRuleContext {
  public:
    RoleOrIdentifierKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT_SYMBOL();
    antlr4::tree::TerminalNode *ASCII_SYMBOL();
    antlr4::tree::TerminalNode *ALWAYS_SYMBOL();
    antlr4::tree::TerminalNode *BACKUP_SYMBOL();
    antlr4::tree::TerminalNode *BEGIN_SYMBOL();
    antlr4::tree::TerminalNode *BYTE_SYMBOL();
    antlr4::tree::TerminalNode *CACHE_SYMBOL();
    antlr4::tree::TerminalNode *CHARSET_SYMBOL();
    antlr4::tree::TerminalNode *CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *CLONE_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_SYMBOL();
    antlr4::tree::TerminalNode *COMMENT_SYMBOL();
    antlr4::tree::TerminalNode *COMMIT_SYMBOL();
    antlr4::tree::TerminalNode *CONTAINS_SYMBOL();
    antlr4::tree::TerminalNode *DEALLOCATE_SYMBOL();
    antlr4::tree::TerminalNode *DO_SYMBOL();
    antlr4::tree::TerminalNode *END_SYMBOL();
    antlr4::tree::TerminalNode *FLUSH_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWS_SYMBOL();
    antlr4::tree::TerminalNode *FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *GROUP_REPLICATION_SYMBOL();
    antlr4::tree::TerminalNode *HANDLER_SYMBOL();
    antlr4::tree::TerminalNode *HELP_SYMBOL();
    antlr4::tree::TerminalNode *HOST_SYMBOL();
    antlr4::tree::TerminalNode *INSTALL_SYMBOL();
    antlr4::tree::TerminalNode *INVISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *LANGUAGE_SYMBOL();
    antlr4::tree::TerminalNode *NO_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONS_SYMBOL();
    antlr4::tree::TerminalNode *OWNER_SYMBOL();
    antlr4::tree::TerminalNode *PARSER_SYMBOL();
    antlr4::tree::TerminalNode *PARTITION_SYMBOL();
    antlr4::tree::TerminalNode *PORT_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDES_SYMBOL();
    antlr4::tree::TerminalNode *PREPARE_SYMBOL();
    antlr4::tree::TerminalNode *REMOVE_SYMBOL();
    antlr4::tree::TerminalNode *REPAIR_SYMBOL();
    antlr4::tree::TerminalNode *RESET_SYMBOL();
    antlr4::tree::TerminalNode *RESTORE_SYMBOL();
    antlr4::tree::TerminalNode *ROLE_SYMBOL();
    antlr4::tree::TerminalNode *ROLLBACK_SYMBOL();
    antlr4::tree::TerminalNode *SAVEPOINT_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_LOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECONDARY_UNLOAD_SYMBOL();
    antlr4::tree::TerminalNode *SECURITY_SYMBOL();
    antlr4::tree::TerminalNode *SERVER_SYMBOL();
    antlr4::tree::TerminalNode *SIGNED_SYMBOL();
    antlr4::tree::TerminalNode *SOCKET_SYMBOL();
    antlr4::tree::TerminalNode *SLAVE_SYMBOL();
    antlr4::tree::TerminalNode *SONAME_SYMBOL();
    antlr4::tree::TerminalNode *START_SYMBOL();
    antlr4::tree::TerminalNode *STOP_SYMBOL();
    antlr4::tree::TerminalNode *TRUNCATE_SYMBOL();
    antlr4::tree::TerminalNode *UNICODE_SYMBOL();
    antlr4::tree::TerminalNode *UNINSTALL_SYMBOL();
    antlr4::tree::TerminalNode *UPGRADE_SYMBOL();
    antlr4::tree::TerminalNode *VISIBLE_SYMBOL();
    antlr4::tree::TerminalNode *WRAPPER_SYMBOL();
    antlr4::tree::TerminalNode *XA_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleOrIdentifierKeywordContext* roleOrIdentifierKeyword();

  class PARSERS_PUBLIC_TYPE RoleOrLabelKeywordContext : public antlr4::ParserRuleContext {
  public:
    RoleOrLabelKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION_SYMBOL();
    antlr4::tree::TerminalNode *ACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *ADDDATE_SYMBOL();
    antlr4::tree::TerminalNode *AFTER_SYMBOL();
    antlr4::tree::TerminalNode *AGAINST_SYMBOL();
    antlr4::tree::TerminalNode *AGGREGATE_SYMBOL();
    antlr4::tree::TerminalNode *ALGORITHM_SYMBOL();
    antlr4::tree::TerminalNode *ANALYSE_SYMBOL();
    antlr4::tree::TerminalNode *ANY_SYMBOL();
    antlr4::tree::TerminalNode *AT_SYMBOL();
    antlr4::tree::TerminalNode *AUTHORS_SYMBOL();
    antlr4::tree::TerminalNode *AUTO_INCREMENT_SYMBOL();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH_SYMBOL();
    antlr4::tree::TerminalNode *AVG_SYMBOL();
    antlr4::tree::TerminalNode *BINLOG_SYMBOL();
    antlr4::tree::TerminalNode *BIT_SYMBOL();
    antlr4::tree::TerminalNode *BLOCK_SYMBOL();
    antlr4::tree::TerminalNode *BOOL_SYMBOL();
    antlr4::tree::TerminalNode *BOOLEAN_SYMBOL();
    antlr4::tree::TerminalNode *BTREE_SYMBOL();
    antlr4::tree::TerminalNode *BUCKETS_SYMBOL();
    antlr4::tree::TerminalNode *CASCADED_SYMBOL();
    antlr4::tree::TerminalNode *CATALOG_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CHAIN_SYMBOL();
    antlr4::tree::TerminalNode *CHANGED_SYMBOL();
    antlr4::tree::TerminalNode *CHANNEL_SYMBOL();
    antlr4::tree::TerminalNode *CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *CLIENT_SYMBOL();
    antlr4::tree::TerminalNode *CLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *COALESCE_SYMBOL();
    antlr4::tree::TerminalNode *CODE_SYMBOL();
    antlr4::tree::TerminalNode *COLLATION_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_NAME_SYMBOL();
    antlr4::tree::TerminalNode *COLUMN_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *COLUMNS_SYMBOL();
    antlr4::tree::TerminalNode *COMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *COMPACT_SYMBOL();
    antlr4::tree::TerminalNode *COMPLETION_SYMBOL();
    antlr4::tree::TerminalNode *COMPONENT_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSED_SYMBOL();
    antlr4::tree::TerminalNode *COMPRESSION_SYMBOL();
    antlr4::tree::TerminalNode *CONCURRENT_SYMBOL();
    antlr4::tree::TerminalNode *CONNECTION_SYMBOL();
    antlr4::tree::TerminalNode *CONSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA_SYMBOL();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME_SYMBOL();
    antlr4::tree::TerminalNode *CONTEXT_SYMBOL();
    antlr4::tree::TerminalNode *CONTRIBUTORS_SYMBOL();
    antlr4::tree::TerminalNode *CPU_SYMBOL();
    antlr4::tree::TerminalNode *CURRENT_SYMBOL();
    antlr4::tree::TerminalNode *CURSOR_NAME_SYMBOL();
    antlr4::tree::TerminalNode *DATA_SYMBOL();
    antlr4::tree::TerminalNode *DATAFILE_SYMBOL();
    antlr4::tree::TerminalNode *DATETIME_SYMBOL();
    antlr4::tree::TerminalNode *DATE_SYMBOL();
    antlr4::tree::TerminalNode *DAY_SYMBOL();
    antlr4::tree::TerminalNode *DEFAULT_AUTH_SYMBOL();
    antlr4::tree::TerminalNode *DEFINER_SYMBOL();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE_SYMBOL();
    antlr4::tree::TerminalNode *DES_KEY_FILE_SYMBOL();
    antlr4::tree::TerminalNode *DESCRIPTION_SYMBOL();
    antlr4::tree::TerminalNode *DIAGNOSTICS_SYMBOL();
    antlr4::tree::TerminalNode *DIRECTORY_SYMBOL();
    antlr4::tree::TerminalNode *DISABLE_SYMBOL();
    antlr4::tree::TerminalNode *DISCARD_SYMBOL();
    antlr4::tree::TerminalNode *DISK_SYMBOL();
    antlr4::tree::TerminalNode *DUMPFILE_SYMBOL();
    antlr4::tree::TerminalNode *DUPLICATE_SYMBOL();
    antlr4::tree::TerminalNode *DYNAMIC_SYMBOL();
    antlr4::tree::TerminalNode *ENCRYPTION_SYMBOL();
    antlr4::tree::TerminalNode *ENDS_SYMBOL();
    antlr4::tree::TerminalNode *ENUM_SYMBOL();
    antlr4::tree::TerminalNode *ENGINE_SYMBOL();
    antlr4::tree::TerminalNode *ENGINES_SYMBOL();
    antlr4::tree::TerminalNode *ERROR_SYMBOL();
    antlr4::tree::TerminalNode *ERRORS_SYMBOL();
    antlr4::tree::TerminalNode *ESCAPE_SYMBOL();
    antlr4::tree::TerminalNode *EVENTS_SYMBOL();
    antlr4::tree::TerminalNode *EVERY_SYMBOL();
    antlr4::tree::TerminalNode *EXCLUDE_SYMBOL();
    antlr4::tree::TerminalNode *EXPANSION_SYMBOL();
    antlr4::tree::TerminalNode *EXPORT_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED_SYMBOL();
    antlr4::tree::TerminalNode *EXTENT_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *FAULTS_SYMBOL();
    antlr4::tree::TerminalNode *FAST_SYMBOL();
    antlr4::tree::TerminalNode *FOLLOWING_SYMBOL();
    antlr4::tree::TerminalNode *FOUND_SYMBOL();
    antlr4::tree::TerminalNode *ENABLE_SYMBOL();
    antlr4::tree::TerminalNode *FULL_SYMBOL();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *FILTER_SYMBOL();
    antlr4::tree::TerminalNode *FIRST_SYMBOL();
    antlr4::tree::TerminalNode *FIXED_SYMBOL();
    antlr4::tree::TerminalNode *GENERAL_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRY_SYMBOL();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION_SYMBOL();
    antlr4::tree::TerminalNode *GET_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *GRANTS_SYMBOL();
    antlr4::tree::TerminalNode *GLOBAL_SYMBOL();
    antlr4::tree::TerminalNode *HASH_SYMBOL();
    antlr4::tree::TerminalNode *HISTOGRAM_SYMBOL();
    antlr4::tree::TerminalNode *HISTORY_SYMBOL();
    antlr4::tree::TerminalNode *HOSTS_SYMBOL();
    antlr4::tree::TerminalNode *HOUR_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIED_SYMBOL();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS_SYMBOL();
    antlr4::tree::TerminalNode *INVOKER_SYMBOL();
    antlr4::tree::TerminalNode *INDEXES_SYMBOL();
    antlr4::tree::TerminalNode *INITIAL_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *INSTANCE_SYMBOL();
    antlr4::tree::TerminalNode *INACTIVE_SYMBOL();
    antlr4::tree::TerminalNode *IO_SYMBOL();
    antlr4::tree::TerminalNode *IPC_SYMBOL();
    antlr4::tree::TerminalNode *ISOLATION_SYMBOL();
    antlr4::tree::TerminalNode *ISSUER_SYMBOL();
    antlr4::tree::TerminalNode *INSERT_METHOD_SYMBOL();
    antlr4::tree::TerminalNode *JSON_SYMBOL();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *LAST_SYMBOL();
    antlr4::tree::TerminalNode *LEAVES_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *LEVEL_SYMBOL();
    antlr4::tree::TerminalNode *LINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *LIST_SYMBOL();
    antlr4::tree::TerminalNode *LOCAL_SYMBOL();
    antlr4::tree::TerminalNode *LOCKED_SYMBOL();
    antlr4::tree::TerminalNode *LOCKS_SYMBOL();
    antlr4::tree::TerminalNode *LOGFILE_SYMBOL();
    antlr4::tree::TerminalNode *LOGS_SYMBOL();
    antlr4::tree::TerminalNode *MAX_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_HOST_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PORT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_USER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_PUBLIC_KEY_PATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SERVER_ID_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_DELAY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY_SYMBOL();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION_SYMBOL();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_STATEMENT_TIME_SYMBOL();
    antlr4::tree::TerminalNode *MAX_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR_SYMBOL();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS_SYMBOL();
    antlr4::tree::TerminalNode *MEDIUM_SYMBOL();
    antlr4::tree::TerminalNode *MEMORY_SYMBOL();
    antlr4::tree::TerminalNode *MERGE_SYMBOL();
    antlr4::tree::TerminalNode *MESSAGE_TEXT_SYMBOL();
    antlr4::tree::TerminalNode *MICROSECOND_SYMBOL();
    antlr4::tree::TerminalNode *MIGRATE_SYMBOL();
    antlr4::tree::TerminalNode *MINUTE_SYMBOL();
    antlr4::tree::TerminalNode *MIN_ROWS_SYMBOL();
    antlr4::tree::TerminalNode *MODIFY_SYMBOL();
    antlr4::tree::TerminalNode *MODE_SYMBOL();
    antlr4::tree::TerminalNode *MONTH_SYMBOL();
    antlr4::tree::TerminalNode *MULTILINESTRING_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOINT_SYMBOL();
    antlr4::tree::TerminalNode *MULTIPOLYGON_SYMBOL();
    antlr4::tree::TerminalNode *MUTEX_SYMBOL();
    antlr4::tree::TerminalNode *MYSQL_ERRNO_SYMBOL();
    antlr4::tree::TerminalNode *NAME_SYMBOL();
    antlr4::tree::TerminalNode *NAMES_SYMBOL();
    antlr4::tree::TerminalNode *NATIONAL_SYMBOL();
    antlr4::tree::TerminalNode *NCHAR_SYMBOL();
    antlr4::tree::TerminalNode *NDBCLUSTER_SYMBOL();
    antlr4::tree::TerminalNode *NESTED_SYMBOL();
    antlr4::tree::TerminalNode *NEVER_SYMBOL();
    antlr4::tree::TerminalNode *NEXT_SYMBOL();
    antlr4::tree::TerminalNode *NEW_SYMBOL();
    antlr4::tree::TerminalNode *NO_WAIT_SYMBOL();
    antlr4::tree::TerminalNode *NODEGROUP_SYMBOL();
    antlr4::tree::TerminalNode *NULLS_SYMBOL();
    antlr4::tree::TerminalNode *NOWAIT_SYMBOL();
    antlr4::tree::TerminalNode *NUMBER_SYMBOL();
    antlr4::tree::TerminalNode *NVARCHAR_SYMBOL();
    antlr4::tree::TerminalNode *OFFSET_SYMBOL();
    antlr4::tree::TerminalNode *OLD_SYMBOL();
    antlr4::tree::TerminalNode *OLD_PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *ONE_SHOT_SYMBOL();
    antlr4::tree::TerminalNode *ONE_SYMBOL();
    antlr4::tree::TerminalNode *OPTIONAL_SYMBOL();
    antlr4::tree::TerminalNode *ORDINALITY_SYMBOL();
    antlr4::tree::TerminalNode *ORGANIZATION_SYMBOL();
    antlr4::tree::TerminalNode *OTHERS_SYMBOL();
    antlr4::tree::TerminalNode *PACK_KEYS_SYMBOL();
    antlr4::tree::TerminalNode *PAGE_SYMBOL();
    antlr4::tree::TerminalNode *PARTIAL_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONING_SYMBOL();
    antlr4::tree::TerminalNode *PARTITIONS_SYMBOL();
    antlr4::tree::TerminalNode *PASSWORD_SYMBOL();
    antlr4::tree::TerminalNode *PATH_SYMBOL();
    antlr4::tree::TerminalNode *PHASE_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_DIR_SYMBOL();
    antlr4::tree::TerminalNode *PLUGIN_SYMBOL();
    antlr4::tree::TerminalNode *PLUGINS_SYMBOL();
    antlr4::tree::TerminalNode *POINT_SYMBOL();
    antlr4::tree::TerminalNode *POLYGON_SYMBOL();
    antlr4::tree::TerminalNode *PRECEDING_SYMBOL();
    antlr4::tree::TerminalNode *PRESERVE_SYMBOL();
    antlr4::tree::TerminalNode *PREV_SYMBOL();
    antlr4::tree::TerminalNode *THREAD_PRIORITY_SYMBOL();
    antlr4::tree::TerminalNode *PRIVILEGES_SYMBOL();
    antlr4::tree::TerminalNode *PROCESSLIST_SYMBOL();
    antlr4::tree::TerminalNode *PROFILE_SYMBOL();
    antlr4::tree::TerminalNode *PROFILES_SYMBOL();
    antlr4::tree::TerminalNode *QUARTER_SYMBOL();
    antlr4::tree::TerminalNode *QUERY_SYMBOL();
    antlr4::tree::TerminalNode *QUICK_SYMBOL();
    antlr4::tree::TerminalNode *READ_ONLY_SYMBOL();
    antlr4::tree::TerminalNode *REBUILD_SYMBOL();
    antlr4::tree::TerminalNode *RECOVER_SYMBOL();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *REDOFILE_SYMBOL();
    antlr4::tree::TerminalNode *REDUNDANT_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_SYMBOL();
    antlr4::tree::TerminalNode *RELAYLOG_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_LOG_POS_SYMBOL();
    antlr4::tree::TerminalNode *RELAY_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *REMOTE_SYMBOL();
    antlr4::tree::TerminalNode *REORGANIZE_SYMBOL();
    antlr4::tree::TerminalNode *REPEATABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE_SYMBOL();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB_SYMBOL();
    antlr4::tree::TerminalNode *USER_RESOURCES_SYMBOL();
    antlr4::tree::TerminalNode *RESPECT_SYMBOL();
    antlr4::tree::TerminalNode *RESUME_SYMBOL();
    antlr4::tree::TerminalNode *RETAIN_SYMBOL();
    antlr4::tree::TerminalNode *RETURNED_SQLSTATE_SYMBOL();
    antlr4::tree::TerminalNode *RETURNS_SYMBOL();
    antlr4::tree::TerminalNode *REUSE_SYMBOL();
    antlr4::tree::TerminalNode *REVERSE_SYMBOL();
    antlr4::tree::TerminalNode *ROLLUP_SYMBOL();
    antlr4::tree::TerminalNode *ROTATE_SYMBOL();
    antlr4::tree::TerminalNode *ROUTINE_SYMBOL();
    antlr4::tree::TerminalNode *ROW_COUNT_SYMBOL();
    antlr4::tree::TerminalNode *ROW_FORMAT_SYMBOL();
    antlr4::tree::TerminalNode *RTREE_SYMBOL();
    antlr4::tree::TerminalNode *SCHEDULE_SYMBOL();
    antlr4::tree::TerminalNode *SCHEMA_NAME_SYMBOL();
    antlr4::tree::TerminalNode *SECOND_SYMBOL();
    antlr4::tree::TerminalNode *SERIAL_SYMBOL();
    antlr4::tree::TerminalNode *SERIALIZABLE_SYMBOL();
    antlr4::tree::TerminalNode *SESSION_SYMBOL();
    antlr4::tree::TerminalNode *SHARE_SYMBOL();
    antlr4::tree::TerminalNode *SIMPLE_SYMBOL();
    antlr4::tree::TerminalNode *SKIP_SYMBOL();
    antlr4::tree::TerminalNode *SLOW_SYMBOL();
    antlr4::tree::TerminalNode *SNAPSHOT_SYMBOL();
    antlr4::tree::TerminalNode *SOUNDS_SYMBOL();
    antlr4::tree::TerminalNode *SOURCE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS_SYMBOL();
    antlr4::tree::TerminalNode *SQL_CACHE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT_SYMBOL();
    antlr4::tree::TerminalNode *SQL_NO_CACHE_SYMBOL();
    antlr4::tree::TerminalNode *SQL_THREAD_SYMBOL();
    antlr4::tree::TerminalNode *SRID_SYMBOL();
    antlr4::tree::TerminalNode *STACKED_SYMBOL();
    antlr4::tree::TerminalNode *STARTS_SYMBOL();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC_SYMBOL();
    antlr4::tree::TerminalNode *STATS_PERSISTENT_SYMBOL();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES_SYMBOL();
    antlr4::tree::TerminalNode *STATUS_SYMBOL();
    antlr4::tree::TerminalNode *STORAGE_SYMBOL();
    antlr4::tree::TerminalNode *STRING_SYMBOL();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN_SYMBOL();
    antlr4::tree::TerminalNode *SUBDATE_SYMBOL();
    antlr4::tree::TerminalNode *SUBJECT_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITION_SYMBOL();
    antlr4::tree::TerminalNode *SUBPARTITIONS_SYMBOL();
    antlr4::tree::TerminalNode *SUPER_SYMBOL();
    antlr4::tree::TerminalNode *SUSPEND_SYMBOL();
    antlr4::tree::TerminalNode *SWAPS_SYMBOL();
    antlr4::tree::TerminalNode *SWITCHES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_NAME_SYMBOL();
    antlr4::tree::TerminalNode *TABLES_SYMBOL();
    antlr4::tree::TerminalNode *TABLE_CHECKSUM_SYMBOL();
    antlr4::tree::TerminalNode *TABLESPACE_SYMBOL();
    antlr4::tree::TerminalNode *TEMPORARY_SYMBOL();
    antlr4::tree::TerminalNode *TEMPTABLE_SYMBOL();
    antlr4::tree::TerminalNode *TEXT_SYMBOL();
    antlr4::tree::TerminalNode *THAN_SYMBOL();
    antlr4::tree::TerminalNode *TIES_SYMBOL();
    antlr4::tree::TerminalNode *TRANSACTION_SYMBOL();
    antlr4::tree::TerminalNode *TRIGGERS_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_ADD_SYMBOL();
    antlr4::tree::TerminalNode *TIMESTAMP_DIFF_SYMBOL();
    antlr4::tree::TerminalNode *TIME_SYMBOL();
    antlr4::tree::TerminalNode *TYPES_SYMBOL();
    antlr4::tree::TerminalNode *TYPE_SYMBOL();
    antlr4::tree::TerminalNode *UDF_RETURNS_SYMBOL();
    antlr4::tree::TerminalNode *UNBOUNDED_SYMBOL();
    antlr4::tree::TerminalNode *UNCOMMITTED_SYMBOL();
    antlr4::tree::TerminalNode *UNDEFINED_SYMBOL();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE_SYMBOL();
    antlr4::tree::TerminalNode *UNDOFILE_SYMBOL();
    antlr4::tree::TerminalNode *UNKNOWN_SYMBOL();
    antlr4::tree::TerminalNode *UNTIL_SYMBOL();
    antlr4::tree::TerminalNode *USER_SYMBOL();
    antlr4::tree::TerminalNode *USE_FRM_SYMBOL();
    antlr4::tree::TerminalNode *VARIABLES_SYMBOL();
    antlr4::tree::TerminalNode *VCPU_SYMBOL();
    antlr4::tree::TerminalNode *VIEW_SYMBOL();
    antlr4::tree::TerminalNode *VALUE_SYMBOL();
    antlr4::tree::TerminalNode *WARNINGS_SYMBOL();
    antlr4::tree::TerminalNode *WAIT_SYMBOL();
    antlr4::tree::TerminalNode *WEEK_SYMBOL();
    antlr4::tree::TerminalNode *WORK_SYMBOL();
    antlr4::tree::TerminalNode *WEIGHT_STRING_SYMBOL();
    antlr4::tree::TerminalNode *X509_SYMBOL();
    antlr4::tree::TerminalNode *XID_SYMBOL();
    antlr4::tree::TerminalNode *XML_SYMBOL();
    antlr4::tree::TerminalNode *YEAR_SYMBOL();
    antlr4::tree::TerminalNode *SHUTDOWN_SYMBOL();
    antlr4::tree::TerminalNode *CUBE_SYMBOL();
    antlr4::tree::TerminalNode *IMPORT_SYMBOL();
    antlr4::tree::TerminalNode *FUNCTION_SYMBOL();
    antlr4::tree::TerminalNode *ROWS_SYMBOL();
    antlr4::tree::TerminalNode *ROW_SYMBOL();
    antlr4::tree::TerminalNode *EXCHANGE_SYMBOL();
    antlr4::tree::TerminalNode *EXPIRE_SYMBOL();
    antlr4::tree::TerminalNode *ONLY_SYMBOL();
    antlr4::tree::TerminalNode *VALIDATION_SYMBOL();
    antlr4::tree::TerminalNode *WITHOUT_SYMBOL();
    antlr4::tree::TerminalNode *ADMIN_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleOrLabelKeywordContext* roleOrLabelKeyword();

  class PARSERS_PUBLIC_TYPE RoleKeywordContext : public antlr4::ParserRuleContext {
  public:
    RoleKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RoleOrLabelKeywordContext *roleOrLabelKeyword();
    RoleOrIdentifierKeywordContext *roleOrIdentifierKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoleKeywordContext* roleKeyword();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool simpleStatementSempred(SimpleStatementContext *_localctx, size_t predicateIndex);
  bool alterStatementSempred(AlterStatementContext *_localctx, size_t predicateIndex);
  bool alterDatabaseSempred(AlterDatabaseContext *_localctx, size_t predicateIndex);
  bool alterTableSempred(AlterTableContext *_localctx, size_t predicateIndex);
  bool standaloneAlterCommandsSempred(StandaloneAlterCommandsContext *_localctx, size_t predicateIndex);
  bool alterPartitionSempred(AlterPartitionContext *_localctx, size_t predicateIndex);
  bool alterCommandsModifierSempred(AlterCommandsModifierContext *_localctx, size_t predicateIndex);
  bool alterListItemSempred(AlterListItemContext *_localctx, size_t predicateIndex);
  bool indexLockAndAlgorithmSempred(IndexLockAndAlgorithmContext *_localctx, size_t predicateIndex);
  bool withValidationSempred(WithValidationContext *_localctx, size_t predicateIndex);
  bool alterTablespaceSempred(AlterTablespaceContext *_localctx, size_t predicateIndex);
  bool createStatementSempred(CreateStatementContext *_localctx, size_t predicateIndex);
  bool createDatabaseOptionSempred(CreateDatabaseOptionContext *_localctx, size_t predicateIndex);
  bool createIndexSempred(CreateIndexContext *_localctx, size_t predicateIndex);
  bool tsDataFileNameSempred(TsDataFileNameContext *_localctx, size_t predicateIndex);
  bool tablespaceOptionSempred(TablespaceOptionContext *_localctx, size_t predicateIndex);
  bool triggerFollowsPrecedesClauseSempred(TriggerFollowsPrecedesClauseContext *_localctx, size_t predicateIndex);
  bool dropStatementSempred(DropStatementContext *_localctx, size_t predicateIndex);
  bool deleteStatementSempred(DeleteStatementContext *_localctx, size_t predicateIndex);
  bool partitionDeleteSempred(PartitionDeleteContext *_localctx, size_t predicateIndex);
  bool doStatementSempred(DoStatementContext *_localctx, size_t predicateIndex);
  bool dataOrXmlSempred(DataOrXmlContext *_localctx, size_t predicateIndex);
  bool xmlRowsIdentifiedBySempred(XmlRowsIdentifiedByContext *_localctx, size_t predicateIndex);
  bool queryExpressionSempred(QueryExpressionContext *_localctx, size_t predicateIndex);
  bool queryExpressionBodySempred(QueryExpressionBodyContext *_localctx, size_t predicateIndex);
  bool querySpecificationSempred(QuerySpecificationContext *_localctx, size_t predicateIndex);
  bool olapOptionSempred(OlapOptionContext *_localctx, size_t predicateIndex);
  bool selectOptionSempred(SelectOptionContext *_localctx, size_t predicateIndex);
  bool lockingClauseSempred(LockingClauseContext *_localctx, size_t predicateIndex);
  bool lockStrenghSempred(LockStrenghContext *_localctx, size_t predicateIndex);
  bool tableFactorSempred(TableFactorContext *_localctx, size_t predicateIndex);
  bool derivedTableSempred(DerivedTableContext *_localctx, size_t predicateIndex);
  bool jtColumnSempred(JtColumnContext *_localctx, size_t predicateIndex);
  bool updateStatementSempred(UpdateStatementContext *_localctx, size_t predicateIndex);
  bool transactionCharacteristicSempred(TransactionCharacteristicContext *_localctx, size_t predicateIndex);
  bool setTransactionCharacteristicSempred(SetTransactionCharacteristicContext *_localctx, size_t predicateIndex);
  bool lockStatementSempred(LockStatementContext *_localctx, size_t predicateIndex);
  bool xaConvertSempred(XaConvertContext *_localctx, size_t predicateIndex);
  bool replicationStatementSempred(ReplicationStatementContext *_localctx, size_t predicateIndex);
  bool resetOptionSempred(ResetOptionContext *_localctx, size_t predicateIndex);
  bool masterResetOptionsSempred(MasterResetOptionsContext *_localctx, size_t predicateIndex);
  bool changeReplicationSempred(ChangeReplicationContext *_localctx, size_t predicateIndex);
  bool slaveUntilOptionsSempred(SlaveUntilOptionsContext *_localctx, size_t predicateIndex);
  bool slaveConnectionOptionsSempred(SlaveConnectionOptionsContext *_localctx, size_t predicateIndex);
  bool cloneStatementSempred(CloneStatementContext *_localctx, size_t predicateIndex);
  bool accountManagementStatementSempred(AccountManagementStatementContext *_localctx, size_t predicateIndex);
  bool alterUserSempred(AlterUserContext *_localctx, size_t predicateIndex);
  bool alterUserTailSempred(AlterUserTailContext *_localctx, size_t predicateIndex);
  bool createUserSempred(CreateUserContext *_localctx, size_t predicateIndex);
  bool createUserTailSempred(CreateUserTailContext *_localctx, size_t predicateIndex);
  bool defaultRoleClauseSempred(DefaultRoleClauseContext *_localctx, size_t predicateIndex);
  bool accountLockPasswordExpireOptionsSempred(AccountLockPasswordExpireOptionsContext *_localctx, size_t predicateIndex);
  bool dropUserSempred(DropUserContext *_localctx, size_t predicateIndex);
  bool grantSempred(GrantContext *_localctx, size_t predicateIndex);
  bool grantTargetListSempred(GrantTargetListContext *_localctx, size_t predicateIndex);
  bool grantOptionsSempred(GrantOptionsContext *_localctx, size_t predicateIndex);
  bool versionedRequireClauseSempred(VersionedRequireClauseContext *_localctx, size_t predicateIndex);
  bool revokeSempred(RevokeContext *_localctx, size_t predicateIndex);
  bool onTypeToSempred(OnTypeToContext *_localctx, size_t predicateIndex);
  bool setPasswordSempred(SetPasswordContext *_localctx, size_t predicateIndex);
  bool roleOrPrivilegeSempred(RoleOrPrivilegeContext *_localctx, size_t predicateIndex);
  bool tableAdministrationStatementSempred(TableAdministrationStatementContext *_localctx, size_t predicateIndex);
  bool optionValueNoOptionTypeSempred(OptionValueNoOptionTypeContext *_localctx, size_t predicateIndex);
  bool setExprOrDefaultSempred(SetExprOrDefaultContext *_localctx, size_t predicateIndex);
  bool showStatementSempred(ShowStatementContext *_localctx, size_t predicateIndex);
  bool showCommandTypeSempred(ShowCommandTypeContext *_localctx, size_t predicateIndex);
  bool nonBlockingSempred(NonBlockingContext *_localctx, size_t predicateIndex);
  bool otherAdministrativeStatementSempred(OtherAdministrativeStatementContext *_localctx, size_t predicateIndex);
  bool flushOptionSempred(FlushOptionContext *_localctx, size_t predicateIndex);
  bool flushTablesOptionsSempred(FlushTablesOptionsContext *_localctx, size_t predicateIndex);
  bool adminPartitionSempred(AdminPartitionContext *_localctx, size_t predicateIndex);
  bool utilityStatementSempred(UtilityStatementContext *_localctx, size_t predicateIndex);
  bool explainCommandSempred(ExplainCommandContext *_localctx, size_t predicateIndex);
  bool explainableStatementSempred(ExplainableStatementContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool boolPriSempred(BoolPriContext *_localctx, size_t predicateIndex);
  bool bitExprSempred(BitExprContext *_localctx, size_t predicateIndex);
  bool simpleExprSempred(SimpleExprContext *_localctx, size_t predicateIndex);
  bool jsonOperatorSempred(JsonOperatorContext *_localctx, size_t predicateIndex);
  bool sumExprSempred(SumExprContext *_localctx, size_t predicateIndex);
  bool runtimeFunctionCallSempred(RuntimeFunctionCallContext *_localctx, size_t predicateIndex);
  bool geometryFunctionSempred(GeometryFunctionContext *_localctx, size_t predicateIndex);
  bool fractionalPrecisionSempred(FractionalPrecisionContext *_localctx, size_t predicateIndex);
  bool castTypeSempred(CastTypeContext *_localctx, size_t predicateIndex);
  bool channelSempred(ChannelContext *_localctx, size_t predicateIndex);
  bool getDiagnosticsSempred(GetDiagnosticsContext *_localctx, size_t predicateIndex);
  bool fieldDefinitionSempred(FieldDefinitionContext *_localctx, size_t predicateIndex);
  bool columnAttributeSempred(ColumnAttributeContext *_localctx, size_t predicateIndex);
  bool keyListVariantsSempred(KeyListVariantsContext *_localctx, size_t predicateIndex);
  bool commonIndexOptionSempred(CommonIndexOptionContext *_localctx, size_t predicateIndex);
  bool dataTypeSempred(DataTypeContext *_localctx, size_t predicateIndex);
  bool typeDatetimePrecisionSempred(TypeDatetimePrecisionContext *_localctx, size_t predicateIndex);
  bool charsetNameSempred(CharsetNameContext *_localctx, size_t predicateIndex);
  bool collationNameSempred(CollationNameContext *_localctx, size_t predicateIndex);
  bool createTableOptionSempred(CreateTableOptionContext *_localctx, size_t predicateIndex);
  bool partitionKeyAlgorithmSempred(PartitionKeyAlgorithmContext *_localctx, size_t predicateIndex);
  bool createUserEntrySempred(CreateUserEntryContext *_localctx, size_t predicateIndex);
  bool onlineOptionSempred(OnlineOptionContext *_localctx, size_t predicateIndex);
  bool usePartitionSempred(UsePartitionContext *_localctx, size_t predicateIndex);
  bool columnNameSempred(ColumnNameContext *_localctx, size_t predicateIndex);
  bool pureIdentifierSempred(PureIdentifierContext *_localctx, size_t predicateIndex);
  bool simpleIdentifierSempred(SimpleIdentifierContext *_localctx, size_t predicateIndex);
  bool textStringLiteralSempred(TextStringLiteralContext *_localctx, size_t predicateIndex);
  bool identifierKeywordSempred(IdentifierKeywordContext *_localctx, size_t predicateIndex);
  bool roleOrIdentifierKeywordSempred(RoleOrIdentifierKeywordContext *_localctx, size_t predicateIndex);
  bool roleOrLabelKeywordSempred(RoleOrLabelKeywordContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace parsers
