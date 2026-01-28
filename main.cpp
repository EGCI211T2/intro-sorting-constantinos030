//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
#include <iomanip>

using namespace std;
#include "sorting.h"

int main(int argc, char * argv[]) {
    
 
  cout<<"argc is "<<argc<<endl;
    int N=argc-1;
    int *a = new int[N];
    for(int i=1;i<argc;i++){
        cout<<"argv[" << i<<"]" <<argv[i]<<endl;
      
    }
    
    /* Convert to numbers*/
   

    for (int i = 1; i<argc; i++)
    {
      a[i-1] = atoi(argv[i]);
    }

     cout<<"Before sorting: ";
    display(a,N);
    sort(a, N);
    
    
    cout<<"After sorting: ";
    display(a, N);
    
    delete a;
    
    
    return 0;
}
