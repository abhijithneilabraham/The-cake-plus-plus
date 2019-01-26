#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jan 26 01:01:08 2019

@author: abhijithneilabraham
"""

'''
TIC TAC TOE game
'''
class TicTacToe:
    def __init__(self):
        self.board=[[' ']*3 for j in range(3)] #creating a 3*3 board
        self.player='X'
        
    def mark(self,i,j):
        self.board[i][j]=self.player
        if self.player=='X':
            self.player='O'
        elif self.player=='O':
            self.player='X'
        else:
            raise ValueError('invalid mark given.Give input X or O')
    def is_win(self,mark):
        board=self.board
        return (mark==board[0][0]==board[0][1]==board[0][2] or #first 3 rows
                mark==board[1][0]==board[1][1]==board[1][2] or
                mark==board[2][0]==board[2][1]==board[2][2] or
                mark==board[0][0]==board[1][0]==board[2][0] or #columns
                mark==board[0][1]==board[1][1]==board[2][1] or
                mark==board[0][2]==board[1][2]==board[2][2] or
                mark==board[0][0]==board[1][1]==board[2][2] or
                mark==board[2][0]==board[1][1]==board[0][2]
                )
    def winner(self):
        for mark in 'XO':
            if self.is_win(mark): #winners mark x or o is shown.None returned when tie.
                return mark
        return None
    def __str__(self):
        rows=['|'.join(self.board[r]) for r in range (3)]
        return '\n------\n'
    
game=TicTacToe()
for k in range (9):
    r=int(input('enter the row'))
    c=int(input('enter the colummn'))
    game.mark(r,c)
print(game)
winner=game.winner()
if winner is None:
    print('Tie')
else:
    print(winner,'wins')
    
        