#pragma once
#include <iostream>

using namespace std;

enum class HorseBreed {
	Shire,
	PurSang,
	Haflinger,
	Appaloosa,
	Camargue,
	Mustang,
	Fjord
};

class Horse
{
private:
	string name;
	HorseBreed breed;
	bool gender;
	int health;
	float moveSpeed;
	int stamina;
	int weight;
	bool wild;

public:

	Horse();
	Horse(string n, int hb, bool g, int h, float ms, int s, int w, bool wi);

	string getName();
	void setName(string n);
	HorseBreed getBreed();
	void setBreed(HorseBreed hb);
	void setBreed(int hb);
	bool getGender();
	void setGender(bool g);
	int getHealth();
	void setHealth(int h);
	float getMoveSpeed();
	void setMoveSpeed(float ms);
	int getStamina();
	void setStamina(int s);
	int getWeight();
	void setWeight(int w);
	bool getWild();
	void setWild(bool w);
};

