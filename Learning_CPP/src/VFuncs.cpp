#include <string>

class Entity {
public:
    virtual std::string GetName() {
        return "Entity";
    }
};

class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string& name)
    : m_Name(name) {}

    std::string GetName() override {
        return m_Name;
    }
};