#ifndef __MUSUH__HPP__
#define __MUSUH__HPP__
#pragma once
#include "Kapal.cpp"

class KapalMusuh : public Kapal
{
private:
    static int shipsCreated;
public:
    // ctor
    KapalMusuh(int seedX, int seedY);

    // dtor
    ~KapalMusuh();

    // others
    void attackPlayer(Kapal*); // fungsi menyerang kapal player
};

#endif