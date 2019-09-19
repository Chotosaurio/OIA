// Sorting.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

bool binarySearch(vector<int>vi,int elemento) {
	int extrIzq=0, extrDer=vi.size()-1;

	while (extrIzq<extrDer)
	{
		int index = ( extrIzq+extrDer) / 2;
		if (vi[index] == elemento) {
			return true;
		}
		else if (vi[index] > elemento)
		{
			extrDer = index-1;
		}
		else if(vi[index] < elemento){
			extrIzq = index+1;
		}
	}
	return false;
}


void quickSort(vector<int>vi,int indexizq,int pivot) {
	int medio= indexizq+(pivot- indexizq) / 2;
	int i = indexizq, j = pivot-1;
	while (i< j) {
		if (vi[i]<=vi[pivot])
		{
			i++;
		}
		if(vi[i]>vi[pivot])
		{
			//aca un while para q aumentar j digamos
			swap(vi[i], vi[j]);
			j--;
		}
	}
	swap(vi[pivot], vi[i+1]);
	if (indexizq - pivot > 1) {
		quickSort(vi, indexizq, medio);
		quickSort(vi, medio, pivot);
	}
}

int main()
{
	//hay algortimos estandarizados, uno de esos es uno en especifico que se llama busqeuda binaria
	vector<int>numeros;
	
	for (auto i = 0; i < 110; i++)
	{
		numeros.push_back(rand()%(i+1));
	}
	quickSort(numeros,0,numeros.size()-1);
	for (auto i : numeros) {
		cout << i<<endl;
	}
	for ( auto i = 0; i < 110; i++)
	{
		binarySearch(numeros, i);
	}
}
