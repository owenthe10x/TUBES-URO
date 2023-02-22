#include "Map.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

//ctor
Map::Map(int sizeX,int sizeY){
    this->sizeX = sizeX;
    this->sizeY = sizeY;
}

//dtor
Map::~Map(){

}

//Getters
Map::getSizeX(){
    return sizeX;
}
Map::getSizeY(){
    return sizeY;
}
Map::getShipsDestroyed(){
    return ShipsDestroyed;
}

//Setters
Map::setSizeX(int sizeX){
    this->sizeX = sizeX;
}
Map::setSizeY(int sizeY){
    this->sizeY = sizeY;
}
Map::setShipsDestroyed(int ShipsDestroyed){
    this->ShipsDestroyed = ShipsDestroyed;
}

//Others
Map::ShowPosition(){

}

Map::SpawnShips(){
    srand(time(NULL))
    int x,y;
    while(true){
        x = rand()%((2*getSizeX()) + 1) - getSizeX() //membuat nilai x random diantara sizeX dan (-sizeX)
        y = rand()%((2*getSizeY()) + 1) - getSizeY() //membuat nilai y random diantara sizeY dan (-sizeY)
        if (x == player.getPosition().getX() && y == player.getPosition().getY()){
            continue;
        } else {
            break;
        } // kalau x dan y sama dengan koordinat player kapal, diulang terus sampai dapet yang berbeda

    }
    
    return KapalMusuh(KapalMusuh.getID(), Coordinates(x,y),KapalMusuh.getHealth(),KapalMusuh.getCannonRange(),KapalMusuh.getCanonDamage());
    
}

