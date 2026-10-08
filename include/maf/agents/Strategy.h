#pragma once

#include <memory>
#include <string>
#include <utility>
#include "maf/agents/Observe.h"
#include "maf/providers/ILLMProvider.h"

namespace maf::agents::strategy {

class LLMStrategyContext
{
    private:
        std::shared_ptr<maf::providers::ILLMProvider> provider;

    public:
        explicit LLMStrategyContext(std::shared_ptr<maf::providers::ILLMProvider> provider)
            : provider(std::move(provider)) {}
            
        std::shared_ptr<maf::providers::ILLMProvider> getProvider() const{return provider;}
};

struct StrategyDecision
{
    std::string approach;
    std::string reasoning;
};

class Strategy
{
    public:
        virtual ~Strategy() = default;
        virtual StrategyDecision decide(const Observation& observation, LLMStrategyContext& context) = 0;
};

}