#include <iostream>
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include "Shop.h"
#include "Owner.h"
#include "Boxoffice.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	Shop* Ashan;
	Owner* Alisher;
	Boxoffice* b;
	Ashan = new Shop[1];
	for (int i = 0; i < 1; i++)
	{
		Ashan[i].enter();
		Ashan[i].print();
		Ashan[i].cloakShop();
	}
	delete[] Ashan;
	Alisher = new Owner;
	Alisher->enter();
	Alisher->print();
	delete Alisher;
	b = new Boxoffice;
	b->enter();
	b->print();
	b->cloakBoxoffice(100);
	delete b;
}