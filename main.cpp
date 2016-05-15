/*  Path Finding
    File Name:          main.cpp
    Programmer:         Boris Nikulin
    Date Last Modified: May 14, 2016

    Problem Statement: 
   
    Overall Plan:

    Classes needed and Purpose (Input, Processing, Output)
    main.cpp					- main
	stdlib.h					- sytem, null etc.
	iostream					- cin and cout
	Other exceptions			- for the obvious exceptions they stand for
*/

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

//PRECONDITION:  Empty cin
void pause();

int main()
{
	system("TITLE Path Finding");

	pause();
	return 0;
}

void pause()
{
	cout << "\nPress <Enter> to end the program";
	cin.ignore(1024, '\n');
}
