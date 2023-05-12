#include <iostream>

class Entity {
public:
    int X, Y;

    Entity() {
        std::cout << "Objects initialized" << std::endl;
        X = 0;
        Y = 0;
    }

    ~Entity() {
        std::cout << "Objects uninitialized" << std::endl;
    }

    void Print() {
        std::cout << X <<  ", " << Y << std::endl;
    }
};

int main()
{
    Entity e;
    e.Print();

    return 0;
}