#include <iostream>
using namespace std;

int main(){
	int h,m,a;
	cin >> h >> m;
	if(m >= 45){
		cout << h << " " << m-45;
	}
	else{
		a = 45-m;
		m = 60-a;
		if(h == 0){
			h = 23;
			cout << h << " " << m;
		}
		else{
			cout << h-1 << " " << m;
		}
	}
	return 0;
}
