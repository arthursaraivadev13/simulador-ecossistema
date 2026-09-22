#include "organism.hpp"

class Ecossistem {

    private:

        Organism** organism_list;  //array de ponteiros de ponteiros que vão guardar cada organismo(objetos)
        int array_capacity; //capacidade que pode ser aumentada de acordo com a necessidade
        int num_individuals;    //quantidade de individuos atuais
        
        //metodo privado pelo fato de gerenciar diretamente a memória ao aumentar ou reduzir o tamanho da lista dinâmica
        void resize_array(int capacity);

    public:

        //construtor 
        Ecossistem(int array_capacity);

        //destrutor
        ~Ecossistem();

        //adiciona organismos a lista
        void add_organism(Organism* new_org);

        //atualiza o ecossistema = passagem de tempo
        void pass_time();

        //percorre o vetor e destrói os mortos
        void remove_dead();

        

    
    //um metodo de atualização/ que faz a vida acontecer realmente
    //um metodo que percorrer o vetor de Organismos e quem estiver morto ele deleta

};