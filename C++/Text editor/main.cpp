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
    sf::RenderWindow window(sf::VideoMode(640, 640), "My text editor");

    char word[32][16];
    int leters=0;
    int strings=0;

    for(int i=0;i<32;i++)
    {
        for(int j=0;j<16;j++)
        {
            word[j][i]=' ';
        }
    }

    Text text;
    Font font;
    font.loadFromFile("font/arial.ttf");
    text.setFont(font);
    text.setString("Hello world");
    text.setCharacterSize(24);
    text.setColor(sf::Color::White);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){word[strings][leters]='q';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){word[strings][leters]='w';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)){word[strings][leters]='e';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::R)){word[strings][leters]='r';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::T)){word[strings][leters]='t';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Y)){word[strings][leters]='y';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::U)){word[strings][leters]='u';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::I)){word[strings][leters]='i';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::O)){word[strings][leters]='o';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::P)){word[strings][leters]='p';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){word[strings][leters]='a';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){word[strings][leters]='s';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){word[strings][leters]='d';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::F)){word[strings][leters]='f';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::G)){word[strings][leters]='g';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::H)){word[strings][leters]='h';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::J)){word[strings][leters]='j';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::K)){word[strings][leters]='k';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::L)){word[strings][leters]='l';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){word[strings][leters]='z';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::X)){word[strings][leters]='x';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::C)){word[strings][leters]='c';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::V)){word[strings][leters]='v';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::B)){word[strings][leters]='b';leters++;}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::N)){word[strings][leters]='n';leters++;} 
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::M)){word[strings][leters]='m';leters++;} 
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){word[strings][leters]=' ';leters++;} 

        sleep(milliseconds(50));
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)&&(leters>0)){word[strings][leters]=' ';leters--;sleep(milliseconds(100));}
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)&&(leters==0)&&(strings>0)){word[strings][leters]=' ';strings--;sleep(milliseconds(100));}

        if(leters==32){leters=0;strings++;}

        window.clear();

        for(int i=0;i<32;i++)
        {
            for(int j=0;j<16;j++)
            {
                text.setPosition(j*40,i*20);
                text.setString(word[i][j]);
                window.draw(text);
            }
        }
        window.display();
    }

    return 0;
}