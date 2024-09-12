#include<iostream>
using namespace std;

int main(){

 string s;
 cin>>s;
 int k;
 cin>>k;

 int n=s.length();
 int count=0;
 int maxi=0;
 int i=0,j=-1;

 while(i<k-1)
 {
    if(s[++j]=='a')count++;

 }
 maxi=count;

 while(j<n-1)
 {
    if(s[i++]=='a')count--;
    if(s[i++]=='a')count++;
    maxi=max(maxi,count);
 }
     cout<<maxi;
     return 0;
     
}