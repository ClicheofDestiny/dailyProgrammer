#include <iostream>
#include <string>

using namespace std;

int main (){
    cout << "Yo, here's a calculator for exponentials. Input formate <num> <powernum>" << endl;
    int num;
    int pow;
    long newNum;
    while(true){
       cin >> num >> pow;
       newNum = 1;
        while(pow > 0){
            newNum *= num;
            pow--;
        }
        cout << "result is " << newNum << endl;
    }


}
