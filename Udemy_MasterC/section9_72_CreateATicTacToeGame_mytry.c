#include <stdio.h>

/* 
1. Display the current board
2. Check if anyone has won (Yes: go to step 3, No: go to step 4)
3. Yes. Display who has won. End.
4. No. Display whose turn
5. Player makes a selection. repeat from 1
*/

void drawBoard(char boardArray[9]);
void displayWhoseTurn(int whoseTurn);
char makeMove(char boardArray[9]);
int checkForWin(char boardArray[9], int whoseTurn);

int main()
{
    int whoseTurn = 1;
    int winStatus = 0;
    char boardArray[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int selection;

    int ending = 0;

    while (ending == 0)
    {
        drawBoard(boardArray);
        
        if (winStatus == 1)
        {
            printf("Player O won\n");
            ending = 1;
        }
        else if (winStatus == -1)
        {
            printf("Player X won\n");
            ending = 1;
        }
        else
            {
                displayWhoseTurn(whoseTurn);
                selection = makeMove(boardArray);
                if (whoseTurn == 1)
                    boardArray[selection - 1] = 'O';
                else
                    boardArray[selection - 1] = 'X';
                winStatus = checkForWin(boardArray, whoseTurn);
                whoseTurn = whoseTurn * -1;
            }
    }

    return 0;
/*     
    while (winStatus == 0)
    {
        drawBoard(boardArray);
        displayWhoseTurn(whoseTurn);
        selection = makeMove(boardArray);
        if (whoseTurn == 1)
            boardArray[selection - 1] = 'O';
        else
            boardArray[selection - 1] = 'X';
        winStatus = checkForWin(boardArray, whoseTurn);
        whoseTurn = whoseTurn * -1;
    }
    drawBoard(boardArray);

    if (winStatus == 1)
        printf("Player O won\n");
    else if (winStatus == -1)
        printf("Player X won\n");

    return 0;
 */
}

void drawBoard(char boardArray[9])
{
    printf("\n| %c |", boardArray[0]);
    printf(" %c |", boardArray[1]);
    printf(" %c |\n", boardArray[2]);
    printf("| %c |", boardArray[3]);
    printf(" %c |", boardArray[4]);
    printf(" %c |\n", boardArray[5]);
    printf("| %c |", boardArray[6]);
    printf(" %c |", boardArray[7]);
    printf(" %c |\n", boardArray[8]);
}

void displayWhoseTurn(int whoseTurn)
{    
    if (whoseTurn == 1)
        printf("Player O's move: ");
    else if (whoseTurn == -1)
        printf("Player X's move: ");

    return;
}

char makeMove(char boardArray[9])
{
    int selection;
    int validation = 0;
    
    scanf("%d", &selection);

    while (validation == 0)
    {
        if ((selection < 1) | (selection > 9))
        {
            printf("Move should be integers between 1 and 9. Try again.\n");
            scanf("%d", &selection);
        }
        else
            validation = 1;
    }

    do
    {
        if ((boardArray[selection - 1] == 'O') | (boardArray[selection - 1] == 'X'))
            {
                validation = 0;
                printf("Already chosen. Try again.\n");
                scanf("%d", &selection);
            }
        else
            validation = 1;
    }
    while (validation == 0);

    return selection;
}

int checkForWin(char boardArray[9], int whoseTurn)
{
    int winningCases[8][3] = 
    {
        {1, 2, 3},
        {1, 5, 9},
        {1, 4, 7},
        {2, 5, 8},
        {3, 5, 7},
        {3, 6, 9},
        {4, 5, 6},
        {7, 8, 9}
    };

    char playerSymbol;

    if (whoseTurn == 1)
        playerSymbol = 'O';
    else if (whoseTurn == -1)
        playerSymbol = 'X';

    for (int i = 0, count = 0; i < 8; i++, count = 0)
    {
        for (int j = 0; j < 3; j++)
        {
            if (boardArray[winningCases[i][j] - 1] == playerSymbol)
                count += 1;
        }
        if (whoseTurn == 1)
        {
            if (count == 3)
                return 1;
        }
        else
        {
            if (count == 3)
                return -1;
        }
            
    }

    return 0;
}