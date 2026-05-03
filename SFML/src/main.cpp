#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Square");

    sf::RectangleShape square({100.f, 100.f}); // tamaño (ancho, alto)
    square.setFillColor(sf::Color::Green);
    square.setPosition({350.f, 250.f});

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(square);
        window.display();
    }
}