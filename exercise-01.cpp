/*
Nama Program: Stack
Nama	: Muhamad Ilham Habib
NPM		: 140810180018
Tahun      : 2019
Deskripsi	:Stack dengan array
*/

#include<iostream>
using namespace std;

const int maxElement = 5;

struct Stack {
	char isi[maxElement];
	int TOP;
};
Stack S;

void createStack (Stack& S){
	S.TOP = -1;
}

void push(Stack& S, char elemenBaru) {
	if (S.TOP == maxElement-1){
		cout<<"Tumpukan sudah penuh "<<endl;
	}
	else{
		S.TOP=S.TOP + 1;
		S.isi[S.TOP] = elemenBaru;
	}
}

void pop(Stack& S){
	if (S.TOP < 0) {
		cout<<"Tumpukan sudah kosong"<<endl;
	}
	else {
		S.TOP=S.TOP - 1;
	}
}

int main(){
	char eBaru;
	char eHapus;
	createStack(S);
	while(S.TOP!=maxElement-1){
		cout<<"Input : ";cin>>eBaru;
		push(S, eBaru);
		for(int i=0; i<=maxElement-1; i++){
			if(S.isi[i] != NULL)
			cout<<"Stack "<<i+1<<" : "<<S.isi[i]<<endl;
		}
		cout<<"Output : "<<S.isi[S.TOP]<<endl;
		cout<<endl;
	}
	pop(S);
	cout<<"Output setelah POP : "<<S.isi[S.TOP]<<endl;
}
