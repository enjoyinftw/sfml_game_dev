#pragma once

#include<string>

static std::string GetResourceDir()
{
#ifdef NDEBUG //RELEASE
    return "/";
#else
    return "/";
#endif
}

static std::string GetGameDataDir()
{
#ifdef NDEBUG // RELEASE
    return "/";
#else
    return "/";
#endif
}
