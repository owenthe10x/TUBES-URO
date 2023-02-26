#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    //cout << rand() << endl;
    cout << (rand() % (30 + 1 - (-30))) + (-30)<< endl;
    cout << (rand() % (30 + 1 - (-30))) + (-30)<< endl;
    cout << (rand() % (30 + 1 - (-30))) + (-30)<< endl;
    cout << (rand() % (30 + 1 - (-30))) + (-30)<< endl;
    return 0;
}