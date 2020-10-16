#pragma once

#include <autogen/UnityEngine/MonoBehaviour.hpp>
#include <autogen/TaskTypes.hpp>
#include <autogen/SystemTypes.hpp>

struct PlayerControl;

struct PlayerTask : UnityEngine::MonoBehaviour {
    std::int32_t _Index;
    std::uint32_t _Id;
    PlayerControl* _Owner;
    SystemTypes StartAt;
    TaskTypes TaskType;
    struct Minigame_o *MinigamePrefab;
    bool HasLocation;
    bool LocationDirty;
};
CHECK_TYPE(PlayerTask, 0x20);
