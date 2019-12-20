#include <iostream>
#include "antlr4-runtime.h"
#include "PDFLGrammarLexer.h"
#include "PDFLGrammarParser.h"


using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    
    //std::ifstream stream;
    //stream.open("input.txt");
    
    ANTLRInputStream input("Idns,0<=i<N ^ 0<=j<M");
    PDFLGrammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    
    PDFLGrammarParser parser(&tokens);  

    PDFLGrammarParser::PgmContext* tree = parser.pgm();
    //ParseTreeVisitor visitor;
    //Scene scene = visitor.visitFile(tree);
    //scene.draw();
    return 0;
}
