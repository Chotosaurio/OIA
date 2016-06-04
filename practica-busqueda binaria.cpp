#include<iostream>
using namespace std;

int main(){
    int a,nro;
    cin>>a;
    int arr[a];
        for(int i=1;i<=a;i++){
        cin>>arr[i];
        }
        //ordenamiento de burbuja//
        for(int j=1;j<=a;j++){
            for(int i=1; i<=a;i++){
                    if(arr[i]>arr[i+1]){
                       int temp=arr[i];
                       arr[i]=arr[i+1];
                       arr[i+1]=temp;}}}      
        cin>>nro;
        int LI=arr[1], LS=arr[a], LM=arr[(a/2)];
        do{
			if(LM<nro){
                   LS=LM;}
            if(LM>nro){
                   LI=LM;}
            if (LM==nro ||LS==nro ||LI==nro|| LI>nro || LS<nro){
           break;}
           LM=(LS+LI)/2;
        } while (LM!=nro or LI<nro or LS>nro);
        if (LS==nro or LI==nro or LM==nro){
        cout<<"el numero esta"<<endl;}
        else
        cout<<"el numero no esta"<<endl;
system ("pause");
return 0;
}
