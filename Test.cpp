#include "Test.h"
#include <iostream>
#include <assert.h>
#include "Film.h"
#include "ListaFilme.h"
#include "Benutzer.h"

using namespace std;
void testall()
{
	Film a1("Star Wars", "SF", "www.google.com", 1978, 0);
	Film a2("Star Track", "SF", "www.facebook.com", 1990, 0);
	vector <Film> vectorfilm = { a1, a2 };
	ListaFilme s(vectorfilm);
	Benutzer ben(s);

	ben.add_film("AAA", "BBB", "www.facebook.com", 2000, 0);
	assert(s.v.size() == 3);
	ben.delete_film("AAA");
	assert(s.v.size() == 2);
}