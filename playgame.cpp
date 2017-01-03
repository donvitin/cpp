// #include <iostream>
// #include <stdio.h>
#include "playgame.h"


    PlayGame::PlayGame() : game(Game::NoGame), numOfPlays(0)  {}
        
    
    PlayGame::PlayGame(Game g, int p) : game(g), numOfPlays(p){}
       
    
    void PlayGame::getPicks(){
        srand (time(NULL));
        int guess = 0;
        std::set<int> pick;
        std::pair<std::set<int>::iterator,bool> ret;
      
        for(int i=0; i<numOfPlays;i++){
            for (int i=1; i<=5; ++i) {
                do {
                    if(game == Game::MegaMillions){
                        guess = rand() % 75 + 1;
                    }else {
                         guess = rand() % 69 + 1;
                        
                    }
                        
                    ret = pick.insert(guess);
                    if(ret.second==true){
                        break;
                    }
                } while (ret.second==false);
            
            }
        plays.push_back (pick);
        pick.clear();
        } 
    }
    
    void PlayGame::printGames(){ 
        std::cout << '\n' << "Your winning numbers are: " << '\n'  << std::endl;
        int power_ball = 0;
        srand (time(NULL));
        for (std::vector<std::set<int>>::iterator vec_it=plays.begin(); vec_it!=plays.end(); ++vec_it){
            std::set<int> picks = *vec_it;    
            for (std::set<int>::iterator it=picks.begin(); it!=picks.end(); ++it){
                std::cout << ' ' << *it ;
            }
            if(game==Game::MegaMillions){
                power_ball = rand() % 15 + 1; 
            }else {
                power_ball = rand() % 26 + 1;    
            }
            std::cout << "\t Power Ball: " << power_ball << '\n';    
        }
    }
    
     int PlayGame::setNumberOfPlays(){
        int games = 0;
        std::cout << "How many game(s): ";
        std::cin >> games;
        if(games){
            return games;
        }else{
            std::cout << "At least 1 game needs to be played, Bye" << std::endl;
            exit (EXIT_FAILURE);
        }
    }
    
    PlayGame::~PlayGame(){
        plays.clear();
        // delete plays;
        
    }
    



