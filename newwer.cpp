// FINAL.cpp : This file contains the 'main' function.Program execution begins and ends there.
//https://www.youtube.com/watch?v=nD_huaZ6XjM

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void room() {
	cout << "__________________________________________________________________\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "___________________(shoe)_______________\n";
}

void hallway() {
	cout << "----------------------------------------\n";
	cout << "\n";
	cout << "                         0\n";
	cout << "                         I\n";
	cout << "                        I I\n";
	cout << "_________________________________________\n";
}

void reception() {
	cout << "----------------------------------------\n";
	cout << "\n";
	cout << "                         0\n";
	cout << "                         I\n";
	cout << "                        I I\n";
	cout << "_________________________________________\n";
}

void home() {
	cout << "----------------------------------------\n";
	cout << "\n";
	cout << "                         0\n";
	cout << "                         I\n";
	cout << "                        I I\n";
	cout << "_________________________________________\n";
}



int levelOne(int outcomes[]) {

	cout << "I should really be heading out, its a long drive so I need to go "
		"ASAP" << endl;
	cout << "But my rooms a mess, I don't want to give the maid too much of a "
		"hard time, should I make my bed first?" << endl;
	cout << "Press 'y' to make bed" << endl;
	cout << "Press 'n' to get on with your day, YOU HAVE NO TIME TO WASTE" << endl;

	int response;
	cin >> response;

	return response;
	}

int levelTwo(int outcomes[]) {

	int previousChoice = outcomes[0];

	if (previousChoice == 'y' || previousChoice == 'Y') {

		cout << "While making the bed something goes flying out" << endl;
		cout << "Wait whats that?? AWE YEAH WHAT!! I just bagged $150 out of no"
			" where :D. endl;endl; Oh wait, this is mine" << endl;

		int response;
		cin >> response;
	}
	else if (previousChoice == 'n' || previousChoice == 'N') {

		cout << " No I probably shouldn't I need to go now. endl; Lets see I"
			" have my car keys, wallet, no clothes to pack for the one day"
			" trip. I have.... some random persons pants in my room. okay." << endl;

		cout << " Press 3 to leave out the door" << endl;
		cout << " Press 4 to double check the room" << endl;

		int response;
		cin >> response;
	}
	return response;
}

int main() {

	const int LEVELS = 10;
	int outcomes[LEVELS];

	// Introduction should go up here and then cut to new screen when user "press ENTER to continue" 
	char response;
	room();
	cout << "How late it is? Wheres my phone??" << endl;
	cin >> response;

	//make sure phone is useable

	while (response == 'y') {
		//call our level functions 
		outcomes[0] = levelOne(outcomes);

		levelTwo(outcomes);

	}


	return 0;
}
