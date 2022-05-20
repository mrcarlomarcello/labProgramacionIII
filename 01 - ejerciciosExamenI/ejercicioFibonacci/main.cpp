#include <iostream>

using namespace std ;

int main( ) {

int numero,tempX=0,tempY=1,tempZ=1;
    cout << "Digite el numero de elementos: ";

cin >> numero ;

for (int i=1;i<numero;i++) {
    tempZ=tempX+tempY;

cout<<tempZ<<" ";

tempX=tempY;

tempY=tempZ;

}

cout << "\n " ;

return 0;

}
