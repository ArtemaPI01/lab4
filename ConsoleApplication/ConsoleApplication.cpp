#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "Owner.h"
#include "Boxoffice.h"
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	Shop* Ashan;
	FIO* fio;
	Owner* Alisher;
	Boxoffice* b;
	fio = new FIO[2];
	fio[0].init("A", "B", "C");
	fio[1].init("D", "E", "F");
	Ashan = new Shop;
	Ashan->enter();
	Ashan->cloakShop();
	Ashan->Waremethods(0);
	Ashan->Waremethods(1);
	Alisher = new Owner;
	Alisher->init(fio[0], 1, 2, *Ashan);
	Alisher->print();
	b = new Boxoffice;
	(*b).init(20,20, fio[1]);
	(*b).print();
	(*b).cloakBoxoffice(100);
	delete[] fio;
	delete b, Ashan, Alisher;
	_getch;
}