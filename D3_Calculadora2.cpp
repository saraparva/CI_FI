#include <iostream>
using namespace std;
int main(){
    int a,b;
    float resultado;
    char signo;
    string continuar="si", real="si";
    while (continuar=="si"){
        cout<<"Escribe una operacion: ";
        cin>>a>>signo>>b;
        cout<<"Quieres que sea una operacion real? (si/no)";
        cin>>real;
        if (real=="no"){
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
                }}}}}
        else {
             if (signo=='+'){
                    resultado=float(a)+b;}
                else {if (signo=='-'){
                    resultado=float(a)-b;}
                    else {if (signo=='*'){
                        resultado=float(a)*b;}
                        else {if (signo=='/'){
                            resultado=float(a)/b;}
                }}}}
        cout<<"El resultado de tu operacion es: "<<a<<signo<<b<<'='<<resultado<<endl;
        cout<<"Quieres hacer otra operacion? (si/no)";
        cin>>continuar;
    }
}
