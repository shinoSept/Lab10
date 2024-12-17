#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int count = 0;
    double sum = 0;
    double sumSquare = 0;
    string score;
    ifstream source("score.txt");
    while (getline(source,score)) {
        sum += atof(score.c_str());
        sumSquare += pow(atof(score.c_str()),2);
        count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum / count << endl;
    cout << "Standard deviation = " << sqrt( (sumSquare/count) - ( (sum*sum)/(count*count) ) );
}


//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
