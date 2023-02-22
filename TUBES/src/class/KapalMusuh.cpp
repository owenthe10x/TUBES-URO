#include "KapalMusuh.hpp"
#include <iostream>
using namespace std;

// dtor
KapalMusuh::~KapalMusuh() {}

// others
void KapalMusuh::attackPlayer(Kapal player) // parameternya kapal player
{
    int dx = position.getX() - player.getPosition().getX(); // diukur jarak x antara musuh dan player
    int dy = position.getY() - player.getPosition().getY(); // diukur jarak y antara musuh dan player
    int dist = sqrt(dx * dx + dy * dy);                     // diukur jarak real antara player dan musuh dengan rumus pythagoras
    if (dist <= canonRange)                                 // kalau player dalam range shooting musuh, maka akan ditembak secara otomatis
    {
        player.decreaseHealth(canonDamage);
        cout << "Musuh menyerang kapal dan mengurangi health kapal menjadi " << player.getHealth() << endl;
    }
}
