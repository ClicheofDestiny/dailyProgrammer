#include <iostream>
#include <string>

using namespace std;

bool hasGas;
bool hasLighter;

void inHouse ();
void outHouse();
void attackedMan();
void dungeon();
 void hall();
   void ladder();

int main (){
    char retry = NULL;
    while(retry != 'n'){

        hasGas = false;
        hasLighter = false;

        char response = NULL;
        cout << "Begin your adventure!!" << endl;


        cout << "You enter a house. Do you open the door?" << endl;
        cout << "'y' for yes, 'n' for no" << endl;
            while(response != 'y' && response != 'n'){
                cin >> response;

                if (response == 'y'){
                    inHouse();
                } else if (response = 'n'){
                    outHouse();
                } else {
                    cout << "WTF enter a valid move, pussy" << endl;
                }
            }
        cout << "retry? ('n' = no, 'y' = yes)" << endl;
        cin >> retry;
    }

    return 0;
}


    void inHouse (){
        char response;
        cout << endl;
        cout << "You enter the house. A doorman approaches you. What do?\n 'a' for attack, 't' to talk, 'r' to run away." << endl;
        while (response != 'a' && response != 't' && response != 'r'){
             cin >> response;
             if (response == 'a'){
                cout << "you attack the doorman without asking shit. Your man's figure vanishes as the sword cuts through the ghostly ether.\n" <<
                "That wasn't so hard." << endl;
                attackedMan();
            } else if (response == 't'){
                cout << "You ask, 'Yo, dafuq am I?', but the man's face remains plain, stagnant, the definition of reserved. You ask 'Who's in charge here??\'.\n The man's reserved face now alters slighty, a smile begins to crack at the edges of his cheeks.\n" <<
                "You brandish your sword, to which the doorman only smiles greater, and greater, until his mouth makes such a wide smile that it turns into a giant hole in his face. He lunges forward and swallows you up." << endl;
                dungeon();
            } else if (response == 'r'){
                cout << "You try to run but slip on a banana peel and die on your way out. GG." << endl;
            } else {
                cout << "WTF enter a valid move, pussy!" << endl;
            }
        }
        return;
    }

    void outHouse(){
        cout << endl;
        cout << "You refuse to enter the house. You suck, and you die from being such a pussy. GG." << endl;
        return;
    }


    void attackedMan(){
        cout << endl;
        cout << "You now continue forward, sword still in hand and at the ready. Do you now take stairs ('s'), or walk through the main hall ('h')" << endl;
        char response;
        while (response != 's' && response != 'h'){
            cin >> response;
            if(response == 's'){
                cout << "You walk up the stairs, shrugging off the eery creak of each step. But - SNAP - a step gives way and you fall down, down into the depths far below." << endl;
                dungeon();
            } else if (response == 'h'){
                hall();
            } else {
                cout << "Stop fucking around." << endl;
            }

        }

        return;
    }


    void dungeon(){
        cout << endl;
        if(!hasGas){
            cout << "Wtf... You awake in a dungeon. Surrounded by corpses and hordes of rats.\n You see in the distance a skeleton holding steadfast onto a canister of gas.\n Do you take the gas ('t'), attack the skeleton ('a'), or leave alone ('l')" << endl;
        } else {
            cout << "You find yourself in the dunegon... A sudden loud voice yells 'What the fucking shit, mate. What are you doing back here?! You got my gasoline, all you had to do was goddamn light it!" << endl;
            ladder();
            return;
        }
        char response = NULL;
        while(response != 't' && response != 'a' && response != 's'){
            cin >> response;
            if(response == 't'){
                cout << "you take the gas. The skeleton seems almost relieved it's out of its hands.\n Gas++" << endl;
                hasGas = true;;
                ladder();
            } else if (response == 'a'){
                cout << "You attack the skeleton for no reason. He was absolutely harmless, but that doesn't stop you from swinging at him and hitting the gas canister.\n The strike creates a spark that explodes the canister and your body. Your corpse now lies across from the blown apart skeleton. GG." << endl;
            } else if (response == 'l'){
                cout << "You leave the skeleton alone, and keep searching." << endl;
                ladder();

            } else {
                cout << "I didn't give you that option, ass-hat.  Follow the goddamn story." << endl;
            }
        }

    }

    void hall(){
        cout << endl;
        char response = NULL;
        if(hasLighter && hasGas){
            cout << "Here you are in the great hall again, but you already have gas and lighter. Do you wish to light them? 'y' or 'n'" << endl;
            while(response != 'y' && response != 'n'){
                cin >> response;

                if(response == 'y'){
                    cout << "You douse the floor in gasoline, and in one fell strike, throw the lit lighter to the floor.\n The flames begin to grab at everything, even you. You run back to the entrance, as the heart of the house begins to die. \nAs you reel back from the house, you look up and realise... My God... It's been him all along! The house! It was only the beginning, the entire thing was only Alex's fat ass!\n Alex's ass begins to toss in slight annoyance at what you have done. It takes little notice, and sits on you. GG, you tried. But nothing could really beat Alex's ass." << endl;
                } else if( response == 'n'){
                    cout << "You refuse to do anything. Can't you see I'm trying to cut every corner and get you through to the fucking end?! I mean Jesus! How many different options do you think I can write up? How many unique scenarios until your stomach (still fat from the cake) is satisfied with my game content!\n" <<
                        "Alright... Looks like I can't be bothered to write anymore. I die. GG." << endl;
                } else {
                     cout << "You know what? All you had to do was enter either y or n, and this game would be over.\n But since you seem to get off on fucking with my system, I'm just gonna send you back to the dungeon.\n Literally takes one line, dunegon(). Oh, here it comes... ready...? dungeon()!" << endl;
                     dungeon();
                }
            }

         } else {
            cout << "You continue through to the main hallway. You witness a grand hall, with fancy decor and a giant chandelier. A cake drops down from the ceiling. It looks scrumptious. Do you eat it ('e'), or attack it ('a')" << endl;
            while( response != 'e' && response != 'a'){
                cin >> response;
                if(response == 'e' && hasLighter == false){
                    cout << "You eat the cake. It tastes delicious at first. Familiar. You keep eating. The taste is bitter, sour, sweet and savoury all at once. You continue eating, but detect a tinge of change on the tongue. It builds up, changing gradually, getting mouldier and mouldier...Then you realise...\n... It tastes like Alex's sister!";
                    cout << "\nNever the less you trudge and endure through the cake, eating. You fight back the tears and urge to gag. You reach the end and find a lighter. Lighter++\n Now you're so full. The ground breaks beneath you and you fall, down, down." << endl;
                    hasLighter = true;
                    dungeon();
                } else if(response == 'e' && hasLighter == true){
                    cout << "You eat through Alex's-sister-cake even though you already ate it before. Feels good man. You are so heavy, you again fall through the floor (how many holes you gonna open up?!)" << endl;
                    dungeon();
                } else if (response == 'a'){
                    cout << "You attack a perfectly good cake. Don't you realise there are children in Africa who would be grateful to have a cake no matter how it tastes?! Get out of my story! Your character dies. GG." << endl;
                }
            }
        }
        return;
    }

    void ladder(){
        cout << endl;
        cout << "You now spot a ladder off in dimly lit distance. It leads upwards, for who knows how long. Climb it ('y') or not ('n')" << endl;
        char response = NULL;
        while(response != 'y' && response != 'n'){
            cin >> response;
            if(response == 'y'){
                cout << "you take the ladder up. You climb higher and higher, bearing not to look down at the kilometers of distance between you and solid ground. Before your arms give way, you arrive back up at the main hall." << endl;
                hall();
            } else if (response == 'n'){
                cout << "You refuse to take the ladder. You turn around to look for another option, to be jumped by the skeleton. 'Why didn't you take the goddamn ladder, arsehole?' Now the skeleton holds you like it did his gas canister, for all eternity. GG." << endl;
            } else {
                cout << "stop being stupid, " << response << " isn't an option!" << endl;
            }
        }
    }

