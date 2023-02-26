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

// Kapal Map::SpawnShips(int PosisiPlayerX, int PosisiPlayerY, int ID, int Health, int cannonRange, int cannonDamage ){
//     // Parameternya posisi player dan atribute kapal musuh yang bakal di spawn
//     int x,y;
//     while(true){
//         srand(time(NULL));
//         x = rand()%((2*getSizeX()) + 1) - getSizeX(); //membuat nilai x random diantara sizeX dan (-sizeX)
//         y = rand()%((2*getSizeY()) + 1) - getSizeY(); //membuat nilai y random diantara sizeY dan (-sizeY)
//         if (x == PosisiPlayerX && y == PosisiPlayerY){
//             continue;
//         } else {
//             break;
//         } // kalau x dan y sama dengan koordinat player kapal, diulang terus sampai dapet yang berbeda

//     }
//     return KapalMusuh(ID, Coordinates(x,y),Health,cannonRange,cannonDamage);
    
// }

