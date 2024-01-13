#include <iostream>
using namespace std;

int main() {
    char choice;
    int g=0,x=0;
    cout << "Enter your character: ";
    cin >> choice;
    if(choice<='A'){
    cout<<" please enter CAPITAL letter other than A";
    }
    else{

    for (char ab = 'A'; ab <= choice; ab++) {
        if(ab=='A'){
for(char k='A';k<=choice;k++)
cout<<k;
for(char k=choice-1;k>='A';k--)
    cout<<k;
        }
    else{
    for(char k='A';k<=choice-g;k++)
    cout<<k;
    for(int k=0;k<=x;k++)
    cout<<" ";
    for(char k=choice-g;k>='A';k--)
    cout<<k;
    x=x+2;
    }
    cout<<endl;
    g++;
    }
g=g-2;
x=x-4;
       for (char ab = 'A'; ab<choice; ab++) {
        if (ab==(choice-1)){
        for(char k='A';k<=(choice-g);k++)
            cout<<k;
    for(char k=choice-g-1;k>='A';k--)
    cout<<k;
        }
        else{

    for(char k='A';k<=(choice-g);k++)
            cout<<k;
    for(char k=0;k<=x;k++)
            cout<<" ";

    for(char k=choice-g;k>='A';k--)
    cout<<k;
    cout<<endl;
    x=x-2;
        }
     g--;
     }
    }

}
