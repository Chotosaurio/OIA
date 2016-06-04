#include<fstream>
#include<list>
using namespace std;

ifstream entra;
ofstream sale;
int main(){
	int puntos,tamanio;
	list<int> L,C;
	entra.open("leds.in");
	sale.open("leds.out");
	entra>>puntos;
	char a[puntos];
	for(int i=1;i<=puntos;i++){
		entra>>a[i];
		if(a[i]=='L')
		L.push_back(i);
		if(a[i]=='C')
		C.push_back(i);
	}
	
	if(C.size()>L.size()){
	tamanio=L.size();
	swap (C,L);}
	else{
	tamanio=C.size();}
	sale<<tamanio<<endl;
	for(int i=0; i<tamanio;i++){
		sale<<C.back()<<L.front()<<endl;
		C.pop_back();
		L.pop_front();
	}
	return 0;
}
