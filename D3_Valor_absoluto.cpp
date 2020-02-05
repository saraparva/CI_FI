#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Escribe un valor entero: ";
    cin>>a;
    if (a<0){
        a=-a;
    }
    cout<<"El valor absoluto de tu numero es: "<<a<<endl;
}
