#include "Coordinates.hpp"
#include <iostream>
using namespace std;

Coordinates::Coordinates(){
    this->x = 0;
    this->y = 0;
}

Coordinates::Coordinates(int x, int y){
    this->x = x;
    this->y = y;
}

Coordinates::Coordinates(const Coordinates& other){
    this->x = other.x;
    this->y = other.y;
}
    
Coordinates::~Coordinates(){}

int Coordinates::getX(){
    return x;
}

int Coordinates::getY(){
    return y;
}

void Coordinates::setX(int x){
    this->x = x;
}

void Coordinates::setY(int y){
    this->y = y;
}