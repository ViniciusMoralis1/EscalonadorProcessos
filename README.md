# Escalonador Processos

Projeto destinado a matéria de Sistemas Operacionais II

PROJETOS:
 - First Come First Serve: Primeiro processo da lista é o que será executado;
 
 - Shortest Job: O trabalho mais curto primeiro (SJF) ou o trabalho mais curto a seguir, é uma política de agendamento que seleciona o processo de espera com o menor tempo de execução a ser executado em seguida. SJN é um algoritmo não-preventivo.O Trabalho mais curto primeiro tem a vantagem de ter um tempo médio de espera mínimo entre todos os algoritmos de agendamento.
É um algoritmo ganancioso.
Pode causar fome se processos mais curtos continuarem chegando. Este problema pode ser resolvido usando o conceito de envelhecimento.
É praticamente inviável, pois o sistema operacional pode não saber o tempo de burst e, portanto, não pode classificá-los. Embora não seja possível prever o tempo de execução, vários métodos podem ser usados ​​para estimar o tempo de execução de uma tarefa, como uma média ponderada dos tempos de execução anteriores. O SJF pode ser usado em ambientes especializados, onde estimativas precisas do tempo de execução estão disponíveis.
 
 - Shortest Job Preemptive: Nesse algoritmo de agendamento, o processo com a menor quantidade de tempo restante até a conclusão é selecionado para execução. Como o processo atualmente em execução é aquele com o menor tempo restante por definição, e como esse tempo deve ser reduzido apenas à medida que a execução progride, os processos sempre serão executados até que sejam concluídos ou um novo processo seja adicionado, o que requer menos tempo.

- Round Robin: Veja mais sobre: https://deinfo.uepg.br/~alunoso/2016/ROUNDROBIN/

- Escalonamento de prioridades: O processo com maior prioridade deve ser executado primeiro;



Nomes: Fellipe Emanoel
       Vinicius Moralis
       Lucas Souza
       
<i>Ciência da Computação - 6º Semestre</i><br/>
<b>Marilia-2019</b>
