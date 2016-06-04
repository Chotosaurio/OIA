#include<list>
#include<iostream>
using namespace std;
list<int>lista;

int cargarlista(){
    int n,xd;
    cout<<"cuantos numeros tiene tu lista?"<<endl;
    cin>>xd;
    cout<<"carga la lista"<<endl;
    for(int i=0; i<xd;i++){
    cin>>n;
    lista.push_back(n);};
    }
int mostrarlista( string n ){
    cout<<"lista"<<n<<endl;
//    list<int>lista;
    list<int>:: iterator it=lista.begin();
    for(int i=0; i<lista.size();i++){
    cout<<*it;
    it++;}
}
int invertirlista( string n){
    lista.reverse();
    n=" inversa :";
    }

int main(){
    
    string n=" :";
    cargarlista();
    mostrarlista(n);
    invertirlista(n);
    mostrarlista(n);
system ("pause");
return 0;
}
