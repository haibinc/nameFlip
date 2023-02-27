#include <iostream>
#include "SFML/Graphics.hpp"
#include "ResourceHandler.h"
#include "ResourceHolder.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");
    sf::Text text, text2;
    ResourceHandler<Font, sf::Font>::load(Font::OPEN_SANS, "OpenSans-Bold.ttf");
    text.setFont(ResourceHandler<Font, sf::Font>::get(Font::OPEN_SANS));
    sf::Color white = sf::Color::White;
    white.a = 50;
    text.setString("JOEMAMa");
    text.setCharacterSize(50);
    text.setPosition(100, 100);
    text2 = text;
    text2.setOrigin(0,100);
    text2.setFillColor(white);
    text2.setScale(1.f, -1.f);
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(text);
        window.draw(text2);
        window.display();
    }
    return 0;
}
