#include "message.h"


void MessageBook::AddMessage(int number, const string& message){
    message_.insert(make_pair(number,message));
}
void MessageBook::DeleteMessage(int number){
    message_.erase(number);
}
const string& MessageBook::GetMessage(int number){
    return message_[number];
}
std::vector<int> MessageBook::GetNumbers(){
    std::vector<int> num;
    std::map<int, string>::iterator it;
    for(it = message_.begin() ; it != message_.end() ; it++){
        num.push_back(it->first);
    }
    return num;
}
