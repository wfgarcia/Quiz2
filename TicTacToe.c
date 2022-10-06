//Tic Tac Toe game between 2 players or a computer
#include<stdio.h>

//global var
int winner;
int playSpace[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    
void rules();
void pvp();
void pvpc();
void wincon();

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


    // option to play again? 


    //utilize multiple functions in order to loop the game


    //function for computer lop


    //ending print statement
    

    return 0; 
}

void rules(){
    printf("\n\nEnter the coordinates according to the feild below\n\n");
    printf("+-----------------+\n");
    printf("|  1  |  2  |  3  |\n");
    printf("|  4  |  5  |  6  |\n");
    printf("|  7  |  8  |  9  |\n");
    printf("+-----------------+\n");
}

void pvp(){
    rules();
    
}

void pvpc(){
    rules();
}

void wincon(){
    if( 1 == 1){

    }
}