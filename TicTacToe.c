//Tic Tac Toe game between 2 players or a computer
#include<stdio.h>
#include<stdbool.h>

//global var
int winner = 0;
int playSpace[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
char board[9];
bool player1 = true;
bool player2 = false;
bool computer = false;
int turns = 1;
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

bool checkWin(char board[]){
    if(board[0] && board[1] && board[2] == 'O' || 'X'){
        return true;
    }else if(board[3] && board[4] && board[5] == 'O' || 'X'){
        return true;
    }else if(board[6] && board[7] && board[8] == 'O' || 'X'){
        return true;
    }if(board[0] && board[3] && board[6] == 'O' || 'X'){
        return true;
    }else if(board[1] && board[4] && board[7] == 'O' || 'X'){
        return true;
    }else if(board[2] && board[5] && board[8] == 'O' || 'X'){
        return true;
    }if(board[0] && board[4] && board[8] == 'O' || 'X'){
        return true;
    }else if(board[6] && board[4] && board[2] == 'O' || 'X'){
        return true;
    }else{
        return false;
    }
}

void pvp(){
    int move;
    bool check = false;
    rules();
    while(turns <= 9 && winner == 0){
        if(turns == 1||3||5||7||9){
            printf("Player 1 pick a space(1-9): ");
            scanf("%d", &move);
            if (board[move - 1] > 0){
                printf("Sorry this space is taken try again\n\n");
            }else{
                setBoardP1(move);
                turns ++;
                check = checkWin(board);
                if(check == true){
                    winner = 1;
                } 
                }
                currentBoard();
        }

        else if(turns == 2||4||6||8){
            printf("Player 2 pick a space(1-9): ");
            scanf("%d", &move);
            if (board[move - 1] > 0){
                printf("Sorry this space is taken try again\n\n");
            }else{
                setBoardP2(move);
                turns ++;
                check = checkWin(board);
                if(check == true){
                    winner = 2;
                } 
                }
                currentBoard();    
        }
        
    }
    
}

void pvpc(){
    rules();
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

