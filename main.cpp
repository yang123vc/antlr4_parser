#include <iostream>
#include <string>

#include "mysql/MySQLLexer.h"
#include "mysql/MySQLParser.h"
#include "mysql/MySQLParserBaseListener.h"
#include "mysql/MySQLRecognizerCommon.h"

#include "visitor/QueryListener.h"

using namespace std;

int main(int argc, char *argv[]) {
//    string sample = R"(#comment
//select table_a.*, d_b.b_col_1 from table_a,(select b_col_1 from table_b) as  d_b,(select c_col_1 from table_c)  d_c
//)";
//    string sample = R"(select a, derive_2.col_b from table_1, (select col_b from table_2) derive_2)";
//    string sample = R"(
//select *
//    from (select *
//        from (select col1 from real_table) di
//    ) do
//)";
//    string sample = "select *,1, col1, sleep(4),table_a.* from table_a";
string sample = "select 1, (select host from db), user from (select * from mysql.user) a where user in (select user from host)";
    antlr4::ANTLRInputStream input(sample);
    parsers::MySQLLexer lexer(&input);
    antlr4::CommonTokenStream tokenStream(&lexer);
    parsers::MySQLParser parser(&tokenStream);


    antlr4::tree::ParseTree *tree = parser.query();
    antlr4::tree::ParseTreeWalker walker;
    walker.walk(new QueryListener, tree);
    return 0;
}

