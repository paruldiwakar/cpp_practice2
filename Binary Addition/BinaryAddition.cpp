#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif //  ONLINE_JUDGE

int bits,c=0;
cin >> bits;

int n1[bits], n2[bits], n3[bits];

for(int i=0; i<bits; i++)
    cin >> n1[i];

for(int i=0; i<bits; i++)
    cin >> n2[i];


for(int i=bits-1; i>=0; i--)
{
    n3[i] = (n1[i]^n2[i])^c;
    c = n1[i]*n2[i] | c*n1[i] | c*n2[i];
}

cout << endl << c;
for(int i=0; i<bits; i++)
    cout << n3[i];    

return 0;
}
