#ifndef __MAP__HPP__
#define __MAP__HPP__

#pragma once
#include "KapalPlayer.cpp"


class Map{

protected:
   int sizeX;
   int sizeY;
   int ShipsDestroyed;

public:
    // constructor Map
    Map(int,int);

    // deletor Map
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
    Kapal SpawnShips(int,int,int,int,int,int);
    void ShowPosition(Kapal,Kapal);

};

#endif