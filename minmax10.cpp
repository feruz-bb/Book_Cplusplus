#include<iostream>
using namespace std;
int main(){
int n, min = INT_MAX, t, p, max = INT_MIN, m;
cout << " n= ";cin >> n;
for(int i=1; i<=n; i++){
  cout << "m " << i << "= ";  cin >> m;
  if(m > max){
    max = m;
    p=i;
  }
  if(m < min){
    min = m;
    t=i;
  }
}
if(p > t){
  cout << "min=" << min << endl;
}
else{
  cout << "max=" << max << endl;
}
main();

}
