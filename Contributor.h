//
// Created by Alexis on 04.04.2020.
//
#include "Contribution.h"
#include <vector>

class Contributor {
public:
    static string name;
    vector <Contribution> contrib;
    Contributor(){}
    Contributor(string name){}
    void initContrib(Contribution contribution)
    {
        contrib.push_back(contribution);
    }
};

string Contributor::name = "Alexis";



