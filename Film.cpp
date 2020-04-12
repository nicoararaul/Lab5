#include "Film.h"
Film::Film()
{

}

Film::Film(string a, string b, string c, int d, int e)
{
	titel = a;
	gen = b;
	url = c;
	year = d;
	likes = e;
}

string Film::getterTitel()
{
	return titel;
}

string Film::getterGen()
{
	return  gen;
}

int Film::getterYear()
{
	return year;
}

int Film::getterLikes()
{
	return likes;
}

string Film::getterUrl()
{
	return url;
}

void Film::setterTitel(string a)
{
	titel = a;
}

void Film::setterGen(string a)
{
	gen = a;
}

void Film::setterYear(int a)
{
	year = a;
}

void Film::setterLikes(int a)
{
	likes = a;
}

void Film::setterUrl(string a)
{
	url = a;
}

void Film::growLikes()
{
	likes++;
}

void Film::display()
{
	cout << titel << " " << gen << " " << year << " " << likes;
}
