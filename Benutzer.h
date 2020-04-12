#pragma once
#include "ListaFilme.h"
#include <vector>
class Benutzer
{
private:
	ListaFilme& w;
	vector<Film> l;
public:
	Benutzer();
	Benutzer(ListaFilme&);
	void alege_film(string);
	void delete_film(string);
	void delete_from_watchlist(string);
	void add_film(string, string, string, int, int);
	void display();
};
