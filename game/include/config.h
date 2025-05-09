#pragma once

#include<string>

static std::string GetResourceDir()
{
#ifdef NDEBUG //RELEASE
    return "assets/";
#else
    return "D:/projects/learn_cpp/sfml_game_dev/game/assets/";
#endif
}

static std::string GetGameDataDir()
{
#ifdef NDEBUG // RELEASE
    return "gamedata/";
#else
    return "D:/projects/learn_cpp/sfml_game_dev/game/gamedata/";
#endif
}
