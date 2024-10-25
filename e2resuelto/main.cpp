#include <iostream>
using namespace std;

class Mamifero {
public:
    Mamifero() {
        cout << "Mamifero constructor...\n";
    }
    virtual ~Mamifero() {
        cout << "Mamifero destructor...\n";
    }
    virtual void Move() const {
        cout << "Mamifero se mueve un paso...\n";
    }
    virtual void Speak() const {
        cout << "Mamifero hace un sonido!\n";
    }
};

class Dog : public Mamifero {
public:
    Dog() {
        cout << "Dog constructor...\n";
    }
    ~Dog() {
        cout << "Dog destructor...\n";
    }
    void WagTail() {
        cout << "El perro mueve la cola...\n";
    }
    void Speak() const override {
        cout << "Woof!\n";
    }
    void Move() const override {
        cout << "El perro se mueve 5 pasos...\n";
    }
};

class Cat : public Mamifero {
public:
    Cat() {
        cout << "Cat constructor...\n";
    }
    ~Cat() {
        cout << "Cat destructor...\n";
    }
    void Purr() {
        cout << "El gato ronronea...\n";
    }
    void Speak() const override {
        cout << "Meow!\n";
    }
    void Move() const override {
        cout << "El gato salta 3 pasos...\n";
    }
};

int main() {
    Mamifero* mamifero1 = new Dog(); // Puntero a Mamifero, pero apunta a un Dog
    Mamifero* mamifero2 = new Cat(); // Puntero a Mamifero, pero apunta a un Cat

    // Llamadas polimórficas
    mamifero1->Move();
    mamifero1->Speak();

    mamifero2->Move();
    mamifero2->Speak();

    // Liberación de memoria
    delete mamifero1;
    delete mamifero2;

    return 0;
}
