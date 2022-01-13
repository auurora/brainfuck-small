#include <map>
#include <iostream>
#include <queue>
int main()
{
auto* a="--[----->+<]>-----.--[--->+<]>..---.---.+++.+++[->+++<]>++.-[->+++<]>.-[--->++<]>-.++++++++++.+[---->+<]>+++.+[->+++<]>.++++++++++++..---.";
std::map<int,char>m;
std::queue<const char*>j;
int p{};
do{
auto&l=m[p+=*a==62?1:-(*a==60)],v=*a;l+=v==43?1:-(v==45);
if(v==91){if(l)j.push(a);else while(*++a!=93);}
if(v==93){if(l)a=j.back();else j.pop();}
std::cout<<(v==46?l:'\0');
if(v==44)l=std::cin.get();
}while(*(++a));
}