#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int round=0;
    double sum=0;
    double osum=0;
    ifstream tomato("score.txt");
    string cilly;
    while (getline(tomato,cilly)){
        sum+=stod(cilly);
        osum+=pow(stod(cilly),2);
        round++;
    }
    
    
    
    cout << "Number of data = "<<round<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<sum/round<<"\n";
    cout << "Standard deviation = "<<sqrt((osum/round)-pow((sum/round),2));
}