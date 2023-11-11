#ifndef INTSET_H
#define INTSET_H
#include <vector>
#include <algorithm>
using namespace std;

class IntegerSet {
    public: 
        IntegerSet(){};
        ~IntegerSet(){};

        void AddNumber(int num);
        void DeleteNumber(int num);

        int GetItem(int pos);
        vector<int> GetAll();
    private:
        vector<int> numbers_;
};

#endif