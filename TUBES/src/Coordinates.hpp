#ifndef __COORDINATES__HPP__
#define __COORDINATES__HPP__
#pragma once
class Coordinates{
private:
    int x;
    int y;
public:
    Coordinates();

    Coordinates(int, int);

    Coordinates(const Coordinates&);
    
    ~Coordinates();

    int getX();

    int getY();

    void setX(int);

    void setY(int);
};

#endif