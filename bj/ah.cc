#include <iostream>
using namespace std;

int main(){
    string me,doctor;
    cin >> me >> doctor;
    if(me.size() >= doctor.size()){
        cout << "go";
    }
    else{
        cout << "no";
    }
    return 0;
}