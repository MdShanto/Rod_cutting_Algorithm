#include <iostream>
#include <climits>

using namespace std;

void EXTENDED_BOTTOM_UP_ROD(int ar[],int n)
{
    int r[n],s[n];
    int i,j,q;
    r[0]=0;
    for(j=1;j<=n;j++)
    {
        q=INT_MIN;

        for(i=1;i<=j;i++)
        {
            if(q < ar[i]+r[j-i])
            {
                q=(ar[i]+r[j-i]);
                s[j]=i;
            }
            r[j]=q;
        }
    }

cout<<"Max profit:"<<r[n]<<"TK"<<endl;
cout<<"cuts:"<<endl;
    while(n>0)
          {
              cout<<s[n]<<"m"<<endl;
                n=n-s[n];
          }

}

int PRINT_CUT_ROD_SOLUTION(int ar[],int n)
{

     EXTENDED_BOTTOM_UP_ROD(ar,n);

}



int main()
{
    int a[100],i,n;
    cout<<"Enter total length:"<<endl;
    cin>>n;
    cout<<"Enter different price of ROD:"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    PRINT_CUT_ROD_SOLUTION(a,n);
    return 0;
}
