//FELLIPE EMANOEL - 554774
//VINICIUS MORALIS - 568600
//LUCAS SOUZA - 569534

//First Come First Serve
//Primeiro a entrar na lista é o primeiro a ser executado

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
int processos[3], ingresso[3], tempoExec[3],inicio[3], fim[3], tempoPassado[3],tempoEspera[3];
// Processos, Quando o processo ingressou, Inicio do tempo, Fim do tempo, Tempo que o Processo teve, Tempo de Espera do processo
float tempEspera = 0, tempoExecucao = 0, totaltd = 0, totalte = 0;
int soma = 0;

    for(int i=0;i<3;i++)
    {
        processos[i] = i;

        printf("\n\n> Entrada do Processo %d: ", i+1);
        scanf("%d",&ingresso[i]);

        printf("> Tempo de Execucao %d:",i+1);
        scanf("%d",&tempoExec[i]);
    }

    //Soma o tempo de conlusao dos processos
	for(int j=0;j<3;j++)
	{
		soma+=tempoExec[j]; 
		fim[j]+=soma; //Somatória
	}

    // Soma tempo de espera  (waiting time)
    for(int i=0;i<3;i++)
    {
        tempoEspera[i]=tempoPassado[i]-tempoExec[i];
        totalte += tempoEspera[i]; //Somatória
    }

    for(int k=0;k<3;k++)
    // Soma tempo decorrido. (Turn Around)
	{
		tempoPassado[k] = fim[k] - ingresso[k];
		totaltd += tempoPassado[k]; //Somatória
	}

    
    printf("\n\nPROCESSO\t INGRESSO\t TEMPO EXECUCAO\t TEMPO FIM\t TDEC\t TEMPO DE ESPERA\t\n\n");

    for(int i=0;i<3;i++)
    {
        printf("\n\n%d\t\t %d\t\t %d\t\t %d\t\t %d\t\t %d\t\t\n\n", processos[i],ingresso[i],tempoExec[i],fim[i],tempoPassado[i],tempoEspera[i]);
    }
    printf("\nMedia Tempo de Espera : %.2f",totalte/3);
    printf("\nMedia Tempo de Execucao : %.2f",totaltd/3);
}

