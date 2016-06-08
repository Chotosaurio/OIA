#include<iostream>
#include<fstream>
using namespace std;
ifstream entra;
ofstream sale;//N y M n= tamaño del tablero m= numero de reinas[con f para filas en su definicion][y con c para columna] 
//salida mostrar en orden las reinas si otra reina las bloquea en cualquier direcion y con cuales(mostrar su nro)
struct posicion{
	int f,c;
};
void reinasvermas(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f+j][c]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(f+j>n)
				break;
		}
}
void reinasvermenos(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f-j][c]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(f-j<1)
				break;
		}
}
void reinashormas(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f][c+j]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(c+j>n)
				break;
		}
}
void reinashormenos(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f][c-j]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(c-j<1)
				break;
		}
}
void reinasdiagdermas(int f, int c, int conflictoint,list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f+j][c+j]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(f+j>n or c+j>n)
				break;
		}
}
void reinasdiadermenos(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f+j][c-j]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(f+j>n or c-j<1)
				break;
		}
}
void reinasdiagizmas(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f-j][c+j]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(f-j<1 or c+j>n)
				break;
		}
}
void reinasdiagizmenos(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	posicion conflictostruc;
	for(int j=1;j<=n;j++){
				conflictostruc.f=f;
				conflictostruc.c=c;
				if (table[f-j][c-j]=3{
					conflictoint++;
					Auxiliardeconflictos.push(conflictostruc)
					break;}
				if(f+j<1 or c+j<1)
				break;
		}
}
void resolucion(int f, int c, int conflictoint, list<posicion>Auxiliardeconflictos){
	reinavermas(f,c,conflictoint,Auxiliardeconflictos)
	reinavermenos(f,c,conflictoint,Auxiliardeconflictos)
	reinahormas(f,c,conflictoint,Auxiliardeconflictos)
	reinahormenos(f,c,conflictoint,Auxiliardeconflictos)
	reinadiagdermas(f,c,conflictoint,Auxiliardeconflictos)
	reinadiagdermenos(f,c,conflictoint,Auxiliardeconflictos)
	reinadiagizmas(f,c,conflictoint,Auxiliardeconflictos)
	reinadiagizmenos(f,c,conflictoint,Auxiliardeconflictos)
	
}
int main(){
	int n, m,f,c;
	entra>>n>>m;
	int table[n][n]=0;
	for(int i=1;i<=m;i++){
		entra>>f>>c;
		table[f][c]=3;
	}
	
}
