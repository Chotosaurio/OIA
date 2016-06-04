#include<list>
#include<iostream>
using namespace std;

int main(){
    list<int>list1 , list2 , list3;
    int a,b,aa,mayor;
    cout<<"cuantos nros queres ingresar en la lista1?"<<endl;
    cin>>a;
    cout<<"ahora ingresalos"<<endl;
    for(int i=0;i<a;i++){
            cin>>aa;
            list1.push_front(aa);
            }
    cout<<"cuantos nros queres ingresar en la lista2?"<<endl;
    cin>>b;
    cout<<"ahora ingresalos"<<endl;
    for(int i=0;i<b;i++){
            cin>>aa;
            list2.push_front(aa);
            }
    if(list1.size()<list2.size())
    mayor=list2.size();
    else
    mayor=list1.size();
    cout<<"ahora la lista mezclada es la siguiente:"<<endl;
    
    for(int i=0; i<mayor;i++){
                       if(list1.size()>0){
                         list3.push_back(list1.back());
                         cout<<list3.back()<<" ";
                         list1.pop_back();}
                       if(list2.size()>0){
                         list3.push_back(list2.back());
                         cout<<list3.back()<<" ";
                         list2.pop_back();}
            }
    system ("pause");
    return 0;
    }
