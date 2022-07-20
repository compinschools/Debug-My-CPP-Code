// OOP Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Animal.h"
#include "Room.h"

int main()
{
	std::cout << "OOPs I did an Adventure Game\n";

	//set up game objects
	Room kitchen = Room("the kitchen","");
	kitchen.setDescription("a long narrow room with worktops on either side and a large bench in the middle");

	Room lounge = Room("the lounge");
	lounge.setDescription("a cozy room with a nice fire lit in the back");

	Room games_room = Room("the games room");
	games_room.setDescription("games as far as the eye can see");

	Room hall = Room("the hall");
	hall.setDescription("Nothing really much to see here");

	kitchen.linked_rooms["south"] = &lounge;
	kitchen.linked_rooms["east"] = &hall;
	lounge.linked_rooms["north"] = &kitchen;
	lounge.linked_rooms["east"] = &games_room;
	games_room.linked_rooms["west"] = &lounge;
	games_room.linked_rooms["north"] = &hall;
	hall.linked_rooms["south"] = &games_room;
	hall.linked_rooms["west"] = &kitchen;

	Room* current = &kitchen;
	std::string command;
	do
	{
		
		std::cout << "Looking around "
		+ current->getName()
		+ " you see " + current->getDescription()
		+ "\n";
		std::cout << "> ";
		std::cin >> command;
		//add commands here
		if(current->linked_rooms.find(command) != current->linked_rooms.end() )
		{
			current = (current->linked_rooms["command"]);
		}
	}
	while (command != "exit");
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
