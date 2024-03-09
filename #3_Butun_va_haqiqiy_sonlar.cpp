// Sana: 9 - mart 2024 - yil
// Muallif: Baqoyev Feruzbek Barakayevich
// Mavzu Butun va haqiqiy sonlar

#include <iostream>
#include <math.h>
using namespace std;


// Maqsad: Toifalarni kompyuter xotirasida egallagan hajmini aniqlash
/*
int main(){
	cout << "char " << sizeof(char) << endl;
	cout << "bool " << sizeof(bool) << endl;
	cout << "float " << sizeof(float) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "long double" << sizeof(long double) << endl;
	cout << "unsigned short int " << sizeof(unsigned short int) << endl;
	cout << "short int " << sizeof(short int) << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "long int" << sizeof(long int) <<endl;
	cout << "unsigned long int" << sizeof(unsigned long int) << endl;
	cout << "unsigned int " << sizeof(unsigned int) << endl; 
}
*/

// Maqsad: Haqiqiy sonni bir nechta xona aniqlikda chiqarish
/*
#include <iomanip>
int main(){
	float a, b;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	a = a / b;
	cout << a << endl;
	cout << setprecision(2) << fixed << a;
}
*/

// Maqsad: Bir toifadan boshqasiga o`tish
/*
int main(){
	float haqiqiy = 5.25;
	int oshkor, oshkormas;
	
	oshkormas = haqiqiy;
	oshkor = (int) haqiqiy;
	
	cout << "haqiqiy = " << haqiqiy << endl;
	cout << "oshkor = " << oshkor << endl;
	cout << "oshkormas = " << oshkormas << endl;
}
*/

// Maqsad: n natural son berilgan uning yuzlar xonasini aniqlash (1000 < n < 99)
/*
int main(){
	float n;
	
	cout << "1000 < n < 99" << endl;
	cout << "n = "; cin >> n;
  	n = n / 100;
  	cout << "yuzlar xonasi " << (int)n;
}
*/

// Maqsad: (9 < n < 100) n sonining oxirgi raqami, birinchi raqami va raqamlar yig`indisini topish
/*
int main(){
	int n, o, b;
	
	cout << "9 < n < 100" << endl;
	cout << "n = "; cin >> n;
	b = n / 10;
	o = n % 10;
	
	cout << "oxirgi raqami = " << o << endl;
	cout << "birinchi raqami = " << b << endl;
	cout << "raqamlar yig`indisi = " << o + b;
}
*/

// Maqsad: uchburchaknning yuzasini topish va uni 2 ta xonasigacha yaxlitlash
/*
#include <iomanip>
int main(){
	float a, b, c, S, p;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "S = " << setprecision(2) << fixed << S;
}
*/

// Maqsad: uchburchakka ichki chizilgan aylananing radiusini topish va uchburchakning 2 - katetini topish
/*
int main(){
	float a, b, c, r;
	
	cout << "c = "; cin >> c;
	cout << "a = "; cin >> a;
	
	b = sqrt(pow(c,2) - pow(a,2));
	r = (a + b + c) / (a * b);
	
	cout << "b = " << b << endl;
	cout << "aylana radiusi " << r;
}
*/

// Maqsad: arifmetik progressiya yig`indisini topish
/*
int main(){
	float a, d, S;
	int n;
	
	cout << "a = "; cin >> a;
	cout << "d = "; cin >> d;
	cout << "n = "; cin >> n;
	
	S = (2 * a + d * (n - 1)) * n / 2;
	cout << "S = " << S ;
}
*/
