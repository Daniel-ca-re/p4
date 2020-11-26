#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <list>
#include <vector>
#include <array>

using namespace std;

void shortestway(vector <int> way, int n2,list <list <array<int,2>>> nodos,vector < vector<int> > &ways);
bool isin(vector<int> L, int x);
#endif // LIBRARY_H
