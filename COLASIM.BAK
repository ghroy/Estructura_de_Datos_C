#include<conio.h>
#include<stdio.h>
#define max 5

int cola[max], frente=-1, final=-1, dato, i, sel;
main()
 {clrscr();
 while(i==0)
 {
 printf("Elija una Opci¢n\n");
 printf("1.-Insertar Elemento  2.-Quitar Elemento 3.-Salir");
 scanf("%d",&sel);
	if(sel==1)
	   {
	   printf("Inserte el dato:  ");
	   scanf("%d",&dato);
	   if(final<max)
	   {final=final+1;
	   cola[final]=dato;
		if(final==0)
		{frente=frente+1;}
		else
		{printf("Desbordamiento");}}}
		if(sel==2)
		{
		 if(frente>-1)
		 {
		 dato=cola[frente];
			if(frente==final)
			{frente=-1;
			final=-1;}
			else
			{frente=frente+1;}
		 }
		else{printf("Subdesbordamiento");}
		}
		if(sel==3)
		  {break;}
		}
		getch();
		}

