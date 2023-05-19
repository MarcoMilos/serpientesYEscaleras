// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// Started in: 19-05-2023
// Serpientes y Escaleras

#include <iostream>
#include "dice.h"
#include "player1.h"
#include "player2.h"

class MyGame
{
    int currentPlayer;
    int turnCount;
    Player1 player1;
    Player2 player2;

    public:
        MyGame()
        {
            currentPlayer = 1; // Establece que el Player1 es el primero en jugar
            turnCount = 1; // Establece la cuenta de turnos en 1 al iniciar el juego
        }
        
        void start()
        {
            std::cout << "Press C to continue next turn, or E to end the game:" << std::endl;
            std::string input;
            std::cin >> input;

            while (input != "E")
            {
                std::cout << "Turn " << turnCount << std::endl;
                std::cout << "Player " << currentPlayer << std::endl;

                int diceResult = Dice::roll();
                std::cout << "Dice Result: " << diceResult << std::endl;

                int currentPosition;
                if (currentPlayer == 1)
                    currentPosition = player1.getPosition();
                else
                    currentPosition = player2.getPosition();

                char tileType;
                int nextPosition;
            }
        }
};  
