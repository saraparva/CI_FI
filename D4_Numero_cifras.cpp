#include <iostream>
using namespace std;
int main(){
    int num, suma=0, cifra;
    cout<<"Introduce un numero: ";
    cin>>num;
    while (num!=0){
        cifra=num%10;
        suma+=1;
        num/=10;
    }
    cout<<"El numero de cifras es: "<<suma<<endl;
}
