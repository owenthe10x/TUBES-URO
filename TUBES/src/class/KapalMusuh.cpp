#include "KapalMusuh.hpp"
#include <iostream>
using namespace std;

int KapalMusuh::shipsCreated = 1;

KapalMusuh::KapalMusuh(int seedX, int seedY):Kapal(KapalMusuh::shipsCreated + 1, Coordinates(seedX, seedY), 50, 3, 10){
    // srand(time(0));
    // setPosition(Coordinates((rand() % (30 + 30 + 1)) - 30, (rand() % (30 + 30 + 1)) - 30));
    KapalMusuh::shipsCreated++;
}
// dtor
KapalMusuh::~KapalMusuh(){}

// others
void KapalMusuh::attackPlayer(Kapal* player) // parameternya kapal player
{
    int dx = abs(position.getX() - player->getPosition().getX()); // diukur jarak x antara musuh dan player
    int dy = abs(position.getY() - player->getPosition().getY()); // diukur jarak y antara musuh dan player
    //int dist = sqrt(dx * dx + dy * dy);                     // diukur jarak real antara player dan musuh dengan rumus pythagoras
    if (dx <= canonRange && dy <=canonRange)                                 // kalau player dalam range shooting musuh, maka akan ditembak secara otomatis
    {
        player->decreaseHealth(canonDamage);
        cout << "Musuh menyerang kapal dan mengurangi health kapal menjadi " << player->getHealth() << endl;
    }
}
