#ifndef SUBSTRACT_H
#define SUBSTRACT_H
class Substract{
    public:
        Substract(int a,int b)
            :a{a},b{b}{ };
        int getresult();
        ~ Substract (){ };
    private: 
        int a;
        int b;
};
#endif