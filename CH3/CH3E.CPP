#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main (){

    string message;
    char alpha;
    char response = NULL;
    while(response != 'k'){
        response = NULL;
        cout << "What is the encoding/decoding letter?" << endl;
        cin >> alpha;
        alpha -= 'a';
        cout << "Are you encoding('e'), or decoding ('d')?" << endl;

        while (response != 'e' && response != 'd'){
            cin >> response;
            if(response == 'e'){
                cout << "What is the message to be encoded?" << endl;
                cin >> message;
                for(int i = 0; i < message.length(); i++){
                    message[i] += alpha;
                    if(message[i] > 'z'){
                        message[i] -= ('z' - 'a');
                    }
                }
                cout << "Encoded message is: " << message << endl;

            } else if (response == 'd'){
                cout << "What is the code to be deciphered?" << endl;
                cin >> message;
                for(int i = 0; i < message.length(); i++){
                    message[i] = message[i] - alpha;
                    if(message[i] < 'a'){
                        message[i] += ('z' - 'a');
                    }
                }
                cout << "Decoded message is: " << message << endl;
            }
        }
        cout << "Press 'k' to kill terminal, otherwise again" << endl;
        cin >> response;

    }

    return 0;
}
