#include "SFML/Graphics.hpp"

namespace pp
{
    class Game
    {
    public:
        Game();
        void run();
    private:
        void processEvents();
        void update();
        void render();
        sf::RenderWindow window_;
        sf::CircleShape player_;
    };
}