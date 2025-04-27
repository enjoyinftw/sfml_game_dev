add_library(${ENGINE_TARGET_NAME} STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Core/Engine.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Core/Engine.cpp
)

target_compile_definitions(${ENGINE_TARGET_NAME} PRIVATE
    RESOURCE_FOLDER_NAME="${RESOURCE_FOLDER_NAME}"
    RESOURCE_SRC_DIR="${RESOURCE_SRC_DIR}"
    GAMEDATA_FOLDER_NAME="${GAMEDATA_FOLDER_NAME}"
    GAMEDATA_SRC_DIR="${GAMEDATA_SRC_DIR}"
)

configure_file(
	"config.h.in"
	"${CMAKE_CURRENT_SOURCE_DIR}/include/config.h" ESCAPE_QUOTES
)


target_include_directories(${ENGINE_TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(${ENGINE_TARGET_NAME} PUBLIC cxx_std_17)
target_link_libraries(${ENGINE_TARGET_NAME} PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
    SFML::Audio
)
