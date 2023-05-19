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
            position = 1;
        }

        int getPosition() const
        {
            return position;
        }

        void setPosition(int newPosition)
        {
            position = newPosition;
        }
};

#endif player2_h // Las directivas "ifndef", "define" y "endif" permiten incluir o descartar parte del código del programa tras cumplirse con la condición determinada