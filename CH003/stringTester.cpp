#include <iostream>

using namespace std;

int main (){

    string message;
    char alpha = 'e' - 'a';
    char response = NULL;

    cout << "What is the message to be encoded?" << endl;
    cin >> message;
    for(int i = 0; i < message.length(); i++){
        message[i] += alpha;
        if(message[i] > 'z'){
            message[i] -= ('z' - 'a');
        }
    }
    cout << "Encoded message is: " << message << endl;


    cout << message << endl;
    return 0;
}
