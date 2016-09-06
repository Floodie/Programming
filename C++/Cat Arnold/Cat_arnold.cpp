#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;
using namespace sf;

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Cat Arnold!");
    int point[50000][2];
    int qwe=1;
    bool paint=true;
    int lx[2];
    int ly[2];

    CircleShape shape(1);
    shape.setFillColor(Color::White);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)){paint=true;}//Если нажимаеться 'P', то включаеться режим рисования.
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)&&paint==true)//Сохроняет координаты и считает первый шаг.
        {
                paint=false;
                lx[1]=point[1][1];
                lx[2]=point[2][1];
                ly[1]=point[1][2];
                ly[2]=point[2][2];
                for(int i=1;i<qwe;i++)
                {
                    int oldX=point[i][1];
                    point[i][1]=(point[i][1]+point[i][2])%500;
                    point[i][2]=(oldX+(2*point[i][2]))%500;
                }
        }

        if(paint==false)//Сама процедура кота-арнольда
        {
            if((lx[1]==point[1][1])&&(ly[2]==point[2][2])){}
            else{
            	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	            {
	                for(int i=1;i<qwe;i++)
	                {
	                    int oldX=point[i][1];
	                    point[i][1]=(point[i][1]+point[i][2])%500;
	                    point[i][2]=(oldX+(2*point[i][2]))%500;
	                }
	            }     
            }
            window.clear();
            for(int i=1;i<qwe;i++)
            {
                shape.setPosition(point[i][1], point[i][2]);
                window.draw(shape);
            }
            window.display();
        }

        if(paint==true)//Рисование
        {        
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    Vector2i MM = Mouse::getPosition(window);
                    point[qwe][1]=MM.x;
                    point[qwe][2]=MM.y;
                    qwe++;
                    cout<<qwe<<"-"<<MM.x<<" "<<MM.y<<endl;
                }
            window.clear();
            for(int i=1;i<qwe;i++)
            {
                shape.setPosition(point[i][1], point[i][2]);
                window.draw(shape);
            }
            window.display();
        }

    }

    return 0;
}