#include <iostream>

using namespace std;

class Animal{
public:
    int energy = 50;

    void sleep(){
        cout << "I'm sleeping" << endl;
        this -> energy++;
    }
    void eat(){
        cout << "I'm eating" << endl;
        this -> energy++;
    }

    int getEnergy() const{
        return this -> energy;
    }
};

class Dog:public Animal{
public:
    string name;

    explicit Dog(string n){
        this -> name = n;
    }

    void bark(){
        cout << "Bark" << endl;
        energy--;
    }
    void run(){
        cout << "Running!" << endl;
        energy -= 3;
    }
};

int main() {
    Dog dog1("Max");
    for(int i=4;i<9;i++){
        dog1.sleep();
        dog1.run();
    }
    dog1.eat();
    dog1.bark();
    cout<<dog1.getEnergy()<<endl;
    return 0;
}