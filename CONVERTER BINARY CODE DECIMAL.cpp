#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;


class Stack {
private:
  vector<int> data;

public:
  Stack() {}

  void push(int value) {
    data.push_back(value);
  }

  int pop() {
    int value = data.back();
    data.pop_back();
    return value;
  }

  bool isEmpty() {
    return data.empty();
  }
};

string decimalToBinary(int number) {
  Stack stack;
  while (number > 0) {
    stack.push(number % 2);
    number /= 2;
  }

  string binary = "";
  while (!stack.isEmpty()) {
    binary += to_string(stack.pop());
  }

  return binary;
}

string decimalToOctal(int number) {
  Stack stack;
  while (number > 0) {
    stack.push(number % 8);
    number /= 8;
  }

  string octal = "";
  while (!stack.isEmpty()) {
    octal += to_string(stack.pop());
  }

  return octal;
}

string decimalToHexadecimal(int number) {
  Stack stack;
  while (number > 0) {
    stack.push(number % 16);
    number /= 16;
  }

  string hexadecimal = "";
  while (!stack.isEmpty()) {
    int value = stack.pop();
    if (value < 10) {
      hexadecimal += to_string(value);
    } else {
      hexadecimal += (char)('A' + value - 10);
    }
  }

  return hexadecimal;
}

int binaryToDecimal(string number) {
  int decimal = 0;
  for (int i = 0; i < number.length(); i++) {
    decimal = decimal * 2 + (number[i] - '0');
  }

  return decimal;
}

int octalToDecimal(string number) {
  int decimal = 0;
  for (int i = 0; i < number.length(); i++) {
    decimal = decimal * 8 + (number[i] - '0');
  }

  return decimal;
}

int hexadecimalToDecimal(string number) {
  int decimal = 0;
  for (int i = 0; i < number.length(); i++) {
    int value = number[i] - '0';
    if (value > 9) {
      value = value - 10 + 'A';
    }
    decimal = decimal * 16 + value;
  }

  return decimal;
}
int main() {
  int choice;
  string input;

  do {
  	cout << "<-CONVERTER-BINARY-CODE-DECIMAL->" << endl;
  	cout << "---------------------------------" << endl;
    cout << "1. Konversi ke Biner" << endl;
    cout << "2. Konversi ke Oktal" << endl;
    cout << "3. Konversi ke Heksadesimal" << endl;
    cout << "4. Konversi dari Biner" << endl;
    cout << "5. Konversi dari Oktal" << endl;
    cout << "6. Konversi dari Heksadesimal" << endl;
    cout << "7. Keluar" << endl;
    cout << "---------------------------------" << endl;
    cout << "Pilihan: ";
    cin >> choice;

    switch (choice) {
      case 1:
      	system("cls");
        cout << "Masukkan bilangan Desimal: ";
        cin >> input;
        cout << "Bilangan Biner dari " << input << " adalah " << decimalToBinary(stoi(input)) << endl;
       	cout << endl;
        break;
      case 2:
        system("cls");
		cout << "Masukkan bilangan Desimal: ";
        cin >> input;
        cout << "Bilangan Oktal dari " << input << " adalah " << decimalToOctal(stoi(input)) << endl;
        cout << endl;
        break;
      case 3:
      	system("cls");
        cout << "Masukkan bilangan Desimal: ";
        cin >> input;
        cout << "Bilangan Heksadesimal dari " << input << " adalah " << decimalToHexadecimal(stoi(input)) << endl;
        cout << endl;
        break;
      case 4:
      	system("cls");
        cout << "Masukkan bilangan Biner: ";
        cin >> input;
        cout << "Bilangan Desimal dari " << input << " adalah " << binaryToDecimal(input) << endl;
        cout << endl;
        break;
      case 5:
      	system("cls");
        cout << "Masukkan bilangan oktal: ";
        cin >> input;
        cout << "Bilangan Desimal dari " << input << " adalah " << octalToDecimal(input) << endl;
        cout << endl;
        break;
      case 6:
      	system("cls");
        cout << "Masukkan bilangan Heksadesimal: ";
        cin >> input;
        cout << "Bilangan Desimal dari " << input << " adalah " << hexadecimalToDecimal(input) << endl;
        cout << endl;
        break;
      case 7:
        cout << "Terminating program..." << endl;
        break;
      default:
        cout << "Masukkan pilihan yang valid!." << endl;
     }
  } while (choice != 7);

  return 0;
}