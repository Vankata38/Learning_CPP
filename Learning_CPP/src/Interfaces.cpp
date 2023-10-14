#include <iostream>
#include <string>

class Printable {
public:
    virtual std::string GetClassName() = 0;
};

class Player : Printable {
private:
    std::string m_Name;
public:
    Player(const std::string& name)
    : m_Name(name) {}

    ~Player();

    std::string GetName() { return m_Name; }

    std::string GetClassName() override { return "Player"; }
};

void Print(Printable* p) {
    std::cout << p->GetClassName() << std::endl;
}