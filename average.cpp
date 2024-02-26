#include <iostream>
using namespace std;

int main(int argc,char *argv[]){
    double sum = 0;
    double avg;
    if(argc > 1){
        for(int i =0;i < argc;i++){
            sum += atof(argv[i]);
        }
        avg = sum/(argc-1);
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " << avg;
        cout << "\n---------------------------------";
    }else{
        cout << "Please input numbers to find average.";
    }
    
}
