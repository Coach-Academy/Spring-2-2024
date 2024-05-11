#include <bits/stdc++.h>

using namespace std;

int main()
{

    /// problem C

    /*int n;
    cin>>n;
    int d[n];
    for(int i=0 ; i<n-1 ; i++)
    {
        cin>>d[i];
    }
    int a,b,sum=0;
    cin>>a>>b;
    a--;
    b--;
    for(int i=a ; i<b ; i++)
    {
        sum+=d[i];
    }
    cout<<sum;*/

    /// problem d

    /*int x;
    int row=0,col=0;

    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cin>>x;
            if(x==1)
            {
                row=i;
                col=j;
            }
        }
    }

    int moves=0;

    if(row>2)
    {
        moves=row-2;
    }
    else
    {
        moves=2-row;
    }

    if(col>2)
        moves+=col-2;
    else
        moves+=2-col;

    cout<<moves;*/


    /// problem E

    /*int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0 ; i<n  ;i++)
        cin>>a[i];

    for(int i=0 ; i<n ; i++)
    {
        if(a[i]>=a[k-1] &&a[i]!=0)
        {
            c++;
        }
    }
    cout<<c;*/

    /// problem F

    /*int t;
    cin>>t;
    while(t--)
    {
       int n,bad=0;
       cin>>n;
       int a[n];
       for(int i=0 ; i<n ; i++)
            cin>>a[i];

       int mn=a[n-1];
       for(int i=n-1 ; i>=0 ; i--)
       {
           if(a[i]<=mn)
            mn=a[i];
           else
            bad++;
       }
       cout<<bad<<"\n";




    }*/

    /// problem G

  /*  int n;
    cin>>n;
    int prev,cur;
    cin>>prev;
    int c=1;
    for(int i=1 ; i<n ; i++)
    {
        cin>>cur;
        if(cur!=prev)
            c++;

        prev=cur;

    }
    cout<<c;*/


/// problem I
   /*int n;
   cin>>n;
   int wires[n];
   for(int i=0 ; i<n ; i++)
    cin>>wires[i];

   int shots,x,y;
   cin>>shots;

   for(int i=0 ; i<shots; i++)
   {
       cin>>y>>x;
       y--;

       if(y<n-1)
        wires[y+1]+=wires[y]-x;
       if(y>0)
        wires[y-1]+=x-1;

       wires[y]=0;
   }

   for(int i=0 ; i<n ; i++)
    cout<<wires[i]<<"\n";*/



/// problem J
   /* int n,mn=101,mx=0,mni,mxi;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];

        if(a[i]<=mn)
        {
            mn=a[i];
            mni=i;

        }

        if(a[i]>mx)
        {
            mx=a[i];
            mxi=i;
        }

    }
    int moves=0;
    moves+=n-mni-1;
    moves+=mxi;
    if(mxi>mni)
        moves--;

    cout<<moves;*/

    /// problem K

   /* int a[3][3];
    int b[3][3];

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ;j++)
        {
            b[i][j]=1;
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0;  j<3 ; j++){
            if(a[i][j]%2==1)
            {

                if(b[i][j]==0)
                {
                    b[i][j]=1;
                }
                else
                {
                    b[i][j]=0;
                }

                if(i>0)
                {
                if(b[i-1][j]==0)
                {
                    b[i-1][j]=1;
                }
                else
                {
                    b[i-1][j]=0;
                }
                }
                if(i<2)
                {
                    if(b[i+1][j]==0)
                {
                    b[i+1][j]=1;
                }
                else
                {
                    b[i+1][j]=0;
                }
                }

                if(j>0)
                {
                    if(b[i][j-1]==0)
                {
                    b[i][j-1]=1;
                }
                else
                {
                    b[i][j-1]=0;
                }
                }

                if(j<2)
                {
                     if(b[i][j+1]==0)
                {
                    b[i][j+1]=1;
                }
                else
                {
                    b[i][j+1]=0;
                }
                }
            }
        }
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ;j++)
        {
            cout<<b[i][j];
        }
        cout<<"\n";
    }*/

    /// problem L
    int n,a[51],t=1;

    while(cin>>n)
    {
        int sum=0;

        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int avg=sum/n;
        int res=0;

        for(int i=0 ; i<n ; i++)
        {

            if(a[i]>avg)
            {
                res+=a[i]-avg;
            }

        }

        cout<<"Set #"<<t<<"\n";
        cout<<"The minimum number of moves is "<<res<<".\n";


    }







    return 0;
}
