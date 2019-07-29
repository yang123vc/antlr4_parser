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
#include "MySQLParserVisitor.h"


namespace parsers {

/**
 * This class provides an empty implementation of MySQLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class PARSERS_PUBLIC_TYPE MySQLParserBaseVisitor : public MySQLParserVisitor {
public:

  virtual antlrcpp::Any visitQuery(MySQLParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStatement(MySQLParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterStatement(MySQLParser::AlterStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterDatabase(MySQLParser::AlterDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterEvent(MySQLParser::AlterEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterLogfileGroup(MySQLParser::AlterLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterLogfileGroupOptions(MySQLParser::AlterLogfileGroupOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterLogfileGroupOption(MySQLParser::AlterLogfileGroupOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterServer(MySQLParser::AlterServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTable(MySQLParser::AlterTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTableActions(MySQLParser::AlterTableActionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterCommandList(MySQLParser::AlterCommandListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterCommandsModifierList(MySQLParser::AlterCommandsModifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStandaloneAlterCommands(MySQLParser::StandaloneAlterCommandsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterPartition(MySQLParser::AlterPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterList(MySQLParser::AlterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterCommandsModifier(MySQLParser::AlterCommandsModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterListItem(MySQLParser::AlterListItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlace(MySQLParser::PlaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRestrict(MySQLParser::RestrictContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterOrderList(MySQLParser::AlterOrderListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterAlgorithmOption(MySQLParser::AlterAlgorithmOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterLockOption(MySQLParser::AlterLockOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexLockAndAlgorithm(MySQLParser::IndexLockAndAlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithValidation(MySQLParser::WithValidationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRemovePartitioning(MySQLParser::RemovePartitioningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAllOrPartitionNameList(MySQLParser::AllOrPartitionNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReorgPartitionRule(MySQLParser::ReorgPartitionRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTablespace(MySQLParser::AlterTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUndoTablespace(MySQLParser::AlterUndoTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUndoTableSpaceOptions(MySQLParser::UndoTableSpaceOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUndoTableSpaceOption(MySQLParser::UndoTableSpaceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTablespaceOptions(MySQLParser::AlterTablespaceOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterTablespaceOption(MySQLParser::AlterTablespaceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeTablespaceOption(MySQLParser::ChangeTablespaceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterView(MySQLParser::AlterViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewTail(MySQLParser::ViewTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewSelect(MySQLParser::ViewSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewCheckOption(MySQLParser::ViewCheckOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateStatement(MySQLParser::CreateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDatabase(MySQLParser::CreateDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateDatabaseOption(MySQLParser::CreateDatabaseOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTable(MySQLParser::CreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableElementList(MySQLParser::TableElementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableElement(MySQLParser::TableElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDuplicateAsQueryExpression(MySQLParser::DuplicateAsQueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpressionOrParens(MySQLParser::QueryExpressionOrParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateRoutine(MySQLParser::CreateRoutineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateProcedure(MySQLParser::CreateProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateFunction(MySQLParser::CreateFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUdf(MySQLParser::CreateUdfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineCreateOption(MySQLParser::RoutineCreateOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineAlterOptions(MySQLParser::RoutineAlterOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineOption(MySQLParser::RoutineOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateIndex(MySQLParser::CreateIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexNameAndType(MySQLParser::IndexNameAndTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateIndexTarget(MySQLParser::CreateIndexTargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateLogfileGroup(MySQLParser::CreateLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogfileGroupOptions(MySQLParser::LogfileGroupOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogfileGroupOption(MySQLParser::LogfileGroupOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateServer(MySQLParser::CreateServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerOptions(MySQLParser::ServerOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerOption(MySQLParser::ServerOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTablespace(MySQLParser::CreateTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUndoTablespace(MySQLParser::CreateUndoTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsDataFileName(MySQLParser::TsDataFileNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsDataFile(MySQLParser::TsDataFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespaceOptions(MySQLParser::TablespaceOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespaceOption(MySQLParser::TablespaceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionInitialSize(MySQLParser::TsOptionInitialSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionUndoRedoBufferSize(MySQLParser::TsOptionUndoRedoBufferSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionAutoextendSize(MySQLParser::TsOptionAutoextendSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionMaxSize(MySQLParser::TsOptionMaxSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionExtentSize(MySQLParser::TsOptionExtentSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionNodegroup(MySQLParser::TsOptionNodegroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionEngine(MySQLParser::TsOptionEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionWait(MySQLParser::TsOptionWaitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionComment(MySQLParser::TsOptionCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionFileblockSize(MySQLParser::TsOptionFileblockSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTsOptionEncryption(MySQLParser::TsOptionEncryptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateView(MySQLParser::CreateViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewReplaceOrAlgorithm(MySQLParser::ViewReplaceOrAlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewAlgorithm(MySQLParser::ViewAlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewSuid(MySQLParser::ViewSuidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTrigger(MySQLParser::CreateTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerFollowsPrecedesClause(MySQLParser::TriggerFollowsPrecedesClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateEvent(MySQLParser::CreateEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateRole(MySQLParser::CreateRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateSpatialReference(MySQLParser::CreateSpatialReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSrsAttribute(MySQLParser::SrsAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropStatement(MySQLParser::DropStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropDatabase(MySQLParser::DropDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropEvent(MySQLParser::DropEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropFunction(MySQLParser::DropFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropProcedure(MySQLParser::DropProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropIndex(MySQLParser::DropIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropLogfileGroup(MySQLParser::DropLogfileGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropLogfileGroupOption(MySQLParser::DropLogfileGroupOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropServer(MySQLParser::DropServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTable(MySQLParser::DropTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTableSpace(MySQLParser::DropTableSpaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropTrigger(MySQLParser::DropTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropView(MySQLParser::DropViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropRole(MySQLParser::DropRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropSpatialReference(MySQLParser::DropSpatialReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropUndoTablespace(MySQLParser::DropUndoTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameTableStatement(MySQLParser::RenameTableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenamePair(MySQLParser::RenamePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncateTableStatement(MySQLParser::TruncateTableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStatement(MySQLParser::ImportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallStatement(MySQLParser::CallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteStatement(MySQLParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDelete(MySQLParser::PartitionDeleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteStatementOption(MySQLParser::DeleteStatementOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoStatement(MySQLParser::DoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerStatement(MySQLParser::HandlerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerReadOrScan(MySQLParser::HandlerReadOrScanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertStatement(MySQLParser::InsertStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertLockOption(MySQLParser::InsertLockOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertFromConstructor(MySQLParser::InsertFromConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFields(MySQLParser::FieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertValues(MySQLParser::InsertValuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertQueryExpression(MySQLParser::InsertQueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueList(MySQLParser::ValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValues(MySQLParser::ValuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertUpdateList(MySQLParser::InsertUpdateListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadStatement(MySQLParser::LoadStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataOrXml(MySQLParser::DataOrXmlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXmlRowsIdentifiedBy(MySQLParser::XmlRowsIdentifiedByContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadDataFileTail(MySQLParser::LoadDataFileTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoadDataFileTargetList(MySQLParser::LoadDataFileTargetListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOrVariableList(MySQLParser::FieldOrVariableListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplaceStatement(MySQLParser::ReplaceStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStatement(MySQLParser::SelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStatementWithInto(MySQLParser::SelectStatementWithIntoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpression(MySQLParser::QueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpressionBody(MySQLParser::QueryExpressionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryExpressionParens(MySQLParser::QueryExpressionParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuerySpecification(MySQLParser::QuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(MySQLParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuerySpecOption(MySQLParser::QuerySpecOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitClause(MySQLParser::LimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleLimitClause(MySQLParser::SimpleLimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitOptions(MySQLParser::LimitOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitOption(MySQLParser::LimitOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntoClause(MySQLParser::IntoClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureAnalyseClause(MySQLParser::ProcedureAnalyseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHavingClause(MySQLParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowClause(MySQLParser::WindowClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowDefinition(MySQLParser::WindowDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowSpec(MySQLParser::WindowSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowSpecDetails(MySQLParser::WindowSpecDetailsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrameClause(MySQLParser::WindowFrameClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrameUnits(MySQLParser::WindowFrameUnitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrameExtent(MySQLParser::WindowFrameExtentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrameStart(MySQLParser::WindowFrameStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrameBetween(MySQLParser::WindowFrameBetweenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrameBound(MySQLParser::WindowFrameBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFrameExclusion(MySQLParser::WindowFrameExclusionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWithClause(MySQLParser::WithClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommonTableExpression(MySQLParser::CommonTableExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupByClause(MySQLParser::GroupByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOlapOption(MySQLParser::OlapOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderClause(MySQLParser::OrderClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirection(MySQLParser::DirectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromClause(MySQLParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableReferenceList(MySQLParser::TableReferenceListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectOption(MySQLParser::SelectOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockingClause(MySQLParser::LockingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockStrengh(MySQLParser::LockStrenghContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockedRowAction(MySQLParser::LockedRowActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectItemList(MySQLParser::SelectItemListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectItem(MySQLParser::SelectItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectAlias(MySQLParser::SelectAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhereClause(MySQLParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableReference(MySQLParser::TableReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEscapedTableReference(MySQLParser::EscapedTableReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJoinedTable(MySQLParser::JoinedTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNaturalJoinType(MySQLParser::NaturalJoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInnerJoinType(MySQLParser::InnerJoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuterJoinType(MySQLParser::OuterJoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableFactor(MySQLParser::TableFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleTable(MySQLParser::SingleTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleTableParens(MySQLParser::SingleTableParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDerivedTable(MySQLParser::DerivedTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableReferenceListParens(MySQLParser::TableReferenceListParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableFunction(MySQLParser::TableFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnsClause(MySQLParser::ColumnsClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJtColumn(MySQLParser::JtColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnEmptyOrError(MySQLParser::OnEmptyOrErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnEmpty(MySQLParser::OnEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnError(MySQLParser::OnErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJtOnResponse(MySQLParser::JtOnResponseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionOption(MySQLParser::UnionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableAlias(MySQLParser::TableAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHintList(MySQLParser::IndexHintListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHint(MySQLParser::IndexHintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHintType(MySQLParser::IndexHintTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyOrIndex(MySQLParser::KeyOrIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintKeyType(MySQLParser::ConstraintKeyTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexHintClause(MySQLParser::IndexHintClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexList(MySQLParser::IndexListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexListElement(MySQLParser::IndexListElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdateStatement(MySQLParser::UpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionOrLockingStatement(MySQLParser::TransactionOrLockingStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionStatement(MySQLParser::TransactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginWork(MySQLParser::BeginWorkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransactionCharacteristic(MySQLParser::TransactionCharacteristicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTransactionCharacteristic(MySQLParser::SetTransactionCharacteristicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsolationLevel(MySQLParser::IsolationLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepointStatement(MySQLParser::SavepointStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockStatement(MySQLParser::LockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockItem(MySQLParser::LockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLockOption(MySQLParser::LockOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaStatement(MySQLParser::XaStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXaConvert(MySQLParser::XaConvertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXid(MySQLParser::XidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplicationStatement(MySQLParser::ReplicationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetOption(MySQLParser::ResetOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterResetOptions(MySQLParser::MasterResetOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplicationLoad(MySQLParser::ReplicationLoadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeMaster(MySQLParser::ChangeMasterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeMasterOptions(MySQLParser::ChangeMasterOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOption(MySQLParser::MasterOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterFileDef(MySQLParser::MasterFileDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerIdList(MySQLParser::ServerIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeReplication(MySQLParser::ChangeReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterDefinition(MySQLParser::FilterDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterDbList(MySQLParser::FilterDbListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterTableList(MySQLParser::FilterTableListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterStringList(MySQLParser::FilterStringListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterWildDbTableString(MySQLParser::FilterWildDbTableStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterDbPairList(MySQLParser::FilterDbPairListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlave(MySQLParser::SlaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlaveUntilOptions(MySQLParser::SlaveUntilOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlaveConnectionOptions(MySQLParser::SlaveConnectionOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlaveThreadOptions(MySQLParser::SlaveThreadOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlaveThreadOption(MySQLParser::SlaveThreadOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupReplication(MySQLParser::GroupReplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreparedStatement(MySQLParser::PreparedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecuteStatement(MySQLParser::ExecuteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecuteVarList(MySQLParser::ExecuteVarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCloneStatement(MySQLParser::CloneStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataDirSSL(MySQLParser::DataDirSSLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSsl(MySQLParser::SslContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccountManagementStatement(MySQLParser::AccountManagementStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUser(MySQLParser::AlterUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserTail(MySQLParser::AlterUserTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUser(MySQLParser::CreateUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserTail(MySQLParser::CreateUserTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultRoleClause(MySQLParser::DefaultRoleClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRequireClause(MySQLParser::RequireClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnectOptions(MySQLParser::ConnectOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccountLockPasswordExpireOptions(MySQLParser::AccountLockPasswordExpireOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropUser(MySQLParser::DropUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant(MySQLParser::GrantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantTargetList(MySQLParser::GrantTargetListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantOptions(MySQLParser::GrantOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVersionedRequireClause(MySQLParser::VersionedRequireClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRenameUser(MySQLParser::RenameUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke(MySQLParser::RevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnTypeTo(MySQLParser::OnTypeToContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAclType(MySQLParser::AclTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetPassword(MySQLParser::SetPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleOrPrivilegesList(MySQLParser::RoleOrPrivilegesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleOrPrivilege(MySQLParser::RoleOrPrivilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantIdentifier(MySQLParser::GrantIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRequireList(MySQLParser::RequireListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRequireListElement(MySQLParser::RequireListElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrantOption(MySQLParser::GrantOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetRole(MySQLParser::SetRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleList(MySQLParser::RoleListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRole(MySQLParser::RoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableAdministrationStatement(MySQLParser::TableAdministrationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHistogram(MySQLParser::HistogramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckOption(MySQLParser::CheckOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepairType(MySQLParser::RepairTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstallUninstallStatment(MySQLParser::InstallUninstallStatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetStatement(MySQLParser::SetStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionValueNoOptionType(MySQLParser::OptionValueNoOptionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetSystemVariable(MySQLParser::SetSystemVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionValueFollowingOptionType(MySQLParser::OptionValueFollowingOptionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetExprOrDefault(MySQLParser::SetExprOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionValueList(MySQLParser::OptionValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionValue(MySQLParser::OptionValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowStatement(MySQLParser::ShowStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCommandType(MySQLParser::ShowCommandTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNonBlocking(MySQLParser::NonBlockingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromOrIn(MySQLParser::FromOrInContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInDb(MySQLParser::InDbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProfileType(MySQLParser::ProfileTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOtherAdministrativeStatement(MySQLParser::OtherAdministrativeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyCacheListOrParts(MySQLParser::KeyCacheListOrPartsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyCacheList(MySQLParser::KeyCacheListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignToKeycache(MySQLParser::AssignToKeycacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignToKeycachePartition(MySQLParser::AssignToKeycachePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCacheKeyList(MySQLParser::CacheKeyListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyUsageElement(MySQLParser::KeyUsageElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyUsageList(MySQLParser::KeyUsageListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlushOption(MySQLParser::FlushOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogType(MySQLParser::LogTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlushTables(MySQLParser::FlushTablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlushTablesOptions(MySQLParser::FlushTablesOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreloadTail(MySQLParser::PreloadTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreloadList(MySQLParser::PreloadListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreloadKeys(MySQLParser::PreloadKeysContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdminPartition(MySQLParser::AdminPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceGroupManagement(MySQLParser::ResourceGroupManagementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateResourceGroup(MySQLParser::CreateResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceGroupVcpuList(MySQLParser::ResourceGroupVcpuListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVcpuNumOrRange(MySQLParser::VcpuNumOrRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceGroupPriority(MySQLParser::ResourceGroupPriorityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceGroupEnableDisable(MySQLParser::ResourceGroupEnableDisableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterResourceGroup(MySQLParser::AlterResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetResourceGroup(MySQLParser::SetResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThreadIdList(MySQLParser::ThreadIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropResourceGroup(MySQLParser::DropResourceGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUtilityStatement(MySQLParser::UtilityStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescribeCommand(MySQLParser::DescribeCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplainCommand(MySQLParser::ExplainCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplainableStatement(MySQLParser::ExplainableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelpCommand(MySQLParser::HelpCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseCommand(MySQLParser::UseCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRestartServer(MySQLParser::RestartServerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprOr(MySQLParser::ExprOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprNot(MySQLParser::ExprNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprIs(MySQLParser::ExprIsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAnd(MySQLParser::ExprAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprXor(MySQLParser::ExprXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExprPredicate(MySQLParser::PrimaryExprPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExprCompare(MySQLParser::PrimaryExprCompareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExprAllAny(MySQLParser::PrimaryExprAllAnyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExprIsNull(MySQLParser::PrimaryExprIsNullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompOp(MySQLParser::CompOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate(MySQLParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExprIn(MySQLParser::PredicateExprInContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExprBetween(MySQLParser::PredicateExprBetweenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExprLike(MySQLParser::PredicateExprLikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExprRegex(MySQLParser::PredicateExprRegexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitExpr(MySQLParser::BitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprConvert(MySQLParser::SimpleExprConvertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprVariable(MySQLParser::SimpleExprVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprCast(MySQLParser::SimpleExprCastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprUnary(MySQLParser::SimpleExprUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprOdbc(MySQLParser::SimpleExprOdbcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprRuntimeFunction(MySQLParser::SimpleExprRuntimeFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprFunction(MySQLParser::SimpleExprFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprCollate(MySQLParser::SimpleExprCollateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprMatch(MySQLParser::SimpleExprMatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprWindowingFunction(MySQLParser::SimpleExprWindowingFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprBinary(MySQLParser::SimpleExprBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprColumnRef(MySQLParser::SimpleExprColumnRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprParamMarker(MySQLParser::SimpleExprParamMarkerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprSum(MySQLParser::SimpleExprSumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprConvertUsing(MySQLParser::SimpleExprConvertUsingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprSubQuery(MySQLParser::SimpleExprSubQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprGroupingOperation(MySQLParser::SimpleExprGroupingOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprNot(MySQLParser::SimpleExprNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprValues(MySQLParser::SimpleExprValuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprDefault(MySQLParser::SimpleExprDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprList(MySQLParser::SimpleExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprInterval(MySQLParser::SimpleExprIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprCase(MySQLParser::SimpleExprCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprConcat(MySQLParser::SimpleExprConcatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExprLiteral(MySQLParser::SimpleExprLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJsonOperator(MySQLParser::JsonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSumExpr(MySQLParser::SumExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupingOperation(MySQLParser::GroupingOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowFunctionCall(MySQLParser::WindowFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowingClause(MySQLParser::WindowingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeadLagInfo(MySQLParser::LeadLagInfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullTreatment(MySQLParser::NullTreatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJsonFunction(MySQLParser::JsonFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInSumExpr(MySQLParser::InSumExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentListArg(MySQLParser::IdentListArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentList(MySQLParser::IdentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFulltextOptions(MySQLParser::FulltextOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuntimeFunctionCall(MySQLParser::RuntimeFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeometryFunction(MySQLParser::GeometryFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimeFunctionParameters(MySQLParser::TimeFunctionParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFractionalPrecision(MySQLParser::FractionalPrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeightStringLevels(MySQLParser::WeightStringLevelsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeightStringLevelListItem(MySQLParser::WeightStringLevelListItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDateTimeTtype(MySQLParser::DateTimeTtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrimFunction(MySQLParser::TrimFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstringFunction(MySQLParser::SubstringFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(MySQLParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUdfExprList(MySQLParser::UdfExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUdfExpr(MySQLParser::UdfExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(MySQLParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserVariable(MySQLParser::UserVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSystemVariable(MySQLParser::SystemVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInternalVariableName(MySQLParser::InternalVariableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhenExpression(MySQLParser::WhenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThenExpression(MySQLParser::ThenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseExpression(MySQLParser::ElseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastType(MySQLParser::CastTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprList(MySQLParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharset(MySQLParser::CharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotRule(MySQLParser::NotRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot2Rule(MySQLParser::Not2RuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval(MySQLParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalTimeStamp(MySQLParser::IntervalTimeStampContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprListWithParentheses(MySQLParser::ExprListWithParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprWithParentheses(MySQLParser::ExprWithParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderList(MySQLParser::OrderListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrderExpression(MySQLParser::OrderExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupList(MySQLParser::GroupListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroupingExpression(MySQLParser::GroupingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannel(MySQLParser::ChannelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatement(MySQLParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(MySQLParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(MySQLParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfBody(MySQLParser::IfBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThenStatement(MySQLParser::ThenStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatementList(MySQLParser::CompoundStatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseStatement(MySQLParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(MySQLParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledBlock(MySQLParser::LabeledBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnlabeledBlock(MySQLParser::UnlabeledBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(MySQLParser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBeginEndBlock(MySQLParser::BeginEndBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledControl(MySQLParser::LabeledControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnlabeledControl(MySQLParser::UnlabeledControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopBlock(MySQLParser::LoopBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileDoBlock(MySQLParser::WhileDoBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatUntilBlock(MySQLParser::RepeatUntilBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpDeclarations(MySQLParser::SpDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpDeclaration(MySQLParser::SpDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(MySQLParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionDeclaration(MySQLParser::ConditionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpCondition(MySQLParser::SpConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSqlstate(MySQLParser::SqlstateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerDeclaration(MySQLParser::HandlerDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerCondition(MySQLParser::HandlerConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorDeclaration(MySQLParser::CursorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterateStatement(MySQLParser::IterateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeaveStatement(MySQLParser::LeaveStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetDiagnostics(MySQLParser::GetDiagnosticsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignalAllowedExpr(MySQLParser::SignalAllowedExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementInformationItem(MySQLParser::StatementInformationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionInformationItem(MySQLParser::ConditionInformationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignalInformationItemName(MySQLParser::SignalInformationItemNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignalStatement(MySQLParser::SignalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResignalStatement(MySQLParser::ResignalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignalInformationItem(MySQLParser::SignalInformationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorOpen(MySQLParser::CursorOpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorClose(MySQLParser::CursorCloseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursorFetch(MySQLParser::CursorFetchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchedule(MySQLParser::ScheduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDefinition(MySQLParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckOrReferences(MySQLParser::CheckOrReferencesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheckConstraint(MySQLParser::CheckConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableConstraintDef(MySQLParser::TableConstraintDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDefinition(MySQLParser::FieldDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnAttribute(MySQLParser::ColumnAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGcolAttribute(MySQLParser::GcolAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferences(MySQLParser::ReferencesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteOption(MySQLParser::DeleteOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyList(MySQLParser::KeyListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyPart(MySQLParser::KeyPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyListWithExpression(MySQLParser::KeyListWithExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyPartOrExpression(MySQLParser::KeyPartOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyListVariants(MySQLParser::KeyListVariantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexType(MySQLParser::IndexTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexOption(MySQLParser::IndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommonIndexOption(MySQLParser::CommonIndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVisibility(MySQLParser::VisibilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexTypeClause(MySQLParser::IndexTypeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFulltextIndexOption(MySQLParser::FulltextIndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpatialIndexOption(MySQLParser::SpatialIndexOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataTypeDefinition(MySQLParser::DataTypeDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataType(MySQLParser::DataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNchar(MySQLParser::NcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarchar(MySQLParser::VarcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNvarchar(MySQLParser::NvarcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldLength(MySQLParser::FieldLengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOptions(MySQLParser::FieldOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharsetWithOptBinary(MySQLParser::CharsetWithOptBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAscii(MySQLParser::AsciiContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnicode(MySQLParser::UnicodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWsNumCodepoints(MySQLParser::WsNumCodepointsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDatetimePrecision(MySQLParser::TypeDatetimePrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharsetName(MySQLParser::CharsetNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollationName(MySQLParser::CollationNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableOptions(MySQLParser::CreateTableOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableOptionsSpaceSeparated(MySQLParser::CreateTableOptionsSpaceSeparatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableOption(MySQLParser::CreateTableOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernaryOption(MySQLParser::TernaryOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultCollation(MySQLParser::DefaultCollationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultEncryption(MySQLParser::DefaultEncryptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultCharset(MySQLParser::DefaultCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionClause(MySQLParser::PartitionClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefKey(MySQLParser::PartitionDefKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefHash(MySQLParser::PartitionDefHashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefRangeList(MySQLParser::PartitionDefRangeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubPartitions(MySQLParser::SubPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionKeyAlgorithm(MySQLParser::PartitionKeyAlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinitions(MySQLParser::PartitionDefinitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionDefinition(MySQLParser::PartitionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionValuesIn(MySQLParser::PartitionValuesInContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionOption(MySQLParser::PartitionOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartitionDefinition(MySQLParser::SubpartitionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionValueItemListParen(MySQLParser::PartitionValueItemListParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartitionValueItem(MySQLParser::PartitionValueItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinerClause(MySQLParser::DefinerClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfExists(MySQLParser::IfExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfNotExists(MySQLParser::IfNotExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureParameter(MySQLParser::ProcedureParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameter(MySQLParser::FunctionParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollate(MySQLParser::CollateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeWithOptCollate(MySQLParser::TypeWithOptCollateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchemaIdentifierPair(MySQLParser::SchemaIdentifierPairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewRefList(MySQLParser::ViewRefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdateList(MySQLParser::UpdateListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdateElement(MySQLParser::UpdateElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharsetClause(MySQLParser::CharsetClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldsClause(MySQLParser::FieldsClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldTerm(MySQLParser::FieldTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinesClause(MySQLParser::LinesClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLineTerm(MySQLParser::LineTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserList(MySQLParser::UserListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserList(MySQLParser::CreateUserListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserList(MySQLParser::AlterUserListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserEntry(MySQLParser::CreateUserEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserEntry(MySQLParser::AlterUserEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetainCurrentPassword(MySQLParser::RetainCurrentPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiscardOldPassword(MySQLParser::DiscardOldPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplacePassword(MySQLParser::ReplacePasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser(MySQLParser::UserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLikeClause(MySQLParser::LikeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLikeOrWhere(MySQLParser::LikeOrWhereContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnlineOption(MySQLParser::OnlineOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoWriteToBinLog(MySQLParser::NoWriteToBinLogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsePartition(MySQLParser::UsePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldIdentifier(MySQLParser::FieldIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnName(MySQLParser::ColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnInternalRef(MySQLParser::ColumnInternalRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnInternalRefList(MySQLParser::ColumnInternalRefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnRef(MySQLParser::ColumnRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertIdentifier(MySQLParser::InsertIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexName(MySQLParser::IndexNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexRef(MySQLParser::IndexRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableWild(MySQLParser::TableWildContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchemaName(MySQLParser::SchemaNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSchemaRef(MySQLParser::SchemaRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureName(MySQLParser::ProcedureNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureRef(MySQLParser::ProcedureRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionName(MySQLParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionRef(MySQLParser::FunctionRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerName(MySQLParser::TriggerNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerRef(MySQLParser::TriggerRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewName(MySQLParser::ViewNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitViewRef(MySQLParser::ViewRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespaceName(MySQLParser::TablespaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTablespaceRef(MySQLParser::TablespaceRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogfileGroupName(MySQLParser::LogfileGroupNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogfileGroupRef(MySQLParser::LogfileGroupRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventName(MySQLParser::EventNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventRef(MySQLParser::EventRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUdfName(MySQLParser::UdfNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerName(MySQLParser::ServerNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServerRef(MySQLParser::ServerRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEngineRef(MySQLParser::EngineRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableName(MySQLParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilterTableRef(MySQLParser::FilterTableRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableRefWithWildcard(MySQLParser::TableRefWithWildcardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableRef(MySQLParser::TableRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableRefList(MySQLParser::TableRefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableAliasRefList(MySQLParser::TableAliasRefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterName(MySQLParser::ParameterNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabelIdentifier(MySQLParser::LabelIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabelRef(MySQLParser::LabelRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleIdentifier(MySQLParser::RoleIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleRef(MySQLParser::RoleRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPluginRef(MySQLParser::PluginRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponentRef(MySQLParser::ComponentRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResourceGroupRef(MySQLParser::ResourceGroupRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWindowName(MySQLParser::WindowNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPureIdentifier(MySQLParser::PureIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(MySQLParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(MySQLParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierListWithParentheses(MySQLParser::IdentifierListWithParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedIdentifier(MySQLParser::QualifiedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleIdentifier(MySQLParser::SimpleIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDotIdentifier(MySQLParser::DotIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUlong_number(MySQLParser::Ulong_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal_ulong_number(MySQLParser::Real_ulong_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUlonglong_number(MySQLParser::Ulonglong_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal_ulonglong_number(MySQLParser::Real_ulonglong_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(MySQLParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedLiteral(MySQLParser::SignedLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringList(MySQLParser::StringListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextStringLiteral(MySQLParser::TextStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextString(MySQLParser::TextStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextLiteral(MySQLParser::TextLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextStringNoLinebreak(MySQLParser::TextStringNoLinebreakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextStringLiteralList(MySQLParser::TextStringLiteralListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumLiteral(MySQLParser::NumLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolLiteral(MySQLParser::BoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullLiteral(MySQLParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemporalLiteral(MySQLParser::TemporalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatOptions(MySQLParser::FloatOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrecision(MySQLParser::PrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTextOrIdentifier(MySQLParser::TextOrIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleIdentifierOrText(MySQLParser::RoleIdentifierOrTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSizeNumber(MySQLParser::SizeNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParentheses(MySQLParser::ParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqual(MySQLParser::EqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionType(MySQLParser::OptionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarIdentType(MySQLParser::VarIdentTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetVarIdentType(MySQLParser::SetVarIdentTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierKeyword(MySQLParser::IdentifierKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabelKeyword(MySQLParser::LabelKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleOrIdentifierKeyword(MySQLParser::RoleOrIdentifierKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleOrLabelKeyword(MySQLParser::RoleOrLabelKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoleKeyword(MySQLParser::RoleKeywordContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace parsers
