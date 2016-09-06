#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;
using namespace sf;

int main()
{
    bool game=false;
    sf::RenderWindow window(sf::VideoMode(640, 640), "Test program by Floodie");
    double x=0;
    double y=0;   
    int color[32][32];
    int change=1;
    double jump=50;
    bool jump_no=false;
    for(int i=0;i<32;++i){for(int j=0;j<32;++j){color[i][j]=1;}}
    bool game_over=false;
    bool res=false;
    int rx;
    int ry;
    Text text;
    Font font;
    font.loadFromFile("font/arial.ttf");
    text.setFont(font);
    text.setColor(sf::Color::Green);
    text.setCharacterSize(100);
    text.setPosition(100,100);
        //1 - белый\пусто
        //2 - зеленый\можно находиться
        //3 - черный\стена
        //4 - красный\лава
        //5 - синий\старт
        //6 - желтый\финишь

        //Vector2i ll= sf::Mouse::getPosition(window);

    sf::RectangleShape r(sf::Vector2f(0, 0));
    r.setSize(sf::Vector2f(20, 20));

    sf::CircleShape s(10.f);
    s.setFillColor(sf::Color::White);
    s.setPosition(10,10);


    Texture texture1;
    texture1.loadFromFile("picture/nebo.jpg");

    Sprite sprite1;
    sprite1.setTexture(texture1);
    sprite1.setTextureRect(IntRect(0,0,20,20));

    Texture texture2;
    texture2.loadFromFile("picture/earth.png");

    Sprite sprite2;
    sprite2.setTexture(texture2);
    sprite2.setTextureRect(IntRect(0,0,20,20));

    Texture texture3;
    texture3.loadFromFile("picture/block.jpg");

    Sprite sprite3;
    sprite3.setTexture(texture3);
    sprite3.setTextureRect(IntRect(0,0,20,20));

    Texture texture4;
    texture4.loadFromFile("picture/lava.png");

    Sprite sprite4;
    sprite4.setTexture(texture4);
    sprite4.setTextureRect(IntRect(0,0,20,20));

    Clock clock;


    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if(Keyboard::isKeyPressed(Keyboard::G))
            {
                game=true;
                    window.clear();
                    for(int i=0;i<32;++i)
                    {
                    for(int j=0;j<32;++j)
                    {
                    if(color[i][j]==1){sprite1.setPosition(i*20,j*20);}
                    if(color[i][j]==2){sprite2.setPosition(i*20,j*20);}
                    if(color[i][j]==3){sprite3.setPosition(i*20,j*20);}
                    if(color[i][j]==4){sprite4.setPosition(i*20,j*20);}
                    if(color[i][j]==5){r.setFillColor(Color::Blue);r.setPosition(sf::Vector2f(i*20, j*20));s.setPosition(i*20, j*20);x=i*20;y=j*20;rx=i*20;ry=j*20;}
                    if(color[i][j]==6){r.setFillColor(Color::Yellow);r.setPosition(sf::Vector2f(i*20, j*20));}
                    window.draw(r);
                    window.draw(sprite1);
                    window.draw(sprite2);
                    window.draw(sprite3);
                    window.draw(sprite4);
                }
            }
            //window.draw(s); 
            window.display();
            }
        if(Keyboard::isKeyPressed(Keyboard::E)){game=false;}

        if(game==true)
            {
            if(game_over==false)
            {
            int x1=x+10;
            int y1=y+10;
            if(Keyboard::isKeyPressed(Keyboard::Right)&&(color[(x1+9)/20][(y1+9)/20]!=3)&&(color[(x1+9)/20][(y1-9)/20]!=3)){x=x+0.5;}
            if(Keyboard::isKeyPressed(Keyboard::Left)&&(color[(x1-9)/20][(y1+9)/20]!=3)&&(color[(x1-9)/20][(y1-9)/20]!=3)){x=x-0.5;}
            if(Keyboard::isKeyPressed(Keyboard::Up)&&(color[x1/20][(y1-10)/20]!=3)&&(color[(x1-8)/20][(y1-10)/20]!=3)&&(color[(x1+8)/20][(y1-10)/20]!=3)&&jump_no==false){y=y-1;jump--;}
            else if((color[x1/20][(y1+10)/20]!=3)&&(color[(x1-8)/20][(y1+10)/20]!=3)&&(color[(x1+8)/20][(y1+10)/20]!=3)){y=y+0.3;}
            if(jump==0){jump_no=true;}
            if(color[x1/20][(y1+10)/20]==3){jump_no=false;jump=50;}
            if(color[x1/20][(y1+10)/20]==4){s.setFillColor(Color::Yellow);game_over=true;text.setString("You lose!");}
            if(color[x1/20][y1/20]==6){s.setFillColor(Color::Yellow);game_over=true;text.setString("You Win!");}
            else{s.setFillColor(Color::White);}
            s.setPosition(x, y);
            }
            if(Keyboard::isKeyPressed(Keyboard::R))
                {
                    s.setPosition(rx, ry);
                    x=rx;
                    y=ry;
                    game_over=false;
                    res=true;
                    window.clear();
                    for(int i=0;i<32;++i)
                    {
                    for(int j=0;j<32;++j)
                    {
                    if(color[i][j]==1){sprite1.setPosition(i*20,j*20);}
                    if(color[i][j]==2){sprite2.setPosition(i*20,j*20);}
                    if(color[i][j]==3){sprite3.setPosition(i*20,j*20);}
                    if(color[i][j]==4){sprite4.setPosition(i*20,j*20);}
                    if(color[i][j]==5){r.setFillColor(Color::Blue);r.setPosition(sf::Vector2f(i*20, j*20));s.setPosition(i*20, j*20);x=i*20;y=j*20;rx=i*20;ry=j*20;}
                    if(color[i][j]==6){r.setFillColor(Color::Yellow);r.setPosition(sf::Vector2f(i*20, j*20));}
                    window.draw(r);
                    window.draw(sprite1);
                    window.draw(sprite2);
                    window.draw(sprite3);
                    window.draw(sprite4);
                }
            }
            //window.draw(s); 
            window.display();
                }

            //window.clear();
            
            for(int i=x/20-32;i<x/20+32;i++)
            {
                for(int j=y/20-16;j<y/20+16;j++)
                {
                    if(color[i][j]==2){sprite2.setPosition(i*20,j*20);window.draw(sprite2);}
                    if(color[i][j]==3){sprite3.setPosition(i*20,j*20);window.draw(sprite3);}
                }
            }

            window.draw(s); 
            if(game_over==true){window.draw(text);}
            window.display();
            }

        if(game==false)
            {
            if(Keyboard::isKeyPressed(Keyboard::Numpad9))
            {

                for(int i=0;i<32;++i){for(int j=0;j<32;++j){color[i][j]=1;}}
            }

            if(Keyboard::isKeyPressed(Keyboard::Numpad1)){change=1;}
            if(Keyboard::isKeyPressed(Keyboard::Numpad2)){change=2;}
            if(Keyboard::isKeyPressed(Keyboard::Numpad3)){change=3;}
            if(Keyboard::isKeyPressed(Keyboard::Numpad4)){change=4;}
            if(Keyboard::isKeyPressed(Keyboard::Numpad5)){change=5;}
            if(Keyboard::isKeyPressed(Keyboard::Numpad6)){change=6;}

            if(Mouse::isButtonPressed(sf::Mouse::Left))
            {
                Vector2i ll= sf::Mouse::getPosition(window);
                int x1=(ll.x)/20;
                int y1=(ll.y)/20;
                color[x1][y1]=change;
            }

            if(Keyboard::isKeyPressed(Keyboard::Add))
            {
                for(int i=0;i<32;++i){for(int j=0;j<32;++j){if(color[i][j]==1){color[i][j]=change;}}}
            }

            if(Keyboard::isKeyPressed(Keyboard::S))
            {
                
                time_t rawtime;
                struct tm * timeinfo;
                time (&rawtime);
                timeinfo = localtime (&rawtime);
                ofstream map;
                map.open("maps/map.txt");
                map<<asctime(timeinfo)<<endl;
                for(int i=0;i<32;++i){for(int j=0;j<32;++j){map<<color[j][i];}map<<endl;}
                map.close();
                sf::sleep(seconds(0.5));
            }

            if(Keyboard::isKeyPressed(Keyboard::O))
            {
                ifstream newmap;
                newmap.open("maps/newmap.txt");
                char w[32][32];
                for(int i=0;i<32;++i)
                    {
                        for(int j=0;j<32;++j)
                        {
                            
                            newmap>>w[j][i];
                        }
                    }

            for(int i=0;i<32;++i)
                {
                    for(int j=0;j<32;++j)
                    {  
                        if(w[j][i]=='1'){color[j][i]=1;}
                        if(w[j][i]=='2'){color[j][i]=2;}
                        if(w[j][i]=='3'){color[j][i]=3;}
                        if(w[j][i]=='4'){color[j][i]=4;}
                        if(w[j][i]=='5'){color[j][i]=5;}
                        if(w[j][i]=='6'){color[j][i]=6;}
                    }
                }
                newmap.close();
                sf::sleep(seconds(0.5));
            }
            window.clear();
            for(int i=0;i<32;++i)
            {
                for(int j=0;j<32;++j)
                {
                    if(color[i][j]==1){r.setFillColor(Color::White);r.setPosition(sf::Vector2f(i*20, j*20));}
                    if(color[i][j]==2){r.setFillColor(Color::Green);r.setPosition(sf::Vector2f(i*20, j*20));}
                    if(color[i][j]==3){r.setFillColor(Color::Black);r.setPosition(sf::Vector2f(i*20, j*20));}
                    if(color[i][j]==4){r.setFillColor(Color::Red);r.setPosition(sf::Vector2f(i*20, j*20));}
                    if(color[i][j]==5){r.setFillColor(Color::Blue);r.setPosition(sf::Vector2f(i*20, j*20));s.setPosition(i*20, j*20);x=i*20;y=j*20;rx=i*20;ry=j*20;}
                    if(color[i][j]==6){r.setFillColor(Color::Yellow);r.setPosition(sf::Vector2f(i*20, j*20));}
                    window.draw(r);
                    //window.draw(sprite1);
                    //window.draw(sprite2);
                    //window.draw(sprite3);
                    //window.draw(sprite4);
                }
            }
            //window.draw(s); 
            window.display();
        }

    }

    return 0;
}

    /*
    /////////////////////////////////////
    //Рисование круга/окружности
    /////////////////////////////////////
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    ...
    window.draw(shape);





    /////////////////////////////////////
    //Загрузка изображения
    /////////////////////////////////////
    Image i;
    i.loadFromFile("1.png");

    Texture t;
    t.loadFromImage(i);

    Sprite s;
    s.setTexture(t);
    s.setPosition(20,20);
    ..
    window.draw(s);
    ///////////////Другой способ
    Texture t;
    t.loadFromFile("1.png");

    Sprite s;
    s.setTexture(t);
    s.setPosition(20,20);
    ..
    window.draw(s);





    /////////////////////////////////////
    //Нажатие клавишь\клавиатура
    /////////////////////////////////////
    после второго while
        if(Keyboard::isKeyPressed(Keyboard::Left)){}




    /////////////////////////////////////
    //Перемещение/мув/move/движение
    /////////////////////////////////////
    (название).move(x, y);





    /////////////////////////////////////
    //Нажатие мышки\мышка
    /////////////////////////////////////
    Так-же после 2 while 
    if(Mouse::isButtonPressed(sf::Mouse::Left)){s.setColor(Color::Red);}






    /////////////////////////////////////
    //Прямоугольник/rectangle
    /////////////////////////////////////
    sf::RectangleShape rectangle(sf::Vector2f(0, 0));
    rectangle.setSize(sf::Vector2f(100, 100));







    /////////////////////////////////////
    //Rotate/вращение/вращать/поворачтьвать
    /////////////////////////////////////
    (name).rotate(45);
    */
