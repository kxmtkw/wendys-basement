#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML Window");

    sf::RectangleShape shape({100.f, 20.f});
    shape.setFillColor(sf::Color::Green);
    shape.setPosition({350.f, 250.f});

    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}