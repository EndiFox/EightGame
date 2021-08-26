//Include-секция//////////////////////////
#include <SFML/Graphics.hpp>            //
#include <cmath>                        //
#include "VoidFloor.h"                  //
#include "Platform.h"                   //
#include "DynamicPlatform.h"            //
#include "Floor.h"                      //
//Include-секция//////////////////////////

int main()
{
    //Создание Окна//
    int resolution_w = 1280;
    int resolution_h = 720;
    sf::RenderWindow window(sf::VideoMode(resolution_w, resolution_h), "Eight");
    window.setFramerateLimit(60);
    window.setMouseCursorVisible(false);
    //Создание Окна//
    
    //Инициализация объектов//
    VoidFloor base(0.0f, 710.0f, 1280, 720);
    Platform first(200.0f, 610.0f, 130, 10);
    DynamicPlatform firstD(100.0f, 650.0f, 50, 10, 200.0f, 650.0f, 0.8f);
    Floor base1(0.0f, 650.0f, 100, 500);
    //Инициализация объектов//
   
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        firstD.MovingX(1.0f);

        window.clear();
        window.draw(base.shape);
        window.draw(base1.shape);
        window.draw(first.shape);
        window.draw(firstD.shape);
        window.display();
    }

    return 0;
}