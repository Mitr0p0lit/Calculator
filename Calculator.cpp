#include <iostream>

using namespace std;

double multiplication(double& number1, double& number2) {
	return number1 * number2;
}
double division(double& number1, double& number2) {
	return number1 / number2;
}
double addition(double& number1, double& number2) {
	return number1 + number2;
}
double subtraction(double& number1, double& number2) {
	return number1 - number2;
}

void output(double& answer) {
	cout << "Ответ: " << answer << endl;
}

int main() {
	setlocale(LC_ALL, "rus");

	double number1, number2, answer;
	int action;

	while (true) {
		cout << "Введите первое число: ";
		cin >> number1;

		cout << "1.Умножение(*)\n2.Деление(/)\n3.Сложение(+)\n4.Вычитание(-)\nВыберите действие(1-4): ";
		cin >> action;

		cout << "Введите второе число: ";
		cin >> number2;

		switch (action) {
		case 1:
			answer = multiplication(number1, number2);
			output(answer);
			break;
		case 2:
			answer = division(number1, number2);
			output(answer);
			break;
		case 3:
			answer = addition(number1, number2);
			output(answer);
			break;
		case 4:
			answer = subtraction(number1, number2);
			output(answer);
			break;
		default:
			cout << "Ошибка!" << endl;
			break;
		}
	}
	

	return 0;
}