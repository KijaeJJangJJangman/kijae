#include "setfunc.h"
#include <iostream>

std::set<int> parseSet(const std::string& str){
    const char* ptr = str.c_str();
    std::set<int> a, b, c;
    int i = 0;
    while(ptr[i] != '{'){
        i++;
    }
    i++;
    while(ptr[i] != '}'){
        if(ptr[i] != ' '){
            if(ptr[i] == '-'){
                i++;
                int sign = -1;
                a.insert(sign*((int)ptr[i] - 48));
            }
            else{
                a.insert((int)ptr[i] - 48);
            }
        }   
        i++;
    }
    i++;
    while(ptr[i] != '{'){
        i++;
    }
    i++;
    while(ptr[i] != '}'){
        if(ptr[i] != ' '){
            if(ptr[i] == '-'){
                i++;
                int sign = -1;
                b.insert(sign*((int)ptr[i] - 48));
            }
            else{
                b.insert((int)ptr[i] - 48);
            }
        }
        i++;
    }
    int j = 0;
    for(j ; ptr[j] != '}' ; j++){}
    for(j ; j < str.size() ; j++){
        if(ptr[j] == '+'){
            c = getUnion(a, b);
        }
        else if(ptr[j] == '-'){
            c = getDifference(a, b);
        }
        else if(ptr[j] == '*'){
            c = getIntersection(a, b);
        }
    }
    return c;
}
std::set<int> getUnion(const std::set<int>& set0, const std::set<int>& set1){
    std::set<int>::iterator iter;
    std::set<int>set2 = set0;
    for(std::set<int>::iterator it = set1.begin() ; it != set1.end() ; it++){
        iter = set2.find(*it);
        if(iter != set2.end()){
            set2.erase(iter);
        }
    }
    for(std::set<int>::iterator it = set1.begin() ; it != set1.end() ; it++){
        set2.insert(*it);
    }
    return set2;
}
std::set<int> getDifference(const std::set<int>& set0, const std::set<int>& set1){
    std::set<int>::iterator iter;
    std::set<int>set2 = set0;
    for(std::set<int>::iterator it = set1.begin() ; it != set1.end() ; it++){
        iter = set2.find(*it);
        if(iter != set2.end()){
            set2.erase(iter);
        }
    }
    return set2;
}
std::set<int> getIntersection(const std::set<int>& set0, const std::set<int>& set1){
    std::set<int>::iterator iter;
    std::set<int>c;
    for(std::set<int>::iterator it = set1.begin() ; it != set1.end() ; it++){
        iter = set0.find(*it);
        if(iter != set0.end()){
            c.insert(*it);
        }
    }
    return c;
}
void print(const std::set<int>& set1){
    std::cout << "{ ";
    for(std::set<int>::iterator it = set1.begin() ; it != set1.end() ; it++){
        std::cout << *it << " ";
    }
    std::cout << "}" << std::endl;
}