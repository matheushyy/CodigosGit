/*
URI: 1739 Um número pertence à sequência de Threebonacci caso pertença à sequência de Fibonacci (assuma que o primeiro termo da série é o 1) e atenda pelo 
menos um dos últimos critérios abaixo: 1 – A representação do número possui pelo menos um dígito 3. 2 – O número é múltiplo de 3. Entrada Cada caso 
de teste contém um inteiro N (1 ≤ N ≤ 60 ). A entrada termina com o fim de arquivo (EOF). Saída Para cada caso de teste imprima uma linha contendo o 
N-ésimo termo da série de Threebonacci.
*/


#include<iostream>
#include<cmath>
#include <string>

using namespace std;

int main(){
    long long int v1=1, v2=2, aux=1;
    int cont=0, t=0;
    string valor;


    while(cin>>t||!cin.eof()){
        v1=1, v2=2, aux=1, cont=0;
    while(cont!=t){

        aux=v1+v2;
        v1=v2;
        v2=aux;

        if(aux%3==0)cont++;
        else if(aux%10==3)cont++;
        else{
            valor=::to_string(aux);
            int comp = valor.length();
                for(int i = 0;i<comp;i++){
                    if(valor[i]=='3') {cont++;i=5000;}
                }
        }

    }
    cout << aux<<endl;
    }


    return 0;
    //by Matheus Souza
}
