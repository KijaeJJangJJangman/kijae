#include <iostream>
#include "animal.h"
#include <vector>
using namespace std;

int main(){
    string name, favoritetoy,animal;
    int age, numstripes;
    vector<Animal*> animals;
    while(1){
        cin >> animal;
        if(animal == "0"){
            for(int i = 0 ; i < animals.size() ; i++){
                animals[i]->printInfo();
            }
            for(int i = 0 ; i < animals.size() ; i++){
                delete animals[i];
            }
            break;
        }
        else if(animal == "z"){
            cin >> name >> age >> numstripes;
            Zebra* z = new Zebra(name,age,numstripes);
            animals.push_back(z);
        }
        else if(animal == "c"){
            cin >> name >> age >> favoritetoy;
            Cat* c = new Cat(name,age,favoritetoy);
            animals.push_back(c);
        }
    }
    animals.clear();
    return 0;
}