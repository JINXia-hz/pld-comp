grammar ifcc;

axiom : prog EOF ;

prog : 'int' 'main' '(' ')' '{' statement* '}' ;

statement 
    : RETURN expr ';'     # ReturnStmt
    | 'int' VAR ';'       # Declaration
    | VAR '=' expr ';'    # Assignment
    ;

expr 
    : '(' expr ')'              # ParExpr      
    | CONST                     # ConstExpr    
    | VAR                       # VarExpr      
    | VAR '[' CONST ']'         # ArrayExpr    
    | expr (OM=('*'|'/')) expr  # MultExpr     
    | expr (OA=('+'|'-')) expr  # AddExpr      
    ;


RETURN : 'return' ;
CONST  : [0-9]+ ;
VAR    : [a-zA-Z_] [a-zA-Z0-9_]* ;

COMMENT   : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' (~'\n')* '\n' -> skip ;
WS        : [ \t\r\n]+ -> channel(HIDDEN);