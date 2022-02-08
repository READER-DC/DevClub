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
    ensureIsAlive();
    if ( this->hitPoints + hp >= this->hitPointsLimit ) {
      this->hitPoints = this->hitPointsLimit;
    } else {
      this->hitPoints += hp;
    }
}
void Unit::takeDamage(int dmg){
    ensureIsAlive();
    if (this->damage >= this->hitPoints ) {
      this->hitPoints = 0;
    } else {
      this->hitPoints -= dmg;
    }
}

void Unit::attack(Unit& enemy){
    ensureIsAlive();
    enemy.takeDamage(this->damage);
    enemy.counterAttack(*this);
}
void Unit::counterAttack(Unit& enemy){
    ensureIsAlive();
    enemy.takeDamage(this->damage / 2);

}


std::ostream& operator<<(std::ostream& out, const Unit& unit){
    out << unit.getName()
        << " (" << unit.getHitPoints() << ")";

    return out;

}

void Unit::ensureIsAlive() {
   if ( hitPoints == 0 ) {
       throw UnitIsDead();
   }
}
