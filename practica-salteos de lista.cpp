#include<list>
#include<iostream>
using namespace std;

int main(){
    int calumnos,salteos;
    list<int>alumnos;
    cout<<"cuantos alumnos hay?"<<endl;
    cin>>calumnos;
    cout<<"cada cuantos alumnos salteo?"<<endl;
    cin>>salteos;
    list<int>:: iterator it;
    list<int>:: iterator ax;
 
    for(int i=1; i<=calumnos;i++){
            alumnos.push_front(i);
            }
            
    it=alumnos.end();
    it--; 
    while (alumnos.size()>0) {
            cout<<*it<<" ";
            ax=it;
            ax--;
            alumnos.erase(it);
            it=ax; 
            for(int j=0; j<salteos;j++){
               if(it==alumnos.end()){
                 it--;                     
              }
              it--;
              if(it==alumnos.end()){
                 it--;                     
              }
              }
           }             
    system("pause");
    return 0;
}
            
