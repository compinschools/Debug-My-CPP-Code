#include "Room.h"

#include <iostream>

Room::Room()
{
	name_ = "";
}

Room::Room(std::string name)
{
	name_ = name;
}

Room::Room(std::string name, std::string description)
{
	name_ = name;
	description_ = description;
}

std::string Room::getName()
{
	return name_;
}

std::string Room::getDescription()
{
	return description_;
}

void Room::setName(const std::string name)
{
	name_ = name;
}

void Room::setDescription(const std::string description)
{
	description_ = description;
}
