#include <iostream>
#include <list>
#include <vector>
#include <array>
#include <algorithm>
#include "library.h"

using namespace std;




void shortestway(vector <int> way, int n2,list <list <array<int,2>>> nodos,vector < vector<int> > &ways)
{
     if (isin(way,n2))
     {
         ways[ways.size()]=way;
         return;
     }
     else
     {
         auto i=nodos.begin();
         advance(i,way[way.size()-1]);
         for(auto ii=(*i).begin();ii!=(*i).end();ii++)
         {
             if(!(isin(way, *((*ii).begin()))))
             {
                way[way.size()]=*((*ii).begin());
                shortestway(way,n2,nodos,ways);
             }
         }
         return;
     }


}


bool isin(vector<int> L, int x)
{
    for(auto i:L)
    {
        if (i==x)
        {
            return true;
        }
    }
    return false;
}
