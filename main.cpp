#include <iostream>
#include <string>

#include "mysql/MySQLLexer.h"
#include "mysql/MySQLParser.h"
#include "mysql/MySQLParserBaseListener.h"
#include "mysql/MySQLRecognizerCommon.h"

#include "visitor/CreateTableListener.h"

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
//string sample = "select 1,sleep(10),1.2,user.user, (select host from db),now(), user from (select * from mysql.user) a where user in (select user from host)";
//    string sample = "update table_a set col1=10 where col2=2";
//    string sample = "insert into table_a select col1 from table_b";
    string sample = R"(
create table `task` (
`id` bigint(20) unsigned not null auto_increment ,
`uid` bigint(20) unsigned not null comment 'user id',
`updated_at` int(11) unsigned default null,
primary key(`id`),
key `uid`(`uid`, `task_id`)
)

engine=innodb

default charset=utf8mb4 comment='shard_key="uid"'
/*!50100
partition by list(crc32(uid)%2)
(partition pt0 values in (0) comment='comment for pt0' engine=spider,
partition pt1 values in (1) comment='comment for pt1' engine=spider)
*/
/*use less*/
)";
    antlr4::ANTLRInputStream input(sample);
    parsers::MySQLLexer lexer(&input);
    lexer.serverVersion=60800;
    antlr4::CommonTokenStream tokenStream(&lexer);
    parsers::MySQLParser parser(&tokenStream);

//    parser.serverVersion = 60800;
    antlr4::tree::ParseTree *tree = parser.query();
    antlr4::tree::ParseTreeWalker walker;
    walker.walk(new CreateTableListener, tree);
    return 0;
}

