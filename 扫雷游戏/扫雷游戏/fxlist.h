#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 5//行数
#define COL 5//列数
#define lv1 10//

//显示菜单
void DisplayMenu();


//棋盘初始化
void InitBoard(char board[ROW + 2][COL + 2], char a);

//显示棋盘
void DisplayBoard(char board[ROW + 2][COL + 2]);

//布雷
void SetMine(char board[ROW + 2][COL + 2]);

//找雷
void FindMine(char board[ROW + 2][COL + 2]);
