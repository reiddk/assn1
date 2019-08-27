/*
Reid Kuttler
CS3060-002
Assignment 1

*/
/* Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself and by no other person or persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment.
*/

#include<stdio.h>

int main(int argc, char *argv[]) {
	printf("This program prints the parameters of the program");
	printf("\n");
	for (int i = 0; i < argc; i++) {
		printf("%s ",argv[i]);
	}
	printf("\n");
	printf("You have %d parameters", argc);
	return 0;
}
