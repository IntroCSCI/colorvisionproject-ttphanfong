//Author: Travis Phan-Fong
#include <iostream>
#include <fstream>
using namespace std;

///
/// GOAL: Pallette Generator CSS
///

int main()
{
  int num;
  string filename;

  cout << endl <<"Enter needed number of colours:" <<endl;
  cin >> num;
  cout << "Enter name of file to save to (.txt):"<<endl;
  cin >> filename;
  fstream savedFile(filename);
  savedFile << num;
  cout << endl<< "Saved to " << filename << " with " << num << " colours chosen.";
  savedFile.close();

  return 0;
}
