#include <iostream>

#include <string>

using namespace std;

struct event{
    string eventName;
    event* next;
//    *event prev;
    int hour;
};// event;



int main(){
    event* eventsList = nullptr;
    event* curr = nullptr;
    event* prev = nullptr;
    event* newE = nullptr;
    event* newEvent = nullptr;
    while(true){
        int action;
        cout << "here are current events:" << endl;

        curr = eventsList;
        while(curr != nullptr){
            cout << "Event name: " << curr->eventName << "; at hour: " << curr->hour << endl;
            curr = curr->next;
        }
        cout << "\nWhat would you like to do?\n" <<
                "1. add event\n" <<
                "2. delete event\n" <<
                "3. edit event" << endl;
        cin >> action;
        switch (action){
        case 1 :
            newE = new event;
            cout << "enter event name" << endl;
            cin >> newE->eventName;
            cout << "enter hour of event" << endl;
            cin >> newE->hour;
            curr = eventsList;
            if (curr == nullptr){
              eventsList = newE;
              newE->next = nullptr;
              break;
            } else if (eventsList->hour > newE->hour){
                newE->next = eventsList;
                eventsList = newE;
            } else {
                while(curr->next != nullptr && curr->next->hour < newE->hour ){
                    curr = curr->next;
                }
                newE->next = curr->next;
                curr->next = newE;
            }
            break;
        case 2 :
            cout << "press 's' key to scroll down events, select with 'f':" << endl;
            curr = eventsList;
            if (eventsList == nullptr){
                cout << "No events exist!" << endl;
            } else {
                char c;
                cout << "Event name: " << curr->eventName << "; at hour: " << curr->hour << endl;
                while(1){
                    cin >> c;
                    if (c == 's'){
                      if(curr->next == nullptr){
                        cout << "No events left!" << endl;
                        break;
                      } else {
                        curr = curr->next;
                        cout << "Event name: " << curr->eventName << "; at hour: " << curr->hour << endl;
                      }
                    } else if (c == 'f'){
                        prev = eventsList;
                        if(prev == curr){
                            eventsList = curr->next;
                        } else {
                            while(prev->next != curr){
                                prev = prev->next;
                            }
                            prev->next = curr->next;
                        }
                        delete curr;
                        cout << "Event deleted" << endl;
                        break;
                    }
                }
            }
            break;

        case 3:
            cout << "Edit event, press 's' key to scroll down events, select with 'f':" << endl;
            curr = eventsList;
            if (eventsList == nullptr){
                cout << "No events exist!" << endl;
            } else {
                char c;
                cout << "Event name: " << curr->eventName << "; at hour: " << curr->hour << endl;
                while(1){
                    cin >> c;
                    if (c == 's'){
                        if(curr->next == nullptr){
                            cout << "No events left!" << endl;
                            break;
                        } else {
                            curr = curr->next;
                            cout << "Event name: " << curr->eventName << "; at hour: " << curr->hour << endl;
                        }
                    } else if (c == 'f'){
                        cout << "Enter new name" << endl;
                        cin >> curr->eventName;
                        cout << "enter new hour" << endl;
                        cin >> curr->hour;

                        prev = eventsList;
                        if(prev == curr){
                            eventsList = curr->next;
                        } else {
                            while(prev->next != curr){
                                prev = prev->next;
                            }
                            prev->next = curr->next;
                        }
                        newEvent = curr;
                        curr = eventsList;
                        if(eventsList == nullptr){
                          eventsList = newEvent;
                          newEvent->next = nullptr;
                          break;
                        } else if (eventsList->hour > newEvent->hour){
                            newEvent->next = eventsList;
                            eventsList = newEvent;
                            cout << "Event changed" << endl;
                            break;

                        } else {
                            while(curr->next != nullptr && curr->next->hour < newEvent->hour ){
                                curr = curr->next;
                            }
                            newEvent->next = curr->next;
                            curr->next = newEvent;
                            cout << "Event changed" << endl;
                            break;
                        }
                    }
                }
            }
            break;
        }
    }

}
