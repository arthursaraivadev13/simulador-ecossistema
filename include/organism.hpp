#include <string>


class Organism {

    private:

    std::string species;
    int energy;
    int trophic_level;
    int reproductive_capacity;

    //those ones just give the total number of individuals and which it is
    static int individuals;
    int individual_id;


    public:

    //construtor
    Organism(std::string species, int energy, int trophic_level, int reproductive_capacity);
     
    int get_energy();
      
    void set_energy(int energy_value);
   
    int get_trophic_level();
      
    int get_reproductive_capacity();
    
    bool is_alive();
     
    static int get_individuals();
      
};