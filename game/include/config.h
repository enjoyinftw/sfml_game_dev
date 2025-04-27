#pragma once

#include<string>

static std::string GetResourceDir()
{
#ifdef NDEBUG //RELEASE
    return "assets/";
#else
    return "D:/projects/templates/sfml_cmake_minimal_setup/game/assets/";
#endif
}

static std::string GetGameDataDir()
{
#ifdef NDEBUG // RELEASE
    return "gamedata/";
#else
    return "D:/projects/templates/sfml_cmake_minimal_setup/game/gamedata/";
#endif
}
