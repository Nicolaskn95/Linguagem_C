#include <stdio.h>
#include <string.h>

void Cripto (char *texto1,char *texto2);

int main()
{
char texto1[9], texto2[9], texto3[9] ;
printf( "Informe um texto de ate 8 caracteres:\n" ) ;
scanf( "%[^\n]", texto1 ) ;
Cripto( texto1, texto2 ) ;
Cripto( texto2, texto3 ) ;
printf( "O texto criptografado eh: \n%s\n e descriptografado eh: \n%s\n", texto2, texto3 ) ;
return 0 ;
}

void Cripto ( char *texto1, char *texto2)
{
    char *wordDesCrypto=   {"ABCDEFGHIJKLMNOPQRSTUVXZ"};
    char *wordCrypto   =   {"@#$%&*+/!'7892ºª^~tinalu"};//NiCoLas
    int i = 0, x = 0;

    strcpy(texto2, " ");

    for(i = 0; i < strlen(texto1); i++)
    {
        for(x = 0; x < strlen(wordDesCrypto); x++)
        {
            if(*(wordDesCrypto + x) == *(texto1 + i))
            {
                *(texto2 + i) = *(wordCrypto + x);
                printf("!%c!", *(texto2 + i));
                break;
            }
            else if(*(wordCrypto + x) == *(texto1 + i))
            {
                *(texto2 + i) = *(wordDesCrypto + x);
                printf("!%c!", *(texto2 + i));
                break;
            }
            else
            {
                *(texto2 + i) = *(texto1 + i);
            }
        }
    }
        *(texto2 + strlen(texto1)) = '\0';
}


