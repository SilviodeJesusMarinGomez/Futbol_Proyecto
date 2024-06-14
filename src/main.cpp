#include <SFML/Graphics.hpp>
#include <iostream>
#include <Box2D/Box2D.h>

int main(int argc, char const *argv[])
{
    int fuerza = 25; int fuerzaPortero = 3500;

    sf::RenderWindow window(sf::VideoMode(800, 600), "Crazy Penalty");

    b2Vec2 gravity(0.0f, 7.0f);
    b2World mundo(vectorGravedad);

    b2BodyDef cuerpoPaloDef;
    cuerpoPaloDef.position.Set(1100, 300.0f); // PosiciÃ³n del centro del cuerpo
    b2Body *cuerpoPalo = mundo.CreateBody(&cuerpoPaloDef);
    

    return 0;
}
