
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

	while (i < w.v.size() || opt != "8")
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

			cout << "V-a placut filmul?" << endl << "Daca v-a placut apasati 1\n";

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

