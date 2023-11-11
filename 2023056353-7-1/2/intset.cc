#include "intset.h"
#include <iostream>
using namespace std;

void IntegerSet::AddNumber(int num){
    int cnt  = 0;
    for(int i = 0 ; i < numbers_.size() ; i++){
        if(numbers_[i] == num){
            cnt += 1;
        }
    }
    if(cnt == 0){
        numbers_.push_back(num);
        sort(numbers_.begin(), numbers_.end());
    }
    vector<int> new_nums_ = GetAll();
    for(int i = 0 ; i < new_nums_.size() ; i++){
        cout << new_nums_[i] << " ";
    }
    cout << endl;
}
void IntegerSet::DeleteNumber(int num){
    for(vector<int>::iterator it = numbers_.begin() ; it != numbers_.end() ; it++){
        if(*it == num){
            numbers_.erase(it);
        }
    }
    vector<int> new_nums_ = GetAll();
    for(int i = 0 ; i < new_nums_.size() ; i++){
        cout << new_nums_[i] << " ";
    }
    cout << endl;
}
int IntegerSet::GetItem(int pos){
    if(pos < 0 || pos >= numbers_.size()){
        return -1;
    }
    else{
        return numbers_[pos];
    }
}
vector<int> IntegerSet::GetAll(){
    return numbers_;
}