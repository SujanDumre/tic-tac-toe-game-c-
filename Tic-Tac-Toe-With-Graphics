#include <iostream>
#include <raylib.h>
#include <time.h>
#include <math.h>
Color Green = Color{ 38,185,154,255 };
Color Dark_Green = Color{ 20,160,133,255 };
Color Light_Green = Color{ 129,204,184,255 };
Color Light_White = Color{ 255, 255, 247 };
void canILiveThisWorld(int);
int main(int);
using namespace std;
const int screen_width = 700;
const int screen_height = 700;
int COL = 3;
int ROW = 3;
const int cellWidth = screen_width / ROW;
const int cellHeight = screen_height / COL;
int victoryTimer = 10;
int COUNT = 0, FLAG = 0, BORN = 0;
bool whoamI, x;
float a, b;
void IamMain(int);
int iloop = 0;
int toggle[3][3] = { {0, 0, 0},
					{0, 0, 0},
					{0, 0, 0} };
Texture2D gameC, gameD;
class clicked
{
public:
	bool WhoseTurn()
	{
		if (COUNT % 2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void printMyExistence()
	{
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{

			a = float(GetMouseX());
			b = float(GetMouseY());
			// 00
			if (a < cellWidth && b < cellHeight && a < 2 * cellWidth && a < 3 * cellWidth)
			{
				if (toggle[0][0] != 1 && toggle[0][0] != 2 && toggle[0][0] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, (cellWidth / 2) - 75, (cellWidth / 2) - 75, RED);
						COUNT++;
						toggle[0][0] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, (cellWidth / 2) - 50, (cellWidth / 2) - 50, BLUE);
						COUNT++;
						toggle[0][0] = 2;
					}
				}

			} // 01
			else if (a < 2 * cellWidth && b < cellHeight && a > cellWidth && a < 3 * cellWidth)
			{
				if (toggle[0][1] != 1 && toggle[0][1] != 2 && toggle[0][1] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, (2 * cellWidth / 2) + 35, (cellHeight / 2) - 75, RED);
						COUNT++;
						toggle[0][1] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, (cellWidth)+55, (cellHeight / 2) - 55, BLUE);
						COUNT++;
						toggle[0][1] = 2;
					}
				}
			} // 02
			else if (a < 3 * cellWidth && b < cellHeight && a > cellWidth && a > 2 * cellWidth)
			{
				if (toggle[0][2] != 1 && toggle[0][2] != 2 && toggle[0][2] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, (cellWidth * 2) + 35, (cellHeight / 2) - 75, RED);
						COUNT++;
						toggle[0][2] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, (cellWidth * 2) + 55, (cellHeight / 2) - 55, BLUE);
						COUNT++;
						toggle[0][2] = 2;
					}
				}
			} // 2nd row start //10
			else if (a < cellWidth && b < 2 * cellHeight && a < 2 * cellWidth && a < 3 * cellWidth && b > cellHeight && b < 3 * cellHeight)
			{
				if (toggle[1][0] != 1 && toggle[1][0] != 2 && toggle[1][0] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, (cellWidth / 2) - 75, (cellHeight)+40, RED);
						COUNT++;
						toggle[1][0] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, (cellWidth / 2) - 50, (cellHeight)+60, BLUE);
						COUNT++;
						toggle[1][0] = 2;
					}
				}
			} // 11
			else if (a > cellWidth && b < 2 * cellHeight && a < 2 * cellWidth && a < 3 * cellWidth && b > cellHeight && b < 3 * cellHeight)
			{
				if (toggle[1][1] != 1 && toggle[1][1] != 2 && toggle[1][1] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, cellWidth + 15, cellHeight + 35, RED);
						COUNT++;
						toggle[1][1] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, cellWidth + 55, cellHeight + 55, BLUE);
						COUNT++;
						toggle[1][1] = 2;
					}
				}
			} // 12
			else if (a > cellWidth && b < 2 * cellHeight && a > 2 * cellWidth && a < 3 * cellWidth && b > cellHeight && b < 3 * cellHeight)
			{
				if (toggle[1][2] != 1 && toggle[1][2] != 2 && toggle[1][2] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, (2 * cellWidth) + 35, (cellHeight)+35, RED);
						COUNT++;
						toggle[1][2] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, (2 * cellWidth) + 55, (cellHeight)+55, BLUE);
						COUNT++;
						toggle[1][2] = 2;
					}
				}
			} // 3rd row start 20
			else if (a < cellWidth && b > 2 * cellHeight && a < 2 * cellWidth && a < 3 * cellWidth && b > cellHeight && b < 3 * cellHeight)
			{
				if (toggle[2][0] != 1 && toggle[2][0] != 2 && toggle[2][0] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, (cellWidth / 2) - 75, (2 * cellHeight) + 40, RED);
						COUNT++;
						toggle[2][0] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, (cellWidth / 2) - 50, (2 * cellHeight) + 60, BLUE);
						COUNT++;
						toggle[2][0] = 2;
					}
				}
			} // 21
			else if (a > cellWidth && b > 2 * cellHeight && a < 2 * cellWidth && a < 3 * cellWidth && b > cellHeight && b < 3 * cellHeight)
			{
				if (toggle[2][1] != 1 && toggle[2][1] != 2 && toggle[2][1] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, cellWidth + 38, (2 * cellHeight) + 40, RED);
						COUNT++;
						toggle[2][1] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, cellWidth + 60, (2 * cellHeight) + 55, BLUE);
						COUNT++;
						toggle[2][1] = 2;
					}
				}
			} // 22
			else if (a > cellWidth && b > 2 * cellHeight && a > 2 * cellWidth && a < 3 * cellWidth && b > cellHeight && b < 3 * cellHeight)
			{
				if (toggle[2][2] != 1 && toggle[2][2] != 2 && toggle[2][2] != 5)
				{
					x = WhoseTurn();
					if (x == true)
					{
						FLAG++;
						DrawTexture(gameC, (2 * cellWidth) + 35, (2 * cellHeight) + 35, RED);
						COUNT++;
						toggle[2][2] = 1;
					}
					else
					{
						FLAG++;
						DrawTexture(gameD, (2 * cellWidth) + 50, (2 * cellHeight) + 65, BLUE);
						COUNT++;
						toggle[2][2] = 2;
					}
				}
			}
		}
	}
	void check()
	{
		if (toggle[0][0] == toggle[0][1] && toggle[0][1] == toggle[0][2]) // row check start
		{
			if (toggle[0][0] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[0][0] == 2)
			{
				canILiveThisWorld(2);
			}
		}
		else if (toggle[1][0] == toggle[1][1] && toggle[1][1] == toggle[1][2])
		{
			if (toggle[1][0] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[1][0] == 2)
			{
				canILiveThisWorld(2);
			}
		}
		else if (toggle[0][0] == toggle[1][0] && toggle[1][0] == toggle[2][0])
		{
			if (toggle[0][0] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[0][0] == 2)
			{
				canILiveThisWorld(2);
			}
		}
		if (toggle[0][1] == toggle[1][1] && toggle[1][1] == toggle[2][1])
		{
			if (toggle[0][1] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[0][1] == 2)
			{
				canILiveThisWorld(2);
			}
		}
		else if (toggle[0][2] == toggle[1][2] && toggle[1][2] == toggle[2][2])
		{
			if (toggle[0][2] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[0][2] == 2)
			{
				canILiveThisWorld(2);
			}
		}
		else if (toggle[0][0] == toggle[1][1] && toggle[1][1] == toggle[2][2])
		{
			if (toggle[0][0] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[0][0] == 2)
			{

				canILiveThisWorld(2);
			}
		}
		else if (toggle[0][2] == toggle[1][1] && toggle[1][1] == toggle[2][0])
		{
			if (toggle[0][2] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[0][2] == 2)
			{
				canILiveThisWorld(2);
			}
		}
		if (toggle[2][0] == toggle[2][1] && toggle[2][1] == toggle[2][2])
		{
			if (toggle[2][0] == 1)
			{
				canILiveThisWorld(1);
			}
			else if (toggle[2][0] == 2)
			{
				canILiveThisWorld(2);
			} /// row check end
		}
		if (FLAG >= 9)
		{
			canILiveThisWorld(5);
		}
	}
	void canILiveThisWorld(int life)
	{

		if (life == 1)
		{
			DrawRectangle(0, 290, GetScreenWidth(), 60, Fade(RAYWHITE, 5.0f));
			DrawText("Game Over! Player X Win", 40, 300, 50, VIOLET);
			DrawRectangle(0, 385, GetScreenWidth(), 30, Fade(RAYWHITE, 5.0f));
			DrawText("Press R to restart or Press E to exit", 170, 390, 20, VIOLET);
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					toggle[i][j] = 5;
				}
			}
			FLAG = -1; //TO STOP FLAG >= CONDITION TO EXECUTE
		}
		else if (life == 2)
		{
			DrawRectangle(0, 290, GetScreenWidth(), 60, Fade(RAYWHITE, 5.0f));
			DrawText("Game Over! Player O Win!!!", 40, 300, 50, VIOLET);
			DrawRectangle(0, 385, GetScreenWidth(), 30, Fade(RAYWHITE, 5.0f));
			DrawText("Press R to restart or Press E to exit", 170, 390, 20, VIOLET);
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					toggle[i][j] = 5;
				}
			}
			FLAG = -1;
		}
		else if (life == 5)
		{
			DrawRectangle(0, 290, GetScreenWidth(), 60, Fade(RAYWHITE, 5.0f));
			DrawText("Match Draw! Nobody Win", 40, 300, 50, VIOLET);
			DrawRectangle(0, 385, GetScreenWidth(), 30, Fade(RAYWHITE, 5.0f));
			DrawText("Press R to restart or Press E to exit", 170, 390, 20, VIOLET);
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					toggle[i][j] = 5;
				}
			}
			FLAG = -1;
		}

	}
};
int main(int Born = 0)
{
	InitWindow(screen_width, screen_height, "TIC TAC TOE GAME");
	SetTargetFPS(144);
	UnloadTexture(gameC);
	UnloadTexture(gameD);
	IamMain(Born);
	return 0;
}
void IamMain(int Born = 0)
{
	clicked a;
	if (Born == 1)
	{
		fflush(stdin);
		COUNT = 0;
		FLAG = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				toggle[i][j] = 0;
			}
		}
		UnloadTexture(gameC);
		UnloadTexture(gameD);
	}
	int Xpos = GetMouseX();
	int Yposi = GetMouseY();
	gameC = LoadTexture("X.png");
	gameD = LoadTexture("O.png");
	while (!WindowShouldClose())
	{
		BeginDrawing();
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				DrawRectangle(i * cellWidth - 20, j * cellHeight - 20, 5, 600, Light_Green);
				DrawRectangle(i * cellWidth - 20, j * cellHeight - 20, 600, 5, Light_Green);
			}
		}
		a.printMyExistence();
		a.check();
		EndDrawing();
		if (FLAG == -1)
		{
			if (IsKeyPressed(KEY_R))
			{
				main(1);
			}
			if (IsKeyPressed(KEY_E))
			{
				exit(0);
			}
		}
	}
	UnloadTexture(gameC);
	UnloadTexture(gameD);
	CloseWindow();
}
