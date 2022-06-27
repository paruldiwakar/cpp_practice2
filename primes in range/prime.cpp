#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
   #endif // !ONLINE_JUDGE

    int num1, num2,div;
    cin >> num1 >> num2;
    cout << "Prime numbers in range " << num1 << "-" << num2 << " are :" << endl;
    int num = num1;
    while(num>=num1 && num<=num2)
    {
        div = 2;
        while(div<num)
        {
            if(num%div==0)
                num+=1;
            else
                div+=1;    
        }
        if(num<=num2)
           cout << num << " ";
        num +=1;
    }
//Just Prime or not
 
int n;
bool flag = 0;
cin >> n;

for(int i=2; i<sqrt(n); i++)
{
    if(n%i == 0)
    {
        cout << "\nNot Prime";
        flag = 1;
        break;
    }
}
if(flag == 0)
    cout << "\nPrime";
    
    return 0;
}