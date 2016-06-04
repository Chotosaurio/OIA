#include <fstream>
using namespace std;

int  relacion[2000][2000], vecinos, a, b, ene1, ene2;

ifstream entra;
ofstream sale;

int carga_matriz(int lazos){
     int  amistad=0;
     for (int i=0; i<lazos; i++){
         entra>>a>>b>>amistad;
         relacion[a][b]= amistad;
         relacion[b][a]= amistad;
     }
    
}

int busca_matriz(int e1[],int e2[]){
    for(int i=1; i<=vecinos; i++){
             //encontro
             for(int j=1; j<=vecinos; j++){
                      if (j==ene1)
                         e1[i]=relacion[j][i];
                      if(j==ene2)
                         e2[i]=relacion[j][i];
                      if(j!=ene1 and j!=ene2 or i!=ene1 and i!=ene2){
                         //que vuelva
                         for(int k=1; k<=vecinos; k++){
                             if(k==ene1 and relacion[j][a]<relacion[k][a])
                                e1[j]=relacion[j][k];
                             if(k==ene2 and relacion[j][b]<relacion[k][b])
                                e2[j]=relacion[j][k];
                             }
                      }
             }
    }
}
int main(){
    int  lazos=0, amigos1=0, amigos2=0;
    entra.open("vecinosE.in");
    sale.open("vecinosE.out");
    for (int i=0; i<lazos; i++){
    	for (int j=0; j<lazos; j++)
    	relacion[j][i]=0;
 }
    entra>>vecinos>>lazos>>ene1>>ene2;
    carga_matriz(lazos);
    int e1[lazos], e2[lazos],relacion[lazos][lazos];
	busca_matriz(e1,e2);
	e1[ene2]=0;
	e2[ene1]=0;
    for(int i=1; i<=vecinos; i++){
            if(e1[i]<e2[i])
            amigos1++;
            if(e2[i]<e1[i])
            amigos2++;
    //para ver el proceso
       sale<<e1[i]<<" "<<e2[i]<<endl;
    }
    sale<<amigos1<<" "<<amigos2;
    entra.close();
    sale.close();
    return 0;
}
    
