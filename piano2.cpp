#include <iostream>
#include <fstream>
using namespace std;
ifstream entra;
ofstream sale;
//no termine de resolver creo
int main (){
    int a,b,d,nro,nrome,nroma;
    char c[2],e;
    entra.open("bemoles.txt");
    sale.open("bemoless.txt");
    entra>>a;
    nrome=999, nroma=0;
    for(b=0; b<a; b++){
        entra>>c;
        e=c[0];
            if (c[0]='A' or c[0]='B'){
            	e+=7;
            	e+=(8*c[1]);
            }if (e<nrome and nroma-e<5){
				nrome=e;
                nrome=c
            }if (nroma<e and e-nrome<5)
                nroma=e;
            if (e<nrome and nroma-e>=5){
                nrome=e;
                nroma=e;
                nrome=c;
                sale<<nrome
            }if(e>nroma and e-nrome>=5){
                nrome=e;
                nroma=e;
                nrome=c;
                sale<<nrome
            }          
        }
    return 0;
}
