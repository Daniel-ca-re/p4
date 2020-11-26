#include <iostream>
#include <list>
#include <vector>
#include <array>
#include <algorithm>
#include "red.h"
#include "library.h"

using namespace std;

red::red()
{

}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
void red::newnodo(int c)
{
    int g;
    array <int,2> b;
    list <array<int,2>> l ;

    for(int x=0;x<c;x++)
    {
        g=nodos.size();
        b = {g,0};
        l = {b};
        nodos.push_back(l);
    }
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

void red::newconection(int n1, int n2, int price)
{
    if(int(nodos.size())>n1 && int(nodos.size()) > n2)
    {
        auto i=nodos.begin();
        advance(i,n1);
        char exist='0';

        for (auto ii= (*i).begin() ; ii!=(*i).end();ii++)
        {
            auto iii=(*ii).begin();
            if (*iii==n2)
            {
                exist='1';
                break;
            }
        }
        if (exist=='0')
        {
            i=nodos.begin();
            advance(i,n2);
            array <int,2> arr={n1,price};
            (*i).push_back(arr);




            i=nodos.begin();
            advance(i,n1);
            arr={n2,price};
            (*i).push_back(arr);
        }
    }
    else
    {
        cout <<"nodos inexistentes"<<endl;
    }
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void red::pop_nodo(int c)
{
    if(int(nodos.size())>c)
    {
        auto i=nodos.begin();
        advance(i,c);
        nodos.erase(i);
        for (i=nodos.begin();i!=nodos.end();i++)
        {
            for (auto ii= (*i).begin() ; ii!=(*i).end();ii++)
            {
                auto iii=(*ii).begin();
                if (*iii>c)
                {
                    (*iii)--;
                }
                else if (*iii==c)
                {
                    (*i).erase(ii);
                }
            }
        }
    }
    else
    {
        cout <<"nodo inexistente"<<endl;
    }
}


//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void red::pop_conection(int n1, int n2)
{
    if(int(nodos.size())>n1 && int(nodos.size()) > n2)
    {
        auto i=nodos.begin();
        advance(i,n1);

        for (auto ii= (*i).begin() ; ii!=(*i).end();ii++)
        {
            auto iii=(*ii).begin();
            if (*iii==n2)
            {
                (*i).erase(ii);
                break;
            }
        }
        i=nodos.begin();
        advance(i,n2);

        for (auto ii= (*i).begin() ; ii!=(*i).end();ii++)
        {
            auto iii=(*ii).begin();
            if (*iii==n1)
            {
                (*i).erase(ii);
                break;
            }
        }

    }
    else
    {
        cout <<"nodos inexistentes"<<endl;
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void red::startshortway(int n1, int n2)
{
    vector <int> way={n1};
    shortestway(way,n2,nodos,ways);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------




