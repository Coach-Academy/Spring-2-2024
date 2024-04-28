#include <bits/stdc++.h>

using namespace std;


int main()
{
 /// Problem Alloy

 /*int A,B;
 cin>>A>>B;
 if(A>0 && B==0)
 {
     cout<<"Gold";
 }
 else if(A==0 && B>0)
 {
     cout<<"Silver";
 }
 else
    cout<<"Alloy";*/


    /// Problem Theatre Square
    /*int n,m,a;
    cin>>n>>m>>a;

    long long length=(n+a-1)/a;
    long long wid=(m+a-1)/a;

    cout<<length*wid;*/


   /// problem Palindromic Number
   /*int n;
   cin>>n;
   if(n%10==n/100)
   {
       cout<<"Yes";
   }
   else
   {
       cout<<"No";
   }*/

   /// problem G - Day of Takahashi
  /* int a,b,res;
   cin>>a>>b;
   res=a-1;

   if(a<=b)
   {
       res++;
   }
   cout<<res;*/

   /// problem H - 500 Yen Coins

   /*int k,x;
   cin>>k>>x;
   (k*500>=x)?cout<<"Yes" : cout<<"No";*/

   /// problem I - Conditional Statements

  /* int n;
   cin>>n;

   switch(n){
   case 1:
       cout<<"one";
       break;
   case 2:
       cout<<"two";
       break;
    case 3:
       cout<<"three";
       break;
    case 4:
       cout<<"four";
       break;
    case 5:
       cout<<"five";
       break;
    case 6:
       cout<<"six";
       break;
    case 7:
       cout<<"seven";
       break;
    case 8:
       cout<<"eight";
       break;
   case 9:
       cout<<"nine";
       break;
   default:
       cout<<"Greater than 9";

   }*/

   /// problem J - Very Very Primitive Game

  /* int a,b,c;
   cin>>a>>b>>c;

   if(a>b)
   {
       cout<<"Takahashi";
   }
   else if(b>a)
   {
       cout<<"Aoki";
   }
   else
   {
       if(c==0)
       {
           cout<<"Aoki";
       }
       else
       {
           cout<<"Takahashi";
       }
   }
 */

 /// problem K - Even Odds

 /*1 2 3 4 5 6 7 8 9 10
 1 3 5 7 9 2 4 6 8 10

 1 3 5 7 9 2 4 6 8
 (k-mid)*2
 k*2-1*/
/*
 long long n,k;
 cin>>n>>k;
 long long mid=(n+1)/2;
 if(k>mid)
 {
      cout<<(k-mid)*2;
 }
 else
 {
     cout<<k*2-1;
 }*/

 /// problem L - AtCoder Quiz 2
 /*int x;
 cin>>x;

 if(x>=90)
    cout<<"expert";
 else if(x>=70)
    cout<<90-x;
 else if(x>=40)
    cout<<70-x;
 else
    cout<<40-x;*/


/// problem M - Vanishing Pitch

   /* int v,t,s,d;
    cin>>v>>t>>s>>d;
    int dt=v*t;
    int ds=v*s;
    if(d>=dt && d<=ds)
        cout<<"No";
    else
        cout<<"Yes";*/

/// problem N - Rainy Season

  char s1,s2,s3;
  cin>>s1>>s2>>s3;
  if(s1=='R' && s2=='R' && s3=='R')
    cout<<3;
  else if(s1=='S' && s2=='S' && s3=='S')
    cout<<0;
  else if((s1=='R' && s2=='R' && s3=='S') ||(s1=='S' && s2=='R' && s3=='R'))
    cout<<2;
  else
    cout<<1;









return 0;



    }
