/*5. Mostrar los n primeros términos de la sucesión: 1,3,4,7,11....., Xn; n , es ingresado por pantalla.
Autor --> Franklin Hiustong Gutierrez Arizaca*/
#include <iostream>
using namespace std;
int sucesion(int a, int b, int limite){
    int n;
    n=a+b;
    cout<<n<<" ";
   if(n>=limite){
    return 0;
   }
    return sucesion(b,n,limite);
}


int main() {
    int x ;
    cout<<"ingrese una cantidad [mayor a 0] para calcular la sucesion: "; cin>>x;
    cout<<"1 "<<"3 ";
    sucesion(1,3,x);
    return 0;
}