lexer grammar PDFLlexer;


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
UNION : [uU] [nN] [iI] [oO] [nN];
INVERSE : [iI] [nN] [vV] [eE] [rR] [sS] [eE];
EXISTS : [eE] [xX] [iI] [sS] [tT] [sS];
OR : [oO][nN];
WAND : [aA][nN][dD];                            /*produces the word and*/
WS : [ \t\n\r] + -> skip;
ID: IDENT;
INT: DIGIT;
UMINUS: DASH;
