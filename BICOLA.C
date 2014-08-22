#include<conio.h>
#include<stdio.h>
#define max 5

int cola[max], frente, final, dato, i, sel;
main()

 {clrscr();
 while(i==0)
 {
 printf("Elija una Opci¢n\n");
 printf("1.-Insertar Elemento x Final 2.-Quitar Elemento 3.-Salir");
 scanf("%d",&sel);
	if(sel==1)
	   {
	   printf("Inserte el dato:  ");
	   scanf("%d",&dato);
	   if((final==max)&&(frente==-1))
	   {printf("Desbordamiento");}
	   else
	   {if(final==max)
	   {final=1;}
	   else
	   {final=final+1;
	   cola[final]=dato;
	     if(frente==-1)
	      frente=1;}}

	   }
		if(sel==2)
		{
		 if(frente==-1)
		 {printf("subdesbordamiento");}
		 else
		 {
		 dato=cola[frente];
			if(frente==final)
			{frente=0;
			final=0;}
			else
			{frente=1;
			frente=frente+1;}
		}}
		if(sel==3)
		  {break;}
		}
		getch();
		}




