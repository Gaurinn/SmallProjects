#ifndef NEMANDI_H
#define NEMANDI_H



class Nemandi
{
    private:
        int _studentNumber;
        double _grade1;
        double _grade2;
        char _nam[];

    public:
        Nemandi();
        Nemandi(const int studentNumber, const double grade1, const double grade2);
        Nemandi(const int studentNumber, const double grade1, const double grade2, char* nam);

        void birta();

        friend bool operator < (const Nemandi& leftSide, const Nemandi& rightSide);

};

#endif // NEMANDI_H
