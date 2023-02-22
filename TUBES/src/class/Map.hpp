#ifndef __MAP__HPP__
#define __MAP__HPP__

#include "Coordinates.cpp"
#include "KapalMusuh.cpp"
#include "KapalPlayer.cpp"

class Map{

protected:
   int sizeX;
   int sizeY;
   int ShipsDestroyed;

public:
    // ctor
    Map(int,int);

    // dtor
    ~Map();

    // Getters
    int getSizeX();
    int getSizeY();
    int getShipsDestroyed();

    // Setters
    void setSizeX(int);
    void setSizeY(int);
    void setShipsDestroyed(int);

    // Others
    Kapal SpawnShips();
    void ShowPosition();

};

#endif