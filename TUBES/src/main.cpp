#include "Map.cpp"
#include <iostream>
#include<array> // for array, at()
#include<tuple> // for get()
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    // Inisialisasi
    srand(time(NULL));
    Map world(30, 30); //Pembuatan map
    KapalPlayer Player; //Pembuatan player
    array<KapalMusuh, 4> enemies = {KapalMusuh(0,0), KapalMusuh(0,0), KapalMusuh(0,0), KapalMusuh(0,0)}; //Pembuatan Musuh
    int x, y;
    for(int i = 0; i < 4; i++){
        x = (rand() % (30 + 30 + 1)) - 30;
        y = (rand() % (30 + 30 + 1)) - 30;
        enemies[i] = KapalMusuh(x, y);
        //cout << "X: " << enemies[i].getPosition().getX() << "Y: " << enemies[i].getPosition().getY() << endl;
    }
    // enemies[1] = KapalMusuh();
    // cout << "X: " << enemies[1].getPosition().getX() << "Y: " << enemies[1].getPosition().getY() << endl;

    // enemies[2] = KapalMusuh();
    //     cout << "X: " << enemies[2].getPosition().getX() << "Y: " << enemies[2].getPosition().getY() << endl;

    

    cout << "Amount of enemies: " << sizeof(enemies)/sizeof(enemies[0]) << endl;
    int enemiesNum;
    int count2;
    cout << "Game START!" << endl;
    while(!Player.isDestroyed()){
        
        //Player phase
        int choice = 0;
        cout << "Apa yang ingin kapten lakukan?\n1) Move\n2) Attack\n3) Stay\n4) Show Positions\n5) Get Distance" << endl;
        cout << "Input: ";
        while(choice > 5 || choice < 1){
            cin >> choice;
        }
        
        if(choice == 4 || choice == 5){
            switch(choice)
            {
                case 4:
                    cout << "Posisi kapten sedang berada di koordinat: (" << Player.getPosition().getX() << ", " <<  Player.getPosition().getY() << ")" << endl;
                    for(int i = 0; i < sizeof(enemies)/sizeof(enemies[0]); i++){
                        //cout << "Masuk" << endl;
                        if(enemies[i].getID() != 0){
                            cout << "Sebuah kapal musuh berada pada koordinat: (" << enemies[i].getPosition().getX() << ", " <<  enemies[i].getPosition().getY() << ")" << endl;
                        }          
                    }
                    break;
                default:
                    cout << "Masuk" << endl;
                    for(int i = 0; i < sizeof(enemies)/sizeof(enemies[0]); i++){
                        if(enemies[i].getID() != 0){
                            cout << "Jarak dengan sebuah kapal musuh adalah: " << Player.getDistance(enemies[i]) << endl;
                        }          
                    }
                    break;
            }
        }else{
            switch (choice)
            {
            case 1:
                Player.Move();
                break;
            case 2:
                //Check for enemies in area
                count2 = 0;
                for(int i = 0; i < sizeof(enemies)/sizeof(enemies[0]); i++){
                    if(enemies[i].getID() != 0 && Player.getDistance(enemies[i]) <= Player.getCanonRange()){
                        count2++;
                        Player.Shoot(&enemies[i]);
                        cout << "Sebuah kapal musuh berhasil tertembak!" << endl;
                        cout << "Sisa health dari kapal musuh tersebut adalah: " << enemies[i].getHealth() << endl;
                    }
                    
                }

                if(count2 == 0){
                    cout << "Tidak dapat menembak karena tidak ada musuh yang berada dalam range canon!" << endl;
                }
                break;
            default:
                break;
            }

            //Check for deaths
            for(int i = 0; i < sizeof(enemies)/sizeof(enemies[0]); i++){
                if(enemies[i].getID() != 0 && enemies[i].getHealth() <= 0){
                    enemies[i].setID(0);
                    world.setShipsDestroyed(world.getShipsDestroyed() + 1);
                }
            }

            //Check remaining enemies
            int count = 0;
            for(int i = 0; i < sizeof(enemies)/sizeof(enemies[0]); i++){
                if(enemies[i].getID() != 0){
                    count++;
                }
            }

            //Spawn if empty
            if(count <= 0){
                for(int i = 0; i < 4; i++){
                    x = (rand() % (30 + 30 + 1)) - 30;
                    y = (rand() % (30 + 30 + 1)) - 30;
                    enemies[i] = KapalMusuh(x,y);
                }
                cout << "New enemies have been spawned!" << endl;
                count = 4;
            }

            //Enemy move
            for(int i = 0; i < sizeof(enemies)/sizeof(enemies[0]); i++){
                enemies[i].attackPlayer(&Player);
            }
        }

        cout << endl << endl;
        
    }

    cout << "Game Over!" << endl;
    cout << "Kapten berhasil menghancurkan " << world.getShipsDestroyed() << " kapal musuh!" << endl;


    
    return 0;
}