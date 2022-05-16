#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Boxoffice.h"
#include <string>

void Boxoffice::init(int workers, int count, FIO fio) {
	this->workers = workers;
	this->count = count;
	this->fio = fio;
}

void Boxoffice::enter(FIO fio) {
	this->fio = fio;
	std::cout << "������� ���-�� ���� �������: ";
	std::cin >> workers;
	std::cout << "������� ���-�� ����: ";
	std::cin >> count;
	while (getchar() != '\n');
	std::cout << std::endl;
}

void Boxoffice::print() {
	std::cout << "�����:\n���-�� ������� - " << workers << "\n��� - �� ���� - " << count;
	std::cout << "\n��� �������� �������:\n";
	fio.print();
	std::cout << std::endl;
}
void Boxoffice::cloakBoxoffice(int x) {
	int a;
	if (count - workers < 0)
		a = (x / count) * 2;
	a = (x / workers) * 2;
	std::cout << "����� ������������ " << x << " �������� - " << a << " ������";
}
