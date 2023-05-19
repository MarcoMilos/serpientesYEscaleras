// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// Started in: 18-05-2023
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

                if (currentPosition + diceResult > 30)
                {
                    std::cout << "Invalid move! Try Again." << std::endl;
                    continue;
                }

                switch (currentPosition + diceResult)
                {
                    case 5:
                        tileType = 'S';
                        nextPosition = 2;
                        break;
                    case 10:
                        tileType = 'L';
                        nextPosition = 22;
                        break;
                    case 15:
                        tileType = 'S';
                        nextPosition = 10;
                        break;
                    case 20:
                        tileType = 'L';
                        nextPosition = 28;
                        break;
                    case 25:
                        tileType = 'S';
                        nextPosition = 16;
                        break;
                    case 30:
                        tileType = 'N';
                        nextPosition = 30;
                        break;
                    default:
                        tileType = 'N';
                        nextPosition = currentPosition + diceResult;
                        break;
                }
            }
        }
};  
