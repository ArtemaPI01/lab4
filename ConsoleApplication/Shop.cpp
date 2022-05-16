#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Shop.h"
#include <string>

void Shop::init(std::string name, std::string type, std::string street, std::string cloak, std::string products, int station) {
	this->name = name;
	this->type = type;
	this->street = street;
	this->cloak = cloak;
	ware.init(products, station);
}

void Shop::enter() {
	std::cout << "Введите название: ";
	getline(std::cin, name);
	std::cout << "Введите тип: ";
	getline(std::cin, type);
	std::cout << "Введите улицу: ";
	getline(std::cin, street);
	std::cout << "Введите часы работы: ";
	getline(std::cin, cloak);
	std::cout << std::endl;
	ware.enter();
}

void Shop::print() {
	std::cout << "Информация о магазине:\nНазвание - " << name << "\nТип - " << type << "\nУлица - " << street << "\nЧасы работы - " << cloak << "\n", name, type, street, cloak;
	ware.print();
}

void Shop::Waremethods(int a) {
	switch (a) {
	case 0: {
		std::string p;
		std::cout << "Введите название товара: ";
		getline(std::cin, p);
		ware.Poisk(p);
	}break;
	case 1: {
		std::cout << "Введите кол-во тонн: ";
		int t;
		std::cin >> t;
		while (getchar() != '\n');
		std::cout << "Время разгрузки "<< t <<" тонн: " << ware.cloakWarehouse(t) << " мин.\n" << std::endl;
	}break;
	default:
			break;
	}
}

void Shop::cloakShop() {
	char str1[5];
	char str2[5];
	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		if (i == 2) i++;
		str1[k] = cloak.c_str()[i];
		str2[k] = cloak.c_str()[i + 6];
		k++;
	}
	int a = atoi(str2) / 100 - atoi(str1) / 100;
	int b = atoi(str2) % 100 - atoi(str1) % 100;
	if (b < 0) {
		b += 60;
		a--;
	}
	std::cout << "Часы работы - " << cloak << "\nЧасы -  " << a << " \nМинуты - " << b << "\n" << std::endl;
}
