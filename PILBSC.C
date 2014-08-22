#include<conio.h>
#include<stdio.h>
#define max 5

int pila[max], tope=-1, dato, sel, i;

main()
 {
 clrscr();
 while(i==0)
 {
 printf("Elije una opcion:  1-Pon Elemento 2-Quita Elemento 3.-Salir ");
 scanf("%d",&sel);
   if(sel==1)
	{
	printf("Escribe el dato a insertar  ");
	scanf("%d",&dato);
	if(tope==max)
	  {printf("Desbordamiento\n");}
	  else
	  {tope=tope+1;
	   pila[tope]=dato;
	}}
   if(sel==2)
	{
	if(tope==-1)
	{printf("Subdesbordamiento\n");}
	else
	{dato=pila[tope];
	tope=tope-1;}

	}
   if(sel==3)
      {break;}
	}
	getch();
   }