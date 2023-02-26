#pragma once
#include "KapalMusuh.cpp"

class KapalPlayer : public Kapal
{
    public:
    //ctor
    KapalPlayer();

    //dtor
    ~KapalPlayer();

    //others
    void Shoot(Kapal*);
    void Move();
    int getDistance(Kapal);
    void start();
    bool outOfBounds(Coordinates);

};

