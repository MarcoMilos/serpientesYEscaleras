# Serpientes Y Escaleras

El código es un script de C++ en el que nos vemos con el reto de realizar el juego de "Serpientes y Escaleras", soportando a dos jugadores al mismo tiempo, simulando un dado común (de 6 caras), que tenga tipos de casillas en las que puedan caer los jugadores (casillas Serpiente, Escalera y Normales) donde cada una de estas casillas especiales tenga un efecto diferente sobre el jugador que caiga en ellas y que todo esto lo despliegue en la consola en forma de texto. 

Un ejemplo de lo explicado anteriormente sería el siguiente: 2 2 1 4 N 5 -> Esto quiere decir que el turno 2, el jugador 2 está en la casilla 1, tira el dado y le sale el número 4, lo cual lo dejaría en una casilla de tipo "Normal", la cual sería la casilla número 5.

El programa estaría realizando jugadas aleatorias hasta que alguno de los jugadores llegue a la casilla número 30, la cual sería la meta final. Al llegar al final del juego, el jugador que esté con el último turno y llegue a la casilla 30 será el ganador.

## Tecnología Utilizada:

* git y github
* 100% C++
* Uso de la librería "cstlib" -> Para llamar a la función rand() del dado.

## Importante

* Será necesario conectar nuestro GitHub con el IDE que estamos utilizando (en caso de estar haciendo uso alguno).
* Es necesario asegurarnos de que todas las clases necesarias para el programa ya estén creadas (para evitarnos erorres innecesarios).
* El ÚNICO archivo de tipo ".cpp" será el de snakes (para ahorrarnos la creación de múltiples archivos ".exe").
* Todos los archivos de jugadores y el "MyGame" tienen que ir como #include dentro del archivo .cpp "snakes".
* Para salir o detener el juego, se tiene que escribir en la terminal/consola "E" o "e" (en referencia a "exit").