#ifndef USER_H
#define USER_H
#include <string>
class User
{
    private:
        std::string user_id;
        std::string user_name;
    public:
        User(std::string id, std::string name)
        :user_id(id), user_name(name){}
        std::string getUserId() const {return user_id;}
        std::string getUserName() const {return user_name;}
};
#endif