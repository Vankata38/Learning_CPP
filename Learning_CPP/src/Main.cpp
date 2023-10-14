#include <iostream>
#include "VFuncs.cpp"

void PrintName(Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}

int main() {

    Entity* e = new Entity;
    PrintName(e);

    Player* p = new Player("Ivan");
    PrintName(p);

	std::cin.get();

	return 0;
}