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
  string colour;

  cout << endl <<"Enter needed number of colours (2-6):" <<endl;
  cin >> num;
  cout << "Enter name of file to save to (.css):"<<endl;
  cin >> filename;
  fstream savedFile(filename);

  for(int x = 1; x <= num;){
    int i = rand()%6;
    int r, o, y, g, b, p;

    if (i == 0 and r == 0){
      colour = "red";
      r= 1;
      x++;
    }
    if (i == 1 and o == 0){
      colour = "orange";
      o= 1;
      x++;
    }
    if (i == 2 and y == 0){
      colour = "yellow";
      y= 1;
      x++;
    }
    if (i == 3 and g == 0){
      colour = "green";
      g= 1;
      x++;
    }
    if (i == 4 and b == 0){
      colour = "blue";
      b= 1;
      x++;
    }
    if (i == 5 and p == 0){
      colour = "purple";
      p= 1;
      x++;
    }
    savedFile << colour;
  }


  cout << endl<< "Saved to \'" << filename << "\' with " << num << " colours chosen.";
  savedFile.close();

  return 0;
}
