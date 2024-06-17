#include <SFML/Graphics.hpp>
#include "Actualizable.hpp"

sf::Event evento;
while (ventana.pollEvent(evento)) {
    if (evento.type == sf::Event::Closed)
        ventana.close();
    else if (evento.type == sf::Event::KeyPressed) {
        if (evento.key.code == sf::Keyboard::R) {
            SolicitarReinicio();
        }
    }
    // Aquí podrías manejar otros eventos, como solicitudes de reinicio.
}

Actualizar();

ventana.clear();
// Aquí iría el código para dibujar en la ventana.
ventana.display();

if (reiniciarSolicitado) {
    ventana.close();
    IniciarVentana();
    reiniciarSolicitado = false;
}