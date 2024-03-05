// Muallif: Baqoyev Feruzbek Barakayevich
// Sana: 3-mart 2024-yil
// Mavzu: Kiritish,chiqarish va o`zlashtirish operatorlariga doir masalalar 
#include <iostream>
#include <math.h>
using namespace std;

// TASK 1
// Maqsad: Kvadrat perimetrini topish
/*
int main(){
	float a;
	cout << "a = " << endl; cin >> a;
	cout << "P = " << 4*a;
	return 0;
}
*/

// TASK 2
// Maqsad: Kvadratning yuzasini topish
/*
int main(){
	float a;
	cout << "a = " << endl; cin >> a;
	cout << "S = " << pow(a,2);
	return 0;
}
*/

// TASK 3
// Maqsad: Tog`ri to`rtburchakning yuzasi va perimetrini topish
/*
int main(){
	float a, b;
	cout << "a = "; cin >> a;
	cout << endl << "b = "; cin >> b;
	cout << endl << "S = " << a*b ;
	cout << endl << "P = " << 2*(a + b); 
	return 0;
	
}
*/

// TASK 4 
// Maqsad: Aylana diametri berilgan uning uzunligini topish
/*
int main(){
	float d, pi  = 3.14;
	cout << "d = "; cin >> d;
	cout << "L = " << pi*d;
	return 0;
}
*/

// TASK 5
// Maqsad: Kubning hajmi va to`la sirtini topish
/*
int main(){
	float a;
	cout << "a = ";cin >> a;
	cout << "V = " << pow(a,3) << endl;
	cout << "S = " << 6 * pow(a,2);
	return 0;
}
*/

// TASK 6
// Maqsad: Parallelopipedning hajmi va to`la sirtini topish
/*
int main(){
	float a,b,c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "V = " << a*b*c << endl;
	cout << "S = " << 2*(a*b + b*c + a*c);
	return 0;
}
*/

// TASK 7
// Maqsad: Doiraning uzunligi va yuzasini aniqlash
/*
int main(){
	float r, pi = 3.14;
	cout << "R = ";cin>> r;
	cout << "L = " << 2*pi*r << endl;
	cout << "S = " << pi*pow(r,2);
	return 0;
}
*/

// TASK 8
// Maqsad: ikkita sonning o`rta arifmetigini topish
/*
int main (){
	float a,b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "o\'rta arifmetik = " << (a+b)/2;
	return 0;
}
*/

// TASK 9
// Maqsad: ikkita manfiy bo`lmagan sonning o`rta geometrigini topish
/*
int main(){
	float a,b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "o\'rta geometrik = " << sqrt(a*b);
	return 0;
}
*/

// TASK 10
// Maqsad: ikkita sonning yig`indisi, ko`paytmasi va har birining kvadratini topish
/*
int main(){
	float a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "a + b = " << a+b << endl;
	cout << "a * b = " << a* b << endl;
	cout << "a*a = " << a*a << endl;
	cout << "b * b = " << b*b;
	return 0;
}
*/

// TASK 11
// Maqsad: ikkita son berilgan ularning har birining moduli aniqlansin
/*
int main(){
	float a, b;
	cout << "a = " ; cin >> a;
	cout << "b = "; cin >> b;
	cout << fabs(a)<< endl;
	cout << fabs(b) << endl;
	return 0;
}
*/

// TASK 12
// Maqsad: to`g`ri to`rtburchakning gipotenuzasi va perimetrini topish
/*
int main(){
	float a, b,c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	c = sqrt(pow(a,2) + pow(b,2));
	cout << "c = " << c << endl;
	cout << "P = " << a + b + c;
	return 0;
}
*/

// TASK 13
// Maqsad: umumiy markazga ega bo`lgan ikkita aylana berilgan ularning yuzalari va yuzlarining ayirmasi topilsin
/*
int main(){
	float r1, r2, S1, S2, pi = 3.14;
	cout << "R1 = "; cin >> r1;
	cout << "R2 = "; cin >> r2;
	S1 = pi * pow(r1,2);
	S2 = pi * pow(r2,2);
	cout << "S1 = " << S1 << endl;
	cout << "S2 = " << S2 << endl;
	cout << "S3 = " << fabs(S1-S2);
	return 0;
}
*/

// TASK 14
// Maqsad: aylana uzunligi orqali uning radiusi va yuzasini topish
/*
int main(){
	float L,r, pi = 3.14;
	cout << "L = "; cin >> L;
	r = L/(2*pi);
	cout << "R = " << r << endl;
	cout << "S = " << pi * pow(r,2);
}
*/

// TASK 15
// Maqsad: aylana yuzasi orqali diametri va radiusini topish
/*
int main(){
	float S, r, pi = 3.14;
	cout << "S = "; cin >> S;
	r = sqrt(S/pi);
	cout << "R = " << r <<endl;
	cout << "D = " << 2*r;
	return 0;
}
*/

// TASK 16 
// Maqsad: sonlar o`qida 2 ta nuqta orasidagi masofani topish
/*
int main(){
	float x1, x2;
	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "x2-x1 = " << x2-x1;
	return 0;
}
*/

// TASK 17
// Maqsad: sonlar o`qida A,B,C nuqtalar berilgan. nuqtalar orasidagi masofa va masofalarning yig`indisi topilsin
/*
int main(){
	float a,b,c,ab,bc,ac;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	ab = fabs(b-a);
	ac = fabs(c-a);
	bc = fabs(c-b);
	cout << "ab = " << ab << endl;
	cout << "ac = " << ac << endl;
	cout << "bc = " << bc << endl;
	cout << "a + b + c = " << a+b+c;
	return 0;
}
*/

// TASK 18
// Maqsad: c nuqta a va b nuqtalar orasida joylashgan ac vva bc kesmalar uzunligining ko`paytmasini toping
/*
int main(){
	float a,b,c,ac,bc;
	// a<c<b  yoki b<c<a;
	cout << "a = ";cin>> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	ac = fabs(a-c);
	bc = fabs(b-c);
	cout << "ac*bc = " << ac*bc;
	return 0;
	
}
*/

// TASK 19
// Maqsad: to`g`ri to`rtburchak uchlari koordinatalari beriladi to`g`ri to`rtburchakning yuzasi va perimetrini toping
/*
int main(){
	float A,B,x1,x2,y1,y2;
	cout << "x1 va y1 ni kiriting >> "; cin >> x1 >> y1;
	cout << "x2 va y2 ni kiriting >> "; cin >> x2 >> y2;
	A = fabs(y2-y1);
	B = fabs(x2-x1);
	cout << "S = " << A*B << endl;
	cout << "P = " << 2*(A+B);
	return 0; 
}
*/

// TASK 20
// Maqsad: Tekislikda berilgan ikkita nuqta orasidagi masofani topish
/*
int main(){
	float x1,x2,y1,y2;
	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "y1 = "; cin >> y1;
	cout << "y2 = "; cin >> y2;
	
	cout << "L = " << sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	return 0;
}
*/

// TASK 21
// Maqsad: uchburchakning uchta tomoni koordinatalari berilgan uchburchakning yuzasini va perimetrini topish dasturinin tuzing
/*
int main(){
	float x1,x2,x3,y1,y2,y3,p, a,b,c,S;
	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "x3 = "; cin >> x3;
	cout << "y1 = "; cin >> y1;
	cout << "y2 = "; cin >> y2;
	cout << "y3 = "; cin >> y3;
	a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	b = sqrt(pow(x3-x2,2) + pow(y3-y1,2));
	c = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
	p = (a+b+c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "S = " << S << endl;
	
	return 0;
}
*/