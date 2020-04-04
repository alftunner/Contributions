//
// Created by Alexis on 04.04.2020.
//
#pragma once
#include <string>

using namespace std;

class Contribution {
private:
    double percent;
    int term; // срок измеряется в количестве месяцев
    int summa; // сумма вклада в тысячах
public:
    Contribution(){}
    Contribution(double percent, int term, int summa)
    {
        setPercent(percent);
        setTerm(term);
        setSumma(summa);
    }

    void setPercent(double percent)
    {
        this->percent = percent;
    }
    void setTerm(int term)
    {
        this->term = term;
    }
    void setSumma(int Summa)
    {
        this->summa = summa;
    }

    double getPercent()
    {
        return percent;
    }
    int getTerm()
    {
        return term;
    }
    int getSumma()
    {
        return summa;
    }

    friend void calcSumma(Contribution& contribution)
    {
        if (contribution.getTerm() > 6 && contribution.getTerm() < 12)
        {
            double fat = 0;
            fat = contribution.getPercent() * contribution.getSumma() * contribution.getTerm() +
                  contribution.getSumma() + 0.05 * contribution.getSumma();
            cout << fat;
            contribution.setSumma(fat);

        }else if (contribution.getTerm() > 12)
        {
            double fat = 0;
            fat = contribution.getPercent()*contribution.getSumma() * contribution.getTerm() + contribution.getSumma() + 0.1*contribution.getSumma();
            contribution.setSumma(fat);
        } else {
            double fat = 0;
            fat = contribution.getPercent()*contribution.getSumma() * contribution.getTerm() + contribution.getSumma();
            contribution.setSumma(fat);
        }
    }
};

