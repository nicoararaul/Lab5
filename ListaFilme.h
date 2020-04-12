#pragma once
#include "Film.h"
#include <vector>
class ListaFilme
{
public:
	vector<Film> v;
public:
	ListaFilme();
	ListaFilme(vector<Film>&);
};
