#include <stdio.h>
#define p printf
#define s scanf
main(){
	int variableA=0,variableB;
	p("Ingresa el valor final");
	s("%d",&variableB);
	if(&variableB<=8)
	{
		for(cont=0;cont<10;cont++)
		{
			if(variableA<=variableB)
			{
				for(cont=0;cont<=10;cont++)
				p("\nEjecucion numero=,%d",cont+1);
			}
		}
			
	}
	p("\nTermina programa");
	return 0;
}
