#include "Map.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

//ctor
Map::Map(int sizeX,int sizeY){
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->ShipsDestroyed = 0;
}

//dtor
Map::~Map(){

}

//Getters
int Map::getSizeX(){
    return sizeX;
}
int Map::getSizeY(){
    return sizeY;
}
int Map::getShipsDestroyed(){
    return ShipsDestroyed;
}

//Setters
void Map::setSizeX(int sizeX){
    this->sizeX = sizeX;
}
void Map::setSizeY(int sizeY){
    this->sizeY = sizeY;
}
void Map::setShipsDestroyed(int ShipsDestroyed){
    this->ShipsDestroyed = ShipsDestroyed;
}

//Others
void Map::ShowPosition(Kapal musuh, Kapal player){
    cout << "Posisi Kapal Musuh: (" << musuh.getPosition().getX() << "," << musuh.getPosition().getX() <<") \n";
    cout << "Posisi Kapal Player: (" << player.getPosition().getX() << "," << musuh.getPosition().getX() <<")";
}

