
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string name, username;
    int age;
    cout << "What's your name?" << endl;
    cin >> name;
    cout << "What's your age?" << endl;
    cin >> age;
    cout << "What's your reddit username?" << endl;
    cin >> username;


    cout << "your name is " << name << ", you are " << age << " years old, and your username is " << username << endl;

    ofstream myfile;
    myfile.open("ch1e.txt", ios::app);
    myfile << "name: " << name << "; age: " << age << "; username: " << username << endl;
    myfile.close();

    return 0;


}
