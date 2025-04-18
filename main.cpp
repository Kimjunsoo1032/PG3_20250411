#include <stdio.h>
#include <iostream>
#include <Windows.h>
int main() {
	SetConsoleOutputCP(65001);
	char str[] = "キムジュンス";
	printf("%s",str);
	return 0;
}