#include <iostream>
#include "antlr4-runtime/antlr4-runtime.h"
#include "antlr4-runtime/PDFLlexer.h"
#include "antlr4-runtime/PDFLparser.h"
#include "antlr4-runtime/ParserVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    
    std::ifstream stream;
    stream.open("input.txt");
    
    ANTLRInputStream input(stream);
    PDFLlexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    
    PDFLparser parser(&tokens);  

    PDFLparser::FileContext* tree = parser.pgm();
    ParserVisitor visitor;
    Scene scene = visitor.visitFile(tree);
    scene.draw();
    return 0;
}