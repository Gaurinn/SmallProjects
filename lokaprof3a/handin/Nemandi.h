#ifndef NEMANDI_H
#define NEMANDI_H


class Nemandi
{
    private:
        int _studentNumber;
        double _grade1;
        double _grade2;

    public:
        Nemandi();
        Nemandi(const int studentNumber, const double grade1, const double grade2);
        void birta();

};

#endif // NEMANDI_H
