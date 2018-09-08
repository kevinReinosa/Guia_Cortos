# include <Stdio.h>;
int main(){
int tama,i,j;
//Pedimos la dimension de vector
printf("Ingrese el tamaño del vector\n");
scanf("%d",tama);

int vector[ta];


//llenamos el vector sin repetir 
for (i = 0; i < tama; i++)
{
   int valor;
   printf("\nIngrese el valor ",(i+1),"\n");
	 scanf("%d",valor);
         int con=0;
    	for (j = 0; j < tama ; j++)
	      {     
		if (valor==vector[j])
	     {
	    con++;
    	 }		
	}
        if (con==0) {
    vector[i]=valor;
        con=0;    
    }else{
            printf("\nEl valor ya existe\n");
		i--;
       con=0;
   }
}

//Mostramos el vector normal
printf("\nTu vector actual es :\n");
for (i = 0; i < tama; i++)
{
	printf("%d",vector[i]);
}


// Ordenamos desendentemente el vector

for (i = 0; i < tama-1; i++)
{
	for (j = i+1; j < tama; j++)
	{
		 if (vector[j]>vector[i])
		 {
			 int aux=vector[j];
			 vector[j]=vector[i];
			 vector[i]=aux;
		 }
	}
}
//Mostramos el vector desendentemente
printf("\nEl vector vector descendentemente es :\n");
for (i = 0; i < tama; i++)
{
	printf("%d",vector[i]);
}

    int media=0;
// calculamos la media de los datos del vector
    for (i = 0; i < tama ; i++)
  {
	media=media+vector[i];
 }
// imprimimos la media de los datos del vector

 float r=media/tama;
 printf("\nLa media de los datos del vector es\n");
 printf("%f",r);
 media=0;
//claculmos el numero mayor y menor
  int mayor=vector[0];
  int menor=vector[0];
  for (i = 0; i < tama; i++)
  {
	if (mayor<vector[i])
	  {
		mayor=vector[i];
	}
	if(menor>vector[i]){
		menor=vector[i];
   }	
 }
//Mostramos los numeros mayory menor
 printf("\nEl numero mayor es\n");
 printf("%d",mayor);
printf("\nEl numero menor es\n");
 printf("%d",menor);
return 0;
}

