
# Final Project Folder Structure

```
/YourProjectRoot
├── CMakeLists.txt                # Top-level CMake for the entire project
├── /engine
│   ├── CMakeLists.txt            # CMake for engine-specific settings
│   ├── /src
│   │   ├── ECS/                  # Entity-Component-System system
│   │   ├── Systems/              # Game systems (e.g., render, input)
│   │   ├── Components/           # ECS components (e.g., position, velocity)
│   │   ├── Core/                 # Core engine classes
│   │   └── Utilities/            # Misc helpers and utilities
│   └── /include
│       ├── ECS/                  # Headers for ECS components
│       ├── Systems/              # Headers for game systems
│       ├── Components/           # Headers for ECS components
│       ├── Core/                 # Headers for core engine classes
│       └── Utilities/            # Headers for utility classes
├── /game
│   ├── CMakeLists.txt            # CMake for game-specific settings
│   ├── /src
│   │   ├── Entities/             # Game entities like player, NPCs
│   │   ├── AI/                   # AI behaviors and algorithms
│   │   ├── Levels/               # Level management
│   │   ├── GameStates/           # Different game states (e.g., main menu, play)
│   │   └── main.cpp              # Entry point for the game
│   └── /include
│   |   ├── Entities/             # Headers for game entities
│   |   ├── AI/                   # Headers for AI logic
│   |   ├── Levels/               # Headers for level management
│   |   └── GameStates/           # Headers for game state management
|   └── /assets                       # Game assets like images, sounds, levels
│   	├── sprites/                  # Sprites and textures
│   	├── sounds/                   # Sound files (music, effects)
│   	└── levels/                   # Level data files (e.g., JSON, XML)
├── /external                     # External dependencies (e.g., SFML, other libs)
│   └── sfml/                     # SFML library (handled via FetchContent)
└── /build                        # Build directory where CMake generates output
```
