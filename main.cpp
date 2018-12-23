#include<bits/stdc++.h>

using namespace std;

int main(){
  int n = 0;
  int resultado = 0;
  int resultado2 = 0;

  cin >> n;

  int custo[n];

  for(int i = 0; i < n; i++){
    cin>>custo[i];
  }//FIm for
  resultado = custo[0];
  resultado2 = custo[n-1];
  for(int j = 0;j < n-2; j++){
    if(((custo[j] + custo[j+1]) < (custo[j] + custo[j+2])) && (j+2) != (n-2)){
        resultado += custo[j+1];
        //cout << "custo j: "<< custo[j] << "custo j + 1: " << custo[j+1] << " resultado: "<<resultado<< '\n';
    }//Fim if
    else{
        resultado += custo[j+2];
        //cout << "custo j: "<< custo[j] << " custo j + 2: " << custo[j+2] << " resultado: "<<resultado<< '\n';
        j += 1;
    }//Fim else
  }//Fim for

  for(int k = n-1; k > 2; k--){
    if(((custo[k] + custo[k-1]) < (custo[k] + custo[k-2])) && (k-2) != (2)){
        resultado2 += custo[k-1];
        //cout << "custo k: "<< custo[k] << "custo k - 1: " << custo[k-1] << " resultado: "<<resultado2<< '\n';
    }//Fim if
    else{
        resultado2 += custo[k-2];
        //cout << "custo k: "<< custo[k] << " custo k - 2: " << custo[k-2] << " resultado: "<<resultado2<< '\n';
        k -= 1;
    }//Fim else
  }//Fim for k

  if(resultado < resultado2){
    cout<<resultado<<'\n';
  }//Fim if
  else{
    cout << resultado2<<'\n';
  }
  return 0;
}//Fim main
