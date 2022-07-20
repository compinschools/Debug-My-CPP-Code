#include "Animal.h"

#include <stdexcept>

Animal::Animal()
{
	name_ = "";
	description_ = "";
}

Animal::Animal(const std::string name, const std::string description)
{
	name_ = name;
	description_ = description;
}

Animal::Animal(const std::string name, const std::string description, const int legs)
{
	name_ = name;
	description_ = description;
	legs_ = legs;
}

std::string Animal::getName()
{
	return name_;
}

std::string Animal::getDescription()
{
	return description_;
}

int Animal::getLegs()
{
	return legs_;
}

void Animal::setName(std::string name)
{
	if(name.empty())
	{
		throw std::invalid_argument("Name cannot be Empty");
	}
	name_ = name;
}

void Animal::setDescription(std::string description)
{
	description_ = description;
}

void Animal::setLegs(int legs)
{
	legs_ = legs;
}

std::string Dog::pet(std::string type)
{
	if(type == weakness_)
	{
		return "Roll over";
	}
	else
	{
		return "Bark";
	}
}
