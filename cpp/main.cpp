#include <iostream>
#include <search.h>

using namespace std;

int main(){
    //crea el array de prueba
    int size = 50;
    int *array = new int[size];
    for(int x = 0; x < size; x++){
        array[x] = x;
    }
    //test 
    int find = 0;
    int res = interpolationSearch(array, find, 0, size);
    if(res == -1){
        cout<<"No se encontro el elemento\n";
    }else{
        cout<<"El elemento se encuentra en la posicion: "<<res<<"\n";
    }

    return 0;
}