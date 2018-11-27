#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char question[10][100],option1[4][100],option2[4][100],option3[4][100],option4[4][100],option5[4][100],option6[4][100],option7[4][100],option8[4][100],option9[4][100],option10[4][100];
int score =0;

void prepared(){
  char question[3];
 int prepared = 0;

 printf("\n\n------------------------------\n\n");
  printf("BEM VINDO AO QUIZ DESENVOLVEDOR");
  printf("\n\n------------------------------\n\n");
  

 do{
    printf("\nEsta preparado??\n");
   printf("\nSIM ou Nao?\n");
    scanf("%s",question);
    if(strcmp(question, "sim")) {
      printf("ok, iremos esperar!\n");
    }else{
     printf("\n--------- Ok, vamos comecar!! ---------\n\n");
       prepared = 1;
       system("cls");
    }
  }while(prepared != 1);

}
void questions(){
 int i,n;
 for(i=0;i<10;i++){
   if(i == 0){
     strcpy(question[i],"\n1 -Qual a principal função do desenvolvedor front-end?\n");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option1[n], "A- fazer a regra de negócio.\n");
         if(n == 1)
          strcpy(option1[n], "B - dar vida a interface\n");
         if(n == 2)
          strcpy(option1[n], "C - cuidar para agradar o usuário\n");
         if(n == 3)
          strcpy(option1[n], "D - desenvolver no DB\n");   
       }
       
   }
   if(i == 1){
    strcpy(question[i], "\n2 - Qual a principal função do desenvolvedor back-end?\n");  
        for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option2[n], "A- Fazer o front-end da aplicação.\n");
         if(n == 1)
          strcpy(option2[n], "B- Ver os requisitos da aplicação.\n");
         if(n == 2)
          strcpy(option2[n], "C- Fazer fluxogramas.\n");
         if(n == 3)
          strcpy(option2[n], "D- Cuidar da Regra de negócio da aplicação.\n");   
       } 
     }
   if(i == 2){
    strcpy(question[i], "\n3- O que é o DevOps?\n");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option3[n], "A- É o cara que sabe um pouco de tudo ou seja faz com que a entrega contínua aconteça\n");
         if(n == 1)
          strcpy(option3[n], "B- É responsável pela entrega contínua.\n");
         if(n == 2)
          strcpy(option3[n], "C- Faz as query no banco e entrega com o front.\n");
         if(n == 3)
          strcpy(option3[n], "D- Faz as requisições http.");   
       }
     }    
   if(i == 3){
    strcpy(question[i], "\n4- Qual a principal função do desenvolvedor full-stack?\n");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option4[n], "A- Fazer a entrega contínua.\n");
         if(n == 1)
          strcpy(option4[n], "B-Fazer o back- end e o front-end.\n");
         if(n == 2)
          strcpy(option4[n], "C-Fazer as query.\n");
         if(n == 3)
          strcpy(option4[n], "D- E o analista de requisitos.\n");   
       } 
     }    
   if(i == 4){
    strcpy(question[i], "\nQual das carreiras podem fazer a inteface do usuario?");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option5[n], "A- front-end");
         if(n == 1)
          strcpy(option5[n], "B-DevOps");
         if(n == 2)
          strcpy(option5[n], "C-Back-end");
         if(n == 3)
          strcpy(option5[n], "D-Todos exceto o Back-end");   
       }
     }
   if(i == 5){
    strcpy(question[i], "\n6-  Como se é implementado a cultura DevOps?");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option6[n], "A-Por meio de uma ameaça");
         if(n == 1)
          strcpy(option6[n], "B- E por meio de cultura da empresa");
         if(n == 2)
          strcpy(option6[n], "C- O desenvolvedor nao sabe que tem devops isso so acontece");
         if(n == 3)
          strcpy(option6[n], "D- Os desenvolvedores usam ferramentas e nem sabem oque e isso");   
       }
     } 
   if(i == 6){
    strcpy(question[i], "\n7- O front-end usa html para programar?");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option7[n], "A- Sim , apenas html");
         if(n == 1)
          strcpy(option7[n], "B- html, nao e linguagem de programacao");
         if(n == 2)
          strcpy(option7[n], "C- Nao ele usa java-script e css tambem");
         if(n == 3)
          strcpy(option7[n], "D- O front-end nao programa");   
       }
     } 
   if(i == 7){
    strcpy(question[i], "\n8-Quais as principais linguagem de programacao back-end?");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option8[n], "A- PHP");
         if(n == 1)
          strcpy(option8[n], "B- Node");
         if(n == 2)
          strcpy(option8[n], "C-Python");
         if(n == 3)
          strcpy(option8[n], "D- Ruby");   
       }
     } 
   if(i == 8){
    strcpy(question[i], "\n9- O que um stack?");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option9[n], "A- Uma linguagem de programacao");
         if(n == 1)
          strcpy(option9[n], "B- Um apelido do java");
         if(n == 2)
          strcpy(option9[n], "C- Um conjuntos de tecnologias");
         if(n == 3)
          strcpy(option9[n], "D- Um software");   
       }
     } 
   if(i == 9){
    strcpy(question[i], "\n10- Um bom desenvolver citado na pesquisa deve ter oque para ser considerado um bom profissional?");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option10[n], "A- Saber fazer cafe");
         if(n == 1)
          strcpy(option10[n], "B- Dominar a linguagem na qual trabalha");
         if(n == 2)
          strcpy(option10[n], "C- Saber de tudo um pouco");
         if(n == 3)
          strcpy(option10[n], "D- So saber algoritimos");   
       }
     } 
   if(i == 10){
    strcpy(question[i], "\n11- Um desenvolvedor front-end pode fazer o trabalho do back-end?");
       for(n=0;n<5;n++){
         if(n == 0)
          strcpy(option5[n], "A- sim");
         if(n == 1)
          strcpy(option5[n], "B- nao");
         if(n == 2)
          strcpy(option5[n], "C-nao sei");
         if(n == 3)
          strcpy(option5[n], "Nenhum das alternativas");   
       }
     }      

 }
}

int menu(){
	int opcao;
	printf("O que deseja fazer agora???\n\n");
	printf("1 - Retornar ao menu inicial\n");
	printf("2 - sair\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			return 0;
			system("cls");
			break;
		case 2:
			return 1;
			system("cls");
			break;
		default:
			system("cls");
			printf("Invalid instruction, leaving the game !!");
			return 1;
	}
	system("cls");
}
void answers(char answer[1],char choice[1]){
 answer[1] = ' ';
 printf("Escolha sua alternativa\n");
 scanf("%s",answer);
 if(!strcmp(answer, choice)){
   printf("\n\nAcertou !!!\n");
   score += 10;
   
 }
 system("cls");
}

int game(){
 int i,n,o;
 char answer[1],choice[1];
 o =0;
 do{
 	i = rand() % 10;
  	printf("\n%s",question[i]);
  	if(i == 0){
		for(n=0;n<5;n++){
	       printf("\n%s",option1[n]);
	   }
	    answers(&answer[1], "b");
	    }
  	if(i == 1){
		for(n=0;n<5;n++){
	       printf("\n%s",option2[n]);
	    }
	    answers(&answer[1], "d");
	  }
  	if(i == 2){
		for(n=0;n<5;n++){
	       printf("\n%s",option3[n]);
	    
	    }
	    answers(&answer[1], "b");
	  }
  	if(i == 3){
		for(n=0;n<5;n++){
	       printf("\n%s",option4[n]);
	    }
	  answers(&answer[1], "b");
	  }
  	if(i == 4){
		for(n=0;n<5;n++){
	       printf("\n%s",option5[n]);
	    }
	    answers(&answer[1], "a");
	  }
  	if(i == 5){
		for(n=0;n<5;n++){
	       printf("\n%s",option6[n]);
	    }
	    answers(&answer[1], "b");
	  }
  	if(i == 6){
		for(n=0;n<5;n++){
	       printf("\n%s",option7[n]);
	    }
		answers(&answer[1], "c");
	  }
  	if(i == 7){
		for(n=0;n<5;n++){
	       printf("\n%s",option8[n]);
	    }
	    
	    answers(&answer[1], "c");
	  }
  	if(i == 8){
		for(n=0;n<5;n++){
	       printf("\n%s",option9[n]);
	    }
	    answers(&answer[1], "c");
	  }
  	if(i == 9){
		for(n=0;n<5;n++){
	       printf("\n%s",option10[n]);
	}
	answers(&answer[1], "b");
	  }
	  
	o++;
	}while(o<5);
  	
  	return score;
 }


   /*
   for(i=0;i<4;i++){
   if(i == 0) {
     printf("\n%s\n",question[i]);
     for(n=0;n<5;n++)
       printf("\n%s",option1[n]);
     answers(&answer[1], "a");
   }
   if(i == 1) {
     printf("\n%s\n",question[i]); 
     for(n=0;n<5;n++)
       printf("\n%s",option2[n]);
     answers(&answer[1], "d");
   }
   if(i == 2) {
     printf("\n%s\n",question[i]);
     for(n=0;n<5;n++)
       printf("\n%s",option3[n]);
     answers(&answer[1], "b");
   }
   if(i == 3) {
     printf("\n%s\n",question[i]);
     for(n=0;n<5;n++)
       printf("\n%s",option4[n]);
     answers(&answer[1], "b");
   }            
 }
 */
 


main(){
 int answer, score,option;
 answer = 0;
 
 while(answer != 1){
 	system("cls");
 	printf("Oiiiiieeeeeeeeeee\n");
	printf("1 - Ver Conteudo\n");
	printf("2 - Quiz Time !!\n");
	printf("3 - sair\n");
	scanf("%d",&option);	
 	switch(option){
 		case 1:
 			system("cls");
 			printf("\nFront-End \n O desenvolvedor front-end é responsável por “dar vida” à interface. Trabalha com a parte da aplicação que interage diretamente com o usuário\n Por isso, é importante que esse desenvolvedor também se preocupe com a experiência do usuário.\n");
 			printf("\nBack-End \n Como o nome sugere, o desenvolvedor back-end trabalha na parte de “trás” da aplicação. \nEle é o responsável, em termos gerais, pela implementação da regra de negócio. \nOu seja ele não toca na parte visual da aplicação.\n");
 			printf("\nFull-Stack\n Full stack nada mais é o profissional que sabe um conjunto de tecnologias e não só uma específica como é oq acontece nos dois citados acima, ou seja ele se vira tanto no back-end quanto no front-end.\n");
			printf("\n DevOps\n A cultura DevOps consiste nas seguintes coisas:\n Integração Contínua: fácil transferência de conhecimento e experiências entre as áreas de Desenvolvimento, Operações e Apoio.\nImplantação Contínua: liberação rápida e contínua de novas versões de software ou serviços.\nFeedback contínuo: feedbacks frequentes das equipes envolvidas em todas as fases do ciclo de vida do software ou serviço.\n");
			 
			 answer = menu();
 		break;
		
		case 2:
			system("cls");
			prepared();
	    	questions();
		 	score = game();
  			printf("Voce conseguiu %d pontos\n",score);	
			answer = menu();		
			
		break;
		
		case 3:
			system("cls");
			answer = 1;			
		break;	
		
		default:
			printf("Invalid Instruction");
 		
 			}
 	}
 	printf("Obrigado por jogar");
 	return 0;
 }
 
 


