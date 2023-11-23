#include "bot.h"
#include <istream>

namespace AI{
    std::string Bot::get_name()
    {
        return name;
    }
    Bot::Bot(std::string name)
    {
        this->name = name;
        std::ifstream iFile("backgammonstartgenes", std::ios::in);
        std::string curword;
        int id;
        genome = new NEAT::Genome(id, iFile);
        net = genome->genesis(id);
        net->give_name(name);
    }
    Bot::Bot(std::string name, std::string genome_path)
    {
        this->name = name;
        std::ifstream iFile(genome_path, std::ios::in);
        std::string curword;
        int id;
        genome = new NEAT::Genome(id, iFile);
        net = genome->genesis(id);
        net->give_name(name);
    }
}