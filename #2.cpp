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

// TASK 22
// Maqsad: berilgan a va b sonlarning qiymatini almashtiruvcih dastur tuzing
/*
int main(){
	float a, b, c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	c = a;
	a = b;
	cout << "a = " << a<< endl;
	cout << "b = " << c ;
}
*/

// TASK 23
// Maqsad: A,B,C sonlarning qiymatlarini almashtirish
/*
int main(){
	float a, b, c, d;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	d = a;
	a = b;
	b = c;
	c = d;
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl; 
	cout << "c = " << c << endl;
	return 0;
} 
*/

// TASK 24
// Maqsad: A,B,C sonlarning qiymatlarini almashtirish
/*
int main(){
	float a,b,c,d;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	d = c;
	c = b;
	b = a;
	a = d;
	cout << "a = " << a <<endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return 0;
}
*/

// TASK 25 
// Maqsad: x ning qiymati berilganda funksiyaning qiymatini aniqlash
/*
int main(){
	float x, y;
	cout << "x = "; cin >> x;
	y = 3*pow(x,6) - 6*pow(x,2) - 7;
	cout << "y = " << y;
	return 0;
}
*/

// TASK 26 
// Maqsad: x ning qiymati berilganda y ning qiymatini topish
/*
int main(){
	float x,y;
	cout << "x = "; cin >> x;
	y = 4*pow(x-3,6) -7*pow(x-3,3) +2;
	cout << "y = " << y;
	return 0;
}
*/

// TASK 27 , TASK 28
// Maqsad: a sonning darajalarini aniqlash
/*
int main(){
	float a;
	cout << "a = "; cin >> a;
	cout <<" a ning kvadrati " << a*a;
	cout << " a ning 4 - darajasi " << pow(a,4);
	cout << "a ning 8- darajasi" << pow(a,8);
	return 0;
}
*/

// TASK 29
// Maqsad: alfa burchakni radianda ifodalash
/*
int main(){
	float r, a, pi = 3.14;
	cout << "alfa = "; cin >> a;
	cout << a << " gradus = " << a * pi /180 << " radian";
	return 0; 
}
*/

// TASK 30
// Maqsad: radiandan gradusga o`tish
/*
int main(){
	float a, r, pi = 3.14;
	cout << "Radian = "; cin >> r;
	cout << "Gradus = " << r * 180/pi;
	return 0;
}
*/

// TASK 31, TASK 32
// Maqsad: farengeytdan gradus selsiyga o`tish
/*
int main(){
	float Tc, Tf;
	cout << "Farengeyt = "; cin >> Tf;
	Tc = (Tf - 32)*5/9;
	cout << "Gradus selsiy = " << Tc;
	return 0;
}
*/
// - 33, 34

// TASK 35 
// Maqsad: qayiqning yurgan yo`lini topish
/*
int main(){
	float v, vo, t1, t2, S;
	cout << "Oqimning tezligi qancha >>>"; cin >> vo;
	cout << "Qayiqning tezligi qancha >>>"; cin >> v;
	cout << "Oqim bo`ylay qancha vaqt harakatlangan >>> "; cin >> t1;
	cout << "Oqimga qarshi qancha vaqt harakatlangan >>> "; cin >> t2;
	S = (v+vo)*t1 + (v-vo)*t2;
	cout << "Qayiq bosib o`tgan masofa " << S << " m";
	return 0;  
}
*/

// TASK 36
// Maqsad: t vaqtdan keyin avtomobillar orasidagi masofani aniqlash
/*
int main(){
	float v1, v2, S, t;
	cout << "1-avtomobilning tezligi >>> "; cin >> v1;
	cout << "2-avtomobilning tezligi >>> "; cin >> v2;
	cout << "Harakatlangan vaqt >>> "; cin >> t;
	S = (v1 + v2)*t;
	cout << "Ular orasidagi masofa " << S << " m";
	return 0;
}
*/

// TASK 36 ~ TASK 37

// TASK 38
// Maqsad: chiziqli tenglamaning yechimlarnini topish
/*
int main(){
	float a, x, b, y;
	cout << "Ax + B = Y" << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "Y = "; cin >> y;
	x = (y-b)/a;
	cout << "x = " << x;
	return 0;
}
*/

// TASK 39  if else

// TASK 40 
// Maqsad: chiziqli tenglamalar sistemasini yechish
/*
int main(){
	float a1, b1, x, y, c1, c2, a2, b2, d;
	cout << "A1x + B1y = C1" << endl;
	cout << "A2x + B2y = C2" << endl;
	cout << "A1 = "; cin >> a1;
	cout << "B1 = "; cin >> b1;
	cout << "A2 = "; cin >> a2;
	cout << "B2 = "; cin >> b2;
	cout << "C1 = "; cin >> c1;
	cout << "C2 = "; cin >> c2;
	d = a1*b2 - a2*b1;
	x = (c1 * b2 - c2 * b1)/d;
	y = (a1 * c2 - a2*c1)/d;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
	
}
*/