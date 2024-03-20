#include<iostream>
using namespace std;
int main(){
int min=INT_MAX, max=INT_MIN, n, a, minindex, maxindex;
cout<<"n="; cin>>n;
for(int i=1;i<=n;i++){
  cout<<"a"<<i<<"="; cin>>a;
  if(a>max){
   max=a; maxindex=i;
  }
   if(a<min){
    min=a; minindex=i;
  }}
  cout<<"max="<<max<<endl;
  cout<<"min="<<min<<"\n";
  if(maxindex>minindex){
  	cout<<"ekstrimal son indeksi =>"<<minindex;
  }
  else{
  		cout<<"ekstrimal son iondeksi =>"<<maxindex;
  }
  }
