// Marco & Alejandro Miloslavich Airola (A01424280, A01424120)
// Started in: 18-05-2023
// Serpientes y Escaleras

#ifndef MyGame_h
#define MyGame_h

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
                int diceResult = Dice::roll();

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

                std::cout << turnCount << currentPlayer << currentPosition << diceResult << tileType << nextPosition << std::endl;

                if (currentPlayer == 1)
                    player1.setPosition(nextPosition);
                else
                    player2.setPosition(nextPosition);

                if (nextPosition == 30)
                {
                    std::cout << "--- GAME OVER ---" << std::endl;
                    std::cout << "Thanks for playing!!" << std::endl;
                    std::cout << "Player " << currentPlayer << " is the winner!!!" << std::endl;
                    break;
                }

                currentPlayer = (currentPlayer == 1) ? 2 : 1;
                turnCount++;

                // std::cout << "Press C to continue next turn, or E to end the game:" << std::endl;
                std::cin >> input;
            }
        }
};  

#endif MyGame_h