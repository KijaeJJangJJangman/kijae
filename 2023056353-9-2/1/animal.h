#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;

class Animal {
    protected:
        string name_;
        int age_;
    public:
        Animal(string name, int age):name_(name), age_(age) {};
        virtual void printInfo() = 0;
};
class Zebra : public Animal{
    int numStripes;
    public:
        Zebra(string name, int age, int numstripes):Animal(name,age), numStripes(numstripes){};
        virtual void printInfo();
};
class Cat : public Animal {
    string favoriteToy;
    public:
        Cat(string name, int age, string favoritetoy):Animal(name,age),favoriteToy(favoritetoy){};
        virtual void printInfo();
};
#endif