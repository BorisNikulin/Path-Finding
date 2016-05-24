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
#include <memory>

#include "AMDGraph.h"

struct NamedPoint
{
		std::string name;
		double x;
		double y;
};

//PRECONDITION:  Empty cin
void pause();

int main()
{
	system("TITLE Path Finding");

//	pf::graph::AMDGraph<NamedPoint, int> graph;
//
//	NamedPoint p1{"A", 0, 0};
//	NamedPoint p2{"B", 10, 10};
//	NamedPoint p3{"C", 5, 8};
//
//	graph.addVertex(p1);
//	graph.addVertex(p2);
//	graph.addVertex(p3);
//
//	std::unique_ptr<int> e1(new int(5));
//	std::unique_ptr<int> e2(new int(10));
//	std::unique_ptr<int> e3(new int(3));
//	std::unique_ptr<int> e4(new int(7));
//
//	graph.addEdge(p1, p2, nullptr);
//	graph.addEdge(p1, p3, e1.get());
//	graph.addEdge(p2, p1, e2.get());
//	graph.addEdge(p2, p3, e3.get());
//	graph.addEdge(p3, p2, e4.get());

	pause();
	return 0;
}

void pause()
{
	std::cout << "\nPress <Enter> to end the program";
	std::cin.ignore(1024, '\n');
}
