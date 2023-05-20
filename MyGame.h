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
            std::cout << "Press C to continue next turn, or E to end the game:" << std::endl; // Se envía el juego de teclas por primera y ÚNICA vez
            std::string input;
            std::cin >> input;

            while (input != "E") // Establecemos que -mientras la respuesta no sea "E" (exit)- el juego empiece/siga
            {
                int diceResult = Dice::roll();

                int currentPosition;
                if (currentPlayer == 1)
                    currentPosition = player1.getPosition();
                else
                    currentPosition = player2.getPosition();

                char tileType; // Variable para declarar el tipo de casilla en la que pueden caer los jugadores
                int nextPosition; // Variable para declarar la siguiente posición en la que estarán los jugadores tras tomar su turno

                if (currentPosition + diceResult > 30) // Declara que si la "posición actual" y el "resultado del dado" es MAYOR a 30, enviará el siguiente mensaje
                {
                    std::cout << "Invalid move! Try Again." << std::endl;
                    continue;
                }

                switch (currentPosition + diceResult) // Establecemos la ubicación de las casillas especiales y la clasificación del resto de las casillas
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

                // Se manda a desplegar el turno, jugador actual, posición actual, resultado del dado, tipo de casilla y siguiente posición:
                std::cout << turnCount << currentPlayer << currentPosition << diceResult << tileType << nextPosition << std::endl;

                if (currentPlayer == 1)
                    player1.setPosition(nextPosition);
                else
                    player2.setPosition(nextPosition);

                if (nextPosition == 30) // Se declara el final cuando un jugador llega a la casilla número 30
                {
                    std::cout << "--- GAME OVER ---" << std::endl;
                    std::cout << "Thanks for playing!!" << std::endl;
                    std::cout << "Player " << currentPlayer << " is the winner!!!" << std::endl; // Establece el jugador ganador (jugador actual en la casilla final)
                    break;
                }

                currentPlayer = (currentPlayer == 1) ? 2 : 1;
                turnCount++; // Se suman los turnos conforme van pasando y participando cada jugador

                std::cin >> input; // Solicita colocar "C" o "E" para desplegar el "siguiente turno" o "terminar el juego"
            }
        }
};  

#endif MyGame_h // Las directivas "ifndef", "define" y "endif" permiten incluir o descartar parte del código del programa tras cumplirse con la condición determinada