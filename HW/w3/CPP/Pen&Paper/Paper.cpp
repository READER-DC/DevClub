#include "Paper.h"

Paper::Paper(int maxSymbols){
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
    this->content = content;
}
Paper::~Paper(){
    
}

int Paper::getMaxSymbols() const{
    return this->maxSymbols;
}
int Paper::getSymbols() const{
    return this->symbols;
}

void Paper::addContent(const std::string& message){
    int futureContent = this->symbols + message.size();
    if ( symbols >= this->maxSymbols) {
        throw OutOfSpace();
    }
    
    if ( futureContent > this->maxSymbols ) {
        this->content.append(message.substr(0, this->maxSymbols - this->symbols));
        this->symbols = futureContent - this->maxSymbols;
    } else {
        this->content.append(message);
    }
}
void Paper::show() const{
    std::cout<< this-> content <<std::endl;
}
