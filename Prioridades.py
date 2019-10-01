#FELLIPE EMANOEL - 554774
#VINICIUS MORALIS - 568600
#LUCAS SOUZA - 569534

import random

#Escalonamento Prioridades

def escalonaPrioridade(processosOrdenados,tempo):
    processosBloqueados=[]
    if len(processosOrdenados) == 0:
        print("Media tempo= ", (tempo / 5), "s")
        return True
    else:
        for procIndex in processosOrdenados:
            if tempo <= procIndex['Tempo de Chegada']:
                tempo += procIndex['Tempo de Execucao']
                procIndex['Tempo de Execucao'] -= quantum
            else:
                tempo += procIndex['Tempo de Execucao']
                procIndex['Tempo de Execucao'] -= quantum
            if procIndex['Tempo de Execucao'] <= 0:
                procIndex['Situacao Processo'] = 'Executado'
                procIndex['Tempo de Execucao'] = 0
                processosExecutados.append(procIndex)
            else:
                procIndex['Situacao Processo'] = 'Já Passou'
                processosBloqueados.append(procIndex)
    escalonaPrioridade(sorted(processosBloqueados,key = lambda fila:fila['Prioridade'],reverse=True),tempo)

fila=[]
for index in range(3):
    processos = {
        'Processo: ': index,
        'Situacao Processo':'Nao Executou',
        'Burst Time': random.randint(5,50),
        'Tempo de Chegada':random.randint(0,5),
        'Tempo de Execucao' : 0,
        'Prioridade': random.randint(0, 5) #0 - Muito Baixa / 1- Baixa / 2 - Média / 3 - Alta / 4 - Muito Alta / 5 - Altissima
    }
    #classe prioridade
    processos['Tempo de Execucao'] = processos['Burst Time']
    fila.append(processos) # Adiciona os itens na lista

print("Processos Criados:", fila)

#ordena os processos de acordo com prioridade
processosOrdenados = sorted(fila,key = lambda fila:fila['Prioridade'],reverse=True)

print("Processos Ordenados pro Prioridade", processosOrdenados)
tempo=0
processosBloqueados=[]
processosExecutados=[]
quantum=10
escalonaPrioridade(processosOrdenados,tempo)

print("Processos Executados: ", processosExecutados)
print("Processos Bloqueados: ", processosBloqueados)
