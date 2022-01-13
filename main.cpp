#include <map>
#include <iostream>
#include <queue>
int main()
{
auto* a=",....";
std::map<int,char>m;
std::queue<const char*>j;
int p{};
do{
int v=*a,l=m[p+=(v==62)-(v==60)]=v==44?getchar():m[p]+(v==43)-(v==45);
if(v==91){if(l)j.push(a);else while(*++a!=93);}
if(v==93){if(l)a=j.back();else j.pop();}
putchar((v==46)*l);
}while(*++a);
}