#include <iostream>
#include "sorted.h"



int main(){
    string n;
    SortedArray arr;
    while(1){
        cin >> n;
        if(n == "ascend"){
            vector<int> v = arr.GetSortedAscending();
            for(int i = 0 ; i < v.size() ; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if(n == "descend"){
            vector<int> v = arr.GetSortedDescending();
            for(int i = 0 ; i < v.size() ; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if(n == "max"){
            int v = arr.GetMax();
            cout << v << endl;
        }
        else if(n == "min"){
            int v = arr.GetMin();
            cout << v << endl;
        }
        else if(n == "quit"){
            break;
        }
        else{
            arr.AddNumber(stoi(n));
        }
    }
    return 0;

}