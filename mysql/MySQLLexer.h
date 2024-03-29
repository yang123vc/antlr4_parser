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


// Generated from MySQLLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


#include "MySQLBaseLexer.h"


namespace parsers {


class PARSERS_PUBLIC_TYPE MySQLLexer : public MySQLBaseLexer {
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

  MySQLLexer(antlr4::CharStream *input);
  ~MySQLLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void LOGICAL_OR_OPERATORAction(antlr4::RuleContext *context, size_t actionIndex);
  void INT_NUMBERAction(antlr4::RuleContext *context, size_t actionIndex);
  void DOT_IDENTIFIERAction(antlr4::RuleContext *context, size_t actionIndex);
  void ADDDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_AND_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_OR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void BIT_XOR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CAST_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void COUNT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURRENT_DATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURRENT_TIME_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void CURTIME_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void DATE_ADD_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void DATE_SUB_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void EXTRACT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void GROUP_CONCAT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MAX_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MID_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void MIN_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void NOT_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void NOW_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void POSITION_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SESSION_USER_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_SAMP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STDDEV_POP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void STD_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBSTR_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUBSTRING_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SUM_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SYSDATE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void SYSTEM_USER_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void TRIM_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VARIANCE_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VAR_POP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void VAR_SAMP_SYMBOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void UNDERSCORE_CHARSETAction(antlr4::RuleContext *context, size_t actionIndex);
  void MYSQL_COMMENT_STARTAction(antlr4::RuleContext *context, size_t actionIndex);
  void VERSION_COMMENT_ENDAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool JSON_SEPARATOR_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_UNQUOTED_SEPARATOR_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ACCOUNT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ALWAYS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ANALYSE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool AUTHORS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CHANNEL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool COLUMN_FORMAT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool COMPRESSION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CONTRIBUTORS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CURRENT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEFAULT_AUTH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DES_KEY_FILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIAGNOSTICS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ENCRYPTION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXCHANGE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXPIRE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXPORT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FILE_BLOCK_SIZE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FILTER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FOLLOWS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FORMAT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GET_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GENERATED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GROUP_REPLICATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INSTANCE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IO_AFTER_GTIDS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IO_BEFORE_GTIDS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_AUTO_POSITION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_BIND_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_DELAY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_RETRY_COUNT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CRL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_SSL_CRLPATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_TLS_VERSION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MAX_STATEMENT_TIME_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NEVER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NONBLOCKING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NUMBER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OLD_PASSWORD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ONE_SHOT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ONLY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OPTIMIZER_COSTS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PLUGIN_DIR_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PRECEDES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REDOFILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_DO_DB_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_IGNORE_DB_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_DO_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_IGNORE_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_WILD_DO_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_WILD_IGNORE_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REPLICATE_REWRITE_DB_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RETURNED_SQLSTATE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REVERSE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ROTATE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SQL_AFTER_GTIDS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SQL_AFTER_MTS_GAPS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SQL_BEFORE_GTIDS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SQL_CACHE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STACKED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STATS_AUTO_RECALC_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STATS_PERSISTENT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STATS_SAMPLE_PAGES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool STORED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TABLE_REF_PRIORITY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VALIDATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VIRTUAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool WEIGHT_STRING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool WITH_CUBE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool XID_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PERSIST_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ROLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ADMIN_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INVISIBLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VISIBLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXCEPT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool COMPONENT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RECURSIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_OBJECTAGG_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_ARRAYAGG_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OF_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SKIP_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LOCKED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NOWAIT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GROUPING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PERSIST_ONLY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool HISTOGRAM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BUCKETS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REMOTE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CLONE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CUME_DIST_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DENSE_RANK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXCLUDE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FIRST_VALUE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FOLLOWING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GROUPS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LAG_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LAST_VALUE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LEAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NTH_VALUE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NTILE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NULLS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OTHERS_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OVER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PERCENT_RANK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PRECEDING_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RANK_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESPECT_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ROW_NUMBER_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TIES_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool UNBOUNDED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool WINDOW_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EMPTY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool JSON_TABLE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NESTED_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ORDINALITY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool HISTORY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REUSE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SRID_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool THREAD_PRIORITY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESOURCE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SYSTEM_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VCPU_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MASTER_PUBLIC_KEY_PATH_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GET_MASTER_PUBLIC_KEY_SYMSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESTART_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEFINITION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DESCRIPTION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ORGANIZATION_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REFERENCE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OPTIONAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_ENGINE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_LOAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SECONDARY_UNLOAD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ACTIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool INACTIVE_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LATERAL_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RETAIN_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OLD_SYMBOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BACK_TICK_QUOTED_IDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DOUBLE_QUOTED_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SINGLE_QUOTED_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERSION_COMMENT_STARTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERSION_COMMENT_ENDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace parsers
