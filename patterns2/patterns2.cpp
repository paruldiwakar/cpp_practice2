#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
#endif // !ONLINE_JUDGE

int row, col;
int n;
cin >> row >> col;
cin >> n;
/*-------------------------------------------------*/
cout << "1.Inverted Pattern\n";

for(int i=n; i>=1; i--)
{
    for(int j=1; j<=i; j++)
        cout << j << " ";  
        
    cout << endl;    
}
/*-------------------------------------------------*/

cout << "\n2.0-1 Pattern\n";

for(int i=1; i<=n; i++)
{
    for(int j=1; j<=i; j++)
    {
        if((i+j)%2==0)
            cout << "1 ";
        else
            cout << "0 ";      
    }    
    cout << endl;    
}
/*-------------------------------------------------*/

cout << "\n3.Rhombus Pattern\n";

for(int i=1; i<=n; i++)
{
    for(int j=1; j<2*n; j++)
    {
        if(i+j>n && i+j<=2*n)
            cout << "*   ";   
        else
            cout << "  ";     
    }    
    cout << endl;    
}
/*-------------------------------------------------*/

cout << "\n4.Number Pattern\n";

for(int i=1; i<=n; i++)
{ 
    for(int j=1; j<2*n; j++)
    {
        
        if(i+j>n && j<=n)
            cout << i+j-n << "   ";   
        else
            cout << "  ";     
    }    
    cout << endl;    
}
/*-------------------------------------------------*/

cout << "\n5.Palindrome Pattern\n";

for(int i=1; i<=n; i++)
{ 
    for(int j=1; j<2*n; j++)
    {
        
        if(i+j<=n)
            cout << " ";  
        else if(j>n && i<=j-n)
           cout << " ";     
        else
            {
              if(j<n)
                cout<<n-j+1;
               else
                cout << j%n+1;  
            }    
    }    
    cout << endl;    
}
/*-------------------------------------------------*/

cout << "\n6.Star Pattern\n";

for(int i=1; i<=n; i++)
{ 
    for(int j=1; j<2*n; j++)
    {
        if(i+j<=n)
            cout << "  ";
        else if(j>n && i<=j-n) 
            cout << "  ";
        else 
            cout<<"* " ;     
        
    }    
    cout << endl;    
}

for(int i=1; i<=n; i++)
{ 
    for(int j=1; j<2*n; j++)
    {
        if(i<=j && i+j<=2*n)
            cout << "* ";

        else 
            cout<<"  " ;     
        
    }    
    cout << endl;    
}
/*-------------------------------------------------*/

cout << "\n7.Zig-Zag Pattern\n";
int k = 9;

for(int i=1; i<=3; i++)
{ 
    for(int j=1; j<=k; j++)
    {
        
        if((i+j)%4==0)
            cout << "* ";  

        else if(j%4==0 && i==2)
            cout << "* ";    
                
        else
            cout << "  ";   
    }    
    cout << endl;    
}
return 0;
}