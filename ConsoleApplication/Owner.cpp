#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Owner.h"

void Owner::init(FIO fio, int income, int expenses, Shop shop) {
	this->fio = fio;
	this->income = income;
	this->expenses = expenses;
	this->shop = shop;
}

void Owner::enter(FIO fio) {
	this->fio = fio;
	std::cout << "Введите доходы: ";
	std::cin >> income;
	std::cout << "Введите расходы: ";
	std::cin >> expenses;
	while (getchar() != '\n');
	std::cout << std::endl;
}

void Owner::print() {
	std::cout << "Информация о владельце:\n";
	fio.print();
	std::cout << "Доходы - " << income << "\nРасходы - " << expenses << "\nПрибыль - " << profitOwner() << "\n";
	std::cout << std::endl;
}

int Owner::profitOwner() {
	return income - expenses;
}