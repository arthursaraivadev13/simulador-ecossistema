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
void:: add_organism(Organism* new_org){ 

}







