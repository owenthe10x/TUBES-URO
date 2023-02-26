#include "Kapal.hpp"

//ctor
Kapal::Kapal(int id, Coordinates position, int health, int canonRange, int canonDamage){
    this->id = id;
    this->position = position;
    this->health = health;
    this-> canonRange = canonRange;
    this->canonDamage = canonDamage;
}

//dtor
Kapal::~Kapal(){}

//Getters
int Kapal::getID(){
    return id;
}

Coordinates Kapal::getPosition(){
    return position;
}

int Kapal::getHealth(){
    return health;
}

int Kapal::getCanonRange(){
    return canonRange;
}

int Kapal::getCanonDamage(){
    return canonDamage;
}

//Setters
void Kapal::setID(int id){
    this->id = id;
}

void Kapal::setPosition(const Coordinates& position){
    this->position = position;
}

void Kapal::setHealth(int health){
    this->health = health;
}

void Kapal::setCanonRange(int canonRange){
    this->canonRange = canonRange;
}

void Kapal::setCanonDamage(int canonDamage){
    this->canonDamage = canonDamage;
}

//Others
bool Kapal::isDestroyed(){
    if(health <= 0){
        return true;
    }
    return false;
}

void Kapal::decreaseHealth(int damage){
    this->health -= damage;
    if(isDestroyed()){
        this->health = 0;
    }
}