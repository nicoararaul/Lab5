
#include <string.h>
#include "Benutzer.h"

Benutzer::Benutzer(ListaFilme& a) : w(a)
{

}

void Benutzer::alege_film(string b)
{
	int G = 0;
	int i = 0;
	string opt;

	while (i < w.v.size() || opt!="8")
	{

		if (w.v[i].getterGen() == b)
		{
			G = 1;

			w.v[i].display();


			string g = w.v[i].getterUrl();
			char aux[1000];

			int j = 0;
			while (g[j] != '\0')
			{
				aux[j] = g[j];
				j++;
			}

			ShellExecute(NULL, "open", aux, NULL, NULL, SW_SHOWNORMAL);

			cout << "V-a placut filmul ?" << endl;
			cout << "Daca v-a placut apasati 1\n";

			string n;
			cin >> n;
			if (n == "1")
			{
				l.push_back(w.v[i]);
				return;
			}
		}
		
		cout << "Daca doriti sa va opriti apasati tasta 8\n";
		cin >> opt;

		i++;
	}
	if (G == 0)
	{
		int it = 0;
		while (it < w.v.size())
		{
			w.v[it].display();
			cout << endl;
			it++;
		}
	}

}


void Benutzer::delete_from_watchlist(string a)
{
	int G = 0;
	int i = 0;
	while (i < l.size())
	{
		if (a == l[i].getterTitel())
		{
			G = 1;
			cout << "Pentru Like apasati 1\n";
			string h;
			cin >> h;
			if (h == "1")
			{
				l[i].growLikes();
			}

			l.erase(l.begin() + i);
			cout << "Filmul a fost eliminat !\n";
			return;
		}
		i++;
	}
	cout << "Filmul nu a fost gasit\n";
}

void Benutzer::launch_notepad()
{
	system("notepad.exe output.csv");
}

void Benutzer::delete_film(string a)
{
	int i = 0;
	while (i < w.v.size())
	{
		if (a == w.v[i].getterTitel())
		{
			w.v.erase(w.v.begin() + i);
			return;
		}
		i++;
	}
	cout << "Filmul nu a fost gasit\n";
}

void Benutzer::display()
{
	int i = 0;
	while (i < l.size())
	{
		l[i].display();
		i++;
	}
}

void Benutzer::add_film(string titel, string gen, string url, int year, int likes)
{
	w.v.push_back(Film(titel, gen, url, year, 0));
}
