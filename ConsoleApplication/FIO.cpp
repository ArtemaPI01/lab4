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
	std::cout << "������� ���: ";
	getline(std::cin, name);
	std::cout << "������� �������: ";
	getline(std::cin, surname);
	std::cout << "������� ��������: ";
	getline(std::cin, patronymic);
	std::cout << std::endl;
}
void FIO::print() {
	std::cout << "���: " << name << " �������: " << surname << " �������� : " << patronymic << "\n";
}
