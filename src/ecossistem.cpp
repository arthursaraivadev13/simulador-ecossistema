#include"ecossistem.hpp"
#include<iostream>

//construtor
Ecossistem::Ecossistem(int capacity){
    array_capacity = capacity;
    num_individuals = 0;
    organism_list = new Organism*[array_capacity];
}
//destrutor
Ecossistem::~Ecossistem(){
    for(int i=0;i<num_individuals;i++){
        delete organism_list[i]; //deleta cada objeto
    }
    delete[] organism_list; //apaga o vetor todo

}

//expande ou comprimi(depende do parametro capacity passado) o array dinâmico de organismos
void Ecossistem:: resize_array(int capacity){
    //criando uma nova lista com o novo tamanho
    Organism** resized_organism_list = new Organism*[capacity];

    //copiando os elementos 
    for (int i = 0; i < num_individuals; ++i) {
        resized_organism_list[i] = organism_list[i];
    }
    //deleta a lista antiga e passa a nova pras variaveis ja existentes
    delete[] organism_list;
    organism_list = resized_organism_list;
    array_capacity = capacity;
}

//aloca um novo organismo gerado no array dinamico de organismo == recebe o proprio objeto como parametro
void Ecossistem:: add_organism(Organism* new_org){ 
    //se tiver cheio dobra o tamanho chamando a função de resize e passando o valor que sera multiplicado
    if(num_individuals == array_capacity){
        resize_array(array_capacity*2);
    }
    organism_list[num_individuals] = new_org;
    num_individuals++;
}

//percorre o vetor de organismos olhando quem está morto e deleta eles
void Ecossistem::remove_dead(){
    for(int i =0;i<num_individuals;i++){
        if(!(organism_list[i])->is_alive()){ //chama a função que olha se esta vivo
            delete organism_list[i];    

            organism_list[i] = organism_list[num_individuals-1];    //swap with last ==> pega o ultimo elemento do vetor e coloca na posição que foi liberada
            organism_list[num_individuals-1] = nullptr; //coloca null na ultima posição do vetor antes ocupada pelo elemento trocado

            num_individuals--; //se morreu então menos um individuo
            i--; //decrementa o i pra que o elemento puxado tambem seja analisado
        }
    }
    //se o numero de individuos diminuir a 25% da capacidade atual do vetor e não for menor que 10 -> reduz a capacidade pela metade  
    if(num_individuals <= array_capacity/4 && array_capacity > 10){
        resize_array(array_capacity/2);
    }
}







