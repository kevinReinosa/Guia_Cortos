#include <stdio.h>

void main() 
{ 
	int columnas,filas; 
	
printf("Tamaño de filas de su matrizA\n"); 
scanf("%d",&filas);

 printf("Tamaño de columnas de su matrizB \n");
  scanf("%d",&columnas); 
  
int matriza[filas][columnas]; 
int matrizb[filas][columnas]; 
int matrizc[filas][columnas]; 

int con,p,s;
//llenando matrizA	
printf("Ingrese la matrizA:\n");
 for(int fil=0; fil< filas; fil++) { 		
	 for(int col=0; col< columnas; col++) 		{ 
printf("Elementos [%d,%d]: ",fil,col);
 scanf("%d",&matriza[fil][col]); }	 
 } 
//llenando matrizB	
printf("Ingrese la matrizB:\n"); 
for(int fil=0; fil< filas; fil++) { 		
	for(int col=0; col< columnas; col++) 		{ 
printf("Elementos [%d,%d]: ",fil,col);
 scanf("%d",&matrizb[fil][col]); 
}	 
} //mostrar matrizA
printf("\n Matriz1:\n"); 	 
for(int fil=0;fil<filas;fil++) 	
 { 
	 for(int  col=0;col<columnas;col++) 	 { 
		 	 printf("%d ",matriza[fil][col]); } 	 
	 
printf("\n"); 	 } 	
//mostrar matrizB
	printf("\n Matriz2:\n"); 	
	 for( int fil=0;fil<filas;fil++) { 
		 	 
for( int col=0;col<columnas;col++) 	 { 
	printf("%d ",matrizb[fil][col]); 
	} 
	
 printf("\n");
  } 
if(columnas==filas) 	{ 
printf("matriz resultante : \n");
 for(int i=0;i<filas;i++) 	 { 

for(int j=0;j<columnas;j++) { 
	matrizc[i][j]=0; 
for(int t=0;t<columnas;t++) { 
matrizc[i][j]=matrizc[i][j]+(matriza[i][t]*matrizb[t][j]); }
 printf("%d ",matrizc[i][j]); 
 } 
 
 printf("\n"); } 	} 
 	else 	{ 

} 
printf("Numeros Primos: \n"); 
//numeros primos
for(int fil=0;fil<filas;fil++) 	{ 	
	 for(int col=0;col<columnas;col++) 	 { 
for(int t=1;t<=matrizc[fil][col];t++){
	 if (matrizc[fil][col]%t==0) { 
		 con=con+1;
		  } 
		  } 
		 if (con==2) { 
			 
			 
s=s+1;
 printf("%d posicion  [%d,%d] ",matrizc[fil][col],fil,col); 
} 
con=0; } 	
} 
printf("\n"); 

int vector[s]; 

for(int fil=0;fil<filas;fil++) { 
for(int col=0;col<columnas;col++) 
	 { for(int t=1;t<=matrizc[fil][col];t++){
		  if (matrizc[fil][col]%t==0) { 
con=con+1; }

 } if (con==2) {
	  vector[p]=matrizc[fil][col]; 
	  
p=p+1; }
 con=0; } 
 	} 
 	int aux;
 	 for (int i = 0; i <s-1; i++) 
{ for(int j=0; j<s-1; j++){ 
	if (vector[j]>vector[j+1]) { 
aux=vector[j]; 
vector[j]=vector[j+1]; 
vector[j+1]=aux; } 
} } 
printf("\n Numeros primos:\n"); 
for (int i = 0; i < s; i++) { 
printf("%d ",vector[i]); 
} 

 }