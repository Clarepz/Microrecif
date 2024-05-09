//
// simulation.h, Provenaz Clarence, Royer Yann
// conventions ok


#ifndef SIMULATION_H
#define SIMULATION_H

#include <string>
#include "lifeform.h"

class Simulation {
public:
    Simulation();
    Simulation(char* inputFile);
    void saveAs(std::string const & fileName) const;
    void display() const;
    void update(bool algBirthOn);
    int getNbSim() const {return nbSim;}
    int getNbAlg() const {return nbAlg;}
    int getNbCor() const {return nbCor;}
    int getNbSca() const {return nbSca;}
    void updateNbSca ();
private:
    int nbSim;
    int nbAlg;
    int nbCor;
    int nbSca;

    bool initSuccess;

    std::vector<Alg> algs;
    std::vector<Cor> cors;
    std::vector<Sca> scas;

    bool readFile(char* fileName);

    bool corIdUnicityCheck() const;
    bool corCollisionCheck() const;
    bool scaTargetCheck() const;
    Cor* findCorById (int id);
    Segment corLastSegmentById(int id);
    void killCoral(int index);
    void allocateTargetToScavenger(Cor &deadCoral);

};

#endif
