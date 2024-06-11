#include "KnightTank.h"
#include <Windows.h>
#include <map>

Knight createKnight() {
	string tempName;
	int tempHealth;
	int tempAttack;
	int tempDefense;
	string tempAllegiance;
	int tempKr;
	cout << "---CREATION DE CHEVALIER---" << endl;
	cout << "Entrez le nom : ";
	cin >> tempName;
	cout << "Entrez la vie : ";
	cin >> tempHealth;
	cout << "Entrez l'attaque : ";
	cin >> tempAttack;
	cout << "Entrez la défense : ";
	cin >> tempDefense;
	cout << "Entrez l'allégeance : ";
	cin >> tempAllegiance;
	cout << "Entrez le rang (0:Écuyer, 1:Croisé, 2:Paladin, 3:Commandant, 4:Roi) : ";
	cin >> tempKr;
	return Knight(tempName, tempHealth, tempAttack, tempDefense, tempAllegiance, tempKr);
}

/*
	string name;
	HorseBreed breed;
	bool gender;
	int health;
	float moveSpeed;
	int stamina;
	int weight;
	bool wild;
	*/

Horse createHorse() {
	string tempName;
	int tempBreed;
	bool tempGender;
	int tempHealth;
	float tempMoveSpeed;
	int tempStamina;
	int tempWeight;
	bool tempWild;

	cout << "---CREATION DE CHEVAL---" << endl;
	cout << "Entrez le nom : ";
	cin >> tempName;
	cout << "Entrez la race (0:Shire, 1:PurSang, 2:Haflinger, 3:Appaloosa, 4:Camargue, 5:Mustang, 6:Fjord) : ";
	cin >> tempBreed;
	cout << "Entrez le genre : ";
	cin >> tempGender;
	cout << "Entrez la vie : ";
	cin >> tempHealth;
	cout << "Entrez la vitesse de déplacement : ";
	cin >> tempMoveSpeed;
	cout << "Entrez l'endurance : ";
	cin >> tempStamina;
	cout << "Entrez le poids : ";
	cin >> tempWeight;
	cout << "Entrez l'état du cheval (0:apprivoisé, 1:sauvage) : ";
	cin >> tempWild;
	return Horse(tempName, tempBreed, tempGender, tempHealth, tempMoveSpeed, tempStamina, tempWeight, tempWild);
}

void battle(Knight& k1, Knight& k2) {
	cout << "Entree" << endl;
	while (k1.getHealth() > 0 && k2.getHealth() > 0) {
		cout << "Test" << endl;
		k1.attack(k2);
		k2.attack(k1);
	}
	cout << "FIN DU COMBAT" << endl;
}

int main() {
	SetConsoleOutputCP(1252);
	Knight k1("Géraud", 150, 50, 23, "Francie", 2);
	Knight k2;
	KnightTank kt3("Rémi",1000,0,500,"Visual",4,1,150);

	KnightTank kt4;
	vector<Knight*> caserne;
	caserne.push_back(&k1);
	caserne.push_back(&k2);
	caserne.push_back(&kt3);
	for (int i = 0; i < caserne.size(); i++) {
		cout << *caserne[i];
	}
	//cout << k1 << k2 << kt3;
}