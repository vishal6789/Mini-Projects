# -*- MakeFile -*-

#target: dependencies
#	action

game: main.o TicTacToe.o
	gcc main.o TicTacToe.o -o game

main.o: main.c tic-tac-toe.h
	gcc -c main.c

TicTacToe.o: TicTacToe.c
	gcc -c TicTacToe.c