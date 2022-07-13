
typedef struct{
    int tope;
    int lista[100];
}Pila;

//declaración de funciones para trabajar con la estructura
Pila crearPila();
int S_isEmpty(Pila);
void push(Pila*,int);
int pop(Pila*);
int top(Pila);


Pila crearPila(){
	Pila p;
	p.tope=0;
	return p;
}
int S_isEmpty(Pila p){
	if(p.tope==0)
		return 1;
	return 0;
}
void push(Pila *p,int x){
	p->lista[p->tope]=x;
	p->tope++;
}

int pop(Pila *p){
	if(S_isEmpty(*p)==1){
		printf("La pila est%c vac%ca \n",160,161);
		return -1;
	}
	else{
		int aux = p->lista[p->tope-1];
		p->tope--;
		return aux;
	}
}
int top(Pila p){
	if(S_isEmpty(p)==1){
		printf("La pila ya est%c vac%ia. \n",160,161);
		return -1;
	}
	else{
		return p.lista[p.tope-1];
	}
}

