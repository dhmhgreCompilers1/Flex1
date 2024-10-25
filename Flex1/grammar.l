
%option noyywrap

%{
int foo();


%}


%%

[a-zA-Z]+ printf("Desmeumeni Leksi: %s\n", yytext);
 
[0-9]+ {printf("Numero: %s\n", yytext);
		 int i= atoi(yytext);


		}
[ \t\n] {} 

%%


int foo(){return 1;}