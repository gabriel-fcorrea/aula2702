#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.14

int main ()
{

	int raio;
	float perimetro, area;
	
	cout << "Digite abaixo o numero do raio \n";
	cin >> raio;
	
	perimetro = 2 * PI * raio;
	area = PI * pow(raio, 2);
	
	cout << "O perimetro corresponde a... " << perimetro << "\n";
	cout << "A area corresponde a... " << area;
	
}
