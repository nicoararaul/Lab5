#pragma once
#include <windows.h> 
#include <iostream>
using namespace std;

class Film
{
private:
	string titel;
	string gen;
	int year;
	int likes;
	string url;
public:
	Film();
	Film(string, string, string, int, int);
	string getterTitel();
	string getterGen();
	int getterYear();
	int getterLikes();
	string getterUrl();
	void setterTitel(string);
	void setterGen(string);
	void setterYear(int);
	void setterLikes(int);
	void setterUrl(string);
	void growLikes();
	void display();
};


