#include <iostream>
#include <cstdlib>
#include <ctime>
#include "player.h"
#include <string>
#include "simpleDiceGame.h"


int main() {

    srand(time(0)); // Initialisera slumptalsgeneratorn med nuvarande tid


    std::vector<Dice> diceVector = { Dice(6, 0) };
    std::vector<Player> players;

    SimpleDiceGame game;

    game.startGame(players, diceVector);
    

    //ändra till en while loop
    for (int i = 0; i < 100; i++) {
        game.takeTurn(players);
    };

    return 0;
}