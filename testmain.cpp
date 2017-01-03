// #include <iostream>
// #include <stdio.h>
#include "playgame.h"

using namespace std;

int  main(){
    char gameSelect;
    cout << "\n(M)ega or (P)owerBall, or (Q)uit: ";
    cin >> gameSelect;
    
    int plays;
    PlayGame* game;
    
    
    switch(gameSelect){
        case 'P':
            plays = PlayGame::setNumberOfPlays();
            game = new PlayGame(Game::PowerBall,plays);
            
            break;
        case 'M':
            plays = PlayGame::setNumberOfPlays();
            game = new PlayGame(Game::MegaMillions,plays);
            
            break;
        case 'Q':
            cout << "Thanks for playing, Bye...";
            return 0;
        default: 
             cout << "Must select 'M' or 'P', Bye!\n";
             exit (EXIT_FAILURE);
             break;
    }
    
    game->getPicks();
    game->printGames();
      
    std::cout <<  std::endl;
} //end
        
