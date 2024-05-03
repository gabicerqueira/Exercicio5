//1 – Escreva um programa que mostre os números de um a dez

//#include <iostream>
//#include <locale>
//
//using namespace std;
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//	int numero = 1;
//
//	while (numero <= 10) {
//		cout << numero << "\n";
//		numero += 1;
//	}
//}



//2 – Peça para o usuário informar um número e mostre a tabuada desse valor

//#include <iostream>
//#include <locale>
//
//using namespace std;
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//	int tab = 1;
//	int numero;
//	cout << "Informe um número ";
//	cin >> numero;
//
//	do {
//		int resultado = numero * tab;
//		cout << numero << " x " << tab << " = " << resultado << "\n";
//		tab += 1;
//	} while (tab <= 10);
//}




//3 – Faça um programa que mostre os números de 0 a 50, mostrando - os de 5 em 5 (ex: 0, 5, 10, 15...)

//#include <iostream>
//#include <locale>
//
//using namespace std;
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//	for (int i = 0; i <= 50; i+=5) {
//		cout << i << "\n";
//	}
//}



//4 – Escreva um programa que lê o número digitado pelo usuário cinco vezes e mostre
//- Se o número for maior que 100, escreva “NÚMERO
//ESPECIAL”
//- Senão, escreva “NÚMERO COMUM”

//#include <iostream>
//#include <locale>
//
//using namespace std;
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//	int quant = 1;
//	
//	do{
//		int numero;
//		cout << "Informe um número ";
//		cin >> numero;
//
//		if (numero > 100) {
//			cout << "Número especial \n";
//		}
//		else {
//			cout << "Número comum \n";
//		}
//
//		quant += 1;
//	} while (quant <= 5);
//
//}





//5 – Mostre a sequência de números de 1 a 31 pulando de 2 em 2 (ex: 1, 3, 5, 7...)

//#include <iostream>
//#include <locale>
//
//using namespace std;
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//
//	int numero = 1;
//
//	while (numero <= 31) {
//		cout << numero << "\n";
//		numero += 2;
//	}
//}



//6 – Faça um programa que leia cinco números e mostre :
//-Se o número for maior que zero, escreva “NÚMERO
//POSITIVO”
//- Senão, se o número for menor que zero, escreva “NÚMERO
//NEGATIVO”
//- Senão, escreva “O NÚMERO É ZERO”

//#include <iostream>
//#include <locale>
//
//using namespace std;
//int main(){
//	locale::global(locale("pt_BR.UTF-8"));
//
//	for (int i = 1; i <= 5; i++) {
//		int numero;
//		cout << "Informe um número ";
//		cin >> numero;
//
//		if (numero > 0) {
//			cout << "O número positivo \n";
//		}
//		else if (numero < 0) {
//			cout << "O número negativo \n";
//		}
//		else {
//			cout << "O número é zero \n";
//		}
//
//	}
//}