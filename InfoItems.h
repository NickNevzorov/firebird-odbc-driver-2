/*
 *
 *     The contents of this file are subject to the Initial
 *     Developer's Public License Version 1.0 (the "License");
 *     you may not use this file except in compliance with the
 *     License. You may obtain a copy of the License at
 *     http://www.ibphoenix.com/main.nfs?a=ibphoenix&page=ibp_idpl.
 *
 *     Software distributed under the License is distributed on
 *     an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either
 *     express or implied.  See the License for the specific
 *     language governing rights and limitations under the License.
 *
 *
 *  The Original Code was created by James A. Starkey for IBPhoenix.
 *
 *  Copyright (c) 1999, 2000, 2001 James A. Starkey
 *  All Rights Reserved.
 *
 *	2002-10-10	InfoItems.h
 *				Contributed by C. G. Alvarez
 *              Extensive changes to the return types
 *
 */

/***
#define CITEM(item,value)	item, #item, infoString, value,
#define SITEM(item,value)	item, #item, infoShort, (char*) value,
#define NITEM(item,value)	item, #item, infoLong, (char*) value,
#define UITEM(item,value)	item, #item, infoUnsupported, (char*) value,
***/
NITEM (SQL_GETDATA_EXTENSIONS, (SQL_GD_ANY_COLUMN | SQL_GD_ANY_ORDER | SQL_GD_BLOCK | SQL_GD_BOUND))
NITEM (SQL_ASYNC_MODE, SQL_AM_STATEMENT)
NITEM (SQL_INFO_SCHEMA_VIEWS, 0)
NITEM (SQL_BATCH_ROW_COUNT, 0)
NITEM (SQL_BATCH_SUPPORT, 0)
CITEM (SQL_DATA_SOURCE_NAME, "")
NITEM (SQL_MAX_ASYNC_CONCURRENT_STATEMENTS, 0)
NITEM (SQL_DRIVER_HDBC, 0)
SITEM (SQL_MAX_CONCURRENT_ACTIVITIES, 0) // no limit

NITEM (SQL_DRIVER_HDESC, 0)
SITEM (SQL_MAX_DRIVER_CONNECTIONS, 0)
NITEM (SQL_DRIVER_HENV, 0)
NITEM (SQL_ODBC_INTERFACE_CONFORMANCE, SQL_OIC_LEVEL1)
UITEM (SQL_DRIVER_HLIB, 0)	// DRIVER MANAGER
NITEM(SQL_STANDARD_CLI_CONFORMANCE, (SQL_SCC_XOPEN_CLI_VERSION1 | SQL_SCC_ISO92_CLI))

NITEM (SQL_DRIVER_HSTMT, 0)
CITEM (SQL_ODBC_VER, ODBC_VERSION_NUMBER)

CITEM (SQL_DRIVER_NAME, DRIVER_NAME)

CITEM (SQL_DRIVER_ODBC_VER, ODBC_DRIVER_VERSION)

NITEM (SQL_PARAM_ARRAY_ROW_COUNTS, SQL_PARC_BATCH)
NITEM (SQL_PARAM_ARRAY_SELECTS, SQL_PAS_BATCH)

CITEM (SQL_DRIVER_VER, DRIVER_VERSION)
CITEM (SQL_ROW_UPDATES, "Y")

NITEM (SQL_DYNAMIC_CURSOR_ATTRIBUTES1, SQL_CA1_NEXT)
NITEM (SQL_DYNAMIC_CURSOR_ATTRIBUTES2, SQL_CA2_READ_ONLY_CONCURRENCY)

NITEM (SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES1, (SQL_CA1_NEXT |
										SQL_CA1_ABSOLUTE |
										SQL_CA1_RELATIVE |
										SQL_CA1_LOCK_NO_CHANGE |
										SQL_CA1_POS_POSITION |
										SQL_CA1_POSITIONED_DELETE |
										SQL_CA1_POSITIONED_UPDATE |
										SQL_CA1_SELECT_FOR_UPDATE
										))
NITEM (SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES2, (SQL_CA2_READ_ONLY_CONCURRENCY |
										SQL_CA2_OPT_VALUES_CONCURRENCY |
										SQL_CA2_SENSITIVITY_UPDATES |
										SQL_CA2_MAX_ROWS_SELECT |
										SQL_CA2_MAX_ROWS_CATALOG |
										SQL_CA2_MAX_ROWS_AFFECTS_ALL
										))

NITEM (SQL_STATIC_CURSOR_ATTRIBUTES1, (SQL_CA1_NEXT |
										SQL_CA1_ABSOLUTE |
										SQL_CA1_BOOKMARK |
										SQL_CA1_RELATIVE |
										SQL_CA1_LOCK_NO_CHANGE |
										SQL_CA1_POS_POSITION |
										SQL_CA1_POSITIONED_DELETE |
										SQL_CA1_POSITIONED_UPDATE |
										SQL_CA1_SELECT_FOR_UPDATE
										))
NITEM (SQL_STATIC_CURSOR_ATTRIBUTES2, (SQL_CA2_READ_ONLY_CONCURRENCY |
										SQL_CA2_OPT_VALUES_CONCURRENCY |
										SQL_CA2_SENSITIVITY_UPDATES |
										SQL_CA2_MAX_ROWS_SELECT |
										SQL_CA2_MAX_ROWS_CATALOG |
										SQL_CA2_MAX_ROWS_AFFECTS_ALL
										))
NITEM (SQL_KEYSET_CURSOR_ATTRIBUTES1, (SQL_CA1_NEXT |
										SQL_CA1_BOOKMARK |
										SQL_CA1_LOCK_NO_CHANGE
										))
NITEM (SQL_KEYSET_CURSOR_ATTRIBUTES2, (SQL_CA2_READ_ONLY_CONCURRENCY |
										SQL_CA2_OPT_VALUES_CONCURRENCY |
										SQL_CA2_SENSITIVITY_ADDITIONS |
										SQL_CA2_SENSITIVITY_UPDATES
										))
CITEM (SQL_SEARCH_PATTERN_ESCAPE, "")
CITEM (SQL_SERVER_NAME, "")
SITEM (SQL_FILE_USAGE, SQL_FILE_NOT_SUPPORTED)

CITEM (SQL_DATABASE_NAME, "")
CITEM (SQL_DBMS_VER, "")
CITEM (SQL_DBMS_NAME, "")

CITEM (SQL_ACCESSIBLE_PROCEDURES, "N")
CITEM (SQL_MULT_RESULT_SETS, "N")
CITEM (SQL_ACCESSIBLE_TABLES, "N")
CITEM (SQL_MULTIPLE_ACTIVE_TXN, "Y")
NITEM (SQL_BOOKMARK_PERSISTENCE, (SQL_BP_SCROLL | SQL_BP_UPDATE))
CITEM (SQL_NEED_LONG_DATA_LEN, "N")
CITEM (SQL_CATALOG_TERM, "")
CITEM (SQL_COLLATION_SEQ, "")
CITEM (SQL_PROCEDURE_TERM, "")
SITEM (SQL_CONCAT_NULL_BEHAVIOR, SQL_CB_NULL)

CITEM (SQL_SCHEMA_TERM, "")
SITEM (SQL_CURSOR_COMMIT_BEHAVIOR, 0)
NITEM (SQL_SCROLL_OPTIONS, (SQL_SO_STATIC | SQL_SO_FORWARD_ONLY) )
SITEM (SQL_ODBC_SAG_CLI_CONFORMANCE, SQL_OSCC_COMPLIANT)

SITEM (SQL_CURSOR_ROLLBACK_BEHAVIOR, 0)
CITEM (SQL_TABLE_TERM, "table")
SITEM (SQL_TXN_CAPABLE, SQL_TC_ALL)
CITEM (SQL_DATA_SOURCE_READ_ONLY, "N")
NITEM (SQL_TXN_ISOLATION_OPTION, 0)
NITEM (SQL_DEFAULT_TXN_ISOLATION, 0)
CITEM (SQL_USER_NAME, "")
CITEM (SQL_DESCRIBE_PARAMETER, "N")

NITEM (SQL_CURSOR_SENSITIVITY, SQL_INSENSITIVE)

NITEM (SQL_AGGREGATE_FUNCTIONS, SQL_AF_ALL)
NITEM (SQL_DROP_TABLE, SQL_DT_DROP_TABLE)
NITEM (SQL_ALTER_DOMAIN, (SQL_AD_ADD_DOMAIN_CONSTRAINT |
						  SQL_AD_ADD_DOMAIN_DEFAULT |
						  SQL_AD_DROP_DOMAIN_CONSTRAINT |
						  SQL_AD_DROP_DOMAIN_DEFAULT |
						  SQL_AD_CONSTRAINT_NAME_DEFINITION	))
NITEM (SQL_DROP_TRANSLATION, 0)
//UITEM (SQL_ALTER_SCHEMA, 0)
NITEM (SQL_DROP_VIEW, SQL_DV_DROP_VIEW)
NITEM (SQL_ALTER_TABLE, (SQL_AT_ADD_COLUMN | 
						 SQL_AT_DROP_COLUMN |
						 SQL_AT_DROP_COLUMN_RESTRICT |
						 SQL_AT_ADD_COLUMN_COLLATION |
						 SQL_AT_ADD_COLUMN_DEFAULT |
						 SQL_AT_ADD_COLUMN_SINGLE |
						 SQL_AT_ADD_CONSTRAINT |
						 SQL_AT_CONSTRAINT_NAME_DEFINITION |
						 SQL_AT_ADD_TABLE_CONSTRAINT |
						 SQL_AT_SET_COLUMN_DEFAULT))
CITEM (SQL_EXPRESSIONS_IN_ORDERBY, "")
NITEM (SQL_DATETIME_LITERALS, (SQL_DL_SQL92_DATE | SQL_DL_SQL92_TIME | SQL_DL_SQL92_TIMESTAMP))
SITEM (SQL_GROUP_BY, 0)
SITEM (SQL_CATALOG_LOCATION, SQL_CL_START)
SITEM (SQL_IDENTIFIER_CASE, SQL_IC_UPPER)
CITEM (SQL_CATALOG_NAME, "N")
CITEM (SQL_IDENTIFIER_QUOTE_CHAR, "\"")
CITEM (SQL_CATALOG_NAME_SEPARATOR, "")
NITEM (SQL_INDEX_KEYWORDS, ( SQL_IK_ASC | SQL_IK_DESC ) )
NITEM (SQL_CATALOG_USAGE, 0)
NITEM (SQL_INSERT_STATEMENT, ( SQL_IS_INSERT_LITERALS | SQL_IS_INSERT_SEARCHED | SQL_IS_SELECT_INTO) )
CITEM (SQL_COLUMN_ALIAS, "Y")
CITEM (SQL_INTEGRITY,"Y")
SITEM (SQL_CORRELATION_NAME, 0)
CITEM (SQL_KEYWORDS, "")
NITEM (SQL_CREATE_ASSERTION, 0)
CITEM (SQL_LIKE_ESCAPE_CLAUSE, "")
NITEM (SQL_CREATE_CHARACTER_SET, 0)
SITEM (SQL_NON_NULLABLE_COLUMNS, 0)
SITEM (SQL_NULL_COLLATION, 0)

NITEM (SQL_CREATE_COLLATION, 0)
NITEM (SQL_SQL_CONFORMANCE, 0)
NITEM (SQL_CREATE_DOMAIN, (SQL_CDO_CREATE_DOMAIN | SQL_CDO_DEFAULT | SQL_CDO_CONSTRAINT | SQL_CDO_COLLATION))
NITEM (SQL_OJ_CAPABILITIES, (SQL_OJ_LEFT |
							SQL_OJ_RIGHT |
							SQL_OJ_FULL |
							SQL_OJ_NESTED |
							SQL_OJ_NOT_ORDERED |
							SQL_OJ_INNER |
							SQL_OJ_ALL_COMPARISON_OPS
							))
NITEM (SQL_CREATE_SCHEMA, 0)
CITEM (SQL_ORDER_BY_COLUMNS_IN_SELECT, "")
NITEM (SQL_CREATE_TABLE, (SQL_CT_CREATE_TABLE | SQL_CT_COLUMN_CONSTRAINT | SQL_CT_COLUMN_DEFAULT |
							SQL_CT_COLUMN_COLLATION | SQL_CT_TABLE_CONSTRAINT |
							SQL_CT_CONSTRAINT_NAME_DEFINITION
							))
CITEM (SQL_OUTER_JOINS, "F")
NITEM (SQL_CREATE_VIEW, (SQL_CV_CREATE_VIEW | SQL_CV_CHECK_OPTION))
NITEM (SQL_DDL_INDEX, (SQL_DI_CREATE_INDEX | SQL_DI_DROP_INDEX))
NITEM (SQL_CREATE_TRANSLATION, 0)
CITEM (SQL_PROCEDURES, "")
SITEM (SQL_QUOTED_IDENTIFIER_CASE, 0)
NITEM (SQL_DROP_ASSERTION, 0)
NITEM (SQL_SCHEMA_USAGE, 0)
NITEM (SQL_DROP_CHARACTER_SET, 0)
CITEM (SQL_SPECIAL_CHARACTERS, "")
NITEM (SQL_DROP_COLLATION, 0)
NITEM (SQL_SUBQUERIES, 0)
NITEM (SQL_DROP_DOMAIN, SQL_DD_DROP_DOMAIN)
NITEM (SQL_UNION, 0)
NITEM (SQL_DROP_SCHEMA, 0)

NITEM (SQL_MAX_BINARY_LITERAL_LEN, 0)
NITEM (SQL_MAX_CHAR_LITERAL_LEN, 0)
SITEM (SQL_MAX_IDENTIFIER_LEN, 31)
SITEM (SQL_MAX_CATALOG_NAME_LEN, 0)
NITEM (SQL_MAX_INDEX_SIZE, 0)
SITEM (SQL_MAX_PROCEDURE_NAME_LEN, 0)
SITEM (SQL_MAX_COLUMN_NAME_LEN, 0)
NITEM (SQL_MAX_ROW_SIZE, 0)
CITEM (SQL_MAX_ROW_SIZE_INCLUDES_LONG, "")
SITEM (SQL_MAX_SCHEMA_NAME_LEN, 0)
NITEM (SQL_MAX_STATEMENT_LEN, 0)
SITEM (SQL_MAX_TABLE_NAME_LEN, 0)
SITEM (SQL_MAX_COLUMNS_IN_GROUP_BY, 0)
SITEM (SQL_MAX_COLUMNS_IN_ORDER_BY, 0)
SITEM (SQL_MAX_COLUMNS_IN_INDEX, 0)
SITEM (SQL_MAX_COLUMNS_IN_SELECT, 0)
SITEM (SQL_MAX_COLUMNS_IN_TABLE, 0)
SITEM (SQL_MAX_TABLES_IN_SELECT, 0)
SITEM (SQL_MAX_CURSOR_NAME_LEN, 0)
SITEM (SQL_MAX_USER_NAME_LEN, 0)

NITEM (SQL_TIMEDATE_ADD_INTERVALS, 0)
NITEM (SQL_TIMEDATE_DIFF_INTERVALS, 0)
NITEM (SQL_NUMERIC_FUNCTIONS, (SQL_FN_NUM_ABS | SQL_FN_NUM_ACOS | SQL_FN_NUM_ASIN | SQL_FN_NUM_ATAN |
								SQL_FN_NUM_ATAN2 | SQL_FN_NUM_CEILING | SQL_FN_NUM_COS | SQL_FN_NUM_COT |
								SQL_FN_NUM_FLOOR | SQL_FN_NUM_LOG | SQL_FN_NUM_MOD | SQL_FN_NUM_SIGN |
								SQL_FN_NUM_SIN | SQL_FN_NUM_SQRT | SQL_FN_NUM_TAN | SQL_FN_NUM_PI |
								SQL_FN_NUM_RAND | SQL_FN_NUM_LOG10
								))
NITEM (SQL_CONVERT_FUNCTIONS, (SQL_FN_CVT_CAST | SQL_FN_CVT_CONVERT) )

NITEM (SQL_STRING_FUNCTIONS, (SQL_FN_STR_CONCAT | SQL_FN_STR_LTRIM | SQL_FN_STR_LENGTH | SQL_FN_STR_LCASE |
								SQL_FN_STR_RTRIM | SQL_FN_STR_SUBSTRING | SQL_FN_STR_UCASE | SQL_FN_STR_ASCII |
								SQL_FN_STR_CHAR
								))
NITEM (SQL_TIMEDATE_FUNCTIONS, (SQL_FN_TD_NOW | SQL_FN_TD_CURDATE | SQL_FN_TD_DAYOFMONTH | SQL_FN_TD_DAYOFWEEK |
								SQL_FN_TD_DAYOFYEAR | SQL_FN_TD_MONTH | SQL_FN_TD_YEAR | SQL_FN_TD_CURTIME |
								SQL_FN_TD_HOUR | SQL_FN_TD_MINUTE | SQL_FN_TD_SECOND | SQL_FN_TD_CURRENT_DATE |
								SQL_FN_TD_CURRENT_TIME | SQL_FN_TD_CURRENT_TIMESTAMP | SQL_FN_TD_EXTRACT
								))
NITEM (SQL_SYSTEM_FUNCTIONS, (SQL_FN_SYS_USERNAME | SQL_FN_SYS_DBNAME))

NITEM (SQL_CONVERT_BIGINT, (	SQL_CVT_SMALLINT |
								SQL_CVT_INTEGER |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_NUMERIC |
								SQL_CVT_DECIMAL
								))
NITEM (SQL_CONVERT_LONGVARBINARY, (	SQL_CVT_INTEGER |
									SQL_CVT_TINYINT |
									SQL_CVT_SMALLINT |
									SQL_CVT_FLOAT |
									SQL_CVT_DOUBLE |
									SQL_CVT_BIT |
									SQL_CVT_CHAR |
									SQL_CVT_BIGINT |
									SQL_CVT_DECIMAL |
									SQL_CVT_NUMERIC
									))
NITEM (SQL_CONVERT_BINARY, ( SQL_CVT_INTEGER |
							 SQL_CVT_TINYINT |
							 SQL_CVT_SMALLINT |
							 SQL_CVT_FLOAT |
							 SQL_CVT_DOUBLE |
							 SQL_CVT_BIT |
							 SQL_CVT_CHAR |
							 SQL_CVT_BIGINT |
							 SQL_CVT_DECIMAL |
							 SQL_CVT_NUMERIC
							 ))
NITEM (SQL_CONVERT_LONGVARCHAR, ( SQL_CVT_INTEGER |
								  SQL_CVT_TINYINT |
								  SQL_CVT_SMALLINT |
								  SQL_CVT_FLOAT |
								  SQL_CVT_DOUBLE |
								  SQL_CVT_BIT |
								  SQL_CVT_CHAR |
								  SQL_CVT_BIGINT |
								  SQL_CVT_DECIMAL |
								  SQL_CVT_NUMERIC
								  ))
NITEM (SQL_CONVERT_BIT, 0)
NITEM (SQL_CONVERT_NUMERIC, (	SQL_CVT_INTEGER |
								SQL_CVT_TINYINT |
								SQL_CVT_SMALLINT |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_BIGINT |
								SQL_CVT_DECIMAL |
								SQL_CVT_NUMERIC
							))
NITEM (SQL_CONVERT_CHAR, (	SQL_CVT_INTEGER |
							SQL_CVT_TINYINT |
							SQL_CVT_SMALLINT |
							SQL_CVT_REAL |
							SQL_CVT_FLOAT |
							SQL_CVT_DOUBLE |
							SQL_CVT_BIGINT |
							SQL_CVT_NUMERIC |
							SQL_CVT_DECIMAL |
							SQL_CVT_DATE |
							SQL_CVT_TIMESTAMP |
							SQL_CVT_BIT |
							SQL_CVT_CHAR |
							SQL_CVT_VARCHAR |
							SQL_CVT_VARBINARY
							))
NITEM (SQL_CONVERT_REAL, (	SQL_CVT_INTEGER |
							SQL_CVT_TINYINT |
							SQL_CVT_SMALLINT |
							SQL_CVT_REAL |
							SQL_CVT_FLOAT |
							SQL_CVT_DOUBLE |
							SQL_CVT_BIGINT |
							SQL_CVT_BIT |
							SQL_CVT_CHAR |
							SQL_CVT_NUMERIC |
							SQL_CVT_DECIMAL
							))
NITEM (SQL_CONVERT_DATE, (	SQL_CVT_INTEGER |
							SQL_CVT_REAL |
							SQL_CVT_FLOAT |
							SQL_CVT_DOUBLE |
							SQL_CVT_BIGINT |
							SQL_CVT_NUMERIC |
							SQL_CVT_DECIMAL |
							SQL_CVT_DATE |
							SQL_CVT_TIMESTAMP |
							SQL_CVT_CHAR |
							SQL_CVT_BINARY
							))
NITEM (SQL_CONVERT_SMALLINT, (	SQL_CVT_TINYINT |
								SQL_CVT_SMALLINT |
								SQL_CVT_INTEGER |
								SQL_CVT_REAL |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIGINT |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_NUMERIC |
								SQL_CVT_DECIMAL
								))
NITEM (SQL_CONVERT_DECIMAL, (	SQL_CVT_INTEGER |
								SQL_CVT_TINYINT |
								SQL_CVT_SMALLINT |
								SQL_CVT_REAL |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_BIGINT |
								SQL_CVT_DECIMAL |
								SQL_CVT_NUMERIC
								))
NITEM (SQL_CONVERT_TIME, (	SQL_CVT_INTEGER |
							SQL_CVT_REAL |
							SQL_CVT_FLOAT |
							SQL_CVT_DOUBLE |
							SQL_CVT_BIGINT |
							SQL_CVT_NUMERIC |
							SQL_CVT_DECIMAL |
							SQL_CVT_TIME |
							SQL_CVT_TIMESTAMP |
							SQL_CVT_CHAR |
							SQL_CVT_BINARY
							))
NITEM (SQL_CONVERT_DOUBLE,(	SQL_CVT_INTEGER |
							SQL_CVT_TINYINT |
							SQL_CVT_SMALLINT |
							SQL_CVT_REAL |
							SQL_CVT_FLOAT |
							SQL_CVT_DOUBLE |
							SQL_CVT_BIGINT |
							SQL_CVT_BIT |
							SQL_CVT_CHAR |
							SQL_CVT_NUMERIC |
							SQL_CVT_DECIMAL
							))
NITEM (SQL_CONVERT_TIMESTAMP, (	SQL_CVT_DOUBLE |
								SQL_CVT_BIGINT |
								SQL_CVT_NUMERIC |
								SQL_CVT_DECIMAL |
								SQL_CVT_DATE |
								SQL_CVT_TIME |
								SQL_CVT_TIMESTAMP |
								SQL_CVT_CHAR |
								SQL_CVT_BINARY
								))
NITEM (SQL_CONVERT_FLOAT, (	SQL_CVT_INTEGER |
							SQL_CVT_TINYINT |
							SQL_CVT_SMALLINT |
							SQL_CVT_REAL |
							SQL_CVT_FLOAT |
							SQL_CVT_DOUBLE |
							SQL_CVT_BIGINT |
							SQL_CVT_BIT |
							SQL_CVT_CHAR |
							SQL_CVT_NUMERIC |
							SQL_CVT_DECIMAL
							))
NITEM (SQL_CONVERT_TINYINT, (	SQL_CVT_TINYINT |
								SQL_CVT_SMALLINT |
								SQL_CVT_INTEGER |
								SQL_CVT_REAL |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIGINT |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_NUMERIC |
								SQL_CVT_DECIMAL
								))
NITEM (SQL_CONVERT_INTEGER, (	SQL_CVT_INTEGER |
								SQL_CVT_TINYINT |
								SQL_CVT_SMALLINT |
								SQL_CVT_REAL |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIGINT |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_NUMERIC |
								SQL_CVT_DECIMAL
								))
NITEM (SQL_CONVERT_VARBINARY, (	SQL_CVT_INTEGER |
								SQL_CVT_TINYINT |
								SQL_CVT_SMALLINT |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_BIGINT |
								SQL_CVT_DECIMAL |
								SQL_CVT_NUMERIC
								))
NITEM (SQL_CONVERT_INTERVAL_YEAR_MONTH, 0)
NITEM (SQL_CONVERT_VARCHAR, (	SQL_CVT_INTEGER |
								SQL_CVT_TINYINT |
								SQL_CVT_SMALLINT |
								SQL_CVT_REAL |
								SQL_CVT_FLOAT |
								SQL_CVT_DOUBLE |
								SQL_CVT_BIGINT |
								SQL_CVT_NUMERIC |
								SQL_CVT_DECIMAL |
								SQL_CVT_BIT |
								SQL_CVT_CHAR |
								SQL_CVT_VARCHAR |
								SQL_CVT_TIME |
								SQL_CVT_DATE |
								SQL_CVT_TIMESTAMP
								))
NITEM (SQL_CONVERT_INTERVAL_DAY_TIME, 0)
NITEM (SQL_CONVERT_WCHAR, 0)
NITEM (SQL_CONVERT_WLONGVARCHAR, 0)
NITEM (SQL_CONVERT_WVARCHAR,0)

SITEM (SQL_ACTIVE_ENVIRONMENTS, 0)
UITEM (SQL_DM_VER, 0)
CITEM (SQL_XOPEN_CLI_YEAR, "2003")

NITEM (SQL_FETCH_DIRECTION,(SQL_FD_FETCH_NEXT |
							SQL_FD_FETCH_FIRST |
							SQL_FD_FETCH_LAST |
							SQL_FD_FETCH_PRIOR |
							SQL_FD_FETCH_ABSOLUTE |
							SQL_FD_FETCH_RELATIVE |
							SQL_FD_FETCH_BOOKMARK ))

NITEM (SQL_POS_OPERATIONS, SQL_POS_POSITION)
//NITEM (SQL_POS_OPERATIONS, (SQL_POS_ADD | SQL_POS_UPDATE | SQL_POS_DELETE))
NITEM (SQL_LOCK_TYPES, 0)
NITEM (SQL_POSITIONED_STATEMENTS, (SQL_PS_POSITIONED_DELETE |
								SQL_PS_POSITIONED_UPDATE |
								SQL_PS_SELECT_FOR_UPDATE
								))
SITEM (SQL_ODBC_API_CONFORMANCE, SQL_OAC_LEVEL1)
NITEM (SQL_SCROLL_CONCURRENCY, SQL_SCCO_READ_ONLY)
SITEM (SQL_ODBC_SQL_CONFORMANCE, 0)
NITEM (SQL_STATIC_SENSITIVITY, SQL_SS_UPDATES)

CITEM (SQL_ODBC_SQL_OPT_IEF, "Y")

NITEM (SQL_SQL92_PREDICATES, (SQL_SP_BETWEEN |
							SQL_SP_EXISTS |
							SQL_SP_IN |
							SQL_SP_ISNOTNULL |
							SQL_SP_ISNULL |
							SQL_SP_LIKE |
							SQL_SP_COMPARISON |
							SQL_SP_QUANTIFIED_COMPARISON |
							SQL_SP_OVERLAPS |
							SQL_SP_MATCH_FULL |
							SQL_SP_MATCH_PARTIAL |
							SQL_SP_MATCH_UNIQUE_FULL |
							SQL_SP_MATCH_UNIQUE_PARTIAL |
							SQL_SP_ISNULL
						 ))
NITEM (SQL_SQL92_REVOKE, (SQL_SR_GRANT_OPTION_FOR |
						SQL_SR_DELETE_TABLE |
						SQL_SR_INSERT_TABLE |
						SQL_SR_REFERENCES_TABLE |
						SQL_SR_REFERENCES_COLUMN |
						SQL_SR_SELECT_TABLE |
						SQL_SR_UPDATE_TABLE |
						SQL_SR_UPDATE_COLUMN
						))
NITEM (SQL_SQL92_GRANT, (SQL_SG_DELETE_TABLE |
				         SQL_SG_INSERT_TABLE |
				         SQL_SG_REFERENCES_COLUMN |
				         SQL_SG_REFERENCES_TABLE |
				         SQL_SG_SELECT_TABLE |
				         SQL_SG_UPDATE_COLUMN |
				         SQL_SG_UPDATE_TABLE |
				         SQL_SG_WITH_GRANT_OPTION |
						 SQL_SG_USAGE_ON_DOMAIN |
				         SQL_SG_USAGE_ON_CHARACTER_SET |
				         SQL_SG_USAGE_ON_COLLATION |
				         SQL_SG_USAGE_ON_TRANSLATION
						 ))
NITEM (SQL_SQL92_DATETIME_FUNCTIONS, (SQL_SDF_CURRENT_DATE | SQL_SDF_CURRENT_TIME | SQL_SDF_CURRENT_TIMESTAMP))
NITEM (SQL_SQL92_FOREIGN_KEY_DELETE_RULE, (SQL_SFKD_CASCADE |
											SQL_SFKD_NO_ACTION |
											SQL_SFKD_SET_DEFAULT |
											SQL_SFKD_SET_NULL
											))
NITEM (SQL_SQL92_FOREIGN_KEY_UPDATE_RULE, (SQL_SFKU_CASCADE |
											SQL_SFKU_NO_ACTION |
											SQL_SFKU_SET_DEFAULT |
											SQL_SFKU_SET_NULL
											 ))
NITEM (SQL_SQL92_NUMERIC_VALUE_FUNCTIONS, 0)
NITEM (SQL_SQL92_RELATIONAL_JOIN_OPERATORS, (SQL_SRJO_FULL_OUTER_JOIN |
											SQL_SRJO_INNER_JOIN |
											SQL_SRJO_LEFT_OUTER_JOIN |
											SQL_SRJO_RIGHT_OUTER_JOIN
											))
NITEM (SQL_SQL92_ROW_VALUE_CONSTRUCTOR, (SQL_SRVC_VALUE_EXPRESSION | SQL_SRVC_NULL | SQL_SRVC_ROW_SUBQUERY))
NITEM (SQL_SQL92_STRING_FUNCTIONS, (SQL_SSF_LOWER | SQL_SSF_UPPER | SQL_SSF_SUBSTRING |
									SQL_SSF_TRIM_LEADING | SQL_SSF_TRIM_TRAILING
									))
NITEM (SQL_SQL92_VALUE_EXPRESSIONS, (SQL_SVE_CAST |	SQL_SVE_CASE | SQL_SVE_COALESCE | SQL_SVE_NULLIF))

CITEM (SQL_FBGETPAGEDB, "")
CITEM (SQL_FBGETWALDB, "")
CITEM (SQL_FBGETSTATINFODB, "")