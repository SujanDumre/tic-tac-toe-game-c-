#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <sstream>   // Include the <sstream> header for stringstream
#include <windows.h> // Include the <windows.h> header for RECT, HWND, and GetWindowRect
using namespace std;
string center(const string s, const int w)
{
    stringstream ss, spaces;
    int pad = w - s.size(); // count excess room to pad
    for (int i = 0; i < pad / 6; ++i)
        spaces << " ";
    ss << spaces.str() << s << spaces.str(); // format with padding
    if (pad > 0 && pad % 6 != 0)             // if pad odd #, add 1 more space
        ss << " ";
    return ss.str();
}
// Get the horizontal and vertical screen sizes in pixel

void GetDesktopResolution(int &horizontal, int &vertical)
{
    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    horizontal = desktop.right;
    vertical = desktop.bottom;
}

void space()
{
    cout << endl
         << endl
         << endl;
}
// int updateTable(int point,int player)
// {
//     int i = 0, j = 0, k = 0,l=0,n=0,point,player=0,q=0;
//     char a[10]={0,1,2,3,4,5,6,7,8,9};
//     space();
//     space();
//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             cout<<"                                 ";
//             if(j==2)
//             {
//                 cout << "        "<<a[point]<<"     "<< "|" << "         "<<a[2]<<"        " << "|" << "    "<<a[3]<<"       "<< endl;
//             } else
//             {
//                 cout << "              "<< "|" << "                  " << "|" << "           "<< endl;
//             }
            
//         }
//         if(i==2)
//         break;
//         for (k = 0; k <1; k++)
//         {
//             cout<<"                                -";
//             for (l = 0; l < 47; l++)
//             {
//                 cout << "-";
//             }
//             cout << endl;
//         }
//     }
//     space();
//     space();
//     cout<<"Enter your position between 1-9: ";
//     cin>>point;
//     player++;
//     if(point==1 || point==2 || point==3 || point==4 || point==5 || point==6 || point==7 || point==8 || point==9)
//     {

//         if(player%2==0)
//         {
//             updateTable(point,player);
//         }
//         else
//         {
//             cout<<"O";
//         }
        
//     }
//     space();
//     space();
// }
void play()
{
    int i = 0, j = 0, k = 0,l=0,n=0,point,player=0,q=0;
    char a[10]={0,1,2,3,4,5,6,7,8,9};
    space();
    space();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout<<"                                 ";
            if(j==2)
            {
                cout << "        "<<++n<<"     "<< "|" << "         "<<++n<<"        " << "|" << "    "<<++n<<"       "<< endl;
            } else
            {
                cout << "              "<< "|" << "                  " << "|" << "           "<< endl;
            }
            
        }
        if(i==2)
        break;
        for (k = 0; k <1; k++)
        {
            cout<<"                                -";
            for (l = 0; l < 47; l++)
            {
                cout << "-";
            }
            cout << endl;
        }
    }
    space();
    space();
    cout<<"Enter your position between 1-9: ";
    cin>>point;
    player++;
    if(point==1 || point==2 || point==3 || point==4 || point==5 || point==6 || point==7 || point==8 || point==9)
    {

        if(player%2==0)
        {
           // updateTable(point,player);
        }
        else
        {
            cout<<"O";
        }
        
    }
    space();
    space();
}
int main()
{
    int click, w;
    int horizontal = 0;
    int vertical = 0;
    GetDesktopResolution(horizontal, vertical);
    cout << center("\033[47m\033[30mWelcome to the game\033[0m", horizontal) << endl;
    space();
    cout << center("   Play", horizontal) << endl;
    cout << center(" High Score", horizontal) << endl;
    cout << center("Multiplayer", horizontal) << endl;
    cout << center("   Exit", horizontal) << endl;
    cout << "Please enter number between (1-4): ";
    cin >> click;
    switch (click)
    {
    case 1:
        std::system("cls");
        // cout << "Sucess 1!"<< endl;
        play();
        break;

    case 2:
        std::system("cls");
        cout << "Sucess 2!" << endl;
        break;

    case 3:
        std::system("cls");
        cout << "Sucess 3!" << endl;
        break;

    case 4:
        std::system("cls");
        cout << "Exiting the game..." << endl;
        exit(0);
        break;

        // case 4:
        //     std::system("cls");
        //     cout << "Sucess 4!"<< endl;
        //     break;

    default:
        std::system("cls");
        cout << center("Please enter a valid number!", horizontal) << endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        main();
        break;
    }
    return 0;
}
