#pragma once
#include "Horse.h"
#include <vector>

enum class knightRank {
	Squire,
	Crusader,
	Paladin,
	Commander,
	King
};

class Knight
{

protected:

	string name;
	int health;
	int attackDamage;
	int defense;
	string allegiance;
	knightRank mRank;
	Horse* horse;

public:

	static int number;

	static float classDamage;


	Knight();

	/*Constructeur avec nom, pv, attaque et defense*/
	Knight(string n, int h, int a,int d);

	/*Constructeur avec nom, pv, attaque, defense et allegeance*/
	Knight(string n, int h, int a, int d, string al);

	/*Constructeur avec nom, pv, attaque, defense, allegeance et rang militaire*/
	Knight(string n, int h, int a, int d, string al, knightRank kr);
	/*Constructeur avec nom, pv, attaque, defense, allegeance et rang militaire*/
	Knight(string n, int h, int a, int d, string al, int kr);

	~Knight();

	string getName();
	void setName(string n);

	int getHealth();
	void setHealth(int h);

	int getAttackDamage();
	void setAttackDamage(int at);

	int getDefense();
	void setDefense(int d);

	string getAllegiance();
	void setAllegiance(string al);

	knightRank getKnightRank();
	string getStringKnightRank();
	void setKnightRank(knightRank kr);
	void setKnightRank(int kr);

	Horse* getHorse();
	void setHorse(Horse* h);

	virtual void attack(Knight& target);

	Knight operator+(Knight& tg);
	void operator+=(int ref);

	void operator+=(Knight& tg);


	virtual ostream& showInfos(ostream& out);
	friend ostream& operator<<(ostream& out, Knight& k);

};