#ifndef RED_H
#define RED_H
#include <iostream>
#include <list>
#include <vector>
#include <array>

using namespace std;

class red
{
    private:

    public:

        list <list <array<int,2>>> nodos;
        list <list <int>> tabla1;
        list <list <string>> tabla2;
        vector < vector<int> > ways;
        void newnodo(int c);
        void newconection(int n1,int n2,int price);
        void pop_nodo(int c);
        void pop_conection(int n1,int n2);
        void startshortway(int n1,int n2);
    red();
};

#endif // RED_H
