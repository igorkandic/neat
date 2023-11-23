
#include <iostream>
#include <string>
#include "genome.h"
#include "network.h"
namespace AI{

class Bot{

    public:
        Bot(std::string name);
        Bot(std::string name, std::string genes_path);
        double evaluate_gamestate(/*gamestate*/);
        bool should_double(/*gamestate*/);
        bool should_accept_double(/*gamestate*/);
        std::string get_name();
    private:
        std::string name = "";
        NEAT::Genome *genome;
        NEAT::Network *net;

};
}