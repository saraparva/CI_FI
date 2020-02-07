#include <iostream>
using namespace std;
int main(){
    int num,div,suma,N;
    cout<<"Escribe un numero: ";
    cin>>num;
    while (num!=0){
        div=1;
        suma=0;
        N=num/2;
        while (div<=N){
            if ((num%div)==0){
                suma+=div;
                div++;
            }
            else {
                div++;
            }
        }
        if (suma==num){
            cout<<num<<" es un numero perfecto"<<endl;
        }
        else{
            cout<<num<<" no es un numero perfecto"<<endl;
        }
        cout<<"Escribe otro numero: ";
        cin>>num;
    }
    cout<<"END"<<endl;
}
