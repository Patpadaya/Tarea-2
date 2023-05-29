#include <iostream>
#include <fstream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
}

Nodo *arbol == NULL;

Nodo crear_nodo(int n){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

void insert(Nodo *arbol, int n){
    if (arbol == NULL){
        Nodo *nuevo_nodo = crear_nodo(n);
        arbol = nuevo_nodo;
    }
    else{
        int valor_raiz = arbol->dato
        if (n < valor_raiz){
            insert(arbol->izq, n);
        }
        else{
            insert(arbol->der, n);
        }
    }
}

bool find(Nodo *arbol, int n){
    if (arbol == NULL){
        return false;
    }
    else if(arbol->dato == n){
        return true;
    }
    else if(n < arbol->dato){
        return find(arbol->izq, n);
    }
    else{   
        retur find(arbol->der, n);
    }
}

