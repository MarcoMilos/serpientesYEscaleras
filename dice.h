// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// Started in: 19-05-2023
// Serpientes y Escaleras

#include <cstdlib> // Sirve para llamar a la función rand()

class Dice
{
    public:
        static int roll()
        {
            return rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6 
        }
};

