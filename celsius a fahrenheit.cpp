#include<iostream>

using namespace std;

int main(){

    float gradosC = 0, gradosF = 0;

    cout<<"Ingrese los grados en C: ";
    cin>>gradosC;

    gradosF = (gradosC*9/5)+32;

    cout<< gradosC << " grados Celsius son " << gradosF << " fahrenheit" << endl;

return 0;
}

