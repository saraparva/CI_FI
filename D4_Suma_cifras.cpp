#include <iostream>
using namespace std;
int main(){
    int num, suma=0, cifra;
    cout<<"Introduce tu DNI sin letra: ";
    cin>>num;
    while (num!=0){
        cifra=num%10;
        num/=10;
        suma+=cifra;
    }
    cout<<"La suma de las cifras de tu DNI es: "<<suma<<endl;
}
