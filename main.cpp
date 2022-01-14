#include <map>
#include <iostream>
#include <stack>
int main()
{
auto* a="--[----->+<]>-----.--[--->+<]>..---.---.+++.+++[->+++<]>++.-[->+++<]>.-[--->++<]>-.++++++++++.+[---->+<]>+++.+[->+++<]>.++++++++++++..---.";
std::map<int,char>m;
std::stack<const char*>j;
int p{};
while(*a){
int v=*a++,l=m[p]=v==44?getchar():m[p+=(v==62)-(v==60)]+(v==43)-(v==45);
v==91?l?j.push(a):[&]{while(*++a!=93);}(),a:
v==93?a=l?j.top():(j.pop(),a):(putchar((v==46)*l),a);
}
}