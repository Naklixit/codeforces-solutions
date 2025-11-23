#include <iostream>
using namespace std;
int main (){
  int n;
  cin>>n;
  int Mishka = 0;
  int Chrish = 0;
  while(n--){
    int m,c;
    cin>>m>>c;  
    if(m>c){
        Mishka++;
    }
    else if(c>m){
        Chrish++;
    }

  } 
  if(Mishka > Chrish){
    cout<<"Mishka";
  } 
  else if(Chrish > Mishka){
    cout<<"Chris";
  }
  else if(Chrish == Mishka){
    cout<<"Friendship is magic!^^";
  }
}