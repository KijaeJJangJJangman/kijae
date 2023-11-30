#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a;
	vector<int> v;
	for(int i = 0 ; i < 8 ; i++){
		cin >> a;
		v.push_back(a);
	}
	vector<int> as = {1,2,3,4,5,6,7,8};
	vector<int> ds = {8,7,6,5,4,3,2,1};
	int ac = 0;
	int dc = 0;
	for(int i = 0 ; i < v.size() ; i++){
		if(v[i] == as[i]){
			ac++;
		}
		else if(v[i] == ds[i]){
			dc++;
		}
	}
	if(ac == 8){
		cout << "ascending";
	}else if(dc == 8){
		cout << "descending";
	}else{
		cout << "mixed";
	}
	return 0;
}
