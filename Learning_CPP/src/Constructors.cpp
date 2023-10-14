#include <iostream>

class Entity {
    float X, Y;

public:
    Entity() {
        X = 0.0f;
        Y = 0.0f;
    }

    Entity(float x, float y) {
        X = x;
        Y = y;
    }

    ~Entity() {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print() const {
        std::cout << X << ", " << Y << std::endl;
    }
};