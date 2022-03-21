#include <iostream>
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include "Owner.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	Owner* Alisher;
	Alisher = new Owner;
	Alisher->enter();
	Alisher->print();
	delete Alisher;
}