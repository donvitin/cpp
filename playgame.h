// include guard
#ifndef __PLAYGAME_H_INCLUDED__
#define __PLAYGAME_H_INCLUDED__

#include <iostream>
#include <set>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

enum class Game {PowerBall, MegaMillions, Cash4Life, NoGame};

using namespace std;


class PlayGame {
    private: 
        std::vector<std::set<int>> plays;
        int numOfPlays;
        Game game;
    public:
        PlayGame();
        PlayGame(Game, int);
        void getPicks();
        void printGames();
        static int setNumberOfPlays();
        ~PlayGame();
    
};



#endif // __PLAYGAME_H_INCLUDED__ 