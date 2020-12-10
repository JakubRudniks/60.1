#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int liczby;

class files {
   ifstream fileIn;
   ofstream fileOut;
  public:
   files(); 
   ~files();
   void loop();
};

files::files()
{
   fileIn.open("F:\zadania maturalne\liczby.txt");
   fileOut.open("F:\zadania maturalne\wynik.txt");
}

files::~files()
{
   fileIn.close();
   fileOut.close();
}

void files::loop()
{

  while(!fileIn.eof())
     {
               fileIn>>liczby;
                if(liczby>1000)
                {
                fileOut<<liczby;
                cout<<liczby<<" n ";
                }

     }
}

main()
{
  files liczby;
  liczby.loop();
  return 1;
}
