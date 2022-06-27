#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif //  ONLINE_JUDGE

int remainder, power, num, reverse;
cin >> num;
reverse = 0;
remainder = 0;
power = 10;

while(num != 0)
{
    remainder = num%10;
    num = num/10;
    reverse = reverse*power + remainder;
}
cout << reverse;


return 0;
}