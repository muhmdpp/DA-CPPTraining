#include <iostream>
using namespace std;
int main()
{
int a{10},b{20},c{30};
int result = (a++,--b,c*=2);
//using comma operator, the last operatiion in the bracket will store in the variable
cout<<result;
return 0;
}