#include "Core/Game.h"

namespace pp
{
    Game::Game()
        :window_{ sf::VideoMode({1920u,1080u}),"SFML Game Development" },
        player_{}
    {
        player_.setRadius(40.f);
        player_.setPosition({ 100.f, 100.f });
        player_.setFillColor(sf::Color::Cyan);
    }

    void Game::run()
    {
        while (window_.isOpen())
        {
            processEvents();
            update();
            render();
        }
    }

    void Game::processEvents()
    {
        while (const auto event = window_.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window_.close();
            }
        }
    }
    void Game::update()
    {
    }
    void Game::render()
    {
        window_.clear();
        window_.draw(player_);
        window_.display();
    }
}