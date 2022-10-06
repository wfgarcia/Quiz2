//Tic Tac Toe game between 2 players or a computer
#include<stdio.h>

//global var
    int winner;
    
void rules();
void pvp();
void pvpc();

int main (){
    char choice; 
    //create the starting variables and the enviornment of the game
    printf("============================\n\n");
    printf("      TIC TAC TOE           \n\n");
    printf("A - Player vs. Player\n\n");
    printf("B - Player vs. Computer\n\n");
    

    //prompt user for the game they want to play
    printf("Enter your choice (A or B): ");

    //read information from console
    choice = getchar();
    if(choice == 'A'){
        pvp();
    }

    //create the playing field and initialize players


    //play the game and loop for the amount of actions 


    //decide winner 


    // option to play again 


    //utilize multiple functions in order to loop the game


    //function for computer lop


    //ending print statement
    

    return 0; 
}

void rules(){
    printf("Enter the coordinates according to the feild below\n\n");
    printf("+-----------------+\n");
    printf("|(1,1)|(1,2)|(1,3)|\n");
    printf("|(2,1)|(2,2)|(2,3)|\n");
    printf("|(3,1)|(3,2)|(3,3)|\n");
    printf("+-----------------+\n");
}

void pvp(){
    rules();
    
}

void pvpc(){
    rules();
}
