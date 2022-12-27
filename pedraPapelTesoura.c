#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio(){
	int x;
	srand(time(NULL));
	x = rand() % 3;
	return x;
}

int main(){
  char jogo[3][20]={"Pedra","Papel","Tesoura"};
  int e,x,op1;
  int a,b,c,y;
  a=0;
  b=0;
  printf("JOGO DO PEDRA, PAPEL, TESOURA\n\n");
  do{
  	for(y=0;y<3;y++){
  		printf("[%d] %s\n",y,jogo[y]);
	}
	printf("[9] Sair");
    printf("\n\nQual sua escolha? ");
    scanf("%d",&e);
    fflush(stdin);
    if(e==0){
      printf("\nVOCE = %s",jogo[0]);
      x=aleatorio();
	  if(x==0){
	    printf("\nBOT  = %s",jogo[0]);
	    printf("\n\nEMPATE!");
	  }
	  else if(x==1){
	    printf("\nBOT  = %s",jogo[1]);
	    printf("\n\nVOCE PERDEU!");
	    b++;
	  }
	  else if(x==2){
	    printf("\nBOT  = %s",jogo[2]);
	    printf("\n\nVOCE GANHOU!");
	    a++;
  	  }
    }
    else if(e==1){
      printf("\nVOCE = %s",jogo[1]);
      x=aleatorio();
	  if(x==0){
	    printf("\nBOT  = %s",jogo[0]);
	    printf("\n\nVOCE GANHOU!");
	    a++;
	  }
	  else if(x==1){
	    printf("\nBOT  = %s",jogo[1]);
	    printf("\n\nEMPATE!");
	  }
	  else if(x==2){
	    printf("\nBOT  = %s",jogo[2]);
	    printf("\n\nVOCE PERDEU!");
	    b++;
	  }
    }
    else if(e==2){
      printf("\nVOCE = %s",jogo[2]);
      x=aleatorio();
	  if(x==0){
	    printf("\nBOT  = %s",jogo[0]);
	    printf("\n\nVOCE PERDEU!");
	    b++;
	  }
	  else if(x==1){
	    printf("\nBOT  = %s",jogo[1]);
	    printf("\n\nVOCE GANHOU!");
	    a++;
	  }
	  else if(x==2){
	    printf("\nBOT  = %s",jogo[2]);
	    printf("\n\nEMPATE!");
	  }
    }
    else if(e==9){
      printf("\nVolte sempre!");
      return 0;
    }
    else{
      printf("\nDigite uma opcao valida");
    }
  printf("\n\nVOCE - %d ponto(s) | BOT - %d ponto(s)",a,b);
  printf("\n\nDeseja jogar novamente? [1] Sim [Qualquer tecla] Nao -> ");
  scanf("%d",&op1);
  fflush(stdin);
  system("cls");
  }while(op1==1);
}
