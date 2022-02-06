#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg){
    this->damage = dmg;
    this->hitPoints = hp;
    this->hitPointsLimit = hp;
    this->name = name;
    
}
Unit::~Unit(){
    
}

int Unit::getDamage() const{
    return this->damage;
}
int Unit::getHitPoints() const{
    return this->hitPoints;
}
int Unit::getHitPointsLimit() const{
    return this->hitPointsLimit;
}
const std::string& Unit::getName() const{
    return this->name;
}

void Unit::addHitPoints(int hp){
    
}
void Unit::takeDamage(int dmg){
    
}

void Unit::attack(Unit& enemy){
    
}
void Unit::counterAttack(Unit& enemy){
    
}


std::ostream& operator<<(std::ostream& out, const Unit& unit){
    
}

void Unit::ensureIsAlive() {
   if ( hitPoints == 0 ) {
       throw UnitIsDead();
   }
}

void Unit::addHitPoints(int hp) {
   ensureIsAlive();

   ...
}

void Unit::takeDamage(int dmg) {
   ensureIsAlive();

  ...
}