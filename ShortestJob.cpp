//FELLIPE EMANOEL - 554774
//VINICIUS MORALIS - 568600
//LUCAS SOUZA - 569534
#include <stdio.h>
#include <stdlib.h>

//Shortest Job
//Quem tem o menor Burst Time vem primeiro

main()
{
	int burstTime[3],processos[3],tempoEspera[3],tempoCorrido[3],i,j,total = 0,index,tempo;
	float media_tempoEspera,media_tempoCorrido;


	for ( i = 0; i < 3; i++)
	{
		printf("> Burst Time \n");
		scanf("%d",&burstTime[i]);

		processos[i] = i+1;
	}
	
	//Organiza o Job mais curto
	for ( i = 0; i < 3; i++)	
	{
		index = i;
		for ( j = i+1; j < 3; j++)  
		{
			if (burstTime[j]<burstTime[index]) 	// vERIFICA ITEM DO INDEX 
			{
				index = j;		
			}
		}
		
		//Realiza a troca dos valores e posições para ficarem de maneira ordenada
		tempo = burstTime[i];		
		burstTime[i] = burstTime[index];
		burstTime[index] = tempo; 

		tempo = processos[i];
		processos[i] = processos[index];
		processos[index] = tempo;
	}

	tempoEspera[0] = 0;

	for(i = 1;i < 3; i++ )
    {
        tempoEspera[i]=0;
        for(j=0;j<i;j++)
            tempoEspera[i]+=burstTime[j]; //Waiting time = somatoria do burst time.
 
        total+=tempoEspera[i]; //Valor do final do Waiting time
    }

	media_tempoEspera = (float)total/3; // Media do Waiting time
	total = 0;

	printf("\n Processo\t   Burst Time\t  Tempo de Espera (Waiting Time)\t  Tempo Corrido (Turn Around Time)");

	for ( i = 0; i < 3; i++)
	{
		tempoCorrido[i] = burstTime[i] + tempoEspera[i]; // calcula o turnaround time somando o burst time mais o waiting time.
		total += tempoCorrido[i]; // calcula o total da media do turnaround time.
		printf("\nProcesso%d:\t\t %d\t\t %d\t\t\t %d",processos[i],burstTime[i],tempoEspera[i],tempoCorrido[i]);
	}

	media_tempoCorrido = (float)total/3;
	printf("\nMedia do Tempo de Espera =%f",media_tempoEspera );
	printf("\nMedia do Tempo Decorrido  =%f",media_tempoCorrido );

}
