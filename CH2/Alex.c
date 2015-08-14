#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char input;
    bool incheck = false;

    cout << "Hello user" << '\n' << "You are in a cold damp (not moist) place, it seems you took a pretty hard fall off of wherever it is you fell from, but all around you is just dampness. The dampest of damps may I add." << '\n' << '\n' << "What is your next move?" << "\nW - Walk\nT - Talk\nS - Squack\n: ";
    cin >> input;

    while (incheck != true)
    {
        input = toupper(input);
        switch (input) {
            case 'W':
                cout << "You walk around for a bit and found out that you've walked around a circle on the floor, congratulations you're 0.534 cm away from where you began\n\n" <<  "What is your next move?" << "\nW - Walk\nT - Talk\nS - Squack\n: ";
                break;
            case 'T':
                cout << "You talk and noone responds...\nWhat did you expext in a damp place like this?\n\n" <<  "What is your next move?" << "\nW - Walk\nT - Talk\nS - Squack\n: ";
                break;
            case 'S': {
                cout << "You squack and using special echolation skills that you have gained, you navigate your way away from the cold and damp place where this long and strenuous journey began. \n";
                incheck = true;
                break;
            }
            default:
                cout << "You're trying to break the game and immersion, shame on you.\nThe developer tried so hard to make an immersive game and all you do is try to break by entering in commands that aren't even given to you!?!?!?\n\nWell... I guess you're only human, and that seems like a thing only a human would do against the almighty developer. Your sins have been forgiven, now try again\n\n" <<  "What is your next move?" << "\nW - Walk\nT - Talk\nS - Squack\n: ";
                break;
        }

        if (incheck != true)
            cin >> input;
    }

    cout << "You've finally navigated away from the dampness and you find your self in a place that lacks dampness. You feel the glory of not being damp and it invigorates you to continue on and begin an adventure that you've never experienced before.\nAs you turn the corner you're amazed by what you see.\n\nA blank screen\n\nHmmm, looks like the developer gave up on the project, what a shame now you'll never know how the story en" << endl;

    return 0;
}
