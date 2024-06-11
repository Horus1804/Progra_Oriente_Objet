#include "Knight.h"

int Knight::number = 0;

float Knight::classDamage = 10;


Knight::Knight()
{
	cout << "DANS KNIGHT" << endl;
	number++;
	setName("Default");
	setHealth(100);
	setAttackDamage(50);
	setDefense(10);
	setAllegiance("Francs");
	setKnightRank(0);
	setHorse(new Horse());
}

Knight::Knight(string n, int h, int a, int d)
{
	number++;
	setName(n);
	setHealth(h);
	setAttackDamage(a);
	setDefense(d);
	setAllegiance("Francs");
	setKnightRank(0);
}

Knight::Knight(string n, int h, int a, int d, string al)
{
	number++;
	setName(n);
	setHealth(h);
	setAttackDamage(a);
	setDefense(d);
	setAllegiance(al);
	setKnightRank(0);
}

Knight::Knight(string n, int h, int a, int d, string al, knightRank kr)
{
	number++;
	setName(n);
	setHealth(h);
	setAttackDamage(a);
	setDefense(d);
	setAllegiance(al);
	setKnightRank(kr);
}
Knight::Knight(string n, int h, int a, int d, string al, int kr)
{
	number++;
	setName(n);
	setHealth(h);
	setAttackDamage(a);
	setDefense(d);
	setAllegiance(al);
	setKnightRank(kr);
}

Knight::~Knight()
{
	number--;
	cout << "COUCOU" << endl;
}

string Knight::getName()
{
	return name;
}

void Knight::setName(string n)
{
	if (n == "") name = "Default";
	else name = n;
}


int Knight::getHealth()
{
	return health;
}

void Knight::setHealth(int h)
{
	if (h < 0) {
		cout << "PV negatif" << endl;
		health = 0;
	}
	else health = h;
}


int Knight::getAttackDamage()
{
	return attackDamage;
}

void Knight::setAttackDamage(int at)
{
	if (at < 0) attackDamage = 0;
	else attackDamage = at;
}

int Knight::getDefense()
{
	return defense;
}

void Knight::setDefense(int d)
{
	if (d < 0) defense = 0;
	else defense = d;
}

string Knight::getAllegiance()
{
	return allegiance;
}

void Knight::setAllegiance(string al)
{
	allegiance = al;
}

knightRank Knight::getKnightRank()
{
	return mRank;
}

string Knight::getStringKnightRank()
{
	switch (mRank) {
	case knightRank::Squire:
		return "Squire";
	case knightRank::Crusader:
		return "Crusader";
	case knightRank::Paladin:
		return "Paladin";
	case knightRank::Commander:
		return "Commander";
	case knightRank::King:
		return "King";
	}
}

void Knight::setKnightRank(knightRank kr)
{
	mRank = kr;
}

void Knight::setKnightRank(int kr)
{
	if (kr > 4 || kr < 0) mRank = knightRank::Squire;
	else mRank = static_cast<knightRank>(kr);
}

Horse* Knight::getHorse()
{
	return horse;
}

void Knight::setHorse(Horse* h)
{
	horse = h;
}

void Knight::attack(Knight& target)
{
	int diff = getAttackDamage() - target.getDefense();
	if (diff >0) {
		cout << getName() << " attaque de toutes ses forces " << target.getName() << " pour " << diff << " points de dégats !" << endl;
		target.setHealth(target.getHealth() -diff);
	}
	if (target.getHealth() <= 0) {
		cout << target.getName() << " est mort au combat !" << endl;
	}
}

Knight Knight::operator+(Knight& tg)
{
	Knight temp;
	temp.setName(getName() + tg.getName());
	temp.setHealth(getHealth() + tg.getHealth());
	return temp;
}

void Knight::operator+=(int ref)
{
	setHealth(getHealth() + ref);
	setAttackDamage(getAttackDamage() + ref);
}

void Knight::operator+=(Knight& tg)
{
}

ostream& Knight::showInfos(ostream& out)
{
	out << "Je m'appelle " << getName() << ", chevalier " << getStringKnightRank() << " de " << getAllegiance() << " !" << endl;
	out << "J'ai " << getHealth() << " points de vie et " << getDefense() << " points d'armure." << endl;
	out << "Je tape les hérétiques ennemis de " << getAllegiance() << " à " << getAttackDamage() << " points de dégâts !" << endl;
	return out;
}

ostream& operator<<(ostream& out, Knight& k)
{
	k.showInfos(out);
	return out;
}