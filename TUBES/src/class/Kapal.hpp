#ifndef __KAPAL__HPP__
#define __KAPAL__HPP__

#include "Coordinates.cpp"

class Kapal{
protected:
    int id;
    Coordinates position;
    int health;
    int canonRange;
    int canonDamage;

public: 
    //ctor
    Kapal(int, Coordinates, int, int, int);

    //dtor
    ~Kapal();

    //Getters
    int getID();
    Coordinates getPosition();
    int getHealth();
    int getCanonRange();
    int getCanonDamage();

    //Setters
    void setID(int);
    void setPosition(const Coordinates&);
    void setHealth(int);
    void setCanonRange(int);
    void setCanonDamage(int);

    //Others
    bool isDestroyed();
    void decreaseHealth(int);
};

#endif