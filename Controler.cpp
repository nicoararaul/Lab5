#include "Controler.h"
#include <fstream>

void controler()
{

	Film a("Star", "SF", "www.google.com", 1978, 0);
	Film b("Titanic", "SF", "www.facebook.com", 1990, 0);
	ofstream myfile;
	myfile.open("output.txt", ios::trunc);
	vector <Film> k = { a, b };


	ListaFilme S(k);
	Benutzer user(S);


	//WATCHLIST



	string mod;
	cout << "Daca sunteti admin apasati tasta A altfel apasati tasta B : ";
	cin >> mod;
	if (mod == "A" || mod == "a")
	{
		cout << "Pentru a sterge un film apasati tasta 1" << endl;
		cout << "Pentru a adauga un film apasati tasta 2\n";
		cout << "Pentru a iesi pasati orice alta tasta" << endl;
		string x;
		cin >> x;

		while (x == "1" || x == "2")
		{
			if (x == "1")
			{

				cout << "Introduceti numele filmului pe care doriti sa-l stergeti:\n";
				cin >> x;
				user.delete_film(x);
			}
			if (x == "2")
			{
				string a, b, c;
				int d;
				cout << "Introduceti, in ordine, numele, genul, url-ul si anul de aparitie al filmului:\n";
				cin >> a >> b >> c >> d;
				user.add_film(a, b, c, d, 0);
				//S.afisare(); 
			}
			cout << "Pentru a sterge un film apasati tasta 1" << endl;
			cout << "Pentru a adauga un film apasati tasta 2\n";
			cout << "Pentru a iesi pasati orice alta tasta" << endl;

			cin >> x;
		}

	}

	if (mod == "B" || mod == "b")
	{

		cout << "Pentru a alege un film apasati tasta 1" << endl;
		cout << "Pentru a sterge un film din watchlist apasati tasta 2\n";
		cout << "Pentru a iesi pasati orice alta tasta" << endl;

		string x;
		cin >> x;

		while (x == "1" || x == "2")
		{
			if (x == "1")
			{
				cout << "Introduceti genul filmului\n";
				cin >> x;
				user.alege_film(x);
			}

			if (x == "2")
			{
				cout << "Introduceti numele filmului\n";
				cin >> x;
				user.delete_from_watchlist(x);
			}
			cout << "Pentru a alege un film apasati tasta 1" << endl;
			cout << "Pentru a sterge un film din watchlist apasati tasta 2\n";
			cout << "Pentru a iesi pasati orice alta tasta" << endl;
			cin >> x;
		}
	}
	for (int i = 0; i < S.v.size(); i++)
	{
		myfile << S.v[i].getterTitel() << ' ' << S.v[i].getterGen() << ' ' << S.v[i].getterUrl() << ' ' << S.v[i].getterYear() << ' ' << S.v[i].getterLikes() << endl;
	}

	ofstream csvfile;
	csvfile.open("output.csv");
	if (user.l.size() != 0)
		cout << "\n Filmele din Watchlist au fost salvate in format CSV \n";
	for (int i = 0; i < user.l.size(); i++) {
		csvfile << user.l[i].getterTitel() << " , " << user.l[i].getterGen() <<endl;
	}

	user.launch_notepad();
}