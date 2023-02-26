#include "KapalPlayer.hpp"
#include "KapalMusuh.cpp"
#include "Kapal.cpp"
#include "Coordinates.cpp"
#include <iostream>

using namespace std;

//dtor 
class KapalPlayer
    public:

    //dtor
    KapalPlayer::~KapalPlayer(){

    };
    
    //lainnya
    void kapalPlayer::Shoot(KapalMusuh)// shoot kapal player
    {
        int dx = position.getX() - Musuh.getPosition().getX(); // diukur jarak x antara player dan musuh
        int dy = position.getY() - Musuh.getPosition().getY(); // diukur jarak y antara player dan musuh
        int dist = sqrt(dx * dx + dy * dy);                     // diukur jarak real antara player dan musuh dengan rumus pythagoras
        if (dist <= canonRange)                                 // kalau musuh dalam range shooting player, maka akan ditembak secara otomatis
        {
            player.decreaseHealth(canonDamage);
            cout << "Musuh menyerang kapal dan mengurangi health kapal menjadi " << player.getHealth() << endl;
        }
    };
    void KapalPlayer::Move(){ // arah gerak kapal player
        int arah;
        cout<<" Arah Gerak"<<endl;
        cout<<"1. kiri"
        cout<<"2. kanan"
        cout<<"3. atas"
        cout<<"4. bawah"
        cin>>arah;

        if (arah==1){
            position.getX() -= 1;

        }
        if (arah==2){
            position.getX() += 1;

        }
        if (arah==3){
            position.getY() += 1;

        }
        if (arah==4){
            position.getX() -= 1;

        }
    };

    void KapalPlayer::getDistance() // mengetahui jarak kapal player dengan musuh
    {
    int dx = position.getX() - Musuh.getPosition().getX(); // diukur jarak x antara player dan musuh
    int dy = position.getY() - Musuh.getPosition().getY(); // diukur jarak y antara player dan musuh
    int dist = sqrt(dx * dx + dy * dy);
    cout << "jarak dengan musuh"<< dist;
    };

    void start() // Kapal Player mulai perang
    {
        int a = 5
        while (a<8){
            if (health > 0){
                int pilihan;
                cout<<"Pilih "<<endl;
                cout<<"1. move"<<endl;
                cout<<"2. shoot"<<endl;
                cout<<"3. stay"<<endl;
                cin<<pilihan;
                
                if (pilihan==1){
                    KapalPlayer::move();
                }
                if (pilihan==2){
                    KapalPlayer::Shoot();
                    KapalPlayer::getDistance();
                }
                if (pilihan==3){
                    break;
                }
            }

            if (health <= 0){
                a = 10;
            }
                
        }
    };
