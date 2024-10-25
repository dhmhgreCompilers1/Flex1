
#include <cstdio>
#include "MyHeader.h"
#include <string>
extern FILE *yyin;
void main(int argc,char**argv)
{

	//fopen_s(&yyin,"\\Testbench\\test.txt", "r");
	fopen_s(&yyin, argv[1], "r");
	int i = 0;
	i++;	
	yylex();
	foo();
}
