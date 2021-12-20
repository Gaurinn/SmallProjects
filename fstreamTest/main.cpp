#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char input;

    do {
        cout << "r: Read from file" << endl;
        cout << "w: Write to file" << endl;
        cout << "q: Quit" << endl;

        cin >> input;

        if(input == 'r'){

            ///create an instance of a string which will hold a string from a file
            string str;
            ifstream fin; //(fileIn)

            ///open the file
            fin.open("testDoc.txt");
            ///if the file is open, which it is.. then
            if(fin.is_open()) {

                while(!fin.eof()){
                ///read from file and input to a string
                //fin >> str;
                getline(fin, str);
                ///print string from fin
                cout << str << endl;
                }
            }
            ///close file
            fin.close();
        }
        else if(input == 'w'){

            ///create an instance of a string which will be written to a file
            string instring;
            cout << "Enter a string" << endl;
            cin >> instring;

            ///create an instance of outstream named fout, which will write out to a file
            ofstream fout;  //(fileOut)

            ///use fout.open to open the file you want to write to, if file does not
            ///exist it will be created automatically.
            fout.open("testDoc.txt", ios::app);

            ///use fout just like cout, except now it is writing to a file instead of the console
            fout << instring << endl;

            ///remember to close the document when done working with it so it saves
            fout.close();
        }
    }while(input != 'q');

    return 0;
}
