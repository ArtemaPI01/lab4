#pragma once
#include "FIO.h"
#include "Shop.h"
class Owner
{
private:
	FIO fio;
	int income;
	int expenses;
	Shop shop;
public:
	void init(FIO fio, int income, int expenses, Shop shop);
	void enter(FIO fio);
	void print();
	int profitOwner();
};

