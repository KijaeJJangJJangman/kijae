#include <iostream>
#include <vector>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string zero = "";
    vector<int> res;
    int carry = 0;
    int lena = a.size();
    int lenb = b.size();
    int size_diff = lena - lenb;
    if(size_diff < 0){
        size_diff *= -1;
    }
    for(int i = 0 ; i < size_diff ; i++){
        zero += "0";
    }   
    if(lena < lenb){
        a = zero + a;
    }
    else if(lena > lenb){
        b = zero + b;
    }
    int n1, n2;
    for(int i = a.size()-1 ; i >= 0 ; i--){
        n1 = a[i] - '0';
        n2 = b[i] - '0';
        if((n1+n2+carry) > 10){
            res.push_back((n1+n2+carry)%10);
            carry = 1;
        }
        else if((n1+n2+carry) == 10){
            res.push_back(0);
            carry = 1;
        }
        else{
            res.push_back((n1+n2+carry)%10);
            carry = 0;
        }
    }
    if(carry != 0){
        res.push_back(carry);
    }
    for(int i = res.size()-1 ; i >= 0 ; i--){
        cout << res[i];
    }
    cout << endl;
    return 0;
}