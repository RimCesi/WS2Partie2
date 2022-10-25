#include "pch.h" 
#include "gpcs1.h" 
#include "gpcs2.h"  

using namespace std;


int main()
{
    int pause;

    gpcs1 p1;  	
    gpcs2 p2;
    
    cout << "gpcs1S1----------" << endl;
    p1.gpcs1S1();
    
    cout << "gpcs1S2-----------" << endl;
    p1.gpcs1S2();
    
    cout << "gpcs2S1------------" << endl;
    p2.gpcs2S1();

    cin >> pause;
}
