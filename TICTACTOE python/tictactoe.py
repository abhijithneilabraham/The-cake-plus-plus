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
        
    def win(self):
        
        