#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 5//����
#define COL 5//����
#define lv1 10//

//��ʾ�˵�
void DisplayMenu();


//���̳�ʼ��
void InitBoard(char board[ROW + 2][COL + 2], char a);

//��ʾ����
void DisplayBoard(char board[ROW + 2][COL + 2]);

//����
void SetMine(char board[ROW + 2][COL + 2]);

//����
void FindMine(char board[ROW + 2][COL + 2]);
