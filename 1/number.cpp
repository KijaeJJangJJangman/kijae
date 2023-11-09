#include "number.h"

int Square::getSquare(){
    int num = getNumber();
    return num*num;
}
int Cube::getCube(){
    int num = getNumber();
    return num*num*num;
}
