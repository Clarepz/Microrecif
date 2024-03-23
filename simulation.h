//
// Created by Clarence Provenaz on 13.03.2024.
//


#ifndef MICRORECIF_SIMULATION_H
#define MICRORECIF_SIMULATION_H

#include <string>
#include "lifeform.h"


class Simulation{
public:
    Simulation(char* inputFile);
private:
    int nbSim;
    int nbAlg;
    int nbCor;
    int nbSca;

    std::vector<Alg> algs;
    std::vector<Cor> cors;
    std::vector<Sca> scas;

    void readFile(char* fileName);

    bool corIdUnicityCheck() const;
    bool corCollisionCheck() const;
    bool scaTargetCheck() const;
};
#endif //MICRORECIF_SIMULATION_H
