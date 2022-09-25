#include <stdio.h>
#include <conio.h>
    
    int main() {
        
      int dia, mes, ano, a, b, c, d;
          
      
        printf("Digite o dia do nascimento:\n");
        scanf("%i",&dia);
        printf("Digite o mes do nascimento:\n");
        scanf("%i",&mes);
        printf("Digite o ano do nascimento:\n");
        scanf("%i",&ano);
                      
        a=(dia*100+mes)+ano;
        b=(a/100) +(a % 100);
        c=b%5;
        
                       
        if(c==0) 
            printf("Perfil Tímido");
            
        else if(c==1)
            printf("Perfil Sonhador");
            
        else if(c==2)
            printf("Perfil Paquerador");
            
        else if(c==3)
            printf("PERFIL ATRAENTE");
            
        else if (c==4)
            printf("Perfil Irresistível");
        
    return 0;
}