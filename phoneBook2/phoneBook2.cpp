// phoneBook2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

char phoneBook[10][2][50];
void addName(char mylist[10][2][50]);
void showList(char mylist[10][2][50]);
void confirm(char mylist[10][2][50]);



int main()
{
	char mylist[10][2][50];
	int i = 0;
	char answer;
	do
	{
		cout << "-----------------------" << endl;
		cout << "What do you want to do?" << endl;
		cout << "-----------------------" << endl;
		cout << "[A]dd new entry -- enter A" << endl;
		cout << "[D]isplay -- enter D" << endl;
		cout << "[Q]uit -- enter Q" << endl;
		cin >> answer;
	}
}

void addName(char mylist[10][2][50])
{
}

void showList(char mylist[10][2][50])
{
}

void confirm(char mylist[10][2][50])
{
}
