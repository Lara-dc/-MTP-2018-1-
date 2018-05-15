//Lara Dias Cabral 11721EAU009

#include <stdio.h>

int main()
{
	int opcao;
	
	printf("Entre com uma das alternativas abaixo: ");
	
	printf("\n1 - Binario para Decimal");
	printf("\n2 - Binario para Hexadecimal");
	printf("\n3 - Hexadecimal para Decimal");
	printf("\n4 - Hexadecimal para Binario");
	printf("\n5 - Decimal para Binario");
	printf("\n6 - Decimal para Hexadecimal");
	printf("\n7 - Octal para Decimal");
	printf("\n8 - Decimal para Octal\n\n");
	
	scanf("%i", &opcao); getchar;
	
	{void BinDec()
		
	char binario[100]
	unsigned int decimal = 0;
	int i = 0, t;
	printf("Digite o binario desejado:\n");
	scanf("%s", &binario);
	char t = strlen( binario );
	while( t-- )
	{
		if( binario[t] == '0' || binario[t] == '1')
		{
				decimal = decimal + pow(2, i++) * (binario[t] - '0');
		}
	}
		
	printf("O Decimal equivalente ao binario eh: %u\n", decimal);
	
    }
    
	switch(opcao)
	{
		case 1:
		BinDec();
		break;
	}
    
	return 0;
}
