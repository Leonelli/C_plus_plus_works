using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>


int main (int argc, char * argv[])
{
  fstream myin,myout;
  char c;

  if (argc!=3) {
    cout << "Usage: ./a.out <sourcefile> <targetfile>\n";
    exit(0);
  }

  myin.open(argv[1],ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(0);
  }

  myout.open(argv[2],ios::out);

  int n;
  myin >> n;

  while (!myin.eof()) {
    if (n<50) {
      myout << n*1.08;
    }
    else if (50<=n && n<100) {
      myout << n*1.05;
    }
    else if(n>=100) {
      myout << n*1.02;
    }
    myout << " ";
    myin >> n;
  }
  myin.close();
  myout.close();
  return 0;
}
