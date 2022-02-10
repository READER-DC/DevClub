#include "Pen.h"

Pen::Pen(int inkCapacity)
{
    this->inkAmount = 4096;
    this->inkCapacity = inkCapacity;
}
Pen::~Pen()
{
    
}

int Pen::getInkAmount() const
{
    return this->inkAmount;
}
int Pen::getInkCapacity() const
{
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message)
{
    
    if ( inkAmount <= 0 ) 
    {
        throw OutOfInk();
    }
    if ( message.size() >= this->inkAmount ) 
    {
        paper.addContent(message.substr(0, this->inkAmount));
        this->inkAmount = 0;
    } else 
    {
        paper.addContent(message);
        this->inkAmount -= message.size();
    }
}
void Pen::refill()
{
    this->inkAmount = this->inkCapacity;
}
