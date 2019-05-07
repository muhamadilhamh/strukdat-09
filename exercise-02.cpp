/*
Nama Program: Stack
Nama	: Muhamad Ilham Habib
NPM		: 140810180018
Tahun      : 2019
Deskripsi	:Stack dengan linklist
*/
#include <iostream>
using namespace std;

struct ElemenStack {
    char info;
    ElemenStack* next;
};
typedef ElemenStack* pointer;
typedef pointer List;

struct Stack {
    List TOP;
};
Stack S;

void createStack(Stack& S){
    S.TOP = NULL;
}

void createElemen(pointer& p){
    p = new ElemenStack;
    cout<<"Masukan huruf: ";cin>>p->info;
    p->next = NULL;
}

void push(Stack& S, pointer pBaru){
    if (S.TOP==NULL) // Stack kosong
        S.TOP=pBaru;
    else { // Stack ada isi
        pBaru->next=S.TOP;
        S.TOP=pBaru;
    }
}

void pop(Stack& S, pointer& pHapus){
    if (S.TOP==NULL){
        cout<<"Stack kosong "<<endl;
        pHapus=NULL;
    }
    else if (S.TOP->next==NULL){
        pHapus=S.TOP;
        S.TOP=NULL;
    }
    else {
        pHapus=S.TOP;
        S.TOP=S.TOP->next;
        pHapus->next=NULL;
    }
}

int main(){
    pointer p,h;
    int n;
    createStack(S);
    cout<<"Banyak Huruf: ";cin>>n;
    for (int i=0;i<n;i++){
        createElemen(p);
        push(S,p);
    }
    cout<<"\nReverse Angka: \n";
    while(S.TOP!=NULL){
        cout<<S.TOP->info;
        pop(S,h);
    }
    return 0;
}
