// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// Started in: 18-05-2023
// Serpientes y Escaleras

#ifndef player1_h
#define player1_h

class Player1
{
    int position;
    public:
        Player1()
        {
            position = 1; // Se declara que la posición inicial en la que se encontrará el "player1" será la casilla número 1
        }

        int getPosition() const
        {
            return position; // Regresa la posición en la que se encuentra -en ese momento- el "player1"
        }

        void setPosition(int newPosition)
        {
            position = newPosition; // Indica la nueva posición en la que estará el "player1" después de hacer su jugada y moverse las casillas que indicó el dado
        }
};

#endif player1_h // Las directivas "ifndef", "define" y "endif" permiten incluir o descartar parte del código del programa tras cumplirse con la condición determinada