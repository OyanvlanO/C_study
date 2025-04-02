#ifndef GAME_H
#define GAME_H
#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

// 初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);

// 打印棋盘
void DispalyBoard(char board[ROW][COL], int row, int col);

// 玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

// 电脑下棋
// 找没有下棋的位置重新下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//
// 玩家赢 - '*'
// 电脑赢 - '#'
// 继续 - 'Q'
// 平局 - 'C'
// 

char Iswin(char board[ROW][COL], int row, int col);

#endif