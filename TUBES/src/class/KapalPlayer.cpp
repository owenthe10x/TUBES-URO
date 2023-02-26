#include "KapalPlayer.hpp"


KapalPlayer::KapalPlayer():Kapal(0, Coordinates(0,0), 100, 5, 10){}
    
KapalPlayer::~KapalPlayer(){}

void KapalPlayer::Move(){
    bool flag = false;
    Coordinates newPos(getPosition().getX(), getPosition().getY());
    int arah;

    while(!flag){
        cout<<"Pilih arah Gerak: "<<endl;
        cout<<"1. kiri"<<endl;
        cout<<"2. kanan"<<endl;
        cout<<"3. atas"<<endl;
        cout<<"4. bawah"<<endl;
        cout << "Input: ";
        cin >> arah;
        switch (arah)
        {
        case 1:
            newPos.setY(getPosition().getX() - 1);
            break;
        case 2:
            newPos.setX(getPosition().getX() + 1);
            break;
        case 3:
            newPos.setY(getPosition().getY() + 1);
            break;
        case 4:
            newPos.setX(getPosition().getY() - 1);
            break;
        default:
            break;
        }

        if(outOfBounds(newPos)){
            cout << "Tidak dapat bergerak ke arah tersebut karena akan melewati batas!" << endl;
        }else{
            setPosition(newPos);
            flag = true;
        }
    }
    
}

void KapalPlayer::Shoot(Kapal* enemy){
    enemy->setHealth(enemy->getHealth() - this->getCanonDamage());
}

int KapalPlayer::getDistance(Kapal enemy){
    int deltaX = abs(this->getPosition().getX() - enemy.getPosition().getX());
    int deltaY = abs(this->getPosition().getY() - enemy.getPosition().getY());

    if(deltaX >= deltaY){
        return deltaX;
    }
    return deltaY;
}

bool KapalPlayer::outOfBounds(Coordinates pos){
    if(pos.getX() > 30 || pos.getY() < -30 || pos.getY() > 30 || pos.getY() < -30){
        return true;
    }
    return false;
}















