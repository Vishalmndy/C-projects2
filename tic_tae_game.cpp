#include<iostream>
using namespace std;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char mark;
int choice;

void draw_board(){
    cout << "Tic Tac Toe Game\n";
    for(int i =0 ; i<3; i++){
        for(int j = 0 ; j<3 ; j++){
            cout<< board[i][j] << " ";
        }
        cout<< endl;
    }
}

bool checkwin(){
    //check rows 
    for(int i = 0 ;i < 3 ; i++){
        if(board[i][0]== board[i][1] && board [i][1]== board [i][2]){
            return true;
        }
    }

    //check columns
    for(int j = 0 ;j< 3; j++){
        if(board[0][j]== board[1][j] && board [1][j]== board [2][j]){
            return true;
        }
    }

    //check diagonals
    if (board[0][0] == board [1][1] && board [1][1 ] ==  board [2][2])
        return true;
    if (board[0][2] == board [1][1] && board [1][1 ] ==  board [2][0])
        return true;
    
    return false;
}

bool checktie(){
    for(int i =0 ; i<3; i++){
        for(int j = 0 ; j<3 ; j++){
            if(board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

int main(){
    int player = 1;
    bool game_over = false;
    while(!game_over)
    {
        draw_board();
        player = (player % 2)? 1:2;
        cout<<"Player " << player << ", enter a number: ";
        cin >> choice;
        mark = (player == 1)? 'X':'O';

        if(choice == 1 && board[0][0] == '1'){
            board[0][0] = mark;
        }
        else if(choice == 2 && board[0][1] == '2'){
            board[0][1] = mark;
        }
        else if(choice == 3 && board[0][2] == '3'){
            board[0][2] = mark;
        }
        else if(choice == 4 && board[1][0] == '4'){
            board[1][0] = mark;
        }
        else if(choice == 5 && board[1][1] == '5'){
            board[1][1] = mark;
        }
        else if(choice == 6 && board[1][2] == '6'){
            board[1][2] = mark;
        }
        else if(choice == 7 && board[2][0] == '7'){
            board[2][0] = mark;
        }
        else if(choice == 8 && board[2][1] == '8'){
            board[2][1] = mark;
        }
        else if(choice == 9 && board[2][2] == '9'){
            board[2][2] = mark;
        }
        else{
            cout << "Invalid move. Please try again.\n";
            player--;
        }

        game_over = checkwin() || checktie(); }
    }


