#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
    int count = 0;
    float sum = 0;
    float mean = 0;
    float stdd = 0;
    float std = 0;

    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        stdd += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum / count;
    std = sqrt(stdd - pow(mean,2));


    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = " << std << endl;
    
}



//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
