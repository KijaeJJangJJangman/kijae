#ifndef SORTED_H
#define SORTED_H
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class SortedArray{
    public:
        SortedArray();
        ~SortedArray();

        void AddNumber(int num);

        vector<int> GetSortedAscending();
        vector<int> GetSortedDescending();
        int GetMax();
        int GetMin();

    private:
        vector<int> numbers_;
};

#endif
