#ifndef TASK_H
#define TASK_H
#include <string>
enum class TaskStatus
{
    PENDING,
    RUNNING,
    COMPLETED,
    FAILED
};
class Task
{
    private:
        std::string id;
        std::string description;
        TaskStatus status;
    public:
        Task(std::string TaskID, std::string desc)
        :id(TaskID), description(desc), status(TaskStatus::PENDING){}
        std::string getId() const {return id;}
        std::string getDesc() const {return description;}
        TaskStatus getStatus() const {return status;}

        void setStatus(TaskStatus new_status)
        {   
            status = new_status;
        }
};
#endif