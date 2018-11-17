#include "fcpp.hh"
int addZ(int zahl, int x, int n)
{
    return addZ(zahl, x+1, n+x);
}

bool vollkommen(int zahl)
{
    return cond(zahl/2=< int x, int n, cond(zahl%x==0, addZ(zahl, x, n), addZ(zahl, x+1, n)));
}

int main()
{
    int zahl;
    std::cout<<"Gib bitte die Zahl ein: "<<std::flush;
    std::cin>>zahl

    print(vollkommen(zahl));
}
