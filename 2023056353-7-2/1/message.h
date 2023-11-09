#ifndef MESSAGE_H
#define MESSAGE_H
#include <vector>
#include <map>
#include <string>
using namespace std;


class MessageBook {
    public:
        MessageBook(){};
        ~MessageBook(){};
        void AddMessage(int number, const string& message);
        void DeleteMessage(int number);
        std::vector<int> GetNumbers();
        const string& GetMessage(int number);

    private:
        std::map<int,string> message_;
};

#endif

