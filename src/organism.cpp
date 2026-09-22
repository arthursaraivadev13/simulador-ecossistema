#include "organism.hpp"
#include <iostream>
#include <string>

    int Organism:: individuals = 0;
   //construtor 
    Organism::Organism(std::string species, int energy, int trophic_level, int reproductive_capacity)
        :
        species(species),
        energy(energy),
        trophic_level(trophic_level),
        reproductive_capacity(reproductive_capacity)
        {}


    int Organism:: get_energy(){
        return energy;
    }

    void Organism:: set_energy(int energy_value){
        energy = energy_value;
    }

     int Organism:: get_trophic_level(){
        return trophic_level;
    }

    int Organism:: get_reproductive_capacity(){
        return reproductive_capacity;
    }

    bool Organism:: is_alive(){
        return energy>0;
    }

    int Organism:: get_individuals(){
        return individuals;
    }










    