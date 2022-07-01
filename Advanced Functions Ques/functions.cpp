#include<iostream>
#include<cmath>
using namespace std;

int Sum(int n)
{
    int sum = n*(n-1)/2;
    return sum;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE

    int n;
    cin >> n;
    cout << "1.Sum of first " << n << " numbers\n";
    cout << Sum(n) << endl;
    

    return 0;
}