/*Trabalho de Programação em c - RPG*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis que serão usadas no programa
    char Nome_do_personagem, Guerreiro, Arqueira, Assassino, Maga, Ponei;
    int forca, armadura, destreza, habilidade, cura, furtividade, magia, direcao,classe,i,recebernum,numero,vidaogro = 10,vidajogador = 10;
   
    //seleção do nome do(a) personagem
    printf("Seja bem_vindo(a) escolha o nome do personagem:\n");
    scanf("%s",&Nome_do_personagem);

    //escolha da classe do personagem
    printf("Muito bem agora escolha sua classe:\n");
    printf("\n\t1 - Guerreiro\n\t2 - Arqueira\n\t3- Assassino\n\t4 - Maga\n\t5 - Ponei_de_cura\n");
    scanf("%d",&classe);

   //variaveis auxiliares
    int f,a,d,h,c,fur,m;
    //escolhendo as atribuições de acordo com a classe escolhida
    switch (classe){
      case 1 :
             //aqui estaremos atribuindo cara característica aos personagens
        printf("\n\tEscolha os pontos de forca\n\t");
        scanf("%d", &forca);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((forca>=1)&&(forca<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &forca);
              f = forca;

            }while ((f<1)||(f>5));

            printf("Prossiga");
          }

        printf("\n\tEscolha os pontos de armadura\n\t"); 
        scanf("%d", &armadura);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((armadura>=1)&&(armadura<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &armadura);
              a = armadura;

            }while ((a<1)||(a>5));

            printf("Prossiga");
          }  
        printf("\n\tEscolha os pontos de destreza\n\t"); 
        scanf("%d", &destreza);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((destreza>=1)&&(destreza<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &destreza);
              d = destreza;

            }while ((d<1)||(d>5));

            printf("Prossiga");
          } 
      break;
      
      case 2 :
        //aqui estaremos atribuindo cara característica aos personagens
        printf("\n\tEscolha os pontos de habilidade\n\t");
        scanf("%d", &habilidade);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((habilidade>=1)&&(habilidade<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &habilidade);
              h = habilidade;

            }while ((h<1)||(h>5));

            printf("Prossiga");
          }

        printf("\n\tEscolha os pontos de furtividade\n\t"); 
        scanf("%d", &furtividade);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((furtividade>=1)&&(furtividade<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &furtividade);
              fur = furtividade;

            }while ((fur<1)||(fur>5));

            printf("Prossiga");
          }  
        printf("\n\tEscolha os pontos de destreza\n\t"); 
        scanf("%d", &destreza);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((destreza>=1)&&(destreza<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &destreza);
              d = destreza;

            }while ((d<1)||(d>5));

            printf("Prossiga");
          } 
        
      break;
      case 3 :        //aqui estaremos atribuindo cara característica aos personagens
        printf("\n\tEscolha os pontos de forca\n\t");
        scanf("%d", &habilidade);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((habilidade>=1)&&(habilidade<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &habilidade);
              h = habilidade;

            }while ((h<1)||(h>5));

            printf("Prossiga");
          }

        printf("\n\tEscolha os pontos de destreza\n\t"); 
        scanf("%d", &destreza);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((destreza>=1)&&(destreza<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &destreza);
              d = destreza;

            }while ((d<1)||(d>5));

            printf("Prossiga");
          } 

        printf("\n\tEscolha os pontos de habilidade\n\t"); 
        scanf("%d", &habilidade);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((habilidade>=1)&&(habilidade<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &habilidade);
              h = habilidade;

            }while ((h<1)||(h>5));

            printf("Prossiga");
          }     
    break;
    case 4 :
        //aqui estaremos atribuindo cara característica aos personagens
          printf("\n\tEscolha os pontos de magia\n\t"); 
          scanf("%d", &magia);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((magia>=1)&&(magia<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &magia);
              m = magia;

            }while ((m<1)||(m>5));

            printf("Prossiga");
          }
        printf("\n\tEscolha os pontos de habilidade\n\t"); 
        scanf("%d", &habilidade);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((habilidade>=1)&&(habilidade<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &habilidade);
              h = habilidade;

            }while ((h<1)||(h>5));

            printf("Prossiga");
          }  

        printf("\n\tEscolha os pontos de destreza\n\t"); 
        scanf("%d", &destreza);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((destreza>=1)&&(destreza<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &destreza);
              d = destreza;

            }while ((d<1)||(d>5));

            printf("Prossiga");
          } 
      break;
      case 5 :        //aqui estaremos atribuindo cara característica aos personagens
          printf("\n\tEscolha os pontos de magia\n\t"); 
          scanf("%d", &magia);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((magia>=1)&&(magia<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &magia);
              m = magia;

            }while ((m<1)||(m>5));

            printf("Prossiga");
          }
         printf("\n\tEscolha os pontos de cura\n\t"); 
         scanf("%d", &cura); 
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((cura>=1)&&(cura<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &cura);
              c = cura;

            }while ((c<1)||(c>5));

            printf("Prossiga");
          }  

        printf("\n\tEscolha os pontos de furtividade\n\t"); 
        scanf("%d", &furtividade);
          //aqui iremos verificar  se os pontos irão exceder o valor permitido  
          if((furtividade>=1)&&(furtividade<=5)){ 

            printf("Prossiga");

          }else{

            do{

              printf("\n\tPontos invalidos, escreva novamente\n\t");
              scanf("%d", &furtividade);
              fur = furtividade;

            }while ((fur<1)||(fur>5));

            printf("Prossiga");
          }  
      break;   
    }
    printf("Você está caminhando em uma floresta, e se depara com dois caminhos distintos e\nvocê não sabe o distino final de ambos");
    printf("\n1 - Direita\n2 - Esquerda\n");
    scanf("%i", &direcao);
    
   
    if(direcao==1){
        printf("Você subiu em uma uma grande montanha e nela se deparou com uma sala semelhante a um calabouço. Ao seguir viagem se depara com\n");
        printf("-------------☠CRIATURA MISTICA A FRENTE☠-------------\n");
        printf("\n⚠ HORA DO COMBATE ⚠\n");
        
        do{
            
        printf("Role os dados digitando qualquer número.");
        scanf("%i", &recebernum);
        printf("\n-------------Rolando os dados-------------\n");
       
            for (i = 0; i < 1; i++){
                numero =  rand() % 16;
                printf("Seu numero é %d\n ", numero);
            }
            if(numero%2 == 0){
                printf("⚠Hit no ogro\n");
                vidaogro--;
            
            }else{
                printf("Ops, você errou o hit e tomou dano\n");
                vidajogador --;
                
            }
        }while (vidaogro>0 & vidajogador>0);

        if(vidaogro == 0){
                    printf("\n --------------------\n");
                    printf("|     VOCÊ VENCEU    |\n");
                    printf(" --------------------");
        } 
         
        if(vidajogador == 0){
                    printf("\n --------------------\n");
                    printf("| VOCÊ FOI DERROTADO  |\n");
                    printf("  --------------------");
                }            
    }
  
    else if(direcao==2){
        printf("Você caiu em uma carvena profunda e acabou tomando danos irreversíveis.\n");
                    printf("\n --------------------\n");
                    printf("|      VOCÊ PERDEU     |\n");
                    printf("\n --------------------\n");
        
    }

      return 0;    
   }

