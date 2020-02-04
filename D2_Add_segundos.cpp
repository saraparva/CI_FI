#include <iostream>
using namespace std;
int main(){
    int h,m,s,x;
    cout<<"Escribe la hora (horas minutos segundos)";
    cin>>h>>m>>s;
    cout<<"Cuantos segundos quieres sumar?";
    cin>>x;
    s=s+x;
    int div,div2;
    div=s/60;
    s=s%60;
    m=m+div;
    div2=m/60;
    m=m%60;
    h=h+div2;
    h=h%24;
    cout<<"La hora resultante es: "<<h<<':'<<m<<':'<<s<<endl;
}
