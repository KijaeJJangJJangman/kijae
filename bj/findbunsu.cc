#include <iostream>
using namespace std;

int main(){
    int n, line,a,b;
    cin >> n;
    while(n > line){        
        n -= line;
        line++;
    }//n번 째 분수가 몇 번 째 줄의 어느 위치에 있는지 알려줌
    if((line % 2) != 0){
        a = line - n + 1;
        b = n;
    }//짝수 줄의 경우 분자는 1씩 늘어나고 분모는 1씩 줄어듬
    else{
        a = n;
        b = line - n +1;
    }//홀수 줄의 경우 분자는 1씩 줄고 분모는 1씩 늘어남
    cout << a << "/" << b;
    return 0;
}
//1193번 s5