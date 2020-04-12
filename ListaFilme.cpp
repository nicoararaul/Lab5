#pragma once
#include <vector>
#include "Film.h"
using namespace std;
class ListaFilme
{

public:
	vector<Film> v;
public:
	ListaFilme();
	ListaFilme(vector<Film>&);
};
