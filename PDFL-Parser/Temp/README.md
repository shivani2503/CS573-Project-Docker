# PDFG-Parser
**************SAMPLE 1****************
for(i=0;i<N;i++)
{ A[i];}

A(i) = {0 < i < N}:





*************************************
for(i=0;i<N;i++)
{
 A[i] = B[i]+c;
}

A(i) = {0 < i < N}:
B(i) = {0 < i < N}:
 A(i) = B(i) + c;

 S(i) = {0<i<N} : A(i) = B(i) + c;




**************************************

pgm: expr_list EOF ;
expr_list: expr;
expr: set_expr
set_expr: IDENT LPAREN tuple_list RPAREN EQ LBRACE constr_list RBRACE COLON stmt_list;

pgm: expr_list EOF ;
expr_list: expr;
expr: set_expr
set_expr: IDENT LPAREN tuple_list RPAREN EQ LBRACE constr_list RBRACE COLON stmt_list;
tuple_list: IDENT | IDENT COMMA tuple_list;
constr_list: constraint | constraint CARET constr_list;
stmt_list: stmt | stmt COMMA stmt_list