#include <iostream>
using namespace std;
int main(){
    int h,m,s,x;
    cout<<"Escribe la hora (horas minutos segundos)";
    cin>>h>>m>>s;
    cout<<"Cuantos segundos quieres sumar?";
    cin>>x;
    s=s+x;
    int div;
    div=s/60;
    s=s-(div*60);
    m=m+div;
    int div2;
    div2=m/60;
    m=m-(div2*60);
    h=h+div;
    cout<<"La hora resultante es: "<<h<<':'<<m<<':'<<s<<endl;
}
