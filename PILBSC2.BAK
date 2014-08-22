#include<conio.h>
#include<stdio.h>
#define max 10

int tope=-1,sel, i;
char A[max], dato;
main()
 {
 clrscr();
 while(i==0)
 {
 printf("Elije una opcion:  1-Pon Elemento 2-Travestir 3-Mostrar 4-Salir ");
 scanf("%d",&sel);
   if(sel==1)
	{
	printf("Escribe el dato a insertar  ");
	scanf("%c",&A[max]);
	if(tope==max)
	  {printf("Desbordamiento");}
	  else
	  {tope=tope+1;
	   A[tope]=dato;
	}
   if(sel==2)
	{
	if(tope==-1)
	{printf("Subdesbordamiento");}
	else
	{dato=A[tope];
        tope=tope-1;
        tope=tope+1;
	A[tope]=dato; }
	}
	}
   if(sel==3)
   {printf("El contenido de la pila es:%c \n",A
   [dato]);}
   if(sel==4)
   {break;}
	}
	getch();
   }