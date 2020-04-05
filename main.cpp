#include <iostream>
#include "Contribution.h"
#include "Contributor.h"

void showContributor(Contributor contributor)
{
    cout << "Name: " << contributor.name << endl;
    for (auto i : contributor.contrib)
    {
        cout << "====Contributions=====" << endl;
        cout << "Percent: " << i.getPercent() << endl;
        cout << "Term: " << i.getTerm() << endl;
        cout << "Summa: " << i.getSumma() << endl;
    }
}

int main() {
    Contribution vklad(0.2, 7, 50000);
    Contributor alexis("Alexis");
    vklad.calcSumma();
    alexis.initContrib(vklad);
    showContributor(alexis);
    return 0;
}
