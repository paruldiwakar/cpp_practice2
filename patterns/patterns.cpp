#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
#endif // !ONLINE_JUDGE

int rows, cols;
cin >> rows >> cols;

cout << "1.Rectangle\n";

for(int i=0; i<rows; i++)
{
    for(int j=0; j<cols; j++)
        cout << "* ";
    cout << endl;    
}
/*------------------------------------------------------*/
cout << "\n2.Hollow Rectangle\n";

for(int i=0; i<rows; i++)
{
    for(int j=0; j<cols; j++)
    {
        if(i==0 || i==rows-1 || j==0 || j==cols-1)
                cout <<"* ";
        else  
            cout << "  ";      
    }    
    cout << endl;    
}
/*------------------------------------------------------*/
cout << "\n3.Inverted Half Pyramid\n";

for(int i=rows; i>0; i--)
{
    for(int j=i; j>0; j--)
      
        cout << "* ";
    cout << endl;    
}
/*------------------------------------------------------*/
cout << "\n4.Half Pyramid\n";

for(int i=0; i<rows; i++)
{
    for(int j=0; j<=i; j++)
        cout << "* ";
    cout << endl;    
}
/*------------------------------------------------------*/
int n;
cin >> n;

cout << "\n5.Half Pyramid after 180° rotation\n";

for(int i=0; i<n; i++)   
{
    for(int j=0; j<n; j++)
    {
        if(i+j < n-1)
            cout << "  ";
            
        else
            cout <<"* ";    
    }   
    cout << endl;    
}
/*------------------------------------------------------*/
cout << "\n6.Half Pyramid using numbers\n";

for(int i=1; i<=n; i++)   
{
    for(int j=1; j<=i; j++)
    {
        cout << i <<" ";
    }   
    cout << endl;    
}
/*------------------------------------------------------*/
cout << "\n7.Floyd's Triangle\n";
int count = 1;
for(int i=1; i<=n; i++)   
{
    for(int j=1; j<=i; j++)
    {
        cout << count <<" ";
        count++;
    }   
    cout << endl;    
}
/*------------------------------------------------------*/
cout << "\n8.Butterfly Pattern\n";

for(int i=1; i<n; i++)
{
    for(int j=1; j<=2*n; j++)
    {
        if(i>=j)
            cout << "* ";

        else if(j>n && i+j>2*n)    
            cout << "* ";

        else
            cout << "  ";    
    }
    cout << endl;
}

for(int i=1; i<=n; i++)
{
    for(int j=1; j<=2*n; j++)
    {
        if(i+j<=n+1)
            cout << "* ";
        else if(j>n && i<=j-n)
            cout << "* ";
        else
            cout << "  ";        
    }
    cout << endl;
}
/*------------------------------------------------------*/

return 0;
} // namespace std;
