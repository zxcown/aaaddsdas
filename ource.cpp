#include <iostream>
using namespace std;
int main() {
	//1
	/*for (int i = 1; i <= 5; i = i + 1) {
		cout << i << " " << endl;
	}*/
	//2
	/*for (int i = 5; i >= 1; i = i - 1) {
		cout << i << " " <<  endl;
	}*/
	//3
	/*for (int i = -10; i <= 10; i = i + 2) {
		cout << i << ' ' << endl;
	}*/
	//4
	/*int s;
	for (int i = 1; i <= 5; i = i + 1) {
		s=s+i;
	}
	cout << s << " " << endl;*/
	//5
	/*for (int i = 1; i <= 10; i = i + 1) {
		cout << "3 * " << i << "=" << 3 * i << endl;*/
	//1. Составьте программу, выводящую на экран квадраты чисел от 10 до 20.
	//for (int i = 10;i<=20;i=i+1){
	//	cout << "i * " << i << "=" << i * i << endl;
	//}
	//2. Составьте программу, котораЯ вычисляет сумму чисел от 1 до n.значение n вводится с клавиатуры.
	/*int n,s;
	cin >> n;
	s = 0;
	for (int i = 1; i <= n; i = i + 1) {
		s = s + i;
		cout << s << endl;
	}*/
	//3. Составьте программу, составьте программу, которая вычисляет произведение чисел от 1 до n.n вводится с клавиатуры.
	/*int s, n;
	cin >> n;
	s = 1;
	for (int i = 1; i <= n; i = i + 1) {
		s = s * i;
		cout << s << endl;
	}*/
	//5. Составьте программы перевода старинных русских мер длины, торгового и аптекарского веса(счетчик цикла от 1 до 10)
	//(из дюймов в сантиметры(1 дюйм равен 2,5 см))
	/*double d;
	d = 2.5;
		for (int i = 1; i <= 10; i = i + 1) {
			d = d +i;
			cout << d << endl;
		}*/
	//4.
	int n,x;
	cin >> n;
	int k = 0;
	int d = 0;
	int s = 0;
	for (int i = 1; 1 <= n; i = i + 1) {
		cin >> x;
		if (x > 0) {
			k++;
			cout << k<< " " << "poloj" << endl;
			
		}
		cin >> x;
		 if  (x < 0) {
			d;
			cout << d<<" " <<"otric" << endl;
		}
		cin >> x;
		if (x==0)  {
			s;
			cout << s << " "<<"zero" <<endl;
		}
	}
}