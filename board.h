//
//  board.h
//  sharkGame
//
//
//  Created by Jihyun Shin on 2025/11/18.
// 

void board_initBoard(void);
int board_getBoardStatus(int pos);
int board_getSharkPosition(void);
int board_stepShark(void);
int board_getBoardCoin(int pos);

void board_printBoardStatus(void);
