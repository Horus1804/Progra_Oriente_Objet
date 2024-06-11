#include "Knight.h"
#include <Windows.h>

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
	cout << "Entrez la d�fense : ";
	cin >> tempDefense;
	cout << "Entrez l'all�geance : ";
	cin >> tempAllegiance;
	cout << "Entrez le rang (0:�cuyer, 1:Crois�, 2:Paladin, 3:Commandant, 4:Roi) : ";
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
	cout << "Entrez la vitesse de d�placement : ";
	cin >> tempMoveSpeed;
	cout << "Entrez l'endurance : ";
	cin >> tempStamina;
	cout << "Entrez le poids : ";
	cin >> tempWeight;
	cout << "Entrez l'�tat du cheval (0:apprivois�, 1:sauvage) : ";
	cin >> tempWild;
	return Horse(tempName, tempBreed, tempGender, tempHealth, tempMoveSpeed, tempStamina, tempWeight, tempWild);
}


int main() {
	SetConsoleOutputCP(1252);
	Knight k1;
	cout << k1.getHorse()->getName() << endl;

	k1.getHorse()->setHealth(150);
}