#include <iostream>
#include <string>
using namespace std;

// Базовый класс
class Animal
{
protected:
    string name;

public:
    Animal(string animalName)
    {
        name = animalName;
    }

    void showName()
    {
        cout << "Имя животного: " << name << endl;
    }

    void makeSound()
    {
        cout << "Животное издает звук." << endl;
    }
};

// Производный класс
class Dog : public Animal
{
private:
    string breed;

public:
    Dog(string dogName, string dogBreed)
        : Animal(dogName)
    {
        breed = dogBreed;
    }

    void showBreed()
    {
        cout << "Порода собаки: " << breed << endl;
    }

    void bark()
    {
        cout << name << " говорит: Гав!" << endl;
    }
};

int main()
{
    Dog dog("Бобик", "Овчарка");

    cout << "Работа методов базового класса:" << endl;
    dog.showName();
    dog.makeSound();

    cout << endl;

    cout << "Работа методов производного класса:" << endl;
    dog.showBreed();
    dog.bark();

    return 0;
}
