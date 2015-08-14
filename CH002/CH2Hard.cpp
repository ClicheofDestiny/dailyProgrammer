
#include <iostream>
#include <ctime>
#include <fstream>


using namespace std;

int main(){
    ofstream myfile;
    myfile.open("Time.txt");
    char option;
    clock_t start;
    double duration;
    double laptime;
    while(option != 'e'){
        myfile << "Stop Watch: Start (s), Stop(S again), lap (l), 'e' to exit" << endl;
        cin >> option;
        if(option == 's'){
            start = clock();
            option = NULL;
            while(option != 's'){
                cin >> option;
                if(option == 's'){
                    duration = (clock() - start ) / (double) CLOCKS_PER_SEC;
                    myfile << "Time: " << duration << endl;
                } else if (option == 'l'){
                    laptime = (clock() - start ) / (double) CLOCKS_PER_SEC;
                    myfile << "LAPTIME: " << laptime << endl;
                    duration = 0;
                    start = clock();
                }
            }
        }
    }

    myfile.close();
    return 0;
}

