#include <vector>
#include<iostream>
#include <algorithm>

using namespace std;


int coso=0;//esto solo para saber cuantos enojados hay
void ifinutil(int aber){
	if(aber==0){
		coso++;
	}
}
//modificar esto //hacer q en ves de contar con cuantos esta enojados, que los guarde, q guarde el menor
void enojando(unsigned int ahora, unsigned int star,vector<vector<int>> &arr){
	for(unsigned int i=0;i<ahora;i++){//probamos todas las opciones con el espacio I
	//cout<<" "<<arr[i][0]<<" "<<arr[ahora][0]<<endl;
	if(arr[ahora][0]<arr[i][0]){
			ifinutil(arr[ahora][3]);
			arr[ahora][3]=ahora-i;
			break;
			//cout<<"el "<<arr[i][0]<<" se enoja con "<<arr[ahora][0]<<" valor de enojo "<<arr[i][3]<<endl;
		}else if(arr[i][0]==arr[ahora][0] and arr[ahora][1]<arr[i][1]){
				ifinutil(arr[ahora][3]);
				arr[ahora][3]=ahora-i;
				break;
		}else if(arr[i][1]==arr[ahora][1] and arr[ahora][2]<arr[i][2]){
				ifinutil(arr[ahora][3]);
				arr[ahora][3]=ahora-i;
				break;
			}
		}
	}

struct Fecha
{
    int dia, mes,anno;
};
/*
struct Fecha2{
	Fecha valores;
	int enojados;
}*/
int fila(vector<Fecha> orden, vector<int> &enojados)
{
	vector<vector<int>>aber(orden.size(),vector<int>(4));
	for(unsigned int i=0;i<orden.size();i++){//el espacio 0 es el que esta frente a la caja, el espacio size es el que esta ultimo y tiene % de estar enojado con cada uno
		aber[i][0]=orden[i].anno;
		aber[i][1]=orden[i].mes;
		aber[i][2]=orden[i].dia;
		aber[i][3]=0;
	}
	for(unsigned int i=0;i<orden.size();i++){
		enojando(i,orden.size(),aber);
	}//tecnicamente aca ya tenemos todos los enojados, tenemos que encontrar los mas enojados ahora
	//cout<<coso;
	vector<vector<int>> indi(coso,vector<int>(2));
	unsigned int cont=0;
	for(unsigned int i=0;i<orden.size();i++){
		if(aber[i][3]!=0){
			indi[cont][0]=aber[i][3];
			indi[cont][1]=i;
			cont++;
		}
	}
	sort(indi.begin(),indi.end());//si ordeno queda ordenado de una forma que no le gusta recibir al juez asi que tengo q hacer cositas
	
	for( int i=0;i<coso;i++){
		enojados.push_back(indi[i][1]+1);
	}
    return indi[0][0];
}
