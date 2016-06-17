#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;
using namespace sf;

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "My text editor");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        string n="sss.txt";
        ofstream f(n);

            window.clear();
            window.display();
        }

    }

    return 0;
}