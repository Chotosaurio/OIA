#include<iostream>
#include<fstream>
using namespace std;
ifstream entra;
ofstream sale;//N y M n= tamaño del tablero m= numero de reinas[con f para filas en su definicion][y con c para columna] 
//salida mostrar en orden las reinas si otra reina las bloquea en cualquier direcion y con cuales(mostrar su nro)
struct posicion{
	int f,c;
};
void reinasvermas(int f, int c, int fmas, int cmasint conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f+(j*fmas)][c+(j*cmas)]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(f+(j*fmas)>n || f+(j*fmas)<1 || c+(j*cmas)>n || c+(c*fmas)<1)
				break;
		}
}

void resolucion(int f, int c, list<posicion>Auxiliardeconflictos){
	reinamover(f,c,1,0,conflictoint,Auxiliardeconflictos)
	reinamover(f,c,-1,0,conflictoint,Auxiliardeconflictos)
	reinamover(f,c,0,1,conflictoint,Auxiliardeconflictos)
	reinamover(f,c,0,-1,conflictoint,Auxiliardeconflictos)
	reinamover(f,c,1,1,conflictoint,Auxiliardeconflictos)
	reinamover(f,c,-1,-1,conflictoint,Auxiliardeconflictos)
	reinamover(f,c,1,-1,conflictoint,Auxiliardeconflictos)
	reinamover(f,c,-1,1,conflictoint,Auxiliardeconflictos)

	
}
int main(){
	int n, m,f,c;
	entra>>n>>m;
	int table[n][n]=0;
	for(int i=1;i<=m;i++){
		entra>>f>>c;
		table[f][c]=3;
	//otro for con la resolucion del ejercicio y l identificacion de cada reina(con su numero de entrada)
	}
	
}
