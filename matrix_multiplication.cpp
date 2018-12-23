#include<iostream>
using namespace std;
int main()
{
int m[3][3],n[3][2],mn[3][2];
cout<<"Enter elements of 1st matrix: "<<endl;;
for(int i=1;i<=3;i++)
{cout<<endl;
for(int j=1;j<=3;j++)
{
cin>>m[i][j];
}}
cout<<"Enter elements of 2nd matrix: "<<endl;;
for(int i=1;i<=3;i++)
{cout<<endl;
for(int j=1;j<=2;j++)
{
cin>>n[i][j];
}}
cout<<"Multiplication of two matrices is...."<<endl;;
for(int i=1;i<=3;i++)
{
for(int j=1;j<=2;j++)
{ int sum=0;
for(int k=1;k<=3;k++)
{
sum+=(m[i][k]*n[k][j]);
}
mn[i][j]=sum;
}}
for(int i=1;i<=3;i++)
{cout<<endl;
for(int j=1;j<=2;j++)
{
cout<<mn[i][j]<<" ";
}}
}
