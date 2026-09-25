#ifndef RESULT_H
#define RESULT_H
#include <string>
class Result
{
    private:
        bool success;
        std::string data;
        std::string Error_message;
    public:
        Result(bool isSuccess, std::string data)
        :success(success), data(data) {}
        Result(bool success, std::string data, std::string error)
        :success(success), data(data), Error_message(error) {}

        bool isSuccess() const {return success;}
        std::string getData() const {return data;}
        std::string getError() const {return Error_message;}
};
#endif