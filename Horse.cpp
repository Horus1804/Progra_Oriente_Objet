#include "Horse.h"

Horse::Horse()
{
	setName("Tempest");
	setBreed(0);
	setGender(0);
	setHealth(100);
	setMoveSpeed(10);
	setStamina(50);
	setWeight(150);
	setWild(0);
}

Horse::Horse(string n, int hb, bool g, int h, float ms, int s, int w, bool wi)
{
	setName(n);
	setBreed(hb);
	setGender(g);
	setHealth(h);
	setMoveSpeed(ms);
	setStamina(s);
	setWeight(w);
	setWild(wi);
}

string Horse::getName()
{
	return name;
}

void Horse::setName(string n)
{
	name = n;
}

HorseBreed Horse::getBreed()
{
	return breed;
}

void Horse::setBreed(HorseBreed hb)
{
	breed = hb;
}

void Horse::setBreed(int hb)
{
	breed = static_cast<HorseBreed>(hb);
}

bool Horse::getGender()
{
	return gender;
}

void Horse::setGender(bool g)
{
	gender = g;
}

int Horse::getHealth()
{
	return health;
}

void Horse::setHealth(int h)
{
	health = h;
}

float Horse::getMoveSpeed()
{
	return moveSpeed;
}

void Horse::setMoveSpeed(float ms)
{
	moveSpeed = ms;
}

int Horse::getStamina()
{
	return stamina;
}

void Horse::setStamina(int s)
{
	stamina = s;
}

int Horse::getWeight()
{
	return weight;
}

void Horse::setWeight(int w)
{
	weight = w;
}

bool Horse::getWild()
{
	return wild;
}

void Horse::setWild(bool w)
{
	wild = w;
}
