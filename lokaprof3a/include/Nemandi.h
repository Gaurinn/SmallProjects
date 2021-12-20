#ifndef NEMANDI_H
#define NEMANDI_H

using namespace std;



class Nemandi
{
    private:
        int _studentNumber;
        double _grade1;
        double _grade2;
        char _nam[21];

    public:
        Nemandi();
        Nemandi(const int studentNumber, const double grade1, const double grade2);
        Nemandi(const int studentNumber, const double grade1, const double grade2, char* nam);

        void birta();

        friend bool operator < (const Nemandi& leftSide, const Nemandi& rightSide);
        friend ostream& operator <<(ostream& outs, const Nemandi& student);

};

#endif // NEMANDI_H
