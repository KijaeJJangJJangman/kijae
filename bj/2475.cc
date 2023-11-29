#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e;
	cin >>a>>b>>c>>d>>e;
	a *= a;
	b*= b;
	c*=c;
	d*=d;
	e*=e;
	int sum = a+b+c+d+e;
	int num = sum%10;
	cout << num;
	return 0;
}
