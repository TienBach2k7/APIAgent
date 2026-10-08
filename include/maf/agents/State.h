#pragma once

namespace maf::agents {

enum class AgentState {
    IDLE,
    THINKING,
    EXECUTING,
    COMPLETED,
    FAILED
};

}