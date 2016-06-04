#include<list>
#include<iostream>
using namespace std;

int main(){
	list<int>Lista;
	list<int>salida
	int numerito,num, a=0;
	string comando;
	cout<<"ingresa un numero"<<endl;
	cin>>numerito;
	for(int i=0;i<numerito; i++){
		cin>>comando;
		if(comando=="push"){
			cin>>num;
			Lista.push_back(num);
		}if(comando=="pop"){
			salida.push_back(Lista.back());
			Lista.pop_back();
			a++;
		}}
		for(int i=0;i<a;i++){
			cout<<salida.back()<<endl;
			salida.pop_back();
		}
	return 0;
}
