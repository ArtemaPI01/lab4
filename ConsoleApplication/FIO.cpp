#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "FIO.h"
#include <string>

void FIO::init(std::string name, std::string surname, std::string patronymic) {
	this->name = name;
	this->surname = surname;
	this->patronymic = patronymic;
}
void FIO::enter() {
	std::cout << "Введите имя: ";
	getline(std::cin, name);
	std::cout << "Введите фамилию: ";
	getline(std::cin, surname);
	std::cout << "Введите отчество: ";
	getline(std::cin, patronymic);
	std::cout << std::endl;
}
void FIO::print() {
	std::cout << "Имя: " << name << " Фамилия: " << surname << " Отчество : " << patronymic << "\n";
}
