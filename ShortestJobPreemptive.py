#FELLIPE EMANOEL - 554774
#VINICIUS MORALIS - 568600
#LUCAS SOUZA - 569534

import random

# Shortes Job First - Preemptivo

def shortJobP(processosOrdenados,tempo):
    processosBloqueados=[]
    if len(processosOrdenados) == 0:
        print("Media tempo Espera: ", (tempo / 5), "s")
        return True
    else:
        for procIndex in processosOrdenados:
            if tempo <= procIndex['Tempo de chegada']:
                tempo += procIndex['Tempo de Execucao']
                procIndex['Tempo de Execucao'] -= quantum
            else:
                tempo += procIndex['Tempo de Execucao']
                procIndex['Tempo de Execucao'] -= quantum
            if procIndex['Tempo de Execucao'] <= 0:
                procIndex['Status'] = 'Executado'
                procIndex['Tempo de Execucao'] = 0
                processosExecutados.append(procIndex)
            else:
                procIndex['Status'] = 'Já Passou'
                processosBloqueados.append(procIndex)
    shortJobP(sorted(processosBloqueados,key = lambda filaProcessos:filaProcessos['Tempo de Execucao']),tempo)

filaProcessos=[]
for i in range(3):
    processos = {
        'Processo': i,
        'Status':'Não Executado',
        'Burst Time': random.randint(5,50),
        'Tempo de chegada':random.randint(0,5),
        'Tempo de Execucao' : 0
    }
    processos['Tempo de Execucao'] = processos['Burst Time']
    filaProcessos.append(processos)

print("Processos", filaProcessos)

#ordena de acordo com o burst time
processosOrdenados = sorted(filaProcessos,key = lambda filaProcessos:filaProcessos['Burst Time'])

print(processosOrdenados)
tempo=0
processosBloqueados=[]
processosExecutados=[]
quantum=10
shortJobP(processosOrdenados, tempo)

print("Processos Executados: ", processosExecutados)
print("Processos Bloqueados: ", processosBloqueados)
