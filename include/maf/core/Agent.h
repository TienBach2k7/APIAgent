#ifndef AGENT_H
#define AGENT_H
#include <string>
#include "Result.h"
#include "Task.h"
class Agent
{
    private:
        std::string agentId;
        std::string agentName;
    public:
        Agent(std::string id, std::string name)
        :agentId(id), agentName(name){}
        virtual ~Agent();
        std::string getId() const {return agentId;}
        std::string getName() const {return agentName;}
        virtual Result execute(Task& task) = 0;
};
#endif