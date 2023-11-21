#include <iostream>
#include <vector>
using namespace std;

class A {
    int* memberA;
    public:
        A(int n){
            memberA = new int;
            *memberA = n;
            cout << "new memberA" << endl;
        }
        ~A(){
            delete memberA;
            cout << "delete memberA" << endl;
        }
        virtual void print(){
            cout << "*memberA " << *memberA << endl;
        }
};
class B : public A {
    double* memberB;
    public:
        B(double n):A(1){
            memberB = new double;
            *memberB = n;
            cout << "new memberB" << endl;
        }
        ~B(){
            delete memberB;
            cout << "delete memberB" << endl;
        }
        virtual void print(){
            A::print();
            cout << "*memberB " << *memberB << endl;
        }
};
class C : public B {
    string* memberC;
    public:
        C(string n):B(1.1){
            memberC = new string;
            *memberC = n;
            cout << "new memberC" << endl;
        }
        ~C(){
            delete memberC;
            cout << "delete memberC" << endl;
        }
        virtual void print(){
            B::print();
            cout << "*memberC " << *memberC << endl;
        }
};
int main(){
    int num1;
    double num2;
    string word;
    cin >> num1 >> num2 >> word;
    A* a = new A(num1);
    B* b = new B(num2);
    C* c = new C(word);
    vector<A*> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for(int i = 0 ; i < arr.size() ; i++){
        arr[i]->print();
    }
    delete a;
    delete b;
    delete c;
    return 0;
}