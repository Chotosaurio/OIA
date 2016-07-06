#include<fstream>
#include<list>
using namespace std;
ifstream entra;
//N y M n= tamaño del tablero m= numero de reinas[con f para filas en su definicion][y con c para columna]
ofstream sale; 
// Mostrar en orden las reinas si otra reina las bloquea en cualquier direcion y con cuales(mostrar su nro)

int main(){
	entra.open("conflictos.in");
	sale.open("conflictos.out");
	int n, m,f,c, confl=0;
	list<int> Auxconf;
	entra>>n>>m;	
	int table[n][n],conf[m][2];
	for(int x=1;x<n;x++){
		for (int i=1;i<n;i++){
			table[x][i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		entra>>f>>c;
		table[f][c]=i;
		conf[i][1]=f;
		conf[i][2]=c;
		}
	for(int i=1;i<=m;i++){// para cada reina
		int a=conf[i][1], b=conf[i][2], x=conf[i][1], y=conf[i][2];
		for(int j=a;j<n;j++){//for para analizar todas las direcciones
			if(table[j][b]!=0 ){
				confl++;
				Auxconf.push_back(table[j][b]);
				break;}}
		for(int j=a;j>=1;j--){
			if (table[j][b]!=0){
				confl++;
				Auxconf.push_back(table[j][b]);
				break;}}
		for(int j=b;j<=n;j++){
			if(table[a][j]){
				confl++;
				Auxconf.push_back(table[a][j]);
				break;}}
		for(int j=b;j<=n;j++){
			if(table[a][j]){
				confl++;
				Auxconf.push_back(table[a][j]);
				break;}}
		while(x<n and y<n){
			x++;
			y++;
			if(table[x][y]!=0){
				confl++;
				Auxconf.push_back(table[x][y]);
				break;}}
		x=conf[i][1], y=conf[i][2];
		while(x<n and y>=1){
			x++;
			y--;
			if(table[x][y]!=0){
				confl++;
				Auxconf.push_back(table[x][y]);
				break;}}
		x=conf[i][1], y=conf[i][2];
		while(x>n and y<n){
			x--;
			y++;
			if(table[x][y]!=0){
				confl++;
				Auxconf.push_back(table[x][y]);
				break;}}
		x=conf[i][1], y=conf[i][2];
		while(x>n and y>n){
			x--;
			y--;
			if(table[x][y]!=0){
				confl++;
				Auxconf.push_back(table[x][y]);
				break;}}		
	}
	return 0;
}
