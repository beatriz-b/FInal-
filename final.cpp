#include <iostream>
#include <string>

using namespace std;

int hotelRoom();
int hallWay();
int frontOffice();
int home();


void introduction();
void text();
void money();
void leaving();
void door3();
void desk();
void shoes();
void pants();
void end1();
void end2();
void man();
void alligator();
void man2();
void bunny();
void jail();




int main() {

    introduction();

    return 0;
}

void introduction(){

    cout << " MISSING BLUEPRINT \t" << endl << endl;
    cout << "After a crazy weekend of partying you wake up in a jumbled hotel"
            " room. You have to find and turn in the hotel keys or pay the $200 fine "
            "in order to go home, can you make the right choices to get home in one "
            "peice?" << endl << endl <<"PRESS 'ENTER' TO CONTINUE " << endl;
     string temp;
     getline(cin,temp);
    cout << "My head is hurting so bad where am I?" << endl;
    cout << "Oh yeah! In the hotel room... I wonder what how late it is." << endl;
    cout << "I should probably check my phone " << endl << endl;

    cout << "Enter 'phone' to check your phone" << endl;
    int response;
    cin >>response;

    text();
}

void text(){
        cout << " I got a message from T!";
        cout << " T says: Are you up yet? You probably had a wild night last night"
                " so just remember. You start work tomorrow" << endl <<
                "so you better start on that 6 hr drive ASAP." << endl;

        cout << "He's right I should get going" << endl;

        cout << "I should really be heading out, its a long drive so I need to go "
                    "ASAP" << endl << endl;
        cout << "But my rooms a mess, I don't want to give the maid too much of a "
                    "hard time, should I make my bed first?" << endl << endl;

        cout << "Press 'y' to make bed" << endl;
        cout << "Press 'n' to get on with your day, YOU HAVE NO TIME TO WASTE" << endl;

        int response;
        cin >>response;

        if (response == 'y'|| response == 'Y' ){
                money();
        }
        if (response == 'n'|| response == 'n'  ){
                 leaving();
            }

}

void money(){
    cout << "While making the bed something goes flying out" << endl;
    cout << "Wait whats that?? AWE YEAH WHAT!! I just bagged $150 out of no"
            " where :D. endl;endl; Oh wait, this is mine" << endl;
    cout << "I guess I should take this que to slow down, but not too"
            "much haha, so maybe I should take these awesome shoes or should"
            "I take these.. these random pants?" << endl << endl;

    cout << " Press [1] for shoes" << endl;
    cout << " Press [2] for pants" << endl;

    int response;
    cin >> response;
    if (response == '1'){
        shoes();
    }
    if (response == '2'){
        pants();
    }
}

void leaving(){
    cout << " No I probably shouldn't I need to go now. endl; Lets see I"
            " have my car keys, wallet, no clothes to pack for the one day"
            " trip. I have.... some random persons pants in my room. okay." << endl;

    cout << " Press [3] to leave out the door" << endl;
    cout << " Press [4] to double check the room" << endl;

    int response;
    cin >> response;
    if (response == '3'){
        door3();
    }
    if (response == '4'){
        desk();
    }
}

void shoes() {
    cout << "I've been lagging it, I better get going" << endl;

    //hallWay();

    cout << "Is that man not wearing pants???" << endl;
    cout << "And is that an ALLIGATOR his?? WHAT IS GOING ON" << endl;

    cout << "I really don't want to interact with any these two but I'd rather "
            "deal with one over the other" << endl;

    cout << "Press [1] for to interact with the man " << endl;
    cout << "Press [2] for to interact with the alligator " << endl;

    int response;
    cin >> response;
    if (response == '1') {
        man();
    }
    if (response == '2') {
        alligator();
    }
}
void alligator(){
    cout << "CHOMP" << endl;
    cout << " Really? youd rather deal with a beast in a hallway than some random man?"
           << endl <<  " life > Antisocial " << endl << "DEAD" <<endl;
}
void man(){
    cout << "Man: What a fine pair of shoes, they remind me of my wife" << endl;
    cout << "Man: I'll tell you what, let me buy them off of you $50 "
            "just to take those off your hands" << endl;

    cout << "Press [1] for to trade the shoes " << endl;
    cout << "Press [2] for to decline the sale " << endl;

    int response;
    cin >> response;
    if (response == '1'){
        end1();
    }
    if (response == '2'){
        end2();
    }
}

void end1(){
    cout << "WINNER WINNER" << endl;
    cout << "Congradulations!!! You payed the fee and come"
            " home in time!" << endl;
}

void end2(){
    cout << "well..." << endl;
    cout << "well..." << endl;
    cout << "well..." << endl;
    cout << "Ain't that a damn shame." << endl;
    cout << "STICK'EM TONY" << endl;
    cout << "ENDING. CAUSE OF DEATH 'TONY' " << endl;
}


void pants(){
    cout << "Okay I should really get going, I'm going to get fired before I even "
            "start " << endl;

    //hallWay();

    cout << "Is that man not wearing pants???" << endl;
    cout << "And is that an ALLIGATOR his?? WHAT IS GOING ON" << endl;
    cout << "Oh maybe these pants belong to him, I wonder how they got into "
            "my room though, he should have some explaination" << endl;

    cout << "Press [1] to talk to the man" << endl;
    cout << "Press [2] to exit out the hallway" << endl;

    int response;
    cin >> response;
    if (response == '1'){
    man2();
    }
    if (response == '2'){
    man2();
    }
}
void man2(){
    cout << "HEY WHAT ARE YOU DOING WITH MY PANTS" << endl << endl;
    cout << "*bang* *bang*" << endl;
    cout << "Safe to say, the search is over"<< endl;
}
// cout << "" << endl;
void door3(){
    cout << "I've been lagging it, I better get going" << endl;

    //hallWay();

    cout << "Is that man not wearing pants???" << endl;
    cout << "And is that an ALLIGATOR his?? WHAT IS GOING ON" << endl;
    cout << "AUGH I DONT HAVE THE TIME" << endl;

    string temp;
    getline(cin,temp);

    //frontoffice();

    cout << "If I just leave they can't possibly track me right? Should I ask" <<endl<<
            "if they have any special policies to help in these types of situations"<< endl;

     cout << "Press [1] to walk out"<< endl;
     cout << "Press [2] to ask the reseptionist questions" << endl;

    int response;
    cin >> response;
    if (response == '1'){
        jail();
    }
    if (response == '2'){
        jail();
    }
}
void desk(){
    cout << "Is that a carrot? Weird but today has been weirder."
            "I'll keep it handy just in case then I'll leave" << endl;

    string temp;
    getline(cin,temp);
    //hallWay();

    cout << "Is that man not wearing pants???" << endl;
    cout << "And is that an ALLIGATOR his?? WHAT IS GOING ON" << endl;
    cout << "And is THAT.. OMG THE KEYS. I HAVE TO TURN THOSE IN" << endl;
    cout << "OH no..... its right there stuck in his teeth" << endl;
    cout << "Aww what a cute bunny... does it have a home?.... " << endl;
    cout << "This carrot should do well to lure it in" << endl;

    cout << "Press [1] try and get the key" << endl;
    cout << "Press [2] to deal with the bunny" << endl;

    int response;
    cin >> response;
    if (response == '1'){
        bunny();
    }
    if (response == '2'){
        alligator();
    }
}

void bunny(){
    cout << "I guess I'll give this little guy a home, if i still have one "
            "that is " << endl;

    // frontoffice();

    cout << " Hello, reciptionist? You see, I have this problem. I want to "
            "check out but my key is in this aligator mouth in the hallway"
            "of the second floor for some reason and... " <<endl<< endl;

    cout << "R: RUBERT? WHERE DID YOU FIND HIM?? " << endl;
    cout << "*cough* *cough* yes excuse me, Tony has been a big "
            " resident for quite some time....  If I can just have the"
            " bunny then you won't have to worry about it. okay?"<< endl;

    cout << "Press [1] to give her the bunny" << endl;
    cout << "Press [2] to keep the bunny" << endl;

    int response;
    cin >> response;
    if (response == '1'){
        end1();
    }
    if (response == '2'){
        jail();
    }
}

void jail(){
    cout << "Excuse me sir? are you trying to leave without paying your fees??"<<endl<<
            "That is simply unacceptable!!!" <<endl;
    cout << "LOSER: THE POLICE HAVE BEEN CALLED AND YOU HAVE BEEN BOOKED";
}
