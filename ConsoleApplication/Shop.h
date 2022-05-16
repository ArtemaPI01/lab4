#pragma once
#include "Warehouse.h"
class Shop {
private:
	std::string name;
	std::string type;
	std::string street;
	std::string cloak;
	Warehouse ware;
public:
	void init(std::string name, std::string type, std::string street, std::string cloak, std::string products, int station);
	void enter();
	void print();
	void cloakShop();
	void Waremethods(int a);
};

