#include <iostream>
using namespace std;
int main(){
    int a,b;
    float resultado;
    char signo;
    string sino="si";
    while (sino=="si"){
        cout<<"Escribe dos numeros enteros: ";
        cin>>a>>b;
        cout<<"Que operacion quieres hacer? (+,-,*,/,%,@)";
        cin>>signo;
        if (signo=='+'){
            resultado=a+b;}
        else {if (signo=='-'){
                resultado=a-b;}
            else {if (signo=='*'){
                    resultado=a*b;}
                else {if (signo=='/'){
                        resultado=a/b;}
                    else {if (signo=='%'){
                            resultado=a%b;}
                        else {if(signo=='@'){
                                resultado=float(a)/b;}
                            }}}}}
    cout<<"El resultado es: "<<resultado<<endl;
    cout<<"Quieres continuar? (si/no)";
    cin>>sino;
    }
}
