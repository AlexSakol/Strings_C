#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void change(char* str, int n) {//if length of the string is a multiple of 4 change 1st and 2nd part of the string 
	int k = n / 2;
	char* str1 = new char[k];
	str1[k] = '\0';
	for (int i = 0; i < k; i++) {
		*(str1 + i) = *(str + i);
	}
	char* str2 = new char[k + 1];
	str2[k + 1] = '\0';
	for (int i = 0; i < k + 1; i++) {
		*(str2 + i) = *(str + k + i);
	}
	strcat(str2, str1);
	puts("Changed string");
	puts(str2);
}

void main() {
	char* str;
	str = new char[100];
	puts("Enter a string");
	scanf("%s", str);
	puts("Created string");
	puts(str);
	int n = strlen(str);
	if (n % 4 == 0) {
		change(str, n);
	}
	else { puts("Not equal by 4"); }
	_getch();
}
