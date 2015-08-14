#include <iostream>
#include <string>

using namespace std;


int main(){

    cout << "Think of a number between 1-100, and I'll guess it!" << endl;
    cout << "press 'h' for higher, 'l' for lower, 'y' for yes" << endl;
    int ceil = 101;
    int floor = 0;
    int guess = 50;
    bool won = false;
    char response;

    while (!won){

        cout << "is it " << guess << "?" << endl;

        cin >> response;
        switch (response){
        case 'l':
            ceil = guess;
            guess = (ceil+floor)/2;
            break;
        case 'h':
            floor = guess;
            guess = (ceil+floor)/2;
            break;
        case 'y' :
            cout << "yeeeaaah, toldya bitch!" << endl;
            won = true;
            break;
        }

    }

    return 0;
}
