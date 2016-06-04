#include <iostream>
using namespace std;
//no se si resolvi esto
int main(){
    int nro1,nro2,suma1=0,suma2=0;
    cin>>nro1>>nro2;
    for(int i=1;i<nro1/2;i++){
            if(nro1%i==0)
                         suma1+=i;
            if(suma1>nro2)
            break;
            }
    if(suma1<=nro2)
    for(int j=1;j<nro2/2;j++){
            if(nro2%j==0){
                         suma2+=j;
                         }
            if(suma2>nro1)
            break;
    }
    if (suma1==nro2 and suma2==nro1)
    cout<<"Son re wachines"<<endl;
    else
    cout<<"no."<<endl;
    system("pause");
    return 0;
}
            
            
