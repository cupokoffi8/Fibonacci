#include <iostream>
#include <stdlib.h>
using namespace std; 

void hello() {
  int num, t1 = 0, t2 = 1, nextTerm = 0;
  cout << "How many numbers do you want in this finabacci series?\n";
  cin >> num;

  cout << "Here are the numbers in your series: \n";
  for (int i = 1; i <= num; ++i) {
        if(i == 1) {
	  cout << i << ". " << t1 << "\n";
            continue;
        }
        if(i == 2) {
	  cout << i << ". " << t2 << "\n";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << i << ". " << nextTerm << "\n";
    }
}

int main() {
  char ans; 
  cout << "Do you want to see a finabacci series? (y/n)\n";
  cin >> ans;

  switch(ans) { 
    case 'y' :
    hello();
    break; 

    default :
    cout << "Okay sorry, bye.\n";
    return 0;
  }

}
      
