//#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int rockPaperScissors ();
int border(string);
string dialouge();
int hotelRoom();
string hotelRoom_interactions();
int hallWayRoom();
int frontDeskRoom();

int main() {
 
}

int rockPaperScissors(){
    srand (time(NULL));
    int x;
    x = rand() % 3 + 1;
    int x;
    srand (time(NULL));
    x = rand() % 3 + 1;
    cout << comChoice();

}

int border (rect){
    cout << "-------------------------------\n";
    cout <<"l                               l\n";
    cout <<"l                               l\n";
    cout <<"l                               l\n";
    cout <<"l                               l\n";
    cout << "-------------------------------\n";

}
\\ how to get dialouge to appear in the border

string dialouge (text){
    vector <string> story {
        //this part is the introduction
        // this part the hotel room should also appear in the back group simulatniouly
        "Where am I? What am I doing here in this... in this room? Is this a hotel room?",
        "OOh I remember now, Tom's graduation. Wow that was a wild time",
        "Well it's about time for be to mosey on out of here ",
        ".....  ..... ......",
        "Where are the keys?",

        //Directions
        "You must find a they keys to leave the hotel room", //5
        "Faliure to do so will result in you immediate arrest "
        "To look for the keys, interact with objects shown on screen by typing them"
        // every object they interact with should display 1 or more messages
        // if the object is not there then they/not exist net then an error message

    };

}

int hotelRoom();{
    cout << "---------------------------------------------------------------------- \endl";
    cout << "light\endl";
    cout << "\endl";
    cout << "\endl";
    cout << "\endl";
    cout << "\endl";
    cout << "computer \endl;"
    cout << "desk \endl";
    cout << "bed \endl";
    cout << "shoe \endl";
    cout << "---------------------------------------------------------------------- \endl";
    cin << hotelRoom_Stuff;
}
string hotelRoom_interactions(hotelRoom_Stuff;{
    if (light){
        cout << " dfdff \endl;"
    }

}

int hallWayRoom(){
cout << "---------------------------------------------------------------------- \endl";
cout << "light\endl";
cout << "cout << \endl";
cout << "\endl";
cout << "\endl";
cout << "door \endl;"
cout << "man \endl;"
cout << "alligator\endl";
cout << " \endl";
cout << "door mat  \endl";
cout << "---------------------------------------------------------------------- \endl";
cin << hotelRoom_Stuff;
}

string hallwayRoom_interactions(hallwayRoom_Stuff);{
    if (light){
     cout << " dfdff \endl;"
}

}
int frontDeskRoom(){
    cout << "---------------------------------------------------------------------- \endl";
    cout << "light\endl";
    cout << "\endl";
    cout << "\endl";
    cout << "\endl";
    cout << " receptionist\endl;"
    // the book on the table can be selected and used as for hints  
    cout << "book \endl;"
    cout << "table\endl";
    cout << "\endl";
    cout << "\endl";
    cout << "---------------------------------------------------------------------- \endl";
    cin << hotelRoom_Stuff;
}

string frontDestRoom_interactions(hallwayRoom_Stuff);{
    if (light){
        cout << " dfdff \endl;"
}
