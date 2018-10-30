/*
	Passar como parâmetro um número suficientemente grande para verificar a corretude do escalonador.
	Redirecionar a saída para um arquivo para melhor visualização do escalonamento.
	Exemplo de execução:
		./teste 10000 > arquivo_teste
*/

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "param.h"
#define NPROCS 10

int stoi(char * str_num)
{
        int k = 0;
        char * ptr = str_num;
        while(*ptr)	{
                k *= 10;
				k += *ptr-'0';
                ptr++;
        }
        return k;
}

void test(int T, int id){
		int j, k;
		for(j = 0; j < T; j++){
			for(k = 0; k < T; k++){
                for(k = 0; k < T; k++){
                    for(k = 0; k < T; k++){
                        for(k = 0; k < T; k++);
                    }
                }
            }
                
            //printf(2, "PROCESS %d\n", id);
            printf(2, "", id);
		}
        printf(2, "PROCESS %d FINISHED\n", id);
		exit();
}

int main(int argc, char **argv)
{
  int PID, T, K;
       T = stoi(argv[1]);

        for(K = 0; K < NPROCS; K++){
            PID = fork();
            
            if(PID > 0) {
                
            } else if(PID == 0) {
                settickets(10 * (11 - K));
                test(T, K); 
                exit();
            }
  
        }
        
        for(; K > 0; K--){
            if(wait() < 0){
            printf(1, "wait stopped early\n");
            exit();
            }
        }

        if(wait() != -1){
            printf(1, "wait got too many\n");
            exit();
        }

        exit();

        return 0;
}