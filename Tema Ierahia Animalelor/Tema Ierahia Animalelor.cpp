// Tema Ierahia Animalelor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// Clasa de bază Animal
class Animal {
protected:
    std::string nume;
    int varsta;

public:
    Animal(const std::string& nume, int varsta) : nume(nume), varsta(varsta) {}

    void setNume(const std::string& nume) {
        this->nume = nume;
    }

    void setVarsta(int varsta) {
        this->varsta = varsta;
    }

    const std::string& getNume() const {
        return nume;
    }

    int getVarsta() const {
        return varsta;
    }

    // Metoda virtuala pura, trebuie implementată în clasele derivate
    virtual void sunet() const = 0;
};

// Clasa Caine care mosteneste clasa Animal
class Caine : public Animal {
public:
    Caine(const std::string& nume, int varsta) : Animal(nume, varsta) {}

    // Suprascrierea metodei sunet pentru a emite sunetul specific unui caine
    void sunet() const override {
        std::cout << "Ham! Ham!\n";
    }
};

// Clasa Pisica care mosteneste clasa Animal
class Pisica : public Animal {
public:
    Pisica(const std::string& nume, int varsta) : Animal(nume, varsta) {}

    // Suprascrierea metodei sunet pentru a emite sunetul specific unei pisici
    void sunet() const override {
        std::cout << "Miau! Miau!\n";
    }
};

int main() {
    // Exemplu de utilizare
    Caine torro("Torro", 7);
    Pisica scotish("Scotish", 5);

    std::cout << "Numele cainelui este: " << torro.getNume() << ", iar varsta este: " << torro.getVarsta() << " ani.\n";
    torro.sunet();

    std::cout << "Numele pisicii este: " << scotish.getNume() << ", iar varsta este: " << scotish.getVarsta() << " ani.\n";
    scotish.sunet();

    return 0;
}

