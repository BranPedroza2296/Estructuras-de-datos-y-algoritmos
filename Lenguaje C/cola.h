typedef struct{
    int primero;
    int ultimo;
    int lista[100];
}Cola;


Cola crearCola();
int QisEmpty(Cola);
void encolar(Cola*,int);
int desencolar(Cola*);
int first(Cola);



Cola crearCola(){
	Cola c;
	c.primero=1;
	c.ultimo=0;
	return c;
}
int QisEmpty(Cola c){
	if(c.primero==c.ultimo+1)
		return 1;
	return 0;
}
void encolar(Cola *c,int x){
	c->lista[c->ultimo]=x;
	c->ultimo+=1;
}
int desencolar(Cola *c){
	if((QisEmpty(*c))==1)
		printf("la cola est%c vac%ca \n",160,161);
	else{
		int aux = c->lista[c->primero-1];
		c->lista[c->primero-1]=NULL;
		c->primero++;
		if(c->primero==c->ultimo+1){

			*c=crearCola();
		}
		return aux;
	}
}
int first(Cola c){
    if((QisEmpty(c))==1)
		printf("la cola est%c vac%ca \n",160,161);

	else{
        return c.lista[c.primero-1];
	}

}


