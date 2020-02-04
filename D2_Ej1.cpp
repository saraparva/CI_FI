#include <iostream>
using namespace std;
int main(){
    int A,b,aux;
    cout<<"Valor de A--> ";
    cin>>A;
    cout<<"Valor de b--> ";
    cin>>b;
    cout<<"Valor de A= "<<A<<endl<<"Valor de b= "<<b<<endl;
    aux=A;
    A=b;
    b=aux;
    cout<<"Valor de A= "<<A<<endl<<"Valor de b= "<<b<<endl;
}
