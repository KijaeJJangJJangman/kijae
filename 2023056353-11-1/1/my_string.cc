#include<iostream>
#include "my_string.h"
using namespace std;

MyString& MyString::operator=(const MyString& b){
	if (this != &b) {
    	str = b.str;
    }
    return *this;
}
MyString MyString::operator+(const MyString& b){
    MyString result = *this;
    result.str += b.str;
    return result;
}
MyString MyString::operator*(const int b){
	MyString result = *this;
	for(int i = 0 ; i < b; i++){
		result.str += this->str;
	}
	return result;
}
ostream& operator<<(std::ostream& out, MyString& my_string){
	out <<my_string.str << endl;
	return out;
}
istream& operator>>(std::istream& in, MyString& my_string){
	in >> my_string.str;
	return in;
}
