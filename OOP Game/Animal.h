#pragma once
#include <string>
#include <vector>
#include <map>
class Animal

{
public:
	Animal();
	Animal(const std::string name, const std::string description);
	Animal(const std::string name, const std::string description, const int legs);
	std::string getName();
	std::string getDescription();
	int getLegs();

	void setName(std::string name);
	void setDescription(std::string description);
	void setLegs(int legs);
	std::map<std::string, Animal*> linked_animals = {};
private:
	std::string name_;
	std::string description_;
	int legs_;
};

class Dog : public Animal
{
public:
	Dog(const std::string name) : Animal()
	{
		setName(name);
		setDescription("");
		setLegs(4);
		weakness_ = "scratch ear";
	}
	std::string pet(std::string type);
private:
	std::string weakness_;
};

