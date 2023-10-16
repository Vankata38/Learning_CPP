// Struct is public by default
// Class is private by default

// Protected allows subclasses to access the fields

// Friends can access the private field!!!

class Entity {
protected:
    float X, Y;
public:
    Entity() {
        X = 0;
        Y = 0;
    }
};

class Player : public Entity {
    Player() {
        X = 2;
        Y = 2;
    }
};