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

#include "AMDGraph.h"

//PRECONDITION:  Empty cin
void pause();

int main()
{
	system("TITLE Path Finding");

	pf::graph::AMDGraph<std::string, int> graph;
	graph.addEdge(std::string("s"), std::string("d"), nullptr);

	pause();
	return 0;
}

void pause()
{
	std::cout << "\nPress <Enter> to end the program";
	std::cin.ignore(1024, '\n');
}
