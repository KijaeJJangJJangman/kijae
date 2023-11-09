#include <iostream>
#include "message.h"

int main(){
    int num;
    string msg,cmd;
    MessageBook mb;
    vector<int> list;
    while(1){
        cin >> cmd;
        if(cmd == "add"){
            cin >> num;
            cin.ignore();
            getline(cin,msg);
            mb.AddMessage(num, msg);
        }
        else if(cmd == "print"){
            cin >> num;
            cout << mb.GetMessage(num) << endl;
        }
        else if(cmd == "delete"){
            cin >> num;
            mb.DeleteMessage(num);
        }
        else if(cmd == "list"){
            list = mb.GetNumbers();
            for(int i = 0 ; i < list.size() ; i++){
                cout << list[i] << ": " << mb.GetMessage(list[i]) << endl;
            }
        }
        else if(cmd == "quit"){
            break;
        }
    }
    return 0;
}