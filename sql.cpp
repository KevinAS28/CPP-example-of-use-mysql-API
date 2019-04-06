
#include <mysql/mysql.h>
#include <cstdio>
//#include "mysqldb.hpp"
int main()
{

 MYSQL *conn = mysql_init(NULL);

 if (!(mysql_real_connect(conn, "127.0.0.1", "root", "", NULL, 0, NULL, 0)))
 {
 	printf("Sorry\n");
 }
 if (mysql_query(conn, "CREATE DATABASE REMOVEME"))
 {

 }
 
 //sql_connection obj("127.0.0.1", "root", "");
 
 printf("Its work");

}