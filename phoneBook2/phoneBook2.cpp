// phoneBook2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char phoneBook[10][2][50];
void addName(char phoneBook[10][2][50]);
void displayEntry(char phoneBook[10][2][50]);
void confirm(char phoneBook[10][2][50]);
int i = 0;

int main()
{
	char answer;
	do
	{
		cout << "-----------------------" << endl;
		cout << "What do you want to do?" << endl;
		cout << "-----------------------" << endl;
		cout << "[A]dd new name -- enter A" << endl;
		cout << "[D]isplay -- enter D" << endl;
		cout << "[Q]uit -- enter Q" << endl;
		cin >> answer;

		if ((answer == 'a') || answer == 'A')
		{
			if (i < 10)
			{
				addName(phoneBook);
				confirm(phoneBook);
			}
			else
			{
				cout << "Unable to add name. Phonebook is full." << endl;
			}
		}

		else if (answer == 'd' || answer == 'D')
		{
			displayEntry(phoneBook);
		}
		else if (answer == 'q' || answer == 'Q')
			break;

		}
		while (1 == 1);
		return 0;
	
}
	
	void addName(char phoneBook[10][2][50])
	{
		cin.clear();
		cin.ignore();
		cout << "Please enter the name." << endl;
		gets_s(phoneBook[i][0], 50);
		cout << "Please enter the phone number. Enter without any special characters" << endl;
		gets_s(phoneBook[i][1], 50);
			i++;

	}

	void displayEntry(char phoneBook[10][2][50])
	{
		for (int b = 0; b < i; b++)
		{
			cout <<  "Entry: " << b + 1 << " Name: " << phoneBook[b][0] << " Phone Number: " << phoneBook[b][1] << endl;
		}
	}

	void confirm(char phoneBook[10][2][50])

	{
		for (int a = 0; a > i; a++)
		{
			if (strcmp(phoneBook[i][0], phoneBook[a][0]) == 0)
		{
		cout << "Duplicate-Please enter a new entry" << endl;
		
		}
		}
	}
