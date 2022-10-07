//Tic Tac Toe game between 2 players or a computer
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

//global var
int winner = 0;
int playSpace[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
char board[9];
bool player1 = true;
bool player2 = false;
bool computer = false;
bool win;
    
void rules(){
    printf("\n\nEnter the coordinates according to the feild below\n\n");
    printf("+-----------------+\n");
    printf("|  1  |  2  |  3  |\n");
    printf("|  4  |  5  |  6  |\n");
    printf("|  7  |  8  |  9  |\n");
    printf("+-----------------+\n");
}

void currentBoard(){
     printf("+-----------------+\n");
    printf("|  %C  |  %C  |  %C  |\n", board[0], board[1], board[2]);
    printf("|  %C  |  %C  |  %C  |\n", board[3], board[4], board[5]);
    printf("|  %C  |  %C  |  %C  |\n", board[6], board[7], board[8]);
    printf("+-----------------+\n");
}
void setBoardP1(int move){
if(move == 1){
    board[0] = 'O';
}else if(move == 2){
    board[1] = 'O';
}else if(move == 3){
    board[2] = 'O';
}else if(move == 4){
    board[3] = 'O';
}else if(move == 5){
    board[4] = 'O';
}else if(move == 6){
    board[5] = 'O';
}else if(move == 7){
    board[6] = 'O';
}else if(move == 8){
    board[7] = 'O';
}else if(move == 9){
    board[8] = 'O';
}
}

void setBoardP2(int move){
if(move == 1){
    board[0] = 'X';
}else if(move == 2){
    board[1] = 'X';
}else if(move == 3){
    board[2] = 'X';
}else if(move == 4){
    board[3] = 'X';
}else if(move == 5){
    board[4] = 'X';
}else if(move == 6){
    board[5] = 'X';
}else if(move == 7){
    board[6] = 'X';
}else if(move == 8){
    board[7] = 'X';
}else if(move == 9){
    board[8] = 'X';
}
}

bool checkHoriz(char board[]){
    if((board[0] == board[1]) && (board[1] == board[2]) && (board[0] != ' ')){
        return true;
    }else if((board[3] == board[4]) && (board[4] == board[5]) && (board[3] != ' ')){
        return true;
    }else if((board[6] == board[7]) && (board[7] == board[8]) && (board[6] != ' ')){
        return true;
    }else 
        return false;
}
bool checkVert(char board[]){
    if((board[0] == board[3]) && (board[3] == board[6]) && (board[0] != ' ')){
        return true;
    }else if((board[1] == board[4]) && (board[4] == board[7]) && (board[1] != ' ')){
        return true;
    }else if((board[2] == board[5]) && (board[5] == board[8]) && (board[2] != ' ')){
        return true;
    }else 
        return false;
}
bool checkDiag(char board[]){
    if((board[0] == board[4]) && (board[4] == board[8]) && (board[0] != ' ')){
        return true;
    }
    if((board[2] == board[4]) && (board[4] == board[6]) && (board[2] != ' ')){
        return true;
    }else
        return false;
}

void p1Move(int move){
    bool turnOver = false;
    while(!turnOver){
            if (board[move - 1] > 0){
                printf("Sorry this space is taken try again\n\n");
                 printf("Player 1 pick a space(1-9): ");
                 scanf("%d", &move);
            }else{
                setBoardP1(move);
                turnOver = true;
            }
    }
}

void p2Move(int move){
    bool turnOver = false;
    
    while(!turnOver){
            if (board[move - 1] > 0){
                printf("Sorry this space is taken try again\n\n");
                 printf("Player 2 pick a space(1-9): ");
                 scanf("%d", &move);
            }else{
                setBoardP2(move);
                turnOver = true;
            }
    }
}

void computerMove(){
    bool turnOver = false;
    time_t t;
    srand((unsigned) time(&t));
    int num = (rand() % (9 - 1 + 1)) + 1;;
    while(!turnOver){ 
            if (board[num - 1] > 0){
               num = (rand() % (9 - 1 + 1)) + 1; 
            }else{
                setBoardP2(num);
                turnOver = true;
            }
    }
}

void pvp(){
    int turns = 1;
    int move;
    rules();
    while(turns <= 9 && winner == 0){
            printf("Player 1 pick a space(1-9): ");
            scanf("%d", &move);
            p1Move(move);
            currentBoard();
            if(checkDiag(board) || checkVert(board) || checkHoriz(board)){
                winner = 1;
            }
            turns ++;

            printf("Player 2 pick a space(1-9): ");
            scanf("%d", &move);
            p2Move(move);
            currentBoard();
            if(checkDiag(board) || checkVert(board) || checkHoriz(board)){
                winner = 2;
            }
            turns ++;
        
    }
    
}

void pvpc(){
    int turns = 1;
    int move;
    rules();
    while(turns <= 9 && winner == 0){
            printf("Player 1 pick a space(1-9): ");
            scanf("%d", &move);
            p1Move(move);
            currentBoard();
            if(checkDiag(board) || checkVert(board) || checkHoriz(board)){
                winner = 1;
            }
            turns ++;

            computerMove();
            currentBoard();
            if(checkDiag(board) || checkVert(board) || checkHoriz(board)){
                winner = 2;
            }
            turns ++;
        
    }
}



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
    }else if (choice == 'B'){
        pvpc();
    }

    //create the playing field and initialize players


    //play the game and loop for the amount of actions 


    //decide winner 
    if (winner == 1){
        printf("Player 1 has won!");
    }else if(winner == 2){
        printf("Player 2 has won!");
    }else {
        printf("Draw");
    }

    // option to play again? 


    //utilize multiple functions in order to loop the game


    //function for computer lop


    //ending print statement
    

    return 0; 
}

