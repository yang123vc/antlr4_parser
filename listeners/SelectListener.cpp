//
// Created by xfwduke on 7/31/19.
//

#include "SelectListener.h"

MySqlParseService::SelectResult &&SelectListener::get_result() {
    return std::move(result);
}

void SelectListener::exitSelectStatement(parsers::MySQLParser::SelectStatementContext *context) {
    result.set_signature(get_signature());
}
