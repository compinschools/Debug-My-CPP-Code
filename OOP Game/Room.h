#pragma once
#include <map>
#include <string>

class Room
{
public:
	Room();
	Room(std::string name);
	Room(std::string name, std::string description);
	std::map <std::string, Room*> linked_rooms = {};

	std::string getName();
	std::string getDescription();

	void setName(const std::string name);
	void setDescription(const std::string description);

private:
	std::string name_;
	std::string description_;

};

