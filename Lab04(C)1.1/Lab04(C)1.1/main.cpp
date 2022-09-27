/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab04(C)1.1
NOM DU FICHIER : main.cpp
DATE : 2022-09-27
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int touche(0);
	int pod1(0);
	int pod2(0);
	int pod3(0);
	int note1(0);
	int note2(0);
	int note3(0);
	bool a(false);
	bool b(false);
	float final;
	float final1;
	float final2;
	float final3;

	do
	{
		cout << "A) DEFENIR PONDERATION" << endl;
		cout << "B) AFFICHER PONDERATION" << endl;
		cout << "C) SAISIR LES NOTES" << endl;
		cout << "D) AFFICHER LES NOTES" << endl;
		cout << "Q) QUITTER" << endl;

		touche = toupper(_getch());

		switch (touche)
		{
		case 'A':
			do
			{
				do
				{
					cout << "LE TOTAL DOIT ETRE DE 100" << endl;
					cout << "PONDERATION 1: ";
					cin >> pod1;
				} while (pod1 < 0 || pod1 > 100);
				do
				{
					cout << "PONDERATION 2: ";
					cin >> pod2;
				} while (pod2 < 0 || pod2 > 100);
				do
				{
					cout << "PONDERATION 3: ";
					cin >> pod3;
				} while (pod3 < 0 || pod3 > 100);

				if ((pod1 + pod2 + pod3) == 100)
				{
					a = true;
				}



			} while (a == false);
			break;

		case 'B':
			if (a == true)
			{
				cout << "PONDERATION 1: " << pod1 << endl;
				cout << "PONDERATION 2: " << pod2 << endl;
				cout << "PONDERATION 3: " << pod3 << endl;
			}
			else
			{
				touche == 'A';
			}
			break;
		case 'C':
				do
				{
					cout << "NOTE 1: ";
					cin >> note1;
				} while (note1 < 0 || note1 > 100);
				do
				{
					cout << "NOTE 2: ";
					cin >> note2;
				} while (note2 < 0 || note2 > 100);
				do
				{
					cout << "NOTE 3: ";
					cin >> note3;
				} while (note3 < 0 || note3 > 100);
				b = true;
			break;

		case 'D':
			if (a == true && b == true)
			{
				cout << "PONDERATION 1: " << pod1 << endl;
				cout << "PONDERATION 2: " << pod2 << endl;
				cout << "PONDERATION 3: " << pod3 << endl;
				cout << "NOTE 1: " << note1 << endl;
				cout << "NOTE 2: " << note2 << endl;
				cout << "NOTE 3: " << note3 << endl;
					
				final1 = (pod1 * note1) / 100;
				final2 = (pod2 * note2) / 100;
				final3 = (pod3 * note3) / 100;
				final = final1 + final2 + final3;

				cout << "NOTE FINAL: " << final << endl;
				break;
			}
			else if (a == false)
			{
				touche = 'a';
				break;
			}
			else if (b == false)
			{
				touche = 'b';
				break;
			}
			else
			{
				cout << "Houston we have a problem";
				return 0;
			}
			break;

			default:
				return 0;
				break;
			}
			break;
	} while (touche != 'Q');	

}