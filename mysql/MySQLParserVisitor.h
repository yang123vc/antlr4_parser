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
#include "MySQLParser.h"


namespace parsers {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MySQLParser.
 */
class PARSERS_PUBLIC_TYPE MySQLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MySQLParser.
   */
    virtual antlrcpp::Any visitQuery(MySQLParser::QueryContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStatement(MySQLParser::SimpleStatementContext *context) = 0;

    virtual antlrcpp::Any visitAlterStatement(MySQLParser::AlterStatementContext *context) = 0;

    virtual antlrcpp::Any visitAlterDatabase(MySQLParser::AlterDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitAlterEvent(MySQLParser::AlterEventContext *context) = 0;

    virtual antlrcpp::Any visitAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitAlterLogfileGroupOptions(MySQLParser::AlterLogfileGroupOptionsContext *context) = 0;

    virtual antlrcpp::Any visitAlterLogfileGroupOption(MySQLParser::AlterLogfileGroupOptionContext *context) = 0;

    virtual antlrcpp::Any visitAlterServer(MySQLParser::AlterServerContext *context) = 0;

    virtual antlrcpp::Any visitAlterTable(MySQLParser::AlterTableContext *context) = 0;

    virtual antlrcpp::Any visitAlterTableActions(MySQLParser::AlterTableActionsContext *context) = 0;

    virtual antlrcpp::Any visitAlterCommandList(MySQLParser::AlterCommandListContext *context) = 0;

    virtual antlrcpp::Any visitAlterCommandsModifierList(MySQLParser::AlterCommandsModifierListContext *context) = 0;

    virtual antlrcpp::Any visitStandaloneAlterCommands(MySQLParser::StandaloneAlterCommandsContext *context) = 0;

    virtual antlrcpp::Any visitAlterPartition(MySQLParser::AlterPartitionContext *context) = 0;

    virtual antlrcpp::Any visitAlterList(MySQLParser::AlterListContext *context) = 0;

    virtual antlrcpp::Any visitAlterCommandsModifier(MySQLParser::AlterCommandsModifierContext *context) = 0;

    virtual antlrcpp::Any visitAlterListItem(MySQLParser::AlterListItemContext *context) = 0;

    virtual antlrcpp::Any visitPlace(MySQLParser::PlaceContext *context) = 0;

    virtual antlrcpp::Any visitRestrict(MySQLParser::RestrictContext *context) = 0;

    virtual antlrcpp::Any visitAlterOrderList(MySQLParser::AlterOrderListContext *context) = 0;

    virtual antlrcpp::Any visitAlterAlgorithmOption(MySQLParser::AlterAlgorithmOptionContext *context) = 0;

    virtual antlrcpp::Any visitAlterLockOption(MySQLParser::AlterLockOptionContext *context) = 0;

    virtual antlrcpp::Any visitIndexLockAndAlgorithm(MySQLParser::IndexLockAndAlgorithmContext *context) = 0;

    virtual antlrcpp::Any visitWithValidation(MySQLParser::WithValidationContext *context) = 0;

    virtual antlrcpp::Any visitRemovePartitioning(MySQLParser::RemovePartitioningContext *context) = 0;

    virtual antlrcpp::Any visitAllOrPartitionNameList(MySQLParser::AllOrPartitionNameListContext *context) = 0;

    virtual antlrcpp::Any visitReorgPartitionRule(MySQLParser::ReorgPartitionRuleContext *context) = 0;

    virtual antlrcpp::Any visitAlterTablespace(MySQLParser::AlterTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitAlterUndoTablespace(MySQLParser::AlterUndoTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitUndoTableSpaceOptions(MySQLParser::UndoTableSpaceOptionsContext *context) = 0;

    virtual antlrcpp::Any visitUndoTableSpaceOption(MySQLParser::UndoTableSpaceOptionContext *context) = 0;

    virtual antlrcpp::Any visitAlterTablespaceOptions(MySQLParser::AlterTablespaceOptionsContext *context) = 0;

    virtual antlrcpp::Any visitAlterTablespaceOption(MySQLParser::AlterTablespaceOptionContext *context) = 0;

    virtual antlrcpp::Any visitChangeTablespaceOption(MySQLParser::ChangeTablespaceOptionContext *context) = 0;

    virtual antlrcpp::Any visitAlterView(MySQLParser::AlterViewContext *context) = 0;

    virtual antlrcpp::Any visitViewTail(MySQLParser::ViewTailContext *context) = 0;

    virtual antlrcpp::Any visitViewSelect(MySQLParser::ViewSelectContext *context) = 0;

    virtual antlrcpp::Any visitViewCheckOption(MySQLParser::ViewCheckOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateStatement(MySQLParser::CreateStatementContext *context) = 0;

    virtual antlrcpp::Any visitCreateDatabase(MySQLParser::CreateDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateTable(MySQLParser::CreateTableContext *context) = 0;

    virtual antlrcpp::Any visitTableElementList(MySQLParser::TableElementListContext *context) = 0;

    virtual antlrcpp::Any visitTableElement(MySQLParser::TableElementContext *context) = 0;

    virtual antlrcpp::Any visitDuplicateAsQueryExpression(MySQLParser::DuplicateAsQueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpressionOrParens(MySQLParser::QueryExpressionOrParensContext *context) = 0;

    virtual antlrcpp::Any visitCreateRoutine(MySQLParser::CreateRoutineContext *context) = 0;

    virtual antlrcpp::Any visitCreateProcedure(MySQLParser::CreateProcedureContext *context) = 0;

    virtual antlrcpp::Any visitCreateFunction(MySQLParser::CreateFunctionContext *context) = 0;

    virtual antlrcpp::Any visitCreateUdf(MySQLParser::CreateUdfContext *context) = 0;

    virtual antlrcpp::Any visitRoutineCreateOption(MySQLParser::RoutineCreateOptionContext *context) = 0;

    virtual antlrcpp::Any visitRoutineAlterOptions(MySQLParser::RoutineAlterOptionsContext *context) = 0;

    virtual antlrcpp::Any visitRoutineOption(MySQLParser::RoutineOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateIndex(MySQLParser::CreateIndexContext *context) = 0;

    virtual antlrcpp::Any visitIndexNameAndType(MySQLParser::IndexNameAndTypeContext *context) = 0;

    virtual antlrcpp::Any visitCreateIndexTarget(MySQLParser::CreateIndexTargetContext *context) = 0;

    virtual antlrcpp::Any visitCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitLogfileGroupOptions(MySQLParser::LogfileGroupOptionsContext *context) = 0;

    virtual antlrcpp::Any visitLogfileGroupOption(MySQLParser::LogfileGroupOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateServer(MySQLParser::CreateServerContext *context) = 0;

    virtual antlrcpp::Any visitServerOptions(MySQLParser::ServerOptionsContext *context) = 0;

    virtual antlrcpp::Any visitServerOption(MySQLParser::ServerOptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateTablespace(MySQLParser::CreateTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitCreateUndoTablespace(MySQLParser::CreateUndoTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitTsDataFileName(MySQLParser::TsDataFileNameContext *context) = 0;

    virtual antlrcpp::Any visitTsDataFile(MySQLParser::TsDataFileContext *context) = 0;

    virtual antlrcpp::Any visitTablespaceOptions(MySQLParser::TablespaceOptionsContext *context) = 0;

    virtual antlrcpp::Any visitTablespaceOption(MySQLParser::TablespaceOptionContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionInitialSize(MySQLParser::TsOptionInitialSizeContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionUndoRedoBufferSize(MySQLParser::TsOptionUndoRedoBufferSizeContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionAutoextendSize(MySQLParser::TsOptionAutoextendSizeContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionMaxSize(MySQLParser::TsOptionMaxSizeContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionExtentSize(MySQLParser::TsOptionExtentSizeContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionNodegroup(MySQLParser::TsOptionNodegroupContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionEngine(MySQLParser::TsOptionEngineContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionWait(MySQLParser::TsOptionWaitContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionComment(MySQLParser::TsOptionCommentContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionFileblockSize(MySQLParser::TsOptionFileblockSizeContext *context) = 0;

    virtual antlrcpp::Any visitTsOptionEncryption(MySQLParser::TsOptionEncryptionContext *context) = 0;

    virtual antlrcpp::Any visitCreateView(MySQLParser::CreateViewContext *context) = 0;

    virtual antlrcpp::Any visitViewReplaceOrAlgorithm(MySQLParser::ViewReplaceOrAlgorithmContext *context) = 0;

    virtual antlrcpp::Any visitViewAlgorithm(MySQLParser::ViewAlgorithmContext *context) = 0;

    virtual antlrcpp::Any visitViewSuid(MySQLParser::ViewSuidContext *context) = 0;

    virtual antlrcpp::Any visitCreateTrigger(MySQLParser::CreateTriggerContext *context) = 0;

    virtual antlrcpp::Any visitTriggerFollowsPrecedesClause(MySQLParser::TriggerFollowsPrecedesClauseContext *context) = 0;

    virtual antlrcpp::Any visitCreateEvent(MySQLParser::CreateEventContext *context) = 0;

    virtual antlrcpp::Any visitCreateRole(MySQLParser::CreateRoleContext *context) = 0;

    virtual antlrcpp::Any visitCreateSpatialReference(MySQLParser::CreateSpatialReferenceContext *context) = 0;

    virtual antlrcpp::Any visitSrsAttribute(MySQLParser::SrsAttributeContext *context) = 0;

    virtual antlrcpp::Any visitDropStatement(MySQLParser::DropStatementContext *context) = 0;

    virtual antlrcpp::Any visitDropDatabase(MySQLParser::DropDatabaseContext *context) = 0;

    virtual antlrcpp::Any visitDropEvent(MySQLParser::DropEventContext *context) = 0;

    virtual antlrcpp::Any visitDropFunction(MySQLParser::DropFunctionContext *context) = 0;

    virtual antlrcpp::Any visitDropProcedure(MySQLParser::DropProcedureContext *context) = 0;

    virtual antlrcpp::Any visitDropIndex(MySQLParser::DropIndexContext *context) = 0;

    virtual antlrcpp::Any visitDropLogfileGroup(MySQLParser::DropLogfileGroupContext *context) = 0;

    virtual antlrcpp::Any visitDropLogfileGroupOption(MySQLParser::DropLogfileGroupOptionContext *context) = 0;

    virtual antlrcpp::Any visitDropServer(MySQLParser::DropServerContext *context) = 0;

    virtual antlrcpp::Any visitDropTable(MySQLParser::DropTableContext *context) = 0;

    virtual antlrcpp::Any visitDropTableSpace(MySQLParser::DropTableSpaceContext *context) = 0;

    virtual antlrcpp::Any visitDropTrigger(MySQLParser::DropTriggerContext *context) = 0;

    virtual antlrcpp::Any visitDropView(MySQLParser::DropViewContext *context) = 0;

    virtual antlrcpp::Any visitDropRole(MySQLParser::DropRoleContext *context) = 0;

    virtual antlrcpp::Any visitDropSpatialReference(MySQLParser::DropSpatialReferenceContext *context) = 0;

    virtual antlrcpp::Any visitDropUndoTablespace(MySQLParser::DropUndoTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitRenameTableStatement(MySQLParser::RenameTableStatementContext *context) = 0;

    virtual antlrcpp::Any visitRenamePair(MySQLParser::RenamePairContext *context) = 0;

    virtual antlrcpp::Any visitTruncateTableStatement(MySQLParser::TruncateTableStatementContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(MySQLParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitCallStatement(MySQLParser::CallStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeleteStatement(MySQLParser::DeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDelete(MySQLParser::PartitionDeleteContext *context) = 0;

    virtual antlrcpp::Any visitDeleteStatementOption(MySQLParser::DeleteStatementOptionContext *context) = 0;

    virtual antlrcpp::Any visitDoStatement(MySQLParser::DoStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerStatement(MySQLParser::HandlerStatementContext *context) = 0;

    virtual antlrcpp::Any visitHandlerReadOrScan(MySQLParser::HandlerReadOrScanContext *context) = 0;

    virtual antlrcpp::Any visitInsertStatement(MySQLParser::InsertStatementContext *context) = 0;

    virtual antlrcpp::Any visitInsertLockOption(MySQLParser::InsertLockOptionContext *context) = 0;

    virtual antlrcpp::Any visitInsertFromConstructor(MySQLParser::InsertFromConstructorContext *context) = 0;

    virtual antlrcpp::Any visitFields(MySQLParser::FieldsContext *context) = 0;

    virtual antlrcpp::Any visitInsertValues(MySQLParser::InsertValuesContext *context) = 0;

    virtual antlrcpp::Any visitInsertQueryExpression(MySQLParser::InsertQueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitValueList(MySQLParser::ValueListContext *context) = 0;

    virtual antlrcpp::Any visitValues(MySQLParser::ValuesContext *context) = 0;

    virtual antlrcpp::Any visitInsertUpdateList(MySQLParser::InsertUpdateListContext *context) = 0;

    virtual antlrcpp::Any visitLoadStatement(MySQLParser::LoadStatementContext *context) = 0;

    virtual antlrcpp::Any visitDataOrXml(MySQLParser::DataOrXmlContext *context) = 0;

    virtual antlrcpp::Any visitXmlRowsIdentifiedBy(MySQLParser::XmlRowsIdentifiedByContext *context) = 0;

    virtual antlrcpp::Any visitLoadDataFileTail(MySQLParser::LoadDataFileTailContext *context) = 0;

    virtual antlrcpp::Any visitLoadDataFileTargetList(MySQLParser::LoadDataFileTargetListContext *context) = 0;

    virtual antlrcpp::Any visitFieldOrVariableList(MySQLParser::FieldOrVariableListContext *context) = 0;

    virtual antlrcpp::Any visitReplaceStatement(MySQLParser::ReplaceStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectStatement(MySQLParser::SelectStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectStatementWithInto(MySQLParser::SelectStatementWithIntoContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpression(MySQLParser::QueryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpressionBody(MySQLParser::QueryExpressionBodyContext *context) = 0;

    virtual antlrcpp::Any visitQueryExpressionParens(MySQLParser::QueryExpressionParensContext *context) = 0;

    virtual antlrcpp::Any visitQuerySpecification(MySQLParser::QuerySpecificationContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(MySQLParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitQuerySpecOption(MySQLParser::QuerySpecOptionContext *context) = 0;

    virtual antlrcpp::Any visitLimitClause(MySQLParser::LimitClauseContext *context) = 0;

    virtual antlrcpp::Any visitSimpleLimitClause(MySQLParser::SimpleLimitClauseContext *context) = 0;

    virtual antlrcpp::Any visitLimitOptions(MySQLParser::LimitOptionsContext *context) = 0;

    virtual antlrcpp::Any visitLimitOption(MySQLParser::LimitOptionContext *context) = 0;

    virtual antlrcpp::Any visitIntoClause(MySQLParser::IntoClauseContext *context) = 0;

    virtual antlrcpp::Any visitProcedureAnalyseClause(MySQLParser::ProcedureAnalyseClauseContext *context) = 0;

    virtual antlrcpp::Any visitHavingClause(MySQLParser::HavingClauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowClause(MySQLParser::WindowClauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowDefinition(MySQLParser::WindowDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitWindowSpec(MySQLParser::WindowSpecContext *context) = 0;

    virtual antlrcpp::Any visitWindowSpecDetails(MySQLParser::WindowSpecDetailsContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrameClause(MySQLParser::WindowFrameClauseContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrameUnits(MySQLParser::WindowFrameUnitsContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrameExtent(MySQLParser::WindowFrameExtentContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrameStart(MySQLParser::WindowFrameStartContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrameBetween(MySQLParser::WindowFrameBetweenContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrameBound(MySQLParser::WindowFrameBoundContext *context) = 0;

    virtual antlrcpp::Any visitWindowFrameExclusion(MySQLParser::WindowFrameExclusionContext *context) = 0;

    virtual antlrcpp::Any visitWithClause(MySQLParser::WithClauseContext *context) = 0;

    virtual antlrcpp::Any visitCommonTableExpression(MySQLParser::CommonTableExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGroupByClause(MySQLParser::GroupByClauseContext *context) = 0;

    virtual antlrcpp::Any visitOlapOption(MySQLParser::OlapOptionContext *context) = 0;

    virtual antlrcpp::Any visitOrderClause(MySQLParser::OrderClauseContext *context) = 0;

    virtual antlrcpp::Any visitDirection(MySQLParser::DirectionContext *context) = 0;

    virtual antlrcpp::Any visitFromClause(MySQLParser::FromClauseContext *context) = 0;

    virtual antlrcpp::Any visitTableReferenceList(MySQLParser::TableReferenceListContext *context) = 0;

    virtual antlrcpp::Any visitSelectOption(MySQLParser::SelectOptionContext *context) = 0;

    virtual antlrcpp::Any visitLockingClause(MySQLParser::LockingClauseContext *context) = 0;

    virtual antlrcpp::Any visitLockStrengh(MySQLParser::LockStrenghContext *context) = 0;

    virtual antlrcpp::Any visitLockedRowAction(MySQLParser::LockedRowActionContext *context) = 0;

    virtual antlrcpp::Any visitSelectItemList(MySQLParser::SelectItemListContext *context) = 0;

    virtual antlrcpp::Any visitSelectItem(MySQLParser::SelectItemContext *context) = 0;

    virtual antlrcpp::Any visitSelectAlias(MySQLParser::SelectAliasContext *context) = 0;

    virtual antlrcpp::Any visitWhereClause(MySQLParser::WhereClauseContext *context) = 0;

    virtual antlrcpp::Any visitTableReference(MySQLParser::TableReferenceContext *context) = 0;

    virtual antlrcpp::Any visitEscapedTableReference(MySQLParser::EscapedTableReferenceContext *context) = 0;

    virtual antlrcpp::Any visitJoinedTable(MySQLParser::JoinedTableContext *context) = 0;

    virtual antlrcpp::Any visitNaturalJoinType(MySQLParser::NaturalJoinTypeContext *context) = 0;

    virtual antlrcpp::Any visitInnerJoinType(MySQLParser::InnerJoinTypeContext *context) = 0;

    virtual antlrcpp::Any visitOuterJoinType(MySQLParser::OuterJoinTypeContext *context) = 0;

    virtual antlrcpp::Any visitTableFactor(MySQLParser::TableFactorContext *context) = 0;

    virtual antlrcpp::Any visitSingleTable(MySQLParser::SingleTableContext *context) = 0;

    virtual antlrcpp::Any visitSingleTableParens(MySQLParser::SingleTableParensContext *context) = 0;

    virtual antlrcpp::Any visitDerivedTable(MySQLParser::DerivedTableContext *context) = 0;

    virtual antlrcpp::Any visitTableReferenceListParens(MySQLParser::TableReferenceListParensContext *context) = 0;

    virtual antlrcpp::Any visitTableFunction(MySQLParser::TableFunctionContext *context) = 0;

    virtual antlrcpp::Any visitColumnsClause(MySQLParser::ColumnsClauseContext *context) = 0;

    virtual antlrcpp::Any visitJtColumn(MySQLParser::JtColumnContext *context) = 0;

    virtual antlrcpp::Any visitOnEmptyOrError(MySQLParser::OnEmptyOrErrorContext *context) = 0;

    virtual antlrcpp::Any visitOnEmpty(MySQLParser::OnEmptyContext *context) = 0;

    virtual antlrcpp::Any visitOnError(MySQLParser::OnErrorContext *context) = 0;

    virtual antlrcpp::Any visitJtOnResponse(MySQLParser::JtOnResponseContext *context) = 0;

    virtual antlrcpp::Any visitUnionOption(MySQLParser::UnionOptionContext *context) = 0;

    virtual antlrcpp::Any visitTableAlias(MySQLParser::TableAliasContext *context) = 0;

    virtual antlrcpp::Any visitIndexHintList(MySQLParser::IndexHintListContext *context) = 0;

    virtual antlrcpp::Any visitIndexHint(MySQLParser::IndexHintContext *context) = 0;

    virtual antlrcpp::Any visitIndexHintType(MySQLParser::IndexHintTypeContext *context) = 0;

    virtual antlrcpp::Any visitKeyOrIndex(MySQLParser::KeyOrIndexContext *context) = 0;

    virtual antlrcpp::Any visitConstraintKeyType(MySQLParser::ConstraintKeyTypeContext *context) = 0;

    virtual antlrcpp::Any visitIndexHintClause(MySQLParser::IndexHintClauseContext *context) = 0;

    virtual antlrcpp::Any visitIndexList(MySQLParser::IndexListContext *context) = 0;

    virtual antlrcpp::Any visitIndexListElement(MySQLParser::IndexListElementContext *context) = 0;

    virtual antlrcpp::Any visitUpdateStatement(MySQLParser::UpdateStatementContext *context) = 0;

    virtual antlrcpp::Any visitTransactionOrLockingStatement(MySQLParser::TransactionOrLockingStatementContext *context) = 0;

    virtual antlrcpp::Any visitTransactionStatement(MySQLParser::TransactionStatementContext *context) = 0;

    virtual antlrcpp::Any visitBeginWork(MySQLParser::BeginWorkContext *context) = 0;

    virtual antlrcpp::Any visitTransactionCharacteristic(MySQLParser::TransactionCharacteristicContext *context) = 0;

    virtual antlrcpp::Any visitSetTransactionCharacteristic(MySQLParser::SetTransactionCharacteristicContext *context) = 0;

    virtual antlrcpp::Any visitIsolationLevel(MySQLParser::IsolationLevelContext *context) = 0;

    virtual antlrcpp::Any visitSavepointStatement(MySQLParser::SavepointStatementContext *context) = 0;

    virtual antlrcpp::Any visitLockStatement(MySQLParser::LockStatementContext *context) = 0;

    virtual antlrcpp::Any visitLockItem(MySQLParser::LockItemContext *context) = 0;

    virtual antlrcpp::Any visitLockOption(MySQLParser::LockOptionContext *context) = 0;

    virtual antlrcpp::Any visitXaStatement(MySQLParser::XaStatementContext *context) = 0;

    virtual antlrcpp::Any visitXaConvert(MySQLParser::XaConvertContext *context) = 0;

    virtual antlrcpp::Any visitXid(MySQLParser::XidContext *context) = 0;

    virtual antlrcpp::Any visitReplicationStatement(MySQLParser::ReplicationStatementContext *context) = 0;

    virtual antlrcpp::Any visitResetOption(MySQLParser::ResetOptionContext *context) = 0;

    virtual antlrcpp::Any visitMasterResetOptions(MySQLParser::MasterResetOptionsContext *context) = 0;

    virtual antlrcpp::Any visitReplicationLoad(MySQLParser::ReplicationLoadContext *context) = 0;

    virtual antlrcpp::Any visitChangeMaster(MySQLParser::ChangeMasterContext *context) = 0;

    virtual antlrcpp::Any visitChangeMasterOptions(MySQLParser::ChangeMasterOptionsContext *context) = 0;

    virtual antlrcpp::Any visitMasterOption(MySQLParser::MasterOptionContext *context) = 0;

    virtual antlrcpp::Any visitMasterFileDef(MySQLParser::MasterFileDefContext *context) = 0;

    virtual antlrcpp::Any visitServerIdList(MySQLParser::ServerIdListContext *context) = 0;

    virtual antlrcpp::Any visitChangeReplication(MySQLParser::ChangeReplicationContext *context) = 0;

    virtual antlrcpp::Any visitFilterDefinition(MySQLParser::FilterDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFilterDbList(MySQLParser::FilterDbListContext *context) = 0;

    virtual antlrcpp::Any visitFilterTableList(MySQLParser::FilterTableListContext *context) = 0;

    virtual antlrcpp::Any visitFilterStringList(MySQLParser::FilterStringListContext *context) = 0;

    virtual antlrcpp::Any visitFilterWildDbTableString(MySQLParser::FilterWildDbTableStringContext *context) = 0;

    virtual antlrcpp::Any visitFilterDbPairList(MySQLParser::FilterDbPairListContext *context) = 0;

    virtual antlrcpp::Any visitSlave(MySQLParser::SlaveContext *context) = 0;

    virtual antlrcpp::Any visitSlaveUntilOptions(MySQLParser::SlaveUntilOptionsContext *context) = 0;

    virtual antlrcpp::Any visitSlaveConnectionOptions(MySQLParser::SlaveConnectionOptionsContext *context) = 0;

    virtual antlrcpp::Any visitSlaveThreadOptions(MySQLParser::SlaveThreadOptionsContext *context) = 0;

    virtual antlrcpp::Any visitSlaveThreadOption(MySQLParser::SlaveThreadOptionContext *context) = 0;

    virtual antlrcpp::Any visitGroupReplication(MySQLParser::GroupReplicationContext *context) = 0;

    virtual antlrcpp::Any visitPreparedStatement(MySQLParser::PreparedStatementContext *context) = 0;

    virtual antlrcpp::Any visitExecuteStatement(MySQLParser::ExecuteStatementContext *context) = 0;

    virtual antlrcpp::Any visitExecuteVarList(MySQLParser::ExecuteVarListContext *context) = 0;

    virtual antlrcpp::Any visitCloneStatement(MySQLParser::CloneStatementContext *context) = 0;

    virtual antlrcpp::Any visitDataDirSSL(MySQLParser::DataDirSSLContext *context) = 0;

    virtual antlrcpp::Any visitSsl(MySQLParser::SslContext *context) = 0;

    virtual antlrcpp::Any visitAccountManagementStatement(MySQLParser::AccountManagementStatementContext *context) = 0;

    virtual antlrcpp::Any visitAlterUser(MySQLParser::AlterUserContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserTail(MySQLParser::AlterUserTailContext *context) = 0;

    virtual antlrcpp::Any visitCreateUser(MySQLParser::CreateUserContext *context) = 0;

    virtual antlrcpp::Any visitCreateUserTail(MySQLParser::CreateUserTailContext *context) = 0;

    virtual antlrcpp::Any visitDefaultRoleClause(MySQLParser::DefaultRoleClauseContext *context) = 0;

    virtual antlrcpp::Any visitRequireClause(MySQLParser::RequireClauseContext *context) = 0;

    virtual antlrcpp::Any visitConnectOptions(MySQLParser::ConnectOptionsContext *context) = 0;

    virtual antlrcpp::Any visitAccountLockPasswordExpireOptions(MySQLParser::AccountLockPasswordExpireOptionsContext *context) = 0;

    virtual antlrcpp::Any visitDropUser(MySQLParser::DropUserContext *context) = 0;

    virtual antlrcpp::Any visitGrant(MySQLParser::GrantContext *context) = 0;

    virtual antlrcpp::Any visitGrantTargetList(MySQLParser::GrantTargetListContext *context) = 0;

    virtual antlrcpp::Any visitGrantOptions(MySQLParser::GrantOptionsContext *context) = 0;

    virtual antlrcpp::Any visitVersionedRequireClause(MySQLParser::VersionedRequireClauseContext *context) = 0;

    virtual antlrcpp::Any visitRenameUser(MySQLParser::RenameUserContext *context) = 0;

    virtual antlrcpp::Any visitRevoke(MySQLParser::RevokeContext *context) = 0;

    virtual antlrcpp::Any visitOnTypeTo(MySQLParser::OnTypeToContext *context) = 0;

    virtual antlrcpp::Any visitAclType(MySQLParser::AclTypeContext *context) = 0;

    virtual antlrcpp::Any visitSetPassword(MySQLParser::SetPasswordContext *context) = 0;

    virtual antlrcpp::Any visitRoleOrPrivilegesList(MySQLParser::RoleOrPrivilegesListContext *context) = 0;

    virtual antlrcpp::Any visitRoleOrPrivilege(MySQLParser::RoleOrPrivilegeContext *context) = 0;

    virtual antlrcpp::Any visitGrantIdentifier(MySQLParser::GrantIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitRequireList(MySQLParser::RequireListContext *context) = 0;

    virtual antlrcpp::Any visitRequireListElement(MySQLParser::RequireListElementContext *context) = 0;

    virtual antlrcpp::Any visitGrantOption(MySQLParser::GrantOptionContext *context) = 0;

    virtual antlrcpp::Any visitSetRole(MySQLParser::SetRoleContext *context) = 0;

    virtual antlrcpp::Any visitRoleList(MySQLParser::RoleListContext *context) = 0;

    virtual antlrcpp::Any visitRole(MySQLParser::RoleContext *context) = 0;

    virtual antlrcpp::Any visitTableAdministrationStatement(MySQLParser::TableAdministrationStatementContext *context) = 0;

    virtual antlrcpp::Any visitHistogram(MySQLParser::HistogramContext *context) = 0;

    virtual antlrcpp::Any visitCheckOption(MySQLParser::CheckOptionContext *context) = 0;

    virtual antlrcpp::Any visitRepairType(MySQLParser::RepairTypeContext *context) = 0;

    virtual antlrcpp::Any visitInstallUninstallStatment(MySQLParser::InstallUninstallStatmentContext *context) = 0;

    virtual antlrcpp::Any visitSetStatement(MySQLParser::SetStatementContext *context) = 0;

    virtual antlrcpp::Any visitOptionValueNoOptionType(MySQLParser::OptionValueNoOptionTypeContext *context) = 0;

    virtual antlrcpp::Any visitSetSystemVariable(MySQLParser::SetSystemVariableContext *context) = 0;

    virtual antlrcpp::Any visitOptionValueFollowingOptionType(MySQLParser::OptionValueFollowingOptionTypeContext *context) = 0;

    virtual antlrcpp::Any visitSetExprOrDefault(MySQLParser::SetExprOrDefaultContext *context) = 0;

    virtual antlrcpp::Any visitOptionValueList(MySQLParser::OptionValueListContext *context) = 0;

    virtual antlrcpp::Any visitOptionValue(MySQLParser::OptionValueContext *context) = 0;

    virtual antlrcpp::Any visitShowStatement(MySQLParser::ShowStatementContext *context) = 0;

    virtual antlrcpp::Any visitShowCommandType(MySQLParser::ShowCommandTypeContext *context) = 0;

    virtual antlrcpp::Any visitNonBlocking(MySQLParser::NonBlockingContext *context) = 0;

    virtual antlrcpp::Any visitFromOrIn(MySQLParser::FromOrInContext *context) = 0;

    virtual antlrcpp::Any visitInDb(MySQLParser::InDbContext *context) = 0;

    virtual antlrcpp::Any visitProfileType(MySQLParser::ProfileTypeContext *context) = 0;

    virtual antlrcpp::Any visitOtherAdministrativeStatement(MySQLParser::OtherAdministrativeStatementContext *context) = 0;

    virtual antlrcpp::Any visitKeyCacheListOrParts(MySQLParser::KeyCacheListOrPartsContext *context) = 0;

    virtual antlrcpp::Any visitKeyCacheList(MySQLParser::KeyCacheListContext *context) = 0;

    virtual antlrcpp::Any visitAssignToKeycache(MySQLParser::AssignToKeycacheContext *context) = 0;

    virtual antlrcpp::Any visitAssignToKeycachePartition(MySQLParser::AssignToKeycachePartitionContext *context) = 0;

    virtual antlrcpp::Any visitCacheKeyList(MySQLParser::CacheKeyListContext *context) = 0;

    virtual antlrcpp::Any visitKeyUsageElement(MySQLParser::KeyUsageElementContext *context) = 0;

    virtual antlrcpp::Any visitKeyUsageList(MySQLParser::KeyUsageListContext *context) = 0;

    virtual antlrcpp::Any visitFlushOption(MySQLParser::FlushOptionContext *context) = 0;

    virtual antlrcpp::Any visitLogType(MySQLParser::LogTypeContext *context) = 0;

    virtual antlrcpp::Any visitFlushTables(MySQLParser::FlushTablesContext *context) = 0;

    virtual antlrcpp::Any visitFlushTablesOptions(MySQLParser::FlushTablesOptionsContext *context) = 0;

    virtual antlrcpp::Any visitPreloadTail(MySQLParser::PreloadTailContext *context) = 0;

    virtual antlrcpp::Any visitPreloadList(MySQLParser::PreloadListContext *context) = 0;

    virtual antlrcpp::Any visitPreloadKeys(MySQLParser::PreloadKeysContext *context) = 0;

    virtual antlrcpp::Any visitAdminPartition(MySQLParser::AdminPartitionContext *context) = 0;

    virtual antlrcpp::Any visitResourceGroupManagement(MySQLParser::ResourceGroupManagementContext *context) = 0;

    virtual antlrcpp::Any visitCreateResourceGroup(MySQLParser::CreateResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitResourceGroupVcpuList(MySQLParser::ResourceGroupVcpuListContext *context) = 0;

    virtual antlrcpp::Any visitVcpuNumOrRange(MySQLParser::VcpuNumOrRangeContext *context) = 0;

    virtual antlrcpp::Any visitResourceGroupPriority(MySQLParser::ResourceGroupPriorityContext *context) = 0;

    virtual antlrcpp::Any visitResourceGroupEnableDisable(MySQLParser::ResourceGroupEnableDisableContext *context) = 0;

    virtual antlrcpp::Any visitAlterResourceGroup(MySQLParser::AlterResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitSetResourceGroup(MySQLParser::SetResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitThreadIdList(MySQLParser::ThreadIdListContext *context) = 0;

    virtual antlrcpp::Any visitDropResourceGroup(MySQLParser::DropResourceGroupContext *context) = 0;

    virtual antlrcpp::Any visitUtilityStatement(MySQLParser::UtilityStatementContext *context) = 0;

    virtual antlrcpp::Any visitDescribeCommand(MySQLParser::DescribeCommandContext *context) = 0;

    virtual antlrcpp::Any visitExplainCommand(MySQLParser::ExplainCommandContext *context) = 0;

    virtual antlrcpp::Any visitExplainableStatement(MySQLParser::ExplainableStatementContext *context) = 0;

    virtual antlrcpp::Any visitHelpCommand(MySQLParser::HelpCommandContext *context) = 0;

    virtual antlrcpp::Any visitUseCommand(MySQLParser::UseCommandContext *context) = 0;

    virtual antlrcpp::Any visitRestartServer(MySQLParser::RestartServerContext *context) = 0;

    virtual antlrcpp::Any visitExprOr(MySQLParser::ExprOrContext *context) = 0;

    virtual antlrcpp::Any visitExprNot(MySQLParser::ExprNotContext *context) = 0;

    virtual antlrcpp::Any visitExprIs(MySQLParser::ExprIsContext *context) = 0;

    virtual antlrcpp::Any visitExprAnd(MySQLParser::ExprAndContext *context) = 0;

    virtual antlrcpp::Any visitExprXor(MySQLParser::ExprXorContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExprPredicate(MySQLParser::PrimaryExprPredicateContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExprCompare(MySQLParser::PrimaryExprCompareContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExprAllAny(MySQLParser::PrimaryExprAllAnyContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExprIsNull(MySQLParser::PrimaryExprIsNullContext *context) = 0;

    virtual antlrcpp::Any visitCompOp(MySQLParser::CompOpContext *context) = 0;

    virtual antlrcpp::Any visitPredicate(MySQLParser::PredicateContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExprIn(MySQLParser::PredicateExprInContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExprBetween(MySQLParser::PredicateExprBetweenContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExprLike(MySQLParser::PredicateExprLikeContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExprRegex(MySQLParser::PredicateExprRegexContext *context) = 0;

    virtual antlrcpp::Any visitBitExpr(MySQLParser::BitExprContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprConvert(MySQLParser::SimpleExprConvertContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprVariable(MySQLParser::SimpleExprVariableContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprCast(MySQLParser::SimpleExprCastContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprUnary(MySQLParser::SimpleExprUnaryContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprOdbc(MySQLParser::SimpleExprOdbcContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprRuntimeFunction(MySQLParser::SimpleExprRuntimeFunctionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprFunction(MySQLParser::SimpleExprFunctionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprCollate(MySQLParser::SimpleExprCollateContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprMatch(MySQLParser::SimpleExprMatchContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprWindowingFunction(MySQLParser::SimpleExprWindowingFunctionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprBinary(MySQLParser::SimpleExprBinaryContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprColumnRef(MySQLParser::SimpleExprColumnRefContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprParamMarker(MySQLParser::SimpleExprParamMarkerContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprSum(MySQLParser::SimpleExprSumContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprConvertUsing(MySQLParser::SimpleExprConvertUsingContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprSubQuery(MySQLParser::SimpleExprSubQueryContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprGroupingOperation(MySQLParser::SimpleExprGroupingOperationContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprNot(MySQLParser::SimpleExprNotContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprValues(MySQLParser::SimpleExprValuesContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprDefault(MySQLParser::SimpleExprDefaultContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprList(MySQLParser::SimpleExprListContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprInterval(MySQLParser::SimpleExprIntervalContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprCase(MySQLParser::SimpleExprCaseContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprConcat(MySQLParser::SimpleExprConcatContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExprLiteral(MySQLParser::SimpleExprLiteralContext *context) = 0;

    virtual antlrcpp::Any visitJsonOperator(MySQLParser::JsonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitSumExpr(MySQLParser::SumExprContext *context) = 0;

    virtual antlrcpp::Any visitGroupingOperation(MySQLParser::GroupingOperationContext *context) = 0;

    virtual antlrcpp::Any visitWindowFunctionCall(MySQLParser::WindowFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitWindowingClause(MySQLParser::WindowingClauseContext *context) = 0;

    virtual antlrcpp::Any visitLeadLagInfo(MySQLParser::LeadLagInfoContext *context) = 0;

    virtual antlrcpp::Any visitNullTreatment(MySQLParser::NullTreatmentContext *context) = 0;

    virtual antlrcpp::Any visitJsonFunction(MySQLParser::JsonFunctionContext *context) = 0;

    virtual antlrcpp::Any visitInSumExpr(MySQLParser::InSumExprContext *context) = 0;

    virtual antlrcpp::Any visitIdentListArg(MySQLParser::IdentListArgContext *context) = 0;

    virtual antlrcpp::Any visitIdentList(MySQLParser::IdentListContext *context) = 0;

    virtual antlrcpp::Any visitFulltextOptions(MySQLParser::FulltextOptionsContext *context) = 0;

    virtual antlrcpp::Any visitRuntimeFunctionCall(MySQLParser::RuntimeFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitGeometryFunction(MySQLParser::GeometryFunctionContext *context) = 0;

    virtual antlrcpp::Any visitTimeFunctionParameters(MySQLParser::TimeFunctionParametersContext *context) = 0;

    virtual antlrcpp::Any visitFractionalPrecision(MySQLParser::FractionalPrecisionContext *context) = 0;

    virtual antlrcpp::Any visitWeightStringLevels(MySQLParser::WeightStringLevelsContext *context) = 0;

    virtual antlrcpp::Any visitWeightStringLevelListItem(MySQLParser::WeightStringLevelListItemContext *context) = 0;

    virtual antlrcpp::Any visitDateTimeTtype(MySQLParser::DateTimeTtypeContext *context) = 0;

    virtual antlrcpp::Any visitTrimFunction(MySQLParser::TrimFunctionContext *context) = 0;

    virtual antlrcpp::Any visitSubstringFunction(MySQLParser::SubstringFunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(MySQLParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitUdfExprList(MySQLParser::UdfExprListContext *context) = 0;

    virtual antlrcpp::Any visitUdfExpr(MySQLParser::UdfExprContext *context) = 0;

    virtual antlrcpp::Any visitVariable(MySQLParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitUserVariable(MySQLParser::UserVariableContext *context) = 0;

    virtual antlrcpp::Any visitSystemVariable(MySQLParser::SystemVariableContext *context) = 0;

    virtual antlrcpp::Any visitInternalVariableName(MySQLParser::InternalVariableNameContext *context) = 0;

    virtual antlrcpp::Any visitWhenExpression(MySQLParser::WhenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitThenExpression(MySQLParser::ThenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitElseExpression(MySQLParser::ElseExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastType(MySQLParser::CastTypeContext *context) = 0;

    virtual antlrcpp::Any visitExprList(MySQLParser::ExprListContext *context) = 0;

    virtual antlrcpp::Any visitCharset(MySQLParser::CharsetContext *context) = 0;

    virtual antlrcpp::Any visitNotRule(MySQLParser::NotRuleContext *context) = 0;

    virtual antlrcpp::Any visitNot2Rule(MySQLParser::Not2RuleContext *context) = 0;

    virtual antlrcpp::Any visitInterval(MySQLParser::IntervalContext *context) = 0;

    virtual antlrcpp::Any visitIntervalTimeStamp(MySQLParser::IntervalTimeStampContext *context) = 0;

    virtual antlrcpp::Any visitExprListWithParentheses(MySQLParser::ExprListWithParenthesesContext *context) = 0;

    virtual antlrcpp::Any visitExprWithParentheses(MySQLParser::ExprWithParenthesesContext *context) = 0;

    virtual antlrcpp::Any visitOrderList(MySQLParser::OrderListContext *context) = 0;

    virtual antlrcpp::Any visitOrderExpression(MySQLParser::OrderExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGroupList(MySQLParser::GroupListContext *context) = 0;

    virtual antlrcpp::Any visitGroupingExpression(MySQLParser::GroupingExpressionContext *context) = 0;

    virtual antlrcpp::Any visitChannel(MySQLParser::ChannelContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(MySQLParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(MySQLParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(MySQLParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfBody(MySQLParser::IfBodyContext *context) = 0;

    virtual antlrcpp::Any visitThenStatement(MySQLParser::ThenStatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatementList(MySQLParser::CompoundStatementListContext *context) = 0;

    virtual antlrcpp::Any visitCaseStatement(MySQLParser::CaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(MySQLParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledBlock(MySQLParser::LabeledBlockContext *context) = 0;

    virtual antlrcpp::Any visitUnlabeledBlock(MySQLParser::UnlabeledBlockContext *context) = 0;

    virtual antlrcpp::Any visitLabel(MySQLParser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitBeginEndBlock(MySQLParser::BeginEndBlockContext *context) = 0;

    virtual antlrcpp::Any visitLabeledControl(MySQLParser::LabeledControlContext *context) = 0;

    virtual antlrcpp::Any visitUnlabeledControl(MySQLParser::UnlabeledControlContext *context) = 0;

    virtual antlrcpp::Any visitLoopBlock(MySQLParser::LoopBlockContext *context) = 0;

    virtual antlrcpp::Any visitWhileDoBlock(MySQLParser::WhileDoBlockContext *context) = 0;

    virtual antlrcpp::Any visitRepeatUntilBlock(MySQLParser::RepeatUntilBlockContext *context) = 0;

    virtual antlrcpp::Any visitSpDeclarations(MySQLParser::SpDeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitSpDeclaration(MySQLParser::SpDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(MySQLParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConditionDeclaration(MySQLParser::ConditionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSpCondition(MySQLParser::SpConditionContext *context) = 0;

    virtual antlrcpp::Any visitSqlstate(MySQLParser::SqlstateContext *context) = 0;

    virtual antlrcpp::Any visitHandlerDeclaration(MySQLParser::HandlerDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitHandlerCondition(MySQLParser::HandlerConditionContext *context) = 0;

    virtual antlrcpp::Any visitCursorDeclaration(MySQLParser::CursorDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitIterateStatement(MySQLParser::IterateStatementContext *context) = 0;

    virtual antlrcpp::Any visitLeaveStatement(MySQLParser::LeaveStatementContext *context) = 0;

    virtual antlrcpp::Any visitGetDiagnostics(MySQLParser::GetDiagnosticsContext *context) = 0;

    virtual antlrcpp::Any visitSignalAllowedExpr(MySQLParser::SignalAllowedExprContext *context) = 0;

    virtual antlrcpp::Any visitStatementInformationItem(MySQLParser::StatementInformationItemContext *context) = 0;

    virtual antlrcpp::Any visitConditionInformationItem(MySQLParser::ConditionInformationItemContext *context) = 0;

    virtual antlrcpp::Any visitSignalInformationItemName(MySQLParser::SignalInformationItemNameContext *context) = 0;

    virtual antlrcpp::Any visitSignalStatement(MySQLParser::SignalStatementContext *context) = 0;

    virtual antlrcpp::Any visitResignalStatement(MySQLParser::ResignalStatementContext *context) = 0;

    virtual antlrcpp::Any visitSignalInformationItem(MySQLParser::SignalInformationItemContext *context) = 0;

    virtual antlrcpp::Any visitCursorOpen(MySQLParser::CursorOpenContext *context) = 0;

    virtual antlrcpp::Any visitCursorClose(MySQLParser::CursorCloseContext *context) = 0;

    virtual antlrcpp::Any visitCursorFetch(MySQLParser::CursorFetchContext *context) = 0;

    virtual antlrcpp::Any visitSchedule(MySQLParser::ScheduleContext *context) = 0;

    virtual antlrcpp::Any visitColumnDefinition(MySQLParser::ColumnDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitCheckOrReferences(MySQLParser::CheckOrReferencesContext *context) = 0;

    virtual antlrcpp::Any visitCheckConstraint(MySQLParser::CheckConstraintContext *context) = 0;

    virtual antlrcpp::Any visitTableConstraintDef(MySQLParser::TableConstraintDefContext *context) = 0;

    virtual antlrcpp::Any visitFieldDefinition(MySQLParser::FieldDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitColumnAttribute(MySQLParser::ColumnAttributeContext *context) = 0;

    virtual antlrcpp::Any visitGcolAttribute(MySQLParser::GcolAttributeContext *context) = 0;

    virtual antlrcpp::Any visitReferences(MySQLParser::ReferencesContext *context) = 0;

    virtual antlrcpp::Any visitDeleteOption(MySQLParser::DeleteOptionContext *context) = 0;

    virtual antlrcpp::Any visitKeyList(MySQLParser::KeyListContext *context) = 0;

    virtual antlrcpp::Any visitKeyPart(MySQLParser::KeyPartContext *context) = 0;

    virtual antlrcpp::Any visitKeyListWithExpression(MySQLParser::KeyListWithExpressionContext *context) = 0;

    virtual antlrcpp::Any visitKeyPartOrExpression(MySQLParser::KeyPartOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitKeyListVariants(MySQLParser::KeyListVariantsContext *context) = 0;

    virtual antlrcpp::Any visitIndexType(MySQLParser::IndexTypeContext *context) = 0;

    virtual antlrcpp::Any visitIndexOption(MySQLParser::IndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitCommonIndexOption(MySQLParser::CommonIndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitVisibility(MySQLParser::VisibilityContext *context) = 0;

    virtual antlrcpp::Any visitIndexTypeClause(MySQLParser::IndexTypeClauseContext *context) = 0;

    virtual antlrcpp::Any visitFulltextIndexOption(MySQLParser::FulltextIndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitSpatialIndexOption(MySQLParser::SpatialIndexOptionContext *context) = 0;

    virtual antlrcpp::Any visitDataTypeDefinition(MySQLParser::DataTypeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitDataType(MySQLParser::DataTypeContext *context) = 0;

    virtual antlrcpp::Any visitNchar(MySQLParser::NcharContext *context) = 0;

    virtual antlrcpp::Any visitVarchar(MySQLParser::VarcharContext *context) = 0;

    virtual antlrcpp::Any visitNvarchar(MySQLParser::NvarcharContext *context) = 0;

    virtual antlrcpp::Any visitFieldLength(MySQLParser::FieldLengthContext *context) = 0;

    virtual antlrcpp::Any visitFieldOptions(MySQLParser::FieldOptionsContext *context) = 0;

    virtual antlrcpp::Any visitCharsetWithOptBinary(MySQLParser::CharsetWithOptBinaryContext *context) = 0;

    virtual antlrcpp::Any visitAscii(MySQLParser::AsciiContext *context) = 0;

    virtual antlrcpp::Any visitUnicode(MySQLParser::UnicodeContext *context) = 0;

    virtual antlrcpp::Any visitWsNumCodepoints(MySQLParser::WsNumCodepointsContext *context) = 0;

    virtual antlrcpp::Any visitTypeDatetimePrecision(MySQLParser::TypeDatetimePrecisionContext *context) = 0;

    virtual antlrcpp::Any visitCharsetName(MySQLParser::CharsetNameContext *context) = 0;

    virtual antlrcpp::Any visitCollationName(MySQLParser::CollationNameContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableOptions(MySQLParser::CreateTableOptionsContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableOptionsSpaceSeparated(MySQLParser::CreateTableOptionsSpaceSeparatedContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableOption(MySQLParser::CreateTableOptionContext *context) = 0;

    virtual antlrcpp::Any visitTernaryOption(MySQLParser::TernaryOptionContext *context) = 0;

    virtual antlrcpp::Any visitDefaultCollation(MySQLParser::DefaultCollationContext *context) = 0;

    virtual antlrcpp::Any visitDefaultEncryption(MySQLParser::DefaultEncryptionContext *context) = 0;

    virtual antlrcpp::Any visitDefaultCharset(MySQLParser::DefaultCharsetContext *context) = 0;

    virtual antlrcpp::Any visitPartitionClause(MySQLParser::PartitionClauseContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefKey(MySQLParser::PartitionDefKeyContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefHash(MySQLParser::PartitionDefHashContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefRangeList(MySQLParser::PartitionDefRangeListContext *context) = 0;

    virtual antlrcpp::Any visitSubPartitions(MySQLParser::SubPartitionsContext *context) = 0;

    virtual antlrcpp::Any visitPartitionKeyAlgorithm(MySQLParser::PartitionKeyAlgorithmContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinitions(MySQLParser::PartitionDefinitionsContext *context) = 0;

    virtual antlrcpp::Any visitPartitionDefinition(MySQLParser::PartitionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPartitionValuesIn(MySQLParser::PartitionValuesInContext *context) = 0;

    virtual antlrcpp::Any visitPartitionOption(MySQLParser::PartitionOptionContext *context) = 0;

    virtual antlrcpp::Any visitSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPartitionValueItemListParen(MySQLParser::PartitionValueItemListParenContext *context) = 0;

    virtual antlrcpp::Any visitPartitionValueItem(MySQLParser::PartitionValueItemContext *context) = 0;

    virtual antlrcpp::Any visitDefinerClause(MySQLParser::DefinerClauseContext *context) = 0;

    virtual antlrcpp::Any visitIfExists(MySQLParser::IfExistsContext *context) = 0;

    virtual antlrcpp::Any visitIfNotExists(MySQLParser::IfNotExistsContext *context) = 0;

    virtual antlrcpp::Any visitProcedureParameter(MySQLParser::ProcedureParameterContext *context) = 0;

    virtual antlrcpp::Any visitFunctionParameter(MySQLParser::FunctionParameterContext *context) = 0;

    virtual antlrcpp::Any visitCollate(MySQLParser::CollateContext *context) = 0;

    virtual antlrcpp::Any visitTypeWithOptCollate(MySQLParser::TypeWithOptCollateContext *context) = 0;

    virtual antlrcpp::Any visitSchemaIdentifierPair(MySQLParser::SchemaIdentifierPairContext *context) = 0;

    virtual antlrcpp::Any visitViewRefList(MySQLParser::ViewRefListContext *context) = 0;

    virtual antlrcpp::Any visitUpdateList(MySQLParser::UpdateListContext *context) = 0;

    virtual antlrcpp::Any visitUpdateElement(MySQLParser::UpdateElementContext *context) = 0;

    virtual antlrcpp::Any visitCharsetClause(MySQLParser::CharsetClauseContext *context) = 0;

    virtual antlrcpp::Any visitFieldsClause(MySQLParser::FieldsClauseContext *context) = 0;

    virtual antlrcpp::Any visitFieldTerm(MySQLParser::FieldTermContext *context) = 0;

    virtual antlrcpp::Any visitLinesClause(MySQLParser::LinesClauseContext *context) = 0;

    virtual antlrcpp::Any visitLineTerm(MySQLParser::LineTermContext *context) = 0;

    virtual antlrcpp::Any visitUserList(MySQLParser::UserListContext *context) = 0;

    virtual antlrcpp::Any visitCreateUserList(MySQLParser::CreateUserListContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserList(MySQLParser::AlterUserListContext *context) = 0;

    virtual antlrcpp::Any visitCreateUserEntry(MySQLParser::CreateUserEntryContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserEntry(MySQLParser::AlterUserEntryContext *context) = 0;

    virtual antlrcpp::Any visitRetainCurrentPassword(MySQLParser::RetainCurrentPasswordContext *context) = 0;

    virtual antlrcpp::Any visitDiscardOldPassword(MySQLParser::DiscardOldPasswordContext *context) = 0;

    virtual antlrcpp::Any visitReplacePassword(MySQLParser::ReplacePasswordContext *context) = 0;

    virtual antlrcpp::Any visitUser(MySQLParser::UserContext *context) = 0;

    virtual antlrcpp::Any visitLikeClause(MySQLParser::LikeClauseContext *context) = 0;

    virtual antlrcpp::Any visitLikeOrWhere(MySQLParser::LikeOrWhereContext *context) = 0;

    virtual antlrcpp::Any visitOnlineOption(MySQLParser::OnlineOptionContext *context) = 0;

    virtual antlrcpp::Any visitNoWriteToBinLog(MySQLParser::NoWriteToBinLogContext *context) = 0;

    virtual antlrcpp::Any visitUsePartition(MySQLParser::UsePartitionContext *context) = 0;

    virtual antlrcpp::Any visitFieldIdentifier(MySQLParser::FieldIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitColumnName(MySQLParser::ColumnNameContext *context) = 0;

    virtual antlrcpp::Any visitColumnInternalRef(MySQLParser::ColumnInternalRefContext *context) = 0;

    virtual antlrcpp::Any visitColumnInternalRefList(MySQLParser::ColumnInternalRefListContext *context) = 0;

    virtual antlrcpp::Any visitColumnRef(MySQLParser::ColumnRefContext *context) = 0;

    virtual antlrcpp::Any visitInsertIdentifier(MySQLParser::InsertIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitIndexName(MySQLParser::IndexNameContext *context) = 0;

    virtual antlrcpp::Any visitIndexRef(MySQLParser::IndexRefContext *context) = 0;

    virtual antlrcpp::Any visitTableWild(MySQLParser::TableWildContext *context) = 0;

    virtual antlrcpp::Any visitSchemaName(MySQLParser::SchemaNameContext *context) = 0;

    virtual antlrcpp::Any visitSchemaRef(MySQLParser::SchemaRefContext *context) = 0;

    virtual antlrcpp::Any visitProcedureName(MySQLParser::ProcedureNameContext *context) = 0;

    virtual antlrcpp::Any visitProcedureRef(MySQLParser::ProcedureRefContext *context) = 0;

    virtual antlrcpp::Any visitFunctionName(MySQLParser::FunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitFunctionRef(MySQLParser::FunctionRefContext *context) = 0;

    virtual antlrcpp::Any visitTriggerName(MySQLParser::TriggerNameContext *context) = 0;

    virtual antlrcpp::Any visitTriggerRef(MySQLParser::TriggerRefContext *context) = 0;

    virtual antlrcpp::Any visitViewName(MySQLParser::ViewNameContext *context) = 0;

    virtual antlrcpp::Any visitViewRef(MySQLParser::ViewRefContext *context) = 0;

    virtual antlrcpp::Any visitTablespaceName(MySQLParser::TablespaceNameContext *context) = 0;

    virtual antlrcpp::Any visitTablespaceRef(MySQLParser::TablespaceRefContext *context) = 0;

    virtual antlrcpp::Any visitLogfileGroupName(MySQLParser::LogfileGroupNameContext *context) = 0;

    virtual antlrcpp::Any visitLogfileGroupRef(MySQLParser::LogfileGroupRefContext *context) = 0;

    virtual antlrcpp::Any visitEventName(MySQLParser::EventNameContext *context) = 0;

    virtual antlrcpp::Any visitEventRef(MySQLParser::EventRefContext *context) = 0;

    virtual antlrcpp::Any visitUdfName(MySQLParser::UdfNameContext *context) = 0;

    virtual antlrcpp::Any visitServerName(MySQLParser::ServerNameContext *context) = 0;

    virtual antlrcpp::Any visitServerRef(MySQLParser::ServerRefContext *context) = 0;

    virtual antlrcpp::Any visitEngineRef(MySQLParser::EngineRefContext *context) = 0;

    virtual antlrcpp::Any visitTableName(MySQLParser::TableNameContext *context) = 0;

    virtual antlrcpp::Any visitFilterTableRef(MySQLParser::FilterTableRefContext *context) = 0;

    virtual antlrcpp::Any visitTableRefWithWildcard(MySQLParser::TableRefWithWildcardContext *context) = 0;

    virtual antlrcpp::Any visitTableRef(MySQLParser::TableRefContext *context) = 0;

    virtual antlrcpp::Any visitTableRefList(MySQLParser::TableRefListContext *context) = 0;

    virtual antlrcpp::Any visitTableAliasRefList(MySQLParser::TableAliasRefListContext *context) = 0;

    virtual antlrcpp::Any visitParameterName(MySQLParser::ParameterNameContext *context) = 0;

    virtual antlrcpp::Any visitLabelIdentifier(MySQLParser::LabelIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitLabelRef(MySQLParser::LabelRefContext *context) = 0;

    virtual antlrcpp::Any visitRoleIdentifier(MySQLParser::RoleIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitRoleRef(MySQLParser::RoleRefContext *context) = 0;

    virtual antlrcpp::Any visitPluginRef(MySQLParser::PluginRefContext *context) = 0;

    virtual antlrcpp::Any visitComponentRef(MySQLParser::ComponentRefContext *context) = 0;

    virtual antlrcpp::Any visitResourceGroupRef(MySQLParser::ResourceGroupRefContext *context) = 0;

    virtual antlrcpp::Any visitWindowName(MySQLParser::WindowNameContext *context) = 0;

    virtual antlrcpp::Any visitPureIdentifier(MySQLParser::PureIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(MySQLParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(MySQLParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierListWithParentheses(MySQLParser::IdentifierListWithParenthesesContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedIdentifier(MySQLParser::QualifiedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitSimpleIdentifier(MySQLParser::SimpleIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitDotIdentifier(MySQLParser::DotIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitUlong_number(MySQLParser::Ulong_numberContext *context) = 0;

    virtual antlrcpp::Any visitReal_ulong_number(MySQLParser::Real_ulong_numberContext *context) = 0;

    virtual antlrcpp::Any visitUlonglong_number(MySQLParser::Ulonglong_numberContext *context) = 0;

    virtual antlrcpp::Any visitReal_ulonglong_number(MySQLParser::Real_ulonglong_numberContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(MySQLParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitSignedLiteral(MySQLParser::SignedLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringList(MySQLParser::StringListContext *context) = 0;

    virtual antlrcpp::Any visitTextStringLiteral(MySQLParser::TextStringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitTextString(MySQLParser::TextStringContext *context) = 0;

    virtual antlrcpp::Any visitTextLiteral(MySQLParser::TextLiteralContext *context) = 0;

    virtual antlrcpp::Any visitTextStringNoLinebreak(MySQLParser::TextStringNoLinebreakContext *context) = 0;

    virtual antlrcpp::Any visitTextStringLiteralList(MySQLParser::TextStringLiteralListContext *context) = 0;

    virtual antlrcpp::Any visitNumLiteral(MySQLParser::NumLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBoolLiteral(MySQLParser::BoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitNullLiteral(MySQLParser::NullLiteralContext *context) = 0;

    virtual antlrcpp::Any visitTemporalLiteral(MySQLParser::TemporalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatOptions(MySQLParser::FloatOptionsContext *context) = 0;

    virtual antlrcpp::Any visitPrecision(MySQLParser::PrecisionContext *context) = 0;

    virtual antlrcpp::Any visitTextOrIdentifier(MySQLParser::TextOrIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitRoleIdentifierOrText(MySQLParser::RoleIdentifierOrTextContext *context) = 0;

    virtual antlrcpp::Any visitSizeNumber(MySQLParser::SizeNumberContext *context) = 0;

    virtual antlrcpp::Any visitParentheses(MySQLParser::ParenthesesContext *context) = 0;

    virtual antlrcpp::Any visitEqual(MySQLParser::EqualContext *context) = 0;

    virtual antlrcpp::Any visitOptionType(MySQLParser::OptionTypeContext *context) = 0;

    virtual antlrcpp::Any visitVarIdentType(MySQLParser::VarIdentTypeContext *context) = 0;

    virtual antlrcpp::Any visitSetVarIdentType(MySQLParser::SetVarIdentTypeContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierKeyword(MySQLParser::IdentifierKeywordContext *context) = 0;

    virtual antlrcpp::Any visitLabelKeyword(MySQLParser::LabelKeywordContext *context) = 0;

    virtual antlrcpp::Any visitRoleOrIdentifierKeyword(MySQLParser::RoleOrIdentifierKeywordContext *context) = 0;

    virtual antlrcpp::Any visitRoleOrLabelKeyword(MySQLParser::RoleOrLabelKeywordContext *context) = 0;

    virtual antlrcpp::Any visitRoleKeyword(MySQLParser::RoleKeywordContext *context) = 0;


};

}  // namespace parsers
