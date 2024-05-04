#include <bits/stdc++.h>

using namespace std;

int main()
{
    /// problem A
   /* int N,res;
    cin>>N;

    /*for(int i=1 ; i<=N ; i++)
    {
       res=res+i;
    }*/

   // res=N*(N+1)/2;

   /* 3*4/2
    10*11/2
    1*2/2*/
  // cout<<res;

  /// problem B
  /*int p;
  for(int i=0 ; i<26 ; i++)
  {
      cin>>p;
      cout<<char(p+96);
  }*/


  /// problem C
 /* int n,p,q,rooms=0;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      cin>>p>>q;

      if(p<=q-2)
      {
          rooms++;
      }
  }
  cout<<rooms;*/

  /// problem D

 /* int n,x=0,f=0;
  char c;
  string s;
  cin>>n;
  while(n--)
  {
      f=0;
    for(int i=0 ; i<3 ; i++)
    {
        cin>>c;
        if(c=='+')
            f=1;
        else if(c=='-')
           f=-1;
    }
    x+=f;

     /* cin>>s;
      if(s=="X++" || s=="++X")
      {
       x++;
      }
      else
      {
          x--;
      }*/
 /* }
  cout<<x;*/

  /// problem E
/*
  int n,p,v,t,num=0;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      cin>>p>>v>>t;
      if(p+v+t>=2)
        num++;


  }
  cout<<num;*/

  /// problem F
 /* int a,b,years=0;
  cin>>a>>b;
  while(a<=b)
  {
      a*=3;
      b*=2;
      years++;
  }
  cout<<years;*/


  /// problem G
 /* int n,k;
  cin>>n>>k;
  while(k--)
  {
      if(n%10==0)
      {
          n/=10;
      }
      else
      {
          n--;
      }

  }
  cout<<n;*/

  /// problem H
 /* int x,res=0;
  for(int i=0 ; i<5 ; i++)
  {
      for(int j=0  ; j<5 ;j++)
      {
          cin>>x;
          if(x==1)
          {
             if(j>2)
                res+=j-2;
              else
                res+=2-j;

            if(i>2)
             res+=i-2;
            else
                 res+=2-i;




          }



      }
  }
  cout<<res;*/

  /// problem I
  /*int n,i=1,sum=0,levels=0;
  cin>>n;
  while(n>=0)
  {
      sum+=i;
      levels++;
      n-=sum;
      i++;
  }
  levels--;
  cout<<levels;*/

  /// problem J
 /* int n,s,four=0,three=0,two=0,one=0;
  cin>>n;
   for(int i=0 ; i<n ; i++)
   {
       cin>>s;
       if(s==4)
        four++;
       else if(s==3)
        three++;
       else if(s==2)
        two++;
       else
        one++;
   }
   int cars=four;
   cars+=three;
   if(one<three)
   {
       one=0;
   }
   else
   {
       one-=three;
   }

   cars+=two/2;
   two=two%2;

   if(one<=2)
   {
       if(one>0 || two >0)
       {
           cars++;
       }
   }
   else
   {
       if(two==1)
       {
           cars++;
           one-=2;
       }

       cars+=one/4;
       if(one%4!=0)
       {
           cars++;
       }
   }
   cout<<cars;*/


   /// problem K
   int n,x,digit,flag;
   cin>>n;

   for(int i=1 ; i<=n ; i++)
   {
       if(n%i==0)
       {
       x=i;

   while(x!=0)
   {
       digit=x%10;
       if(digit ==4 || digit==7)
       {
           flag=1;
       }
       else
       {
           flag=0;
           break;
       }
       x/=10;
   }
   if(flag==1)
   {
       cout<<"YES";
       break;
   }
   else
   {
      continue;
   }

       }
   }

   if(flag==0)
     cout<<"NO";















return 0;
    }


