#include <stdio.h>
#include <locale.h>
#include <string.h>


int pontos,CouE[10]={0,0,0,0,0,0,0,0,0,0};//variavel CouE para ver se as respostas estam erradas ou certas//
char nome;



int opc_scanf(){
	int opc;
	do{
		printf ("\n                                                  Introduza a op��o : ");
		scanf ("%d",&opc);
		if (opc<0 || opc>4){
			printf ("\n                                   		  Op��o n�o existe escolha outra");
		}
	}while (opc<0 || opc>4);
	
	return opc;
}


int opc_scanf_if(){
	int opc;
	do{
		printf ("\n                                                      introduza a op��o-");
		scanf ("%d",&opc);
		if (opc<0 ||opc>2){
			printf ("\n                                                        Essa op��o n�o existe");
		}
	}while(opc<0||opc>2);
	if (opc==1){
		printf ("\n\n                                                    Est� errado era a segunda");
		
	}
	if (opc==2){
		printf ("\n\n                                                      A op��o est� certa!!");
		CouE[2]=1;
		pontos=pontos+100;
	}
}


int opc_if(int opc){
	switch(opc){
		case 3:{
			printf ("\n\n                                                  A op��o est� certa!!");
			pontos=pontos+100;
			CouE[3]=1;
			break;
		}
		default:{
			printf ("\n\n                                                Est� Errada!! Era a terceira");
			break;
		}
	}
}

int pergunta_certas_erradas(){// fun�ao para mostrar quantaas perguntas acertou e quantas errou
	int i,ContC=0,ContE=0;//contC conta as respostas certas,contE conta as respostas erradas//
	system ("cls");
	for (i=0;i<5;i++){
		if (CouE[i]==1){
			ContC++;
		}
		else {
			ContE++;
		}
	}
	if (ContC ==5){
		printf ("\n\n\n                                                Parabens N�o falhaste nenhuma pergunta!");
	}
	if(ContC <2){
		printf ("\n\n\n                                            Parabens acertaste mais de metade das perguntas!");
	}
	printf ("\n                                                       acertou- %d            Errou-%d",ContC,ContE);
}


int main(){ 
	setlocale(LC_ALL,"portuguese");
	int opc, opcMenu,i,contnome=0,V=1,F=1,ContC,ContE;//variavel F e V para comparar as strings contC conta as respostas certas,contE conta as respostas erradas//
	char nome[20]="",apelido[20]="",espaco[2]={" "},correto[3],nomeC[50]={""};
	do{
		for (i=0;i<10;i++){//retirar as respostas certas e erradas
			CouE[i]=0;
		}
		pontos=0;//tirar os pontos que ficaram
		system ("cls");
		printf ("   -------------------------------------------------------------------------------------------------------------------");
		printf ("\n   ||                                                                                                               ||");
		printf ("\n   ||         ----------       -----------------          ---                --------       -----------------       ||");
		printf ("\n   ||         ----------       -----------------         -----               --    --       -----------------       ||");
		printf ("\n   ||         |||                    |||||              --   --              --    --             |||||             ||");
		printf ("\n   ||         ----------             |||||             --     --             --------             |||||             ||");
		printf ("\n   ||         ----------             |||||            -----------            ----                 |||||             ||");
		printf ("\n   ||                |||             |||||           -------------           -- ---               |||||             ||");
		printf ("\n   ||         ----------             |||||          ---         ---          --  ---              |||||             ||");
		printf ("\n   ||         ----------             |||||         ---           ---         --   ---             |||||             ||");
		printf ("\n   ||                                                                                                               ||");
		printf ("\n   ||                                                                                                               ||");
		printf ("\n   ||                                      op��o 1-   Quiz 2� gurerra mundial                                       ||");
		printf ("\n   ||                                      op��o 2-   Quiz sobre o Eixo                                             ||");
		printf ("\n   ||                                      op��o 3-   Quiz sobre os Aliados                                         ||");
		printf ("\n   ||                                      op��o 4-   Sair                                                          ||");
		printf ("\n   ||                                                                                                               ||");
		printf ("\n   ||                                                                                                               ||");
		printf ("\n   ||                                                                                                               ||");
		printf ("\n   ||                                           Introduza a sua op��o-                                              ||");
		printf ("\n                                                        ");
		scanf ("%d",&opcMenu);
		if(contnome==0){
			system ("cls");
			printf ("\n                                                 Introduza o seu nome-");
			printf ("\n                                                      ");
			fflush(stdin);
			gets (nome);
			printf ("\n                                                 Introduza o seu Apelido- ");
			printf ("\n                                                      ");
			fflush(stdin);
			gets (apelido);
			strcat(nomeC,apelido);
			strcat(nomeC,espaco);
			strcat(nomeC,nome);
			contnome++;
		}
		switch(opcMenu){
			case 1:{
				system ("cls");
				printf ("\n\n1-Quando come�ou a 2� guerra mundial ?                                       %s-  %d",nomeC,pontos  );// nome n�o aparece
				printf ("\n                                                 ......(\\_//)");
                printf ("\n                                                 ......( '_')");
                printf ("\n                                                 ....//\"\"\"\"\"\"\"\"\"\"\"\"\\======� ����D");
                printf ("\n                                               //\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\\");
				printf ("\n                                               \\_@_@_@_@_@_@_@_@_@_@_@_//");
				printf ("\n\n                                  1-1939                2-1940                 3-1938");
				printf ("\n                                                       4- 1945");
				opc=opc_scanf();//scanf com do while para n introduzirem uma opcao q n existe//
				
				switch(opc){
					case 1:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;
						CouE[0]=1;
						break;
					}
					case 4:{
						printf ("\n\n                      A op��o est� demasiado errada isso foi quando acabou!! Era a primeira-_-.");
						break;
					}
					default:{
						printf ("\n\n                                             Est� Errada!! Era a primeira");
						break;
					}
				}
				getch();
				system ("cls");
				printf ("\n\n2-Onde Foi a invas�o conhecida como dia D ?                                 %s-  %d",nomeC,pontos);
				printf ("\n\n                                                  ______");
                printf ("\n                               |\\_______________ (_____\\\\______________");
                printf ("\n                                HH======#H###############H#######################");
                printf ("\n                                    ' ~\"\"\"\"\"\"\"\"\"\"\"\"\"\"`##(_))#H\\\"\"\"\"\"Y########");
				printf ("\n                                              ))    \\#H\\       `\"Y###");
				printf ("\n                                                      \\\"      }#H)");
				printf ("\n\n                                1-Mar morto           2- Noroega                3-Pearl Harbor");
				printf ("\n                                                      4-Normandia");
				opc=opc_scanf();
				switch(opc){
					case 4:{
						printf ("\n\n                                                A op��o est� certa!!");
						pontos=pontos+100;
						CouE[1]=1;
						break;
					}
					default:{
						printf ("\n\n                              		       Est� Errada!! Era a quarta");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n3- A 2� guerra mundial foi quando come�aram a usar as bombas nucleares?      %s-  %d",nomeC,pontos);
				printf ("\n                                                      |\\*******/|");
				printf ("\n                                                       \\	/");
				printf ("\n                                                        \\      /");
				printf ("\n                                                         \\====/");
				printf ("\n                                                         |    |");
                printf ("\n                                                         |    |");
                printf ("\n                                                         |    |");
                printf ("\n                                                         |    |");
				printf ("\n                                                         \\    /");
				printf ("\n                                                          \\  /");
				printf ("\n                                                           \\/");
				printf ("\n\n                                  1-N�o                                       2-Sim");
				opc_scanf_if();// funcao com o scanf do while e if para a resposta
				getch();
				system("cls");
				printf ("\n\n4-Quantas pessoas morreram na 2� guerra mundial ?                          %s-  %d",nomeC,pontos);
				printf ("\n\n                                   (aten��o n�meros podem n�o estar corretos)");
				printf ("\n\n                                           	     ////^\\\\\\\\");
                printf ("\n                                             	     | ^   ^ |");
                printf ("\n                                             	    @ (o) (o) @");
                printf ("\n                                             	     |   <   |");
				printf ("\n                                             	     |  ___  |");
				printf ("\n                                             	      \\_____/");
				printf ("\n                                             	    ____|  |____");
				printf ("\n                                             	   /    \\__/   \\");
				printf ("\n                                             	  /              \\");
				printf ("\n                                             	 /\\_/|        |\\_/\\");
				printf ("\n                                             	/ /  |        |  \\ \\");
				printf ("\n                                                (<   |        |   > )");
				printf ("\n                                             	\\ \\  |        |  / /");
				printf ("\n                                             	 \\ \\ |________| / /");
				printf ("\n                                             	  \\ \\|");
				printf ("\n\n                        1-50 milh�es                2-30 milh�es                3-40 milh�es");
				printf ("\n                                                    4-43 milh�es");
				opc =opc_scanf();
				opc_if(opc); // switch para a resposta certa
				getch();
				system("cls");
				printf ("\n\n5-Quantas dessas pessoas eram soladados ?                                        %s-  %d",nomeC,pontos);
				printf ("\n\n                                    (aten��o n�meros podem n�o estar corretos)");
				printf ("\n\n                                                         .---.");
				printf ("\n                                                    ___ /_____\\");
                printf ("\n                                                   /\\.-`( '.' )");
                printf ("\n                                                  / /    \\_-_/_");
                printf ("\n                                                  \\ `-.-\"`\'V\'//-.");
				printf ("\n                                                   `.__,   |// , \\");
				printf ("\n                                                        \\_____/ \\ \\");
				printf ("\n                                                        |__//   |\\_\\");
				printf ("\n                                                       /---|[]==|/ /");
				printf ("\n                                                       \\__/ |  \\/\\/");
				printf ("\n                                                        /_   | Ll_\\|");
				printf ("\n                                                              \\ \\|");
				printf ("\n\n                                    1-20%%               2-50%%                3-40%%");
				printf ("\n                                                        4-60%%");
				opc=opc_scanf();
				switch(opc){ //para a resposta
					case 2:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;
						CouE[4]=1;
						break;
					}
					default:{
						printf ("\n\n                                               Est� Errada!! Era a segunda");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n6-Qual foi a Batalha mais sangrenta da Segunda Guerra Mundial?                  %s-  %d",nomeC,pontos);
				printf ("\n\n                                    (aten��o n�meros podem n�o estar corretos)");
				printf ("\n\n                                                         .---.");
				printf ("\n                                                    ___ /_____\\");
                printf ("\n                                                   /\\.-`( '.' )");
                printf ("\n                                                  / /    \\_-_/_");
                printf ("\n                                                  \\ `-.-\"`\'V\'//-.");
				printf ("\n                                                   `.__,   |// , \\");
				printf ("\n                                                        \\_____/ \\ \\");
				printf ("\n                                                        |__//   |\\_\\");
				printf ("\n                                                       /---|[]==|/ /");
				printf ("\n                                                       \\__/ |  \\/\\/");
				printf ("\n                                                        /_   | Ll_\\|");
				printf ("\n                                                              \\ \\|");
				printf ("\n\n                1-Batalha de Moscou             2-Batalha de Salingrado               3-Batal�ha de Fran�a");
				printf ("\n                                                 4-Batalha de Berlim");
				opc=opc_scanf();
				switch(opc){
					case 2:{
						printf ("\n\n                                                  A op��o est� certa!!");
						break;
					}
					default:{
						printf ("\n\n                                              Est� Errada!! Era a segunda");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n7-qual foi op pa�s com mais perdas ?                                        %s-  %d",nomeC,pontos);
				printf ("\n\n                                 ,__                                                  _,");
				printf ("\n                                   \\~\\|  ~~---___              ,                          | \\");
                printf ("\n                                     |      / |   ~~~~~~~|~~~~~| ~~---,                  _/,  >");
                printf ("\n                                    /~-_--__| |          |     \\     / ~\\~~/          /~| ||,'");
                printf ("\n                                   |       /  \\         |------|   {    / /~)     __-  ',|_\\,");
				printf ("\n                                  /       |    |~~~~~~~~|      \\    \\   | | '~\\  |_____,|~,-'");
				printf ("\n                                  |~~--__ |    |        |____  |~~~~~|--| |__ /_-'     {,~");
				printf ("\n                                  |   |  ~~~|~~|        |    ~~\\     /  `-' |`~ |~_____{/");
				printf ("\n                                  |   |     |  '---------,      \\----|   |  |  ,' ~/~\\,|`");
				printf ("\n                                  ',  \\     |    |       |~~~~~~~|    \\  | ,'~~\\  /    |");
				printf ("\n                                   |   \\    |    |       |       |     \\_-~    /`~___--\\");
				printf ("\n                                   ',   \\  ,-----|-------+-------'_____/__----~~/      /");
				printf ("\n                                    '_   '\\|     |      |~~~|     |    |      _/-,~~-,/");
				printf ("\n                                      \\    |     |      |   |_    |    /~~|~~\\    \\,/");
				printf ("\n                                       ~~~-'     |      |     `~~~\\___|   |   |    /");
				printf ("\n                                           '-,_  | _____|          |  /   | ,-'---~\\");
				printf ("\n                                              `~'~  \\             |  `--,~~~~-~~,  \\");
				printf ("\n                                                     \\/~\\      /~~~`---`         |  \\");
				printf ("\n                                                           \\    /                   \\  |");
				printf ("\n                                                            \\  |                     '\\'");
				printf ("\n                                                             `~'");
				printf ("\n\n                               1-Pol�nia              2-Alemanh�               3-Estados Unidos");
				printf ("\n                                                    4-Uni�o sovi�tica");
				opc=opc_scanf();
				switch(opc){
					case 4:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;
						CouE[6]=1;
						break;
					}
					default:{
						printf ("\n\n                       		               Est� Errada!! Era a quarta");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n8-Como se chamavam os dois lados que se enfrentaram na Segunda Guerra Mundial? ?   %s-  %d",nomeC,pontos);
				printf ("\n\n                                                         .---.");
				printf ("\n                                                    ___ /_____\\");
                printf ("\n                                                   /\\.-`( x.x )");
                printf ("\n                                                  / /    \\_-_/_");
                printf ("\n                                                  \\ `-.-\"`\'V\'//-.");
				printf ("\n                                                   `.__,   |// , \\");
				printf ("\n                                                        \\_____/ \\ \\");
				printf ("\n                                                        |__//   |\\_\\");
				printf ("\n                                                       /---|[]==|/ /");
				printf ("\n                                                       \\__/ |  \\/\\/");
				printf ("\n                                                        /_   | Ll_\\|");
				printf ("\n                                                              \\ \\|");
				printf ("\n\n                 1-Uni�o e nazi             2-Aliados e nazi             3-Aliados e Eixo");
				printf ("\n                                           4-For�a expendit�ria e nazi");
				opc=opc_scanf();
				switch(opc){
					case 3:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;
						CouE[7]=1;
						break;
					}
					default:{
						printf ("\n\n                                             Est� Errada!! Era a terceira");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n9-Quantos anos durou a Segunda Guerra Mundial?                               %s-  %d",nomeC,pontos);
				printf ("\n\n                                                         .---.");
				printf ("\n                                                    ___ /_____\\");
                printf ("\n                                                   /\\.-`( x.x )");
                printf ("\n                                                  / /    \\_-_/_");
                printf ("\n                                                  \\ `-.-\"`\'V\'//-.");
				printf ("\n                                                   `.__,   |// , \\");
				printf ("\n                                                        \\_____/ \\ \\");
				printf ("\n                                                        |__//   |\\_\\");
				printf ("\n                                                       /---|[]==|/ /");
				printf ("\n                                                       \\__/ |  \\/\\/");
				printf ("\n                                                        /_   | Ll_\\|");
				printf ("\n                                                              \\ \\|");
				printf ("\n\n                                   1-6                   2-5                 3-4");
				printf ("\n                                                         4-7");
				opc=opc_scanf();
				switch(opc){
					case 1:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;
						CouE[8]=1;
						break;
					}
					default:{
						printf ("\n\n                                             Est� Errada!! Era a primeira");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n10-Quando a 2� guerra mundial acabou ?                                       %s-  %d",nomeC,pontos);
				printf ("\n                                                 ......(\\_//)");
                printf ("\n                                                 ......( '_')");
                printf ("\n                                                 ....//\"\"\"\"\"\"\"\"\"\"\"\"\\======� ����D");
                printf ("\n                                               //\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\\");
				printf ("\n                                               \\_@_@_@_@_@_@_@_@_@_@_@_//");
				printf ("\n\n                               	     1-1944              2-1945             3-1949");
				printf ("\n                                                         4-1946");
				opc=opc_scanf();
				switch(opc){
					case 2:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;
						CouE[9]=1;
						break;
					}
					default:{
						printf ("\n\n                                              Est� Errada!! Era a segunda");
						break;
					}
				}
				getch();
				system ("cls");
				for (i=0;i<10;i++){
					if (CouE[i]==1){
						ContC++;
						}
					else {
						ContE++;
					}
				}
				if (ContC ==10){
					printf ("\n\n\n                                   		     Parabens N�o falhaste nenhuma pergunta!");
				}
				if(ContC <=9 && ContC>5){
					printf ("\n\n\n                               	  	   Parabens acertaste mais de metade das perguntas!");
				}
				printf ("\n                                       	         acertou- %d            Errou-%d",ContC,ContE);
				getch();
				break;
			}
			case 2:{
				system("cls");
				printf ("\n\n1-Qual era o nome do ministro da propaganda nazi de Hitler?                       %s-  %d",nomeC,pontos);
				printf ("\n\n                                                         .---.");
				printf ("\n                                                    ___ /_____\\");
                printf ("\n                                                   /\\.-`( '.' )");
                printf ("\n                                                  / /    \\_-_/_");
                printf ("\n                                                  \\ `-.-\"`\'V\'//-.");
				printf ("\n                                                   `.__,   |// , \\");
				printf ("\n                                                        \\_____/ \\ \\");
				printf ("\n                                                        |__//   |\\_\\");
				printf ("\n                                                       /---|[]==|/ /");
				printf ("\n                                                       \\__/ |  \\/\\/");
				printf ("\n                                                        /_   | Ll_\\|");
				printf ("\n                                                              \\ \\|");
				printf ("\n\n                  1-Joseph Goebbleds                2-Josef Mengele                 3-Heinrich Himmeler");
				printf ("\n                                                    4-Rodolph Hess");
				opc=opc_scanf();
				switch(opc){
					case 1:{
						printf ("\n\n                                                  A op��o est� certa!!");
						CouE[0]=1;
						pontos=pontos+100; 
						break;
					}
					default:{
						printf ("\n\n                                             Est� Errada!! Era a primeira");
						break;
					} 	
				}
				getch();
				system("cls");
				printf ("\n\n2-Como se chamava o foguete nazi criado por Wernher von Braun.                   %s-  %d",nomeC,pontos);
				printf ("\n                                                     |\\*******/|");
				printf ("\n                                                      \\	   /");
				printf ("\n                                                       \\	  /");
				printf ("\n                                                        \\====/");
				printf ("\n                                                         |    |");
                printf ("\n                                                         |    |");
                printf ("\n                                                         |    |");
                printf ("\n                                                         |    |");
				printf ("\n                                                         \\    /");
				printf ("\n                                                          \\  /");
				printf ("\n                                                           \\/");
				printf ("\n\n                               1-V10                     2-V12                     3-V6");
				printf ("\n                                                         4-V2");
				opc=opc_scanf();
				switch(opc){
					case 4:{
						printf ("\n\n                                                  A op��o est� certa!!");
						CouE[1]=1;
						break;
					}
					default:{
						printf ("\n\n                                              Est� Errada!! Era a quarta");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n3-Como se chamava a opera��o nazi que invadiu a Pol�nia dando in�cio a segunda Guerra Mundial? \n                                                                 %s-  %d",nomeC,pontos);
				printf ("\n\n                                                __-\"\";\",         _");
				printf ("\n                                              --\"\"      \\ '  _----\"_---------------,");
                printf ("\n                                     _  __--\"\"           `---\"\"\"\"\"'                 \\");
                printf ("\n                                    ,_)|                                             |");
                printf ("\n                                    __ (                                             |");
				printf ("\n                                   |   `                                             |");
				printf ("\n                                   |                   * Bydgoszcz                 _/");
				printf ("\n                                   /                                              /'");
				printf ("\n                                   \\                                              `-_");
				printf ("\n                                    |                                                |");
				printf ("\n                                    \\                                                (");
				printf ("\n                                     |                                                \\");
				printf ("\n                                     |                                               <'");
				printf ("\n                                    //'|                                            _]");
				printf ("\n                                     `   \"-__                                        /'");
				printf ("\n                                             ) ,-__                                 /");
				printf ("\n                                             \\ /  '\\_-_                           /");
				printf ("\n                                               `        `\\  ,     _   __-__      /");
				printf ("\n                                                           )/            `-  |");
				printf ("\n                                                                           `,'");
				printf ("\n\n               1-opera��o sparrow                 2-Opera��o overlord             3-Opera��o Barbossa");
				printf ("\n                                                     4-Blitzkrieg");
				opc=opc_scanf();
				switch(opc){
					case 3:{
						printf ("\n\n                                                  A op��o est� certa!!");
						CouE[2]=1;
						pontos=pontos+100; 
						break;
					}
					default:{
						printf ("\n\n                                              Est� Errada!! Era a terceira");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n4-Quem era o segundo na linha de sucess�o nazi caso Hitler viesse a falecer??  %s-  %d",nomeC,pontos);
				printf ("\n\n                                                         .---.");
				printf ("\n                                                    ___ /_____\\");
                printf ("\n                                                   /\\.-`( x.x )");
                printf ("\n                                                  / /    \\_-_/_");
                printf ("\n                                                  \\ `-.-\"`\'V\'//-.");
				printf ("\n                                                   `.__,   |// , \\");
				printf ("\n                                                        \\_____/ \\ \\");
				printf ("\n                                                        |__//   |\\_\\");
				printf ("\n                                                       /---|[]==|/ /");
				printf ("\n                                                       \\__/ |  \\/\\/");
				printf ("\n                                                        /_   | Ll_\\|");
				printf ("\n                                                              \\ \\|");
                printf ("\n                     1-Joseph Goebbles             2-Heinrich M�ller                 3-Erich Ludendorff");                            
				printf ("\n                                                   4-Herman Goering");
				opc=opc_scanf();
				switch(opc){
					case 4:{
						printf ("\n\n                                                  A op��o est� certa!!");
						CouE[3]=1;
						pontos=pontos+100; 
						break;
					}
					default:{
						printf ("\n\n                                               Est� Errada!! Era a quarta");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n5-Que pa�s era governado por Mussolini?                                                %s-  %d",nomeC,pontos);
 				printf ("\n\n                                                __-\"\";\",         _");
				printf ("\n                                              --\"\"      \\ '  _----\"_---------------,");
                printf ("\n                                     _  __--\"\"           `---\"\"\"\"\"'                 \\");
                printf ("\n                                    ,_)|                                             |");
                printf ("\n                                    __ (                                             |");
				printf ("\n                                   |   `                                             |");
				printf ("\n                                   |                   * Bydgoszcz                 _/");
				printf ("\n                                   /                                              /'");
				printf ("\n                                   \\                                              `-_");
				printf ("\n                                    |                                                |");
				printf ("\n                                    \\                                                (");
				printf ("\n                                     |                                                \\");
				printf ("\n                                     |                                               <'");
				printf ("\n                                    //'|                                            _]");
				printf ("\n                                     `   \"-__                                        /'");
				printf ("\n                                             ) ,-__                                 /");
				printf ("\n                                             \\ /  '\\_-_                           /");
				printf ("\n                                               `        `\\  ,     _   __-__      /");
				printf ("\n                                                           )/            `-  |");
				printf ("\n                                                                           `,'");
                printf ("\n                              1-Pol�nia                 2-It�lia                  3-Fran�a");                            
				printf ("\n                                                       4-Espanha");
				opc=opc_scanf();
				switch(opc){
					case 2:{
						printf ("\n\n                                                  A op��o est� certa!!");
						CouE[4]=1;
						pontos=pontos+100; 
						break;
					}
					default:{
						printf ("\n\n                                              Est� Errada!! Era a segunda");
						break;
					}
				}
				getch();       
				pergunta_certas_erradas();
				getch();
				break;
			}
			case 3:{
				system("cls");
				printf ("\n\n1-Quantos paises participaram nos Aliados ?                                            %s-  %d",nomeC,pontos);
				printf ("\n\n                                      ,__                                                  _,");
				printf ("\n                                   \\~\\|  ~~---___              ,                          | \\");
                printf ("\n                                     |      / |   ~~~~~~~|~~~~~| ~~---,                  _/,  >");
                printf ("\n                                    /~-_--__| |          |     \\     / ~\\~~/          /~| ||,'");
                printf ("\n                                   |       /  \\         |------|   {    / /~)     __-  ',|_\\,");
				printf ("\n                                  /       |    |~~~~~~~~|      \\    \\   | | '~\\  |_____,|~,-'");
				printf ("\n                                  |~~--__ |    |        |____  |~~~~~|--| |__ /_-'     {,~");
				printf ("\n                                  |   |  ~~~|~~|        |    ~~\\     /  `-' |`~ |~_____{/");
				printf ("\n                                  |   |     |  '---------,      \\----|   |  |  ,' ~/~\\,|`");
				printf ("\n                                  ',  \\     |    |       |~~~~~~~|    \\  | ,'~~\\  /    |");
				printf ("\n                                   |   \\    |    |       |       |     \\_-~    /`~___--\\");
				printf ("\n                                   ',   \\  ,-----|-------+-------'_____/__----~~/      /");
				printf ("\n                                    '_   '\\|     |      |~~~|     |    |      _/-,~~-,/");
				printf ("\n                                      \\    |     |      |   |_    |    /~~|~~\\    \\,/");
				printf ("\n                                       ~~~-'     |      |     `~~~\\___|   |   |    /");
				printf ("\n                                           '-,_  | _____|          |  /   | ,-'---~\\");
				printf ("\n                                              `~'~  \\             |  `--,~~~~-~~,  \\");
				printf ("\n                                                     \\/~\\      /~~~`---`         |  \\");
				printf ("\n                                                           \\    /                   \\  |");
				printf ("\n                                                            \\  |                     '\\'");
				printf ("\n                                                             `~'");
				printf ("\n\n                               1-5                         2-3      		            3-4");
				printf ("\n                                                           4-2");
				opc=opc_scanf();
				switch(opc){
					case 3:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;
						CouE[0]=1;
						break;
					}
					default:{
						printf ("\n\n                             	              Est� Errada!! Era a terceira");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n2-Quais os paises participaram nos Aliados ?                                              %s-  %d",nomeC,pontos);
				printf ("\n\n                                       ,__                                                  _,");
				printf ("\n                                    \\~\\|  ~~---___              ,                          | \\");
                printf ("\n                                     |      / |   ~~~~~~~|~~~~~| ~~---,                  _/,  >");
                printf ("\n                                    /~-_--__| |          |     \\     / ~\\~~/          /~| ||,'");
                printf ("\n                                   |       /  \\         |------|   {    / /~)     __-  ',|_\\,");
				printf ("\n                                  /       |    |~~~~~~~~|      \\    \\   | | '~\\  |_____,|~,-'");
				printf ("\n                                  |~~--__ |    |        |____  |~~~~~|--| |__ /_-'     {,~");
				printf ("\n                                  |   |  ~~~|~~|        |    ~~\\     /  `-' |`~ |~_____{/");
				printf ("\n                                  |   |     |  '---------,      \\----|   |  |  ,' ~/~\\,|`");
				printf ("\n                                  ',  \\     |    |       |~~~~~~~|    \\  | ,'~~\\  /    |");
				printf ("\n                                   |   \\    |    |       |       |     \\_-~    /`~___--\\");
				printf ("\n                                   ',   \\  ,-----|-------+-------'_____/__----~~/      /");
				printf ("\n                                    '_   '\\|     |      |~~~|     |    |      _/-,~~-,/");
				printf ("\n                                      \\    |     |      |   |_    |    /~~|~~\\    \\,/");
				printf ("\n                                       ~~~-'     |      |     `~~~\\___|   |   |    /");
				printf ("\n                                           '-,_  | _____|          |  /   | ,-'---~\\");
				printf ("\n                                              `~'~  \\             |  `--,~~~~-~~,  \\");
				printf ("\n                                                     \\/~\\      /~~~`---`         |  \\");
				printf ("\n                                                           \\    /                   \\  |");
				printf ("\n                                                            \\  |                     '\\'");
				printf ("\n                                                             `~'");
				printf ("\n\n        1-Reino unido,Alemanh�,Uni�o Sovi�tica,Fran�a                2-Reino unido,Pol�nia,Uni�o Sovi�tica,Fran�a");
				printf ("\n      3-Reino unido,,Uni�o Sovi�tica,Fran�a,It�lia                 4-Reino unido,Estdos Unidos,Uni�o Sovi�tica,Fran�a");
				opc=opc_scanf();
				switch(opc){
					case 4:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100;  
						CouE[1]=1;                                                                          
						break;
					}
					default:{
						printf ("\n\n                                               Est� Errada!! Era a quarta");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n3-Qual foi o motivo da entrada dos Estados Unidos na Segunda Guerra Mundial?         %s-  %d",nomeC,pontos);
				printf ("\n\n                           	                        __|__  /  ");
				printf ("\n                            	                .'(\\      .-.     /)'.     ");
                printf ("\n                            	            +-====(*)===: \" :===(o)=====-+ ");
                printf ("\n                                                    \\).  '-'  .(/         ");
                printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n\n         1-Ataque dos Japoneses ao porto Pearl Harbor               2-Nenhum, simplesmente quiseram");
				printf ("\n    3-Ataque dos Japonese aos Navios mercantes dos EUA           4-Ataque dos nazi ao porto Pearl Harbor");
				opc=opc_scanf();
				switch(opc){
					case 1:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100; 
						CouE[2]=1;
						break;
					}
					default:{
						printf ("\n\n                                             Est� Errada!! Era a primeira");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n4-qual foi a chave dos Estados Unidos para vencer a batalha de Midway?         %s-  %d",nomeC,pontos);
				printf ("\n\n                           	                        __|__  /  ");
				printf ("\n                            	                  .'(\\      .-.     /)'.     ");
                printf ("\n                            	               +-====(*)===: \" :===(o)=====-+ ");
                printf ("\n                                                    \\).  '-'  .(/         ");
                printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n                                                         +=     ");
				printf ("\n\n           1-tinham pilotos melhores que os japoneses               2-tinham uma frota maior");
				printf ("\n           3-Descobrir o codigo naval dos japoneses                 4-tinham avioes melhores");
				opc=opc_scanf();
				switch(opc){
					case 3:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100; 
						CouE[3]=1;
						break;
					}
					default:{
						printf ("\n\n                                               Est� Errada!! Era a terceira");
						break;
					}
				}
				getch();
				system("cls");
				printf ("\n\n5-Qual foi o presidente que ganhou uma medalha da marinha e dos fuzileiros navais?        %s-  %d",nomeC,pontos);
				printf ("\n\n                                                         .---.");
				printf ("\n                                                    ___ /_____\\");
                printf ("\n                                                   /\\.-`( '.' )");
                printf ("\n                                                  / /    \\_-_/_");
                printf ("\n                                                  \\ `-.-\"`\'V\'//-.");
				printf ("\n                                                   `.__,   |// , \\");
				printf ("\n                                                        \\_____/ \\ \\");
				printf ("\n                                                        |__//   |\\_\\");
				printf ("\n                                                       /---|[]==|/ /");
				printf ("\n                                                       \\__/ |  \\/\\/");
				printf ("\n                                                        /_   | Ll_\\|");
				printf ("\n                                                              \\ \\|");
				printf ("\n\n                             1-Dwight D.Elsenhower               2-Ronald Reagan");
				printf ("\n                                 3-Jimmy Carter                 4-John F. Kennedy");
				opc=opc_scanf(); 
				switch(opc){
					case 4:{
						printf ("\n\n                                                  A op��o est� certa!!");
						pontos=pontos+100; 
						CouE[4]=1;
						break;
					}
					default:{
						printf ("\n\n                                               Est� Errada!! Era a quarta");
						break;
					}
				}
				getch();
				pergunta_certas_erradas();
				getch();
				break;
			}
		}
	}while(opcMenu!=4);
	return 0; 
}
