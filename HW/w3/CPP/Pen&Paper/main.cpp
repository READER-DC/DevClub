#include"Pen.h"
#include "Paper.h"

int main () {
    
    Pen pen;
    Paper paper;

    pen.write(paper, "Hello, world!");
    paper.show();
}