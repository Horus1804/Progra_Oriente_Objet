#pragma once
#include "Knight.h"

class KnightTank : public Knight
{

private:
	float shieldSize;
	float shieldAttackValue;
	bool inSentinelMode;

	float baseShieldAttackValue;
	float baseDefenseValue;
	

public:

	KnightTank();
	KnightTank(float ss, float sa);
	KnightTank(string n, int h, int a, int d, string al, int kr, float ss, float sa);


	void shieldBash(Knight& target);
	void taunt(Knight& target);
	void protect(Knight& target);
	void SwitchSentinelMode();

	float getShieldSize();
	void setShieldSize(float ss);

	float getShieldAttackValue();
	void setShieldAttackValue(float sa);

	bool getInSentinelMode();
	void setInSentinelMode(bool is);

	void attack(Knight& target);

	ostream& showInfos(ostream& out);
};

