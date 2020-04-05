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
    void setSumma(int summa)
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

    void calcSumma()
    {
        if (getTerm() > 6 && getTerm() < 12)
        {
            double fat = 0;
            fat = getPercent() * getSumma() * getTerm() +
                  getSumma() + 0.05 * getSumma();
            setSumma(fat);

        }else if (getTerm() > 12)
        {
            double fat = 0;
            fat = getPercent()*getSumma() * getTerm() + getSumma() + 0.1*getSumma();
            setSumma(fat);
        } else {
            double fat = 0;
            fat = getPercent()*getSumma() * getTerm() + getSumma();
            setSumma(fat);
        }
    }
};


