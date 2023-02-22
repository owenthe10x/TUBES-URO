#ifndef __MUSUH__HPP__
#define __MUSUH__HPP__

#include "Kapal.cpp"
#include "Coordinates.cpp"

class KapalMusuh : public Kapal
{
public:
    // ctor
    using Kapal::Kapal;

    // dtor
    ~KapalMusuh();

    // others
    void attackPlayer(Kapal); // fungsi menyerang kapal player
};

#endif