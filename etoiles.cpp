#include<iostream>

using namespace std;

int main() {
	char choix;
	int n;
	do {
		cout << "Donnez votre choix de forme (a,b,c,d, autre pour quitter): ";
		cin >> choix;
		if (choix >= 'a' && choix <= 'd') {
			cout << "Donnez la taille de la forme: ";
			cin >> n;
			switch (choix) {
			case 'a':
				for (int i = 0; i < n; ++i) { //on affiche n étoiles sur 1 ligne
					cout << "*";
				}
				cout << endl; //retour chariot en fin de ligne
				break;
			case 'b':
				for (int i = 0; i < n; ++i) { //on parcourt n lignes
					for (int j = 0; j < n; ++j) { //pour chaque ligne, on parcourt n colonnes
						cout << "*"; //on affiche 1 étoile
					}
					cout << endl; //après les n colonnes (donc la fin de la ligne) on revient à la ligne (retour chariot)
				}
				break;
			case 'c':
				for (int i = 0; i < n; ++i) { //on parcourt n lignes
					for (int j = 0; j < n; ++j) { //pour chaque ligne, on parcourt n colonnes
						if (i == 0 || i == n - 1 || j == 0 || j == n - 1) { 
							cout << "*"; //on affiche 1 étoile si 1ère ou dernière ligne/colonne
						}
						else {
							cout << " "; //sinon c'est un espace
						}
					}
					cout << endl; //après les n colonnes (donc la fin de la ligne) on revient à la ligne (retour chariot)
				}
				break;
			case 'd':
				for (int i = 0; i < n; ++i) { //on affiche n caractères
					if (i % 2 == 0) { //si i est pair, on affiche une *
						cout << "*";
					}
					else {
						cout << "_"; //sinon on affiche un _
					}
				}
				cout << endl; //retour chariot en fin de ligne
				break;
			}
		}
	} while (choix >= 'a' && choix <= 'd');
	cout << "Fin" << endl;
}
