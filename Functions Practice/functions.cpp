#include<iostream>
#include<cmath>
using namespace std;

void Prime_in_Range(int num1, int num2)
{
for(int i=num1; i<=num2; i++)
{
    int flag = 0;
    for(int j=2; j<=sqrt(i); j++)
    {
        if(i%j == 0)
        {
            flag = 1;
            break;
        }    
    }
    if(flag == 0)
        cout << i << " ";
}
}

void Fibonacci(int nums)
{
    if(nums == 0)
        {
            cout << "Incorrect Input";
            return;
        }

    int a=0, b=1, c;
    cout << a << " " << b << " ";
    for(int i=1; i<=nums-2; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;    
    }

}

long int Factorial(int num)
{
 long int factorial = 1;

 if(num == 0)
    return 1;

 for(long int i=num; i>=1; i--)
    factorial *=i;

 return factorial;
}

long int nCr(int n, int r)
{
    long int ncr;
    ncr = (Factorial(n)/Factorial(n-r))/Factorial(r);
    
 return ncr; 
}

void Pascal_Triangle(int n)
{
 int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
            cout << nCr(i,j) << " ";
        
        cout <<  endl;   
    }
  
}

int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif // !ONLINE_JUDGE

int num1, num2;
cin >> num1 >> num2;
Prime_in_Range(num1, num2);
cout << endl;

int nums;
cin >> nums;
Fibonacci(nums);
cout << endl;

int num;
cin >> num;
cout << Factorial(num) << endl;

int n, r;
cin >> n >> r;
cout << nCr(n, r) << endl;

int rows;
cin >> rows;
Pascal_Triangle(rows);
cout << endl;

return 0;
}