#include "iostream"
#include "cstdlib"
#include "string"

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	while (true) {
		cout << "Введите целое число 0<=N<=9999 (введите *end*, чтобы выйти): ";
		string s;
		int n, x;
		bool f = 1;
		getline(cin, s); // считываю строку
		if (s == "end") {
			break;
		}
		if (s.size() > 4) { // проверка длины строки
			f = 0;
		}
		else {
			for (int i = 0; i < s.size(); i++) { // проверка на числа
				if ((s[i] < 48) || (s[i] > 57)) {
					f = 0;
				}
			}
		}
		if (f) { // если всё корректно
			n = stoi(s); // строка в число
			if (n > 999) { // сам алгоритм, тут объяснять нечего
				x = n / 1000;
				switch (x) {
				case 1: cout << "Одна тысяча "; break;
				case 2: cout << "Две тычячи "; break;
				case 3: cout << "Три тысячи "; break;
				case 4: cout << "Четыре тысячи "; break;
				case 5: cout << "Пять тысяч "; break;
				case 6: cout << "Шесть тысяч "; break;
				case 7: cout << "Семь тысяч "; break;
				case 8: cout << "Восемь тысяч "; break;
				case 9: cout << "Девять тысяч "; break;
				}

				x = n / 100;
				x = x % 10;
				switch (x) {
				case 1: cout << "сто "; break;
				case 2: cout << "двести "; break;
				case 3: cout << "триста "; break;
				case 4: cout << "четыреста "; break;
				case 5: cout << "пятьсот "; break;
				case 6: cout << "шестьсот "; break;
				case 7: cout << "семьсот "; break;
				case 8: cout << "восемьсот "; break;
				case 9: cout << "девятьсот "; break;
				}

				x = n % 100;
				x = x / 10;
				if (x != 1) {
					switch (x) {
					case 2: cout << "двадцать "; break;
					case 3: cout << "тридцать "; break;
					case 4: cout << "сорок "; break;
					case 5: cout << "пятьдесят "; break;
					case 6: cout << "шестьдесят "; break;
					case 7: cout << "семьдесят "; break;
					case 8: cout << "восемьдесят "; break;
					case 9: cout << "девяносто "; break;
					}
					x = n % 10;
					switch (x) {
					case 1: cout << "один"; break;
					case 2: cout << "два"; break;
					case 3: cout << "три"; break;
					case 4: cout << "четыре"; break;
					case 5: cout << "пять"; break;
					case 6: cout << "шесть"; break;
					case 7: cout << "семь"; break;
					case 8: cout << "восемь"; break;
					case 9: cout << "девять"; break;
					}
				}
				else {
					x = n % 100;
					switch (x) {
					case 10: cout << "десять"; break;
					case 11: cout << "одиннадцать"; break;
					case 12: cout << "двенадцать"; break;
					case 13: cout << "тринадцать"; break;
					case 14: cout << "четырнадцать"; break;
					case 15: cout << "пятнадцать"; break;
					case 16: cout << "шестнадцать"; break;
					case 17: cout << "семнадцать"; break;
					case 18: cout << "восемнадцать"; break;
					case 19: cout << "девятнадцать"; break;
					}
				}

			}
			else {
				if (n > 99) {
					x = n / 100;
					x = x % 10;
					switch (x) {
					case 1: cout << "Сто "; break;
					case 2: cout << "Дести "; break;
					case 3: cout << "Триста "; break;
					case 4: cout << "Четыреста "; break;
					case 5: cout << "Пятьсот "; break;
					case 6: cout << "Шестьсот "; break;
					case 7: cout << "Семьсот "; break;
					case 8: cout << "Восемьсот "; break;
					case 9: cout << "Девятьсот "; break;
					}

					x = n % 100;
					x = x / 10;
					if (x != 1) {
						switch (x) {
						case 2: cout << "двадцать "; break;
						case 3: cout << "тридцать "; break;
						case 4: cout << "сорок "; break;
						case 5: cout << "пятьдесят "; break;
						case 6: cout << "шестьдесят "; break;
						case 7: cout << "семьдесят "; break;
						case 8: cout << "восемьдесят "; break;
						case 9: cout << "девяносто "; break;
						}
						x = n % 10;
						switch (x) {
						case 1: cout << "один"; break;
						case 2: cout << "два"; break;
						case 3: cout << "три"; break;
						case 4: cout << "четыре"; break;
						case 5: cout << "пять"; break;
						case 6: cout << "шесть"; break;
						case 7: cout << "семь"; break;
						case 8: cout << "восемь"; break;
						case 9: cout << "девять"; break;
						}
					}
					else {
						x = n % 100;
						switch (x) {
						case 10: cout << "десять"; break;
						case 11: cout << "одиннадцать"; break;
						case 12: cout << "двенадцать"; break;
						case 13: cout << "тринадцать"; break;
						case 14: cout << "четырнадцать"; break;
						case 15: cout << "пятнадцать"; break;
						case 16: cout << "шестнадцать"; break;
						case 17: cout << "семнадцать"; break;
						case 18: cout << "восемнадцать"; break;
						case 19: cout << "девятнадцать"; break;
						}
					}
				}
				else {
					if (n > 9) {
						x = n % 100;
						x = x / 10;
						if (x != 1) {
							switch (x) {
							case 2: cout << "Двадцать "; break;
							case 3: cout << "Тридцать "; break;
							case 4: cout << "Сорок "; break;
							case 5: cout << "Пятьдесят "; break;
							case 6: cout << "Шестьдесят "; break;
							case 7: cout << "Семьдесят "; break;
							case 8: cout << "Восемьдесят "; break;
							case 9: cout << "Девяносто "; break;
							}
							x = n % 10;
							switch (x) {
							case 1: cout << "один"; break;
							case 2: cout << "два"; break;
							case 3: cout << "три"; break;
							case 4: cout << "четыре"; break;
							case 5: cout << "пять"; break;
							case 6: cout << "шесть"; break;
							case 7: cout << "семь"; break;
							case 8: cout << "восемь"; break;
							case 9: cout << "девять"; break;
							}
						}
						else {
							x = n % 100;
							switch (x) {
							case 10: cout << "Десять"; break;
							case 11: cout << "Одиннадцать"; break;
							case 12: cout << "Двенадцать"; break;
							case 13: cout << "Тринадцать"; break;
							case 14: cout << "Четырнадцать"; break;
							case 15: cout << "Пятнадцать"; break;
							case 16: cout << "Шестнадцать"; break;
							case 17: cout << "Семнадцать"; break;
							case 18: cout << "Восемнадцать"; break;
							case 19: cout << "Девятнадцать"; break;
							}
						}
					}
					else {
						x = n % 10;
						switch (x) {
						case 0: cout << "Ноль"; break;
						case 1: cout << "Один"; break;
						case 2: cout << "Два"; break;
						case 3: cout << "Три"; break;
						case 4: cout << "Четыре"; break;
						case 5: cout << "Пять"; break;
						case 6: cout << "Шесть"; break;
						case 7: cout << "Семь"; break;
						case 8: cout << "Восемь"; break;
						case 9: cout << "Девять"; break;
						}
					}
				}
			}
			x = n % 100;
			if ((x >= 5) && (x <= 20)) {
				cout << " рублей.";
			}
			else {
				x = n % 10;
				switch (x) {
				case 0: cout << " рублей."; break;
				case 1: cout << " рубль."; break;
				case 2: cout << " рубля."; break;
				case 3: cout << " рубля."; break;
				case 4: cout << " рубля."; break;
				case 5: cout << " рублей."; break;
				case 6: cout << " рублей."; break;
				case 7: cout << " рублей."; break;
				case 8: cout << " рублей."; break;
				case 9: cout << " рублей."; break;
				}
			}
		}
		else {
			cout << "Некорректные данные, попробуйте снова.";
		}
		cout << " \n\n";
	}
	return 0;
}

