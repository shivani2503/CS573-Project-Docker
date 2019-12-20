grammar PDFLGrammar;


pgm: expr_list EOF { std::cout<<"Parsed successfully\n";} ;

expr_list: dense_expr
{std::cout<<"exp parsed successfully\n";};

dense_expr: IDENT COMMA constraint_list
{std::cout<<"dense_expr parsed successfully\n";};

constraint_list: constraint {std::cout<<"constraint parsed successfully\n";}
                | constraint SEPARATOR constraint_list {std::cout<<"constraint_list form parsed successfully\n";}
                | ;

constraint: alpha_numeric relation_operator alpha_numeric relation_operator alpha_numeric;

alpha_numeric: DIGIT {std::cout<<"alphabet parsed successfully\n";}
             | IDENT {std::cout<<"number parsed successfully\n";}
             ;

//ID_literal: QUOTES ID QUOTES ;

relation_operator: GT {std::cout<<"relation operator parsed successfully\n";}
                | GTE {std::cout<<"relation operator parsed successfully\n";}
                | LT  {std::cout<<"relation operator parsed successfully\n";}
                | LTE  {std::cout<<"relation operator parsed successfully\n";}
                | EQ {std::cout<<"relation operator parsed successfully\n";};


//expr: IDENT { std::cout<<"Parsed successfully\n";} | ;
/*stmt : IDENT LBRACKET IDENT RBRACKET EQ IDENT LBRACKET IDENT RBRACKET PLUS IDENT;

expr_list: expr | expr SEMI expr ;
expr: set_expr;
set_expr: IDENT LPAREN IDENT RPAREN EQ LBRACE constr_list RBRACE COLON stmt_list;
stmt_list : stmt;
constr_list : constr | constr AND constr ;
constr : IDENT constr_symbol IDENT constr_symbol IDENT | ;
stmt : IDENT LBRACKET IDENT RBRACKET EQ IDENT LBRACKET IDENT RBRACKET PLUS IDENT | ;
constr_symbol : LT | GT | LTE | GTE ; */

//TOKENS

DIGIT:    [0-9]+;
/*IDENT    [a-zA-Z][a-zA-Z0-9'_]**/
IDENT: [a-zA-Z'_]?[a-zA-Z'$]+[a-zA-Z0-9'$_]*;
/*catches invalid identifiers*/
INVALID_IDENT : [_$]*[a-zA-Z'_]?[a-zA-Z'$]+[a-zA-Z0-9'$_]*;
PLUS : '+';
DASH : '-';
STAR : '*';
LBRACE : '{';
RBRACE : '}';
LBRACKET : '[';
RBRACKET : ']';
LPAREN : '(';
RPAREN : ')';
COMMA : ',';
COLON : ':';
SEMI : ';';
EQ : '=';
LT : '<';
GT : '>';
LTE : '<=';
GTE : '>=';
ARROW : '->';
AND : '&&';
SEPARATOR: '^';
UNION : [uU] [nN] [iI] [oO] [nN];
INVERSE : [iI] [nN] [vV] [eE] [rR] [sS] [eE];
EXISTS : [eE] [xX] [iI] [sS] [tT] [sS];
OR : [oO][nN];
WAND : [aA][nN][dD];                            /*produces the word and*/
WS : [ \t\n\r] + -> skip;
ID: IDENT;
INT: DIGIT;
UMINUS: DASH;
QUOTES: '"';