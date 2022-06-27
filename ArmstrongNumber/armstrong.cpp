#include<iostream>
#include<cmath>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

int num, arm_num, remainder, n;
cin >> num;
arm_num = 0;
remainder = 0;
n = num;

while(n != 0)
{
    remainder = n%10;
    arm_num += pow(remainder,3);
    n /= 10;
}

if(arm_num == num)
    cout << "Armstrong Number";
else
    cout << "Not an Armstrong Number";   
 
return 0;
}