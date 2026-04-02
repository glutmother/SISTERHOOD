#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int comando;
	int comandorepetirjogo;
	int resposta;
	int furia_gousma_p1_1 = 1;
	int furia_gousma_p1_2 = 1;
	int furia_gousma_p2_1 = 1;
	int furia_gousma_p2_2 = 1;
	int opcao;
	int opcao_gousmas_oponente;
	int opcao_gousmas;
	int dividir_furia;
	int personagem1;
	int personagem2;
	int min = 1;
	int max = 5;
	int caixa1 = (rand() % (max - min + 1)) + min;
	int caixa2 = (rand() % (max - min + 1)) + min;
	int caixa3 = (rand() % (max - min + 1)) + min;
	int caixa4 = (rand() % (max - min + 1)) + min;
	int caixa5 = (rand() % (max - min + 1)) + min;
	int escolha_caixa;
	
	while(caixa1 == caixa2 || caixa1 == caixa3 || caixa1 == caixa4 || caixa1 == caixa5){
		caixa1 = (rand() % (max - min + 1)) + min;
	}
	while(caixa2 == caixa1 || caixa2 == caixa3 || caixa2 == caixa4 || caixa2 == caixa5){
		caixa2 = (rand() % (max - min + 1)) + min;
	}
	while(caixa3 == caixa2 || caixa3 == caixa1 || caixa3 == caixa4 || caixa3 == caixa5){
		caixa3 = (rand() % (max - min + 1)) + min;
	}
	while(caixa4 == caixa2 || caixa4 == caixa3 || caixa4 == caixa1 || caixa4 == caixa5){
		caixa4 = (rand() % (max - min + 1)) + min;
	}
	while(caixa5 == caixa2 || caixa5 == caixa3 || caixa5 == caixa4 || caixa5 == caixa1){
		caixa5 = (rand() % (max - min + 1)) + min;
	}
		printf("== SISTERHOOD ==\n\n");
	
		printf("1: Perguntas e Respostas\n");
		printf("2: Cobra na Caixa!\n");
		printf("3: Gousmas War\n");
		printf("4: Sair\n\n");
		printf("Insira a letra correspondente a acao que voce quer fazer: ");
		scanf("%d", &comando);
	
	if(comando != 1 && comando != 2 && comando != 3 && comando != 4){
		while(comando != 1 && comando != 2 && comando != 3 && comando != 4){
			printf("\n\nEscolha uma opcao existente: ");
			scanf("%d", &comando);
		}
	}
	
		if(comando == 1){
			while(comando == 1){
			system("cls");
			printf("Bem-vindo ao jogo de Perguntas e Respostas!\n\nNesse jogo, voce tera que responder a 5 perguntas com 4 alternativas cada, com apenas 1 delas sendo correta. Boa sorte!\n\n");
			system("pause");
			system("cls");
			printf("Pergunta 1: Quais sao as cores do arco-iris?\n\n");
			printf("1. Vermelho, Laranja, Azul, Amarelo, Verde, Anil, Roxo\n");
			printf("2. Vermelho, Laranja, Azul, Verde, Amarelo, Violeta, Anil\n");
			printf("3. Vermelho, Laranja, Amarelo, Verde, Azul, Anil, Violeta\n");
			printf("4. Vermelho, Laranja, Amarelo, Azul, Verde, Violeta, Anil\n\n");
			printf("Sua Resposta: ");
			scanf("%d", &resposta);
		if(resposta == 3){
			printf("\nResposta correta!\n\n");
			system("pause");
		}
		if(resposta != 3){
			printf("\nResposta incorreta! A resposta correta era a 3\n\n");
			system("pause");
		}
		system("cls");
		printf("Pergunta 2: Qual eh o nome completo do professor Girotto?\n\n");
		printf("1. Pedro Henrique Sales Girotto\n");
		printf("2. Pedro Henrique Girotto Sales\n");
		printf("3. Pedro Girotto Henrique Sales\n");
		printf("4. Pedro Sales Henrique Girotto\n\n");
		printf("Sua Resposta: ");
		scanf("%d", &resposta);
		if(resposta == 1){
			printf("\nResposta correta!\n\n");
			system("pause");
		}
		if(resposta != 1){
			printf("\nResposta incorreta! A correta era a 1\n\n");
			system("pause");
		}
		system("cls");
		printf("Pergunta 3: Quantos dias tem uma semana?\n\n");
		printf("1. 5 dias\n");
		printf("2. 8 dias\n");
		printf("3. 6 dias\n");
		printf("4. 7 dias\n\n");
		printf("Sua Resposta: ");
		scanf("%d", &resposta);
		if(resposta == 4){
			printf("\nResposta correta!\n\n");
			system("pause");
		}
		if(resposta != 4){
			printf("\nResposta incorreta! A correta era a 4\n\n");
			system("pause");
		}
		system("cls");
		printf("Pergunta 4: Qual o maior planeta do sistema solar?\n\n");
		printf("1. Terra\n");
		printf("2. Netuno\n");
		printf("3. Venus\n");
		printf("4. Jupiter\n\n");
		printf("Sua Resposta: ");
		scanf("%d", &resposta);
		if(resposta == 4){
			printf("\nResposta correta!\n\n");
			system("pause");
		}
		if(resposta != 4){
			printf("\nResposta incorreta! A correta era a 4\n\n");
			system("pause");
		}
		system("cls");
		printf("Pergunta 5: Qual eh a capital do Brasil?\n\n");
		printf("1. Salvador\n");
		printf("2. Brasilia\n");
		printf("3. Rio de Janeiro\n");
		printf("4. Belem\n\n");
		printf("Sua Resposta: ");
		scanf("%d", &resposta);
		if(resposta == 2){
			printf("\nResposta correta!\n\n");
			system("pause");
		}
		if(resposta != 2){
			printf("\nResposta incorreta! A correta era a 2\n\n");
			system("pause");
		}
		system("cls");
		printf("Parabens! Voce concluiu o jogo de Perguntas e Respostas! Voce gostaria de jogar novamente?\n\nDigite 1 para Sim, 0 para nao: ");
		scanf("%d", &comando);
	}
		if(comando == 0){
			system("cls");
			printf("== SISTERHOOD ==\n\n");
		
			printf("1: Perguntas e Respostas\n");
			printf("2: Cobra na Caixa!\n");
			printf("3: Gousmas War\n");
			printf("4: Sair\n\n");
			printf("Insira a letra correspondente a acao que voce quer fazer: ");
			scanf("%d", &comando);
			if(comando != 1 && comando != 2 && comando != 3 && comando != 4){
				while(comando != 1 && comando != 2 && comando != 3 && comando != 4){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &comando);
				
		}
	}
		}
	}
	if(comando == 2){
		while(comando == 2){
			system("cls");
			printf("Bem-vindo ao jogo Cobra na Caixa!\n\nNesse jogo, 2 exploradores (os 2 jogadores) estao presos dentro de uma sala de uma tumba egipcia antiga. Nela, contem 5 caixas: uma delas tem o botao para abrir a porta, uma delas contem uma cobra mortal, e as outras estao vazias. Boa sorte!\n\n");
			system("pause");
			system("cls");
			printf("Escolham seus personagens:\n\n");
			printf("1. Lucy\n");
			printf("2. Jane\n");
			printf("3. Yasu\n");
			printf("4. Victoria\n");
			printf("5. Azure\n");
			printf("6. Luz\n");
			printf("7. Amity\n\n");
			printf("Escolha do Jogador 1: ");
			scanf("%d", &personagem1);
			printf("Escolha do Jogador 2: ");
			scanf("%d", &personagem2);
			do{
			system("cls");
			printf("-- Turno do Jogador 1 --\n\n");
			printf("Escolha 1 caixa dentre as 5:\n");
			printf("Caixa 1\n");
			printf("Caixa 2\n");
			printf("Caixa 3\n");
			printf("Caixa 4\n");
			printf("Caixa 5\n");
			printf("Digite sua resposta: ");
			scanf("%d", &escolha_caixa);
			if(escolha_caixa != caixa2 && escolha_caixa != caixa3){
				printf("\n\nEsta caixa estava vazia...\n\n");
				system("pause");
			}
			if(escolha_caixa == caixa2){
				printf("\n\nVoce encontrou o botao! Parabens!\n\n");
				system("pause");
				break;
			}
			if(escolha_caixa == caixa3){
				printf("\n\nVoce encontrou a cobra mortal. Voce perdeu o jogo.\n\n");
				system("pause");
				break;
			}
			system("cls");
			printf("-- Turno do Jogador 2 --\n\n");
			printf("Escolha 1 caixa dentre as 5:\n");
			printf("Caixa 1\n");
			printf("Caixa 2\n");
			printf("Caixa 3\n");
			printf("Caixa 4\n");
			printf("Caixa 5\n");
			printf("Digite sua resposta: ");
			scanf("%d", &escolha_caixa);
			if(escolha_caixa != caixa2 && escolha_caixa != caixa3){
				printf("\n\nEsta caixa estava vazia...\n\n");
				system("pause");
			}
			if(escolha_caixa == caixa2){
				printf("\n\nVoce encontrou o botao! Parabens!\n\n");
				system("pause");
				break;
			}
			if(escolha_caixa == caixa3){
				printf("\n\nVoce encontrou a cobra mortal. Voce perdeu o jogo.\n\n");
				system("pause");
				break;
			}
		}while(escolha_caixa != caixa2 || escolha_caixa != caixa3);
		
		system("cls");
		printf("Parabens! Voces concluiram o jogo Cobra na Caixa! Voces gostariam de jogar novamente?\n\n");
		printf("Digite 2 para sim, 0 para nao: ");
		scanf("%d", &comando);
		}
		if(comando == 0){
			system("cls");
			printf("== SISTERHOOD ==\n\n");
		
			printf("1: Perguntas e Respostas\n");
			printf("2: Cobra na Caixa!\n");
			printf("3: Gousmas War\n");
			printf("4: Sair\n\n");
			printf("Insira a letra correspondente a acao que voce quer fazer: ");
			scanf("%d", &comando);
			if(comando != 1 && comando != 2 && comando != 3 && comando != 4){
				while(comando != 1 && comando != 2 && comando != 3 && comando != 4){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &comando);
				
		}
	}
		}
	}
	if(comando == 3){
		while(comando = 3){
		system("cls");
		printf("Bem-vindo ao Gousmas War!\n\nNeste jogo de estrategia, dois jogadores controlam criaturas chamadas Gousmas. Cada Gousma tem um valor inteiro chamado furia. A estrategia do jogo envolve:\nAumentar a furia do inimigo ate ele ser destruido\nE controlar a propria furia para nao perder suas criaturas. Boa sorte!\n\n");
		system("pause");
		while(furia_gousma_p1_1 > 0 || furia_gousma_p1_2 > 0 && furia_gousma_p2_1 > 0 || furia_gousma_p2_2 > 0){
			system("cls");
			printf("-- Turno do Jogador 1 --");
			printf("\n\nNeste turno voce pode escolher entre atacar ou dividir a furia de suas Gousmas.");
			printf("\nDigite 1 para atacar ou 2 para dividir: ");
			scanf("%d", &opcao);
			if(opcao != 1 && opcao != 2){
				while(opcao != 1 && opcao != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao);
				}
			}
		
		if(opcao == 1){
			system("cls");
			printf("Voce escolheu atacar.\n");
			printf("Atacar qual das Gousmas do oponente?\n\n");
			printf("Gousma 1 do oponente: Furia = %d", furia_gousma_p2_1);
			printf("\nGousma 2 do oponente: Furia = %d\n\n", furia_gousma_p2_2);
			printf("Gousma 1 = 1, Gousma 2 = 2\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas_oponente);
			if(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
				while(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas_oponente);
				}
			}
			printf("\nCom qual Gousma voce quer atacar?\n\n");
			printf("Sua Gousma 1: Furia = %d", furia_gousma_p1_1);
			printf("\nSua Gousma 2: Furia = %d", furia_gousma_p1_2);
			printf("\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas);
			if(opcao_gousmas != 1 && opcao_gousmas != 2){
				while(opcao_gousmas != 1 && opcao_gousmas != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas);
				}
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p2_1 = furia_gousma_p1_1 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 1 do oponente foi para %d.", furia_gousma_p2_1);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p2_2 = furia_gousma_p1_1 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 2 do oponente foi para %d.", furia_gousma_p2_2);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p2_1 = furia_gousma_p1_2 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 1 do oponente foi para %d.", furia_gousma_p2_1);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p2_2 = furia_gousma_p1_2 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 2 do oponente foi para %d.", furia_gousma_p2_2);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			opcao = 0;
			opcao_gousmas = 0;
			opcao_gousmas_oponente = 0;
		}
		if(opcao == 2){
			if(furia_gousma_p1_1 > 1 || furia_gousma_p1_2 > 1){
			system("cls");
			printf("Voce escolheu dividir.\n");
			printf("Dividir a furia de qual das suas Gousmas? Lembre-se que suas Gousmas so podem dividir se tiverem 2 ou mais de furia.\n\n");
			printf("Sua Gousma 1: Furia = %d", furia_gousma_p1_1);
			printf("\nSua Gousma 2: Furia = %d", furia_gousma_p1_2);
			printf("\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas);
			if(opcao_gousmas != 1 && opcao_gousmas != 2){
				while(opcao_gousmas != 1 && opcao_gousmas != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas);
				}
			}
			if(opcao_gousmas == 1){
				if(furia_gousma_p1_1 > 1){
					system("cls");
					printf("Quanto de furia voce quer dividir?\n\n");
					printf("Sua Gousma 1: Furia = %d", furia_gousma_p1_1);
					printf("\nSua Gousma 2: Furia = %d", furia_gousma_p1_2);
					printf("\n\nValor de furia: ");
					scanf("%d", &dividir_furia);
					
					if(dividir_furia >= furia_gousma_p1_1){
						while(dividir_furia >= furia_gousma_p1_1){
						system("cls");
						printf("Voce nao pode zerar a furia da sua Gousma. Escolha outro valor.");
						printf("\nValor de furia: ");
						scanf("%d", &dividir_furia);
						}
					}
					if(dividir_furia < furia_gousma_p1_1){
						furia_gousma_p1_1 = furia_gousma_p1_1 - dividir_furia;
						furia_gousma_p1_2 = furia_gousma_p1_2 + dividir_furia;
						system("cls");
						printf("Voce dividiu a furia das suas gousmas.\nValores atualizados:");
						printf("\n\nSua Gousma 1: Furia = %d", furia_gousma_p1_1);
						printf("\nSua Gousma 2: Furia = %d", furia_gousma_p1_2);
						printf("\n\nFim do turno do Jogador 2.\n\n");
						system("pause");
					}
				}
			}
			if(opcao_gousmas == 2){
				if(furia_gousma_p1_2 > 1){
					system("cls");
					printf("Quanto de furia voce quer dividir?\n\n");
					printf("Sua Gousma 1: Furia = %d", furia_gousma_p1_1);
					printf("\nSua Gousma 2: Furia = %d", furia_gousma_p1_2);
					printf("\n\nValor de furia: ");
					scanf("%d", &dividir_furia);
					
					if(dividir_furia >= furia_gousma_p1_2){
						while(dividir_furia >= furia_gousma_p1_2){
						system("cls");
						printf("Voce nao pode zerar a furia da sua Gousma. Escolha outro valor.");
						printf("\nValor de furia: ");
						scanf("%d", &dividir_furia);
						}
					}
					if(dividir_furia < furia_gousma_p1_2){
						furia_gousma_p1_2 = furia_gousma_p1_2 - dividir_furia;
						furia_gousma_p1_1 = furia_gousma_p1_1 + dividir_furia;
						system("cls");
						printf("Voce dividiu a furia das suas gousmas.\nValores atualizados:");
						printf("\n\nSua Gousma 1: Furia = %d", furia_gousma_p1_1);
						printf("\nSua Gousma 2: Furia = %d", furia_gousma_p1_2);
						printf("\n\nFim do turno do Jogador 2.\n\n");
						system("pause");
					}
				}
			}
		}else{
			printf("Voce nao pode dividir.\n\n");
			system("pause");
			system("cls");
			printf("Voce escolheu atacar.\n");
			printf("Atacar qual das Gousmas do oponente?\n\n");
			printf("Gousma 1 do oponente: Furia = %d", furia_gousma_p2_1);
			printf("\nGousma 2 do oponente: Furia = %d\n\n", furia_gousma_p2_2);
			printf("Gousma 1 = 1, Gousma 2 = 2\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas_oponente);
			if(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
				while(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas_oponente);
				}
			}
			printf("\nCom qual Gousma voce quer atacar?\n\n");
			printf("Sua Gousma 1: Furia = %d", furia_gousma_p1_1);
			printf("\nSua Gousma 2: Furia = %d", furia_gousma_p1_2);
			printf("\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas);
			if(opcao_gousmas != 1 && opcao_gousmas != 2){
				while(opcao_gousmas != 1 && opcao_gousmas != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas);
				}
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p2_1 = furia_gousma_p1_1 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 1 do oponente foi para %d.", furia_gousma_p2_1);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p2_2 = furia_gousma_p1_1 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 2 do oponente subiu para %d.", furia_gousma_p2_2);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p2_1 = furia_gousma_p1_2 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 1 do oponente subiu para %d.", furia_gousma_p2_1);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p2_2 = furia_gousma_p1_2 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 2 do oponente subiu para %d.", furia_gousma_p2_2);
				printf("\n\nFim do turno do Jogador 1.\n\n");
				if(furia_gousma_p2_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p2_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			opcao = 0;
			opcao_gousmas = 0;
			opcao_gousmas_oponente = 0;
			dividir_furia = 0;
		}
	}
	
		system("cls");
		printf("-- Turno do Jogador 2 --");
		printf("\n\nNeste turno voce pode escolher entre atacar ou dividir a furia de suas Gousmas.");
		printf("\nDigite 1 para atacar ou 2 para dividir: ");
		scanf("%d", &opcao);
		if(opcao != 1 && opcao != 2){
				while(opcao != 1 && opcao != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao);
				}
			}
	
		if(opcao == 1){
			system("cls");
			printf("Voce escolheu atacar.\n");
			printf("Atacar qual das Gousmas do oponente?\n\n");
			printf("Gousma 1 do oponente: Furia = %d", furia_gousma_p1_1);
			printf("\nGousma 2 do oponente: Furia = %d\n\n", furia_gousma_p1_2);
			printf("Gousma 1 = 1, Gousma 2 = 2\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas_oponente);
			if(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
				while(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas_oponente);
				}
			}
			printf("\nCom qual Gousma voce quer atacar?\n\n");
			printf("Sua Gousma 1: Furia = %d", furia_gousma_p2_1);
			printf("\nSua Gousma 2: Furia = %d", furia_gousma_p2_2);
			printf("\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas);
			if(opcao_gousmas != 1 && opcao_gousmas != 2){
				while(opcao_gousmas != 1 && opcao_gousmas != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas);
				}
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p1_1 = furia_gousma_p1_1 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 1 do oponente subiu para %d.", furia_gousma_p1_1);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p1_2 = furia_gousma_p1_2 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 2 do oponente subiu para %d.", furia_gousma_p1_2);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p1_1 = furia_gousma_p1_1 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 1 do oponente subiu para %d.", furia_gousma_p1_1);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p1_2 = furia_gousma_p1_2 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 2 do oponente subiu para %d.", furia_gousma_p1_2);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			opcao = 0;
			opcao_gousmas = 0;
			opcao_gousmas_oponente = 0;
		}
		if(opcao == 2){
			if(furia_gousma_p2_1 > 1 || furia_gousma_p2_2 > 1){
			system("cls");
			printf("Voce escolheu dividir.\n");
			printf("Dividir a furia de qual das suas Gousmas? Lembre-se que suas Gousmas so podem dividir se tiverem 2 ou mais de furia.\n\n");
			printf("Sua Gousma 1: Furia = %d", furia_gousma_p2_1);
			printf("\nSua Gousma 2: Furia = %d", furia_gousma_p2_2);
			printf("\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas);
			if(opcao_gousmas != 1 && opcao_gousmas != 2){
				while(opcao_gousmas != 1 && opcao_gousmas != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas);
				}
			}
			if(opcao_gousmas == 1){
				if(furia_gousma_p2_1 > 1){
					system("cls");
					printf("Quanto de furia voce quer dividir?\n\n");
					printf("Sua Gousma 1: Furia = %d", furia_gousma_p2_1);
					printf("\nSua Gousma 2: Furia = %d", furia_gousma_p2_2);
					printf("\n\nValor de furia: ");
					scanf("%d", &dividir_furia);
					
					if(dividir_furia >= furia_gousma_p2_1){
						while(dividir_furia >= furia_gousma_p2_1){
						system("cls");
						printf("Voce nao pode zerar a furia da sua Gousma. Escolha outro valor.");
						printf("\nValor de furia: ");
						scanf("%d", &dividir_furia);
						}
					}
					if(dividir_furia < furia_gousma_p2_1){
						furia_gousma_p2_1 = furia_gousma_p2_1 - dividir_furia;
						furia_gousma_p2_2 = furia_gousma_p2_2 + dividir_furia;
						system("cls");
						printf("Voce dividiu a furia das suas gousmas.\nValores atualizados:");
						printf("\n\nSua Gousma 1: Furia = %d", furia_gousma_p2_1);
						printf("\nSua Gousma 2: Furia = %d", furia_gousma_p2_2);
						printf("\n\nFim do turno do Jogador 2.\n\n");
						system("pause");
					}
				}
			}
			if(opcao_gousmas == 2){
				if(furia_gousma_p2_2 > 1){
					system("cls");
					printf("Quanto de furia voce quer dividir?\n\n");
					printf("Sua Gousma 1: Furia = %d", furia_gousma_p2_1);
					printf("\nSua Gousma 2: Furia = %d", furia_gousma_p2_2);
					printf("\n\nValor de furia: ");
					scanf("%d", &dividir_furia);
					
					if(dividir_furia >= furia_gousma_p2_2){
						while(dividir_furia >= furia_gousma_p2_2){
						system("cls");
						printf("Voce nao pode zerar a furia da sua Gousma. Escolha outro valor.");
						printf("\nValor de furia: ");
						scanf("%d", &dividir_furia);
						}
					}
					if(dividir_furia < furia_gousma_p2_2){
						furia_gousma_p2_2 = furia_gousma_p2_2 - dividir_furia;
						furia_gousma_p2_1 = furia_gousma_p2_1 + dividir_furia;
						system("cls");
						printf("Voce dividiu a furia das suas gousmas.\nValores atualizados:");
						printf("\n\nSua Gousma 1: Furia = %d", furia_gousma_p2_1);
						printf("\nSua Gousma 2: Furia = %d", furia_gousma_p2_2);
						printf("\n\nFim do turno do Jogador 2.\n\n");
						system("pause");
					}
				}
			}
		}else{
			printf("Voce nao pode dividir.\n\n");
			system("pause");
			system("cls");
			printf("Voce escolheu atacar.\n");
			printf("Atacar qual das Gousmas do oponente?\n\n");
			printf("Gousma 1 do oponente: Furia = %d", furia_gousma_p1_1);
			printf("\nGousma 2 do oponente: Furia = %d\n\n", furia_gousma_p1_2);
			printf("Gousma 1 = 1, Gousma 2 = 2\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas_oponente);
			if(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
				while(opcao_gousmas_oponente != 1 && opcao_gousmas_oponente != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas_oponente);
				}
			}
			printf("\nCom qual Gousma voce quer atacar?\n\n");
			printf("Sua Gousma 1: Furia = %d", furia_gousma_p2_1);
			printf("\nSua Gousma 2: Furia = %d", furia_gousma_p2_2);
			printf("\n\nSua escolha: ");
			scanf("%d", &opcao_gousmas);
			if(opcao_gousmas != 1 && opcao_gousmas != 2){
				while(opcao_gousmas != 1 && opcao_gousmas != 2){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &opcao_gousmas);
				}
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p1_1 = furia_gousma_p1_1 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 1 do oponente subiu para %d.", furia_gousma_p1_1);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 1){
				system("cls");
				furia_gousma_p1_2 = furia_gousma_p1_2 + furia_gousma_p2_1;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 1.\n");
				printf("O valor da furia da Gousma 2 do oponente subiu para %d.", furia_gousma_p1_2);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 1 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p1_1 = furia_gousma_p1_1 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 1 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 1 do oponente subiu para %d.", furia_gousma_p1_1);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_1 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_1 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			if(opcao_gousmas_oponente == 2 && opcao_gousmas == 2){
				system("cls");
				furia_gousma_p1_2 = furia_gousma_p1_2 + furia_gousma_p2_2;
				printf("Voce atacou a Gousma 2 do oponente usando sua Gousma 2.\n");
				printf("O valor da furia da Gousma 2 do oponente subiu para %d.", furia_gousma_p1_2);
				printf("\n\nFim do turno do Jogador 2.\n\n");
				if(furia_gousma_p1_2 >= 5){
					printf("A Gousma 1 do Jogador 2 foi destruida. Sua furia voltou a 0.\n\n");
					furia_gousma_p1_2 = 0;
				}
				system("pause");
			}
			if(furia_gousma_p1_1 == 0 && furia_gousma_p1_2 ==  0 || furia_gousma_p2_1 == 0 && furia_gousma_p2_2 == 0){
				break;
			}
			opcao = 0;
			opcao_gousmas = 0;
			opcao_gousmas_oponente = 0;
			dividir_furia = 0;
		}
			
	}
			
	}
		system("cls");
		printf("Parabens! Voce concluiu o jogo Gousmas War! Voce gostaria de jogar novamente?\n\nDigite 3 para Sim, 0 para nao: ");
		scanf("%d", &comando);
		}
	}

	if(comando == 0){
			system("cls");
			printf("== SISTERHOOD ==\n\n");
		
			printf("1: Perguntas e Respostas\n");
			printf("2: Cobra na Caixa!\n");
			printf("3: Gousmas War\n");
			printf("4: Sair\n\n");
			printf("Insira a letra correspondente a acao que voce quer fazer: ");
			scanf("%d", &comando);
			if(comando != 1 && comando != 2 && comando != 3 && comando != 4){
				while(comando != 1 && comando != 2 && comando != 3 && comando != 4){
					printf("\n\nEscolha uma opcao existente: ");
					scanf("%d", &comando);
		}
	}
		}
	
	if(comando == 4){
		system("exit");
	}
	
	return 0;
}