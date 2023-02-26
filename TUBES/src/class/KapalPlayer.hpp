#include "Kapal.cpp"
#include "KapalMusuh.cpp"
#include "Coordinates.cpp"

class KapalPlayer : public Kapal
{
    public:
    //ctor
    using Kapal::Kapal;

    //dtor
    ~KapalPlayer();

    //others
    void kapalPlayer::Shoot(KapalMusuh);
    void KapalPlayer::Move();
    void KapalPlayer::getDistance();
    void start();

};

