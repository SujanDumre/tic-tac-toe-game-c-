#include <iostream>
#include <conio.h> //getch() use garna chainxa
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <cstdlib>
int main();
using namespace std;
char arr[3][3];
bool player = true;
int posi, ok = 0;
int a[9];
char currentPlayer;
int endState = 0;
bool canIExit = false;
char c;
void location(int *x, int *y)
{
    string input;
    if (*x == -1 && *y == -1)
    {
    pushback:
        cout << endl
             << "Enter the position from 0-9: ";
        while ((c = getch()) != 13) // input.length ley 1 block space rakhney vayo
        {
            if (c >= 48 && c <= 57 && input.length() < 1 && input.length() != 1)
            {
                input.push_back(c);
                cout << c;
            }
            if (input.length() > 0)
            {
                if (c == 8)
                {
                    input.pop_back();
                    cout << "\b \b";
                }
            }
            else if (c == 13)
            {
                cout << endl
                     << "!! Enter other enter string!! ";
                continue;
            }
        }
        posi = atoi(input.data());
        c = '\0';
        input = "\0";
        if (posi >= 1 && posi <= 9)
        {
            for (int i = 0; i < 9; i++)
            {
                if (a[i] == posi)
                {
                    cout << endl
                         << "!! Aleady Used, Please select Position between 1-9 except " << posi << " !!" << endl;
                    // posi=0;
                    goto pushback;
                }
            }
        }
    }
    if (posi == 1 || posi == 2 || posi == 3)
    {
        *x = 0;
        *y = posi - 1;
        a[posi] = posi; // 1-9 value aayo vaney matrai store garney natra store nai na garney
    }
    if (posi == 4 || posi == 5 || posi == 6)
    {
        *x = 1;
        *y = posi - 4;
        a[posi] = posi;
    }
    if (posi == 7 || posi == 8 || posi == 9)
    {
        *x = 2;
        *y = posi - 7;
        a[posi] = posi;
    }
    if (posi <= 0 || posi >= 10)
    {
        int a = -1;
        cout << endl
             << "!! Please enter the position between 1-9 !!" << endl;
        location(&a, &a);
    }
}
char currentPlayer_Is()
{
    char c;
    string input;
    cout << endl
         << "Enter your Player either X or O: ";
    while ((c = getch()) != 13 || input.length() < 1)
    {
        if (c == 13)
        {
            continue;
        }
        if (input.length() >= 1 && input.length() != 0)
        {
            if (c == 8)
            {
                input.pop_back();
                cout << "\b \b";
            }
        }
        if ((c == 88 || c == 120) || (c == 79 || c == 111))
        {
            if (input.length() < 1)
            {
                input.push_back(c);
                cout << c;

                if ((c == 88 || c == 120))
                {
                    currentPlayer = 88;
                }
                if ((c == 79 || c == 111))
                {
                    currentPlayer = 111;
                }
            }
        }
    }
    if (currentPlayer == 'O' || currentPlayer == 'o')
    {
        player = false;
    }
    else if (currentPlayer == 'X' || currentPlayer == 'x')
    {
        player = false;
    }
    else
    {
        cout << endl
             << "!! Please select either X or O !!" << endl
             << endl;
    }
    if ((currentPlayer == 88 || currentPlayer == 120) || (currentPlayer == 79 || currentPlayer == 111))
    {
        return currentPlayer;
    }
    else
    {
        return currentPlayer_Is();
    }
}
void boxesOnly(int why)
{
    if (why == 1)
    {
        currentPlayer_Is(); // first time x or o chhose garna deko user lai
    }
    cout << endl
         << endl;
    cout << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            if (j == 1 || j == 2)
            {
                cout << " ";
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "   ";
                cout << arr[i][j] << " ";
            }
            if (j == 2)
            {
                cout << "  ";
            }
            else
            {
                cout << "|";
            }
        }
        cout << endl;
        cout << "   ";
        for (int k = 0; k < 3; k++)
        {
            if (i >= 2)
            {
                break;
            }
            cout << "---";
        }
    }
}
void check()
{
    if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]) // row chwck start
    {
        if (arr[0][0] == 'X')
        {
            cout << endl
                 << "Player X Win" << endl;
                 canIExit = true;
        }
        else if (arr[0][0] == 'O')
        {
            cout << endl
                 << "Player O Win" << endl;
                 canIExit = true;
        }
        
    }
    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
    {
        if (arr[1][0] == 'X')
        {
            cout << endl
                 << "Player X Win" << endl;
                 canIExit = true;
        }
        else if (arr[1][0] == 'O')
        {
            cout << endl
                 << "Player O Win" << endl;
                 canIExit = true;
        }
    }
    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
    {
        if (arr[2][0] == 'X')
        {
            cout << endl
                 << "Player X Win" << endl;
                 canIExit = true;
        }
        else if (arr[2][0] == 'O')
        {
            cout << endl
                 << "Player O Win" << endl;
                 canIExit = true;
        } /// row check end
    }
    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
    {
        if (arr[0][0] == 'X')
        {
            cout << endl
                 << "Player X Win" << endl;
                 canIExit = true;
        }
        else if (arr[0][0] == 'O')
        {
            cout << endl
                 << "Player O Win" << endl;
                 canIExit = true;
        }
    }
    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
    {
        if (arr[0][1] == 'X')
        {
            cout << endl
                 << "Player X Win" << endl;
                 canIExit = true;
        }
        else if (arr[0][1] == 'O')
        {
            cout << endl
                 << "Player O Win" << endl;
                 canIExit = true;
        }
    }
    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
    {
        if (arr[0][2] == 'X')
        {
            cout << endl
                 << "Player X Win" << endl;
                 canIExit = true;
        }
        else if (arr[0][2] == 'O')
        {
            cout << endl
                 << "Player O Win" << endl;
                 canIExit = true;
        }
    }
    else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
    {
        if (arr[0][0] == 'X')
        {
            cout << endl
                 << "Player X Win" << endl;
                 canIExit = true;
        }
        else if (arr[0][0] == 'O')
        {
            cout << endl
                 << "Player O Win" << endl;
                 canIExit = true;
        }
    }
    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
    {
        if (arr[0][2] == 'X')
        {
            cout << "Player X Win" << endl;
            canIExit = true;
        }
        else if (arr[0][2] == 'O')
        {
            cout << "Player O Win" << endl;
            canIExit = true;
        }
    }
}
void playMe(int firstTime)
{
    if (firstTime == 1)
    {
        boxesOnly(1);
        playMe(0);
    }
    else
    {
        int x = -1, y = -1;
        for (int i = 0; i < 3; i++) // position ma X or O ko position set garna khoj da yo rakhne ho
        {
            location(&x, &y); // 1-9 input lina use hunxa
            if (firstTime == 0)
            {
                system("cls");
            }
            for (int j = 0; j < 3; j++)
            {
                if (player)
                {
                    arr[x][y] = 'X';
                    player = false;
                }
                else
                {
                    arr[x][y] = 'O';
                    player = true;
                }
            }
        }
        endState++;
    }
    boxesOnly(0);      // yo chan pattern print garna ko lagi matrai ho wit X or O if any available
    if (endState != 9) // yo chai 9 patak vanda badi input na lige game lai close garna lai ho
    {
        check();
        if (canIExit == true)
        {
            main();
        }else{
        playMe(0);
        }
    }
}
int main()
{
    if (canIExit == false)
    {
        playMe(1);
    }
    return 0;
   // _getch();
}
