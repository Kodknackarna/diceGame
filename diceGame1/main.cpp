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
    

    bool done = false;
    while(!done) {
        game.takeTurn(players);

        for (auto& player : players) {
            if (player.getScore() >= 10) {
                done = true;
            }
        }
    };

    return 0;
}