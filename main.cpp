#include <SFML/Graphics.hpp>

int main() {
    sf::Window window(sf::VideoMode(500, 500), "player1999 is LOH.");

    while (window.isOpen()) {
        sf::Event event{};

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
            window.display();
    }
}