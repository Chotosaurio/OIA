#include<queue>
#include<fstream>
#include<iostream>
using namespace std;
//laberinto, en los espacio que hay un "#" no puede pasar, si es "i" es una entrada, si hay un "." no hay nada y "s" salida 
//entrada al final
struct elem{
		int fil,col;
};
ifstream entra;

int main(){
	entra.open("cola.in");
	elem posicion,asd;
	entra>>posicion.fil>>posicion.col;
	char arr[posicion.fil][posicion.col];
	queue<elem>C;
	int filas, columnas;
	entra>>filas>>columnas;
	
	for(int i=0;i<filas*columnas; i++){
		entra>>posicion.fil>>posicion.col;
		if (arr[posicion.fil][posicion.col]=='i'){
			asd.fil=posicion.fil;
			asd.col=posicion.col;
			C.push(asd);}
	}
	while(!C.empty()){
		asd=C.front();
		C.pop();
		if(arr[asd.fil+1][asd.col]=='.'){
			asd.fil+1;
			C.push(asd);
			asd.fil-1;}
			
		if(arr[asd.fil-1][asd.col]=='.'){
			asd.fil-1;
			C.push(asd);
			asd.fil+1;}	
		
		if(arr[asd.fil][asd.col+1]=='.'){
			asd.col+1;
			C.push(asd);
			asd.col-1;}
		
		if(arr[asd.fil][asd.col-1]=='.'){
			asd.col-1;
			C.push(asd);
			asd.col+1;}
		//No se para que puse esto exactamente
		if(arr[asd.fil-1][asd.col] && arr[asd.fil+1][asd.col] && arr[asd.fil][asd.col-1] && arr[asd.fil][asd.col+1]){
		cout<<"encontró";
		break;}
	}
	
	return 0;
}
//entrada
//5 4
//1 1 .
//1 2 .
//1 3 i
//1 4 .
//2 1 .
//2 2 #
//2 3 .
//2 4 .
//3 1 .
//3 2 .
//3 3 s
//3 4 .
//4 1 .
//4 2 . 
//4 3 .
//4 4 .
//5 1 s
//5 2 .
//5 3 .
//5 4 .
