#include <iostream>
#include <vector>
using namespace std;

class B{
    public:
        virtual ~B() {}
};
class C : public B {
    public:
        void test_C() { cout << "C::test_C()" << endl;}
};
class D : public B {
    public:
        void test_D() { cout << "D::test_D()" << endl;}
};
int main(){
    string s;
    vector<B*> arr;
    while(1){
        cin >> s;
        if(s == "C"){
            C* c = new C;
            arr.push_back(c);
        }
        if(s == "D"){
            D* d = new D;
            arr.push_back(d);
        }
        if(s == "B"){
            B* b = new B;
            arr.push_back(b);
        }
        if(s == "0"){
            for(B* pb : arr){
                if(dynamic_cast<C*>(pb)){
                    dynamic_cast<C*>(pb)->test_C();
                }
                else if(dynamic_cast<D*>(pb)){
                    dynamic_cast<D*>(pb)->test_D();
                }
            }
            for (B* pb : arr) {
                delete pb;
            }
            arr.clear();
            break;
        }
    }
    return 0;
}