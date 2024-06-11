#include "KnightTank.h"

KnightTank::KnightTank()
{
	cout << "DANS KNIGHTTANK" << endl;
	setDefense(getDefense() * 2);
	setShieldSize(100);
	setShieldAttackValue(20);
}

KnightTank::KnightTank(float ss, float sa)
{
	setShieldSize(ss);
	setShieldAttackValue(sa);
}

KnightTank::KnightTank(string n, int h, int a, int d, string al, int kr, float ss, float sa)
{
	setName(n);
	setHealth(h);
	setAttackDamage(a);
	setDefense(d);
	setAllegiance(al);
	setKnightRank(kr);
	setShieldSize(100);
	setShieldAttackValue(500);
	setInSentinelMode(false);
}

void KnightTank::shieldBash(Knight& target)
{
	int diff = getAttackDamage()+getShieldAttackValue() - target.getDefense();
	if (diff > 0 && !getInSentinelMode()) {
		cout << getName() << " attaque avec son shield " << target.getName() << " pour " << diff << " points de dégats !" << endl;
		target.setHealth(target.getHealth() - diff);
	}
}

void KnightTank::taunt(Knight& target)
{
	cout << "JE SAIS OU TU TE CACHES " << target.getName() << " !" << endl;
}

void KnightTank::protect(Knight& target)
{
	target.setDefense(target.getDefense() + getShieldAttackValue());
}

void KnightTank::SwitchSentinelMode()
{
	if (!getInSentinelMode()) {
		setInSentinelMode(true);
		baseDefenseValue = getDefense();
		baseShieldAttackValue = getShieldAttackValue();
		setDefense(getDefense() * 2);
		setShieldAttackValue(getShieldAttackValue() * 2);
	}
	else {
		setInSentinelMode(false);
		setDefense(baseDefenseValue);
		setShieldAttackValue(baseShieldAttackValue);
	}
}

float KnightTank::getShieldSize()
{
	return shieldSize;
}

void KnightTank::setShieldSize(float ss)
{
	shieldSize = ss;
}

float KnightTank::getShieldAttackValue()
{
	return shieldAttackValue;
}

void KnightTank::setShieldAttackValue(float sa)
{
	shieldAttackValue = sa;
}

bool KnightTank::getInSentinelMode()
{
	return inSentinelMode;
}

void KnightTank::setInSentinelMode(bool is)
{
	inSentinelMode = is;
}

void KnightTank::attack(Knight& target)
{
	shieldBash(target);
}

ostream& KnightTank::showInfos(ostream& out)
{
	Knight::showInfos(out);
	out << "Mon archetype est de type tank avec " << getShieldSize() << " en taille de bouclier et " << getShieldAttackValue() << " de valeur de protection" << endl;
	return out;
}

