#include <iostream>
using namespace std;
#define PI 3.14

int main ()
{

	float raio;
	float perimetro;
	float area;
	
	cout << "Digite abaixo o numero do raio \n";
	cin >> raio;
	perimetro = 2 * PI * raio;
	area = PI * (raio*raio);
	cout << "O perimetro corresponde a... " << perimetro << "\n";
	cout << "A area corresponde a... " << area;
	
}
