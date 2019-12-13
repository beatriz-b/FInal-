#include <iostream>
#include <string>

using namespace std;

int hotelRoom();
int hallWay();
int frontOffice();
int home();
int homeSwat();

int introduction();

int main() {

    introduction();

    return 0;
}

int introduction(){

    cout << " MISSING BLUEPRINT \t" << endl << endl;
    cout << "After a crazy weekend of partying you wake up in a jumbled hotel"
            " room, can you make the right choices to get home in one peice?"
            << endl << endl <<"PRESS 'ENTER' TO CONTINUE " << endl;
    string temp;
    getline(cin,temp);
    cout << "My head is hurting so bad where am I?" << endl;
    cout << "Oh yeah! In the hotel room... I wonder what how late it is." << endl;
    cout << "I should probably check my phone " << endl << endl;

    cout << "Enter 'phone' to check your phone" << endl;
    int response;
    cin >> response;

    if (response = 'phone'){

        cout << " I got a message from T!";
        cout << " T says: Are you up yet? " << endl << endl;

        cout << " Enter the corresponding number to respond"<< endl;
        cout << " 1: Who are you?" << endl;
        cout << " 2: Yeah, I'm still in my hotel room." << endl;
        cout << " 3: UUUmmmmmmmmm" << endl;

        int response2 = 0;
        cin >> response2;

        if (response2 == 1 || response2 == 2 ||response2 == 3 ) {
            cout << "Haha ha you’re so funny. You probably had a wild night last night"
                    " so just remember. You start work tomorrow so you better start on "
                    "that 6 hr drive ASAP." << endl;

            cout << "Press 'ENTER' to exit phone " << endl;
            getline(cin, temp);

            cout << "He's right I should get going" << endl;

            cout << "" << endl;
        }

    }else{

        cout << "ahahah c'mon you can do it. ENTER 'phone' please :)" << endl;
    }

    return 0;
}

