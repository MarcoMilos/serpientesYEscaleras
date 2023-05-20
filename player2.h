// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// Started in: 18-05-2023
// Serpientes y Escaleras

#ifndef player2_h
#define player2_h

class Player2
{
    int position;
    public:
        Player2()
        {
            position = 1; // Se declara que la posición inicial en la que se encontrará el "player2" será la casilla número 1
        }

        int getPosition() const
        {
            return position; // Regresa la posición en la que se encuentra -en ese momento- el "player2"
        }

        void setPosition(int newPosition)
        {
            position = newPosition; // Indica la nueva posición en la que estará el "player2" después de hacer su jugada y moverse las casillas que indicó el dado
        }
};

#endif player2_h // Las directivas "ifndef", "define" y "endif" permiten incluir o descartar parte del código del programa tras cumplirse con la condición determinada