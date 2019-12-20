parser grammar PDFLparser;

options {
    tokenVocab = PDFLlexer;
}

@parser::members {
/* public parser declarations/members section */
bool myAction() { return true; }
bool doesItBlend() { return true; }
void cleanUp() {}
void doInit() {}
void doAfter() {}
}

pgm: expr_list EOF ;
expr_list: expr;
expr: IDENT;
