// Homework_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <istream>

using namespace std;
//Задание 3:
struct biblio
{
	string name;
	string avtor;
	string izdat;
	string zhanr;
 };
void createBook(biblio* arr,int &nomer, const int& size)
{
	system("cls");
	if (nomer < size)
	{
		cout << "\n Имя - " << endl;
		cin >> arr[nomer].name;
		cout << "\n Автор - " << endl;
		cin >> arr[nomer].avtor;
		cout << "\n Издательство - " << endl;
		cin >> arr[nomer].izdat;
		cout << "\n Жанр - " << endl;
		cin >> arr[nomer].zhanr;
		nomer++;
	}
	else
	{
		cout << " Ваш список переполнен, вы больше не можете вносить книги" << endl;
		cout << " Для выхода в меню, нажмите - 1." << endl;
		int menu = -1;
		while (menu != 1)
			cin >> menu;
	}	
}
void poiskavtor(biblio* arr, const int &size)
{
	system("cls");
	string avtorP;
	cout << "\n Введите книги какого автора вы хотели бы найти: \n";
	cin >> avtorP;
	for (int i = 0; i < size; i++) {
		if (arr[i].name != "")
			if (arr[i].avtor == avtorP)
			{
				cout << endl <<" Книга - " << arr[i].name << endl;
				cout << " Автор - " << arr[i].avtor << endl;
				cout << " Издательство - " << arr[i].izdat << endl;
				cout << " Жанр - " << arr[i].zhanr << endl;
			}
	}
	int menu = -1;
	while (menu != 1)
	{
		cout << "\n Пожалуста, вот те книги, которые вы искали. \n Для выхода в меню списка нажмите 1. \n";
		cin >> menu;
	}
}
void poiskName(biblio* arr, const int& size)
{
	system("cls");
	string name;
	cout << "\n Введите название книги которую вы хотели бы найти: \n";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (arr[i].name != "")
			if (arr[i].name == name)
			{
				cout << endl << " Книга - " << arr[i].name << endl;
				cout << " Автор - " << arr[i].avtor << endl;
				cout << " Издательство - " << arr[i].izdat << endl;
				cout << " Жанр - " << arr[i].zhanr << endl;
			}
	}
	int menu = -1;
	while (menu != 1)
	{
		cout << "\n Пожалуста, вот те книги, которые вы искали. \n Для выхода в меню списка нажмите 1. \n";
		cin >> menu;
	}
}
void sortName(biblio* arr, const int& size)
{
	for (int i = 0; i < size;i++) {
		for (int j = size - 1; j > i; j--) {			
			if (arr[i].name != "" && arr[j].name != "")
				if (arr[i].name == arr[j].name)
					swap(arr[i + 1], arr[j]);
		}
	}
}
void sortAvtor(biblio* arr, const int& size)
{
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			if (arr[i].avtor != "" && arr[j].avtor != "")
				if (arr[i].avtor == arr[j].avtor)
					swap(arr[i + 1], arr[j]);
		}
	}
}
void sortIzdad(biblio* arr, const int& size)
{
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			if (arr[i].izdat != "" && arr[j].izdat != "")
				if (arr[i].izdat == arr[j].izdat)
					swap(arr[i + 1], arr[j]);
		}
	}
}
//Задание 2:
struct avto
{
	string name;
	float dlina;
	float clirens;
	float Vengine;
	float powengine;
	float diameter;
	string color;
	string kpp;
};
void createAvto(avto* mass, int &nomer)
{
	int size;
	cout << " Сколько машин будете вносить?\n";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << " Название " << i + 1 << " машины\n";
		cin >> mass[i].name;
		cout << " Введите длину авто\n";
		cin >> mass[i].dlina;
		cout << "\n Введите клиренс авто\n";
		cin >> mass[i].clirens;
		cout << "\n Введите объём двигателя авто\n";
		cin >> mass[i].Vengine;
		cout << "\n Введите мощность двигателя авто\n";
		cin >> mass[i].powengine;
		cout << "\n Введите диаметр колес авто\n";
		cin >> mass[i].diameter;
		cout << "\n Введите цвет авто\n";
		cin >> mass[i].color;
		cout << "\n Введите тип кпп авто\n";
		cin >> mass[i].kpp;
		nomer++;
	}
}
void viewAvto(avto* mass, const int& size)
{
	system("cls");
	int i;
	
	cout << " Показатели какой машины вам раскрыть? Назовите ее номер.\n";
	cin >> i;
	i -= 1;
	if (mass[i].name != "")
	{
		cout << i + 1 << ". Длина - " << mass[i].dlina << endl << "Клиренс - " << mass[i].clirens << endl << "Объём двигателя - " << mass[i].Vengine << endl;
		cout << "Мощность двигателя - " << mass[i].powengine << endl << "Диаметр колёс - " << mass[i].diameter << endl << "Цвет - " << mass[i].color << endl << "Тип КПП - " << mass[i].kpp << endl;
	}
	else
		cout << "\n Машины под таким номером у вас нет.\n";
	
	int menu = -1;
	while (menu != 1)
	{
		cout << " Для выхода в меню нажмите - 1\n";
		cin >> menu;
	}
}
void poiskColor(avto* mass, const int& size)
{
	system("cls");
	string color;	
	cout << " Какой цвет ищем?\n";
	cin >> color;
	for (int i = 0; i < size;i++) {
		if (mass[i].color != "")
			if (mass[i].color == color)
			{
				cout << mass[i].name << endl << ". Длина - " << mass[i].dlina << endl << "Клиренс - " << mass[i].clirens << endl << "Объём двигателя - " << mass[i].Vengine << endl;
				cout << "Мощность двигателя - " << mass[i].powengine << endl << "Диаметр колёс - " << mass[i].diameter << endl << "Цвет - " << mass[i].color << endl << "Тип КПП - " << mass[i].kpp << endl;				
			}
	}
	int menu = -1;
	while (menu != 1)
	{
		cout << " Для выхода в меню нажмите - 1\n";
		cin >> menu;
	}
}
//Задание 4:
union number
{
	int intNum;
	string stringNum;
};
struct mashine
{
	string model;
	string color;
	number Unumber;
};
void zapolnenieDobavl(mashine* mass, const int &size)
{
	system("cls");
	int num;
	for (int i = 0; i < size; i++) {
		if (mass[i].model == "")
		{
			cout << " Введите модель которую хотите добавить.\n";
			cin >> mass[i].model;
			cout << " Введите цвет модели которую хотите добавить.\n";
			cin >> mass[i].color;
			cout << " Номер состоит из 5 цифр или дргих символов?  1 - Цифры. 2 - символы.\n";
			cin >> num;
			if (num == 1)
			{
				cout << " Введите номер модели которую хотите добавить.\n";
				cin >> mass[i].Unumber.intNum;
			}
			if (num == 2)
			{
				cout << " Введите номер модели которую хотите добавить.\n";
				cin >> mass[i].Unumber.stringNum;
			}
			cout << " Добавить ещё машину? 1 - Да. 0 - Нет.";
		}
		int daNet;
		cin >> daNet;
		if (daNet == 0)
			break;
	}
}
void viewMass(mashine* mass)
{
	int i;
	cout << " \n Какую машину по счёту в списке надо напечатать?\n";
	cin >> i;
	i--;
	system("cls");
	if (mass[i].Unumber.intNum != '\0')
	{
		cout << " Модель - " << mass[i].model << endl
			<< " Цвет - " << mass[i].color << endl
			<< " Номер - " << mass[i].Unumber.intNum << endl;
	}
	else
	{
		cout << " Модель - " << mass[i].model << endl
			<< " Цвет - " << mass[i].color << endl
			<< " Номер - " << mass[i].Unumber.stringNum << endl;
	}
	int pause;
	cout << "\n Для выхода в меню нажмите любую ЦИФРУ.\n";
	cin >> pause;
}
void pechat(mashine* mass, int& i)
{
	if (mass[i].Unumber.intNum != '\0')
	{
		cout << " Модель - " << mass[i].model << endl
			<< " Цвет - " << mass[i].color << endl
			<< " Номер - " << mass[i].Unumber.intNum << endl;
	}
	else
	{
		cout << " Модель - " << mass[i].model << endl
			<< " Цвет - " << mass[i].color << endl
			<< " Номер - " << mass[i].Unumber.stringNum << endl;
	}
}
void redaktmashine(mashine* mass)
{
	int i;
	cout << "\n Какую машину по счету желаете отредактировать?\n";
	cin >> i;
	i--;
	int vibor;
	cout << "\n Что у этой машины будете редактировать?\n 1 - модель.\n 2 - цвет.\n 3 - номер.\n";
	cin >> vibor;
	switch (vibor)
	{
	case 1:
		{
		cin >> mass[i].model;
		break;
		}
	case 2:
	{
		cin >> mass[i].color;
		break;
	}
	case 3:
	{
		if (mass[i].Unumber.intNum != '\0')
			cin >> mass[i].Unumber.intNum;
		else
			mass[i].Unumber.stringNum;
		break;
	}
	default:
		break;
	}
}
void searchMash(mashine* mass, const int &size)
{
	system("cls");
	int param;
	cout << " \n По какому параметру будем искать?\n 1 - по модели.\n 2 - по цвету.\n 3 - по номеру.\n";
	cin >> param;
	switch (param)
	{
	case 1:
	{
		string in;
		cout << "\n Введите что должно содержаться в этом поле?\n";
		cin >> in;
		for (int i = 0; i < size; i++) {
			if (mass[i].model != "")
				if (in == mass[i].model)
					pechat(mass, i);
		}
		
		break;
	}
	case 2:
	{
		string in;
		cout << "\n Введите что должно содержаться в этом поле?\n";
		cin >> in;
		for (int i = 0; i < size; i++) {
			if (mass[i].model != "")
				if (in == mass[i].color)
					pechat(mass, i);
		}
		
		break;
	}
	case 3:
	{
		int vibor;
		cout << "\n Искать будете номер из цифр или из других символов?\n 1 - цифр.\n 2 - других символов.\n";
		cin >> vibor;
		if (vibor == 1)
		{
			int in;
			cout << "\n Введите что должно содержаться?\n";
			cin >> in;
			for (int i = 0; i < size; i++) {
				if (mass[i].model != "")
					if (in == mass[i].Unumber.intNum)
						pechat(mass, i);
			}
		}
		if (vibor == 2)
		{
			string in;
			cout << "\n Введите что должно содержаться?\n";
			cin >> in;
			for (int i = 0; i < size; i++) {
				if (mass[i].model != "")
					if (in == mass[i].Unumber.stringNum)
						pechat(mass, i);
			}
		}
		
		break;
	}
	default:
		break;
	}
	cout << "\n Вот ваш результат поиска. Для выхода в меню нажмите любую Цифру.\n";
	int pause;
	cin >> pause;
}
int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*Задание 3:
	Разработайте программу «Библиотека».Создайте структуру «Книга»(название, автор, издательство, жанр).Создайте массив из 10 книг.
	Реализуйте для него следующие возможности :
	Редактировать книгу
		Печать всех книг
		Поиск книг по автору
		Поиск книги по названию
		Сортировка массива по названию книг
		Сортировка массива по автору
		Сортировка массива по издательству*/
	/*const int size = 10;
	biblio book[size];
	int vibor = -1;
	int nomer = 0;
	while (vibor != 7)
	{
		system("cls");
		for (int i = 0; i < size; i++)
			if (book[i].name != "")
				cout << i + 1 << ". " << book[i].name << " " << endl;
			else
				cout << i + 1 << ". " << endl;
		cout << "\n 1 - добавление книги.\n 2 - Поиск книг по автору. \n 3 - Поиск книги по названию.\n 4 - Сортировка массива по названию книг.\n 5 - Сортировка массива по автору.\n 6 - Сортировка массива по издательству.\n 7 - выход.\n";
		cin >> vibor;
		if (vibor == 1)
			createBook(book, nomer, size);
		if (vibor == 2)
			poiskavtor(book, size);
		if (vibor == 3)
			poiskName(book, size);
		if (vibor == 4)
			sortName(book, size);
		if (vibor == 5)
			sortAvtor(book, size);
		if (vibor == 6)
			sortIzdad(book, size);
	}*/

	/*Задание 2:
	Реализовать структуру «Автомобиль»(длина, клиренс(высота посадки), объем двигателя, мощность двигателя, диаметр колес, цвет, тип коробки передач).
		Создайте функции для задания значений, отображения значений, поиска значений.*/
	
	/*const int size = 10;
	avto mass[size];
	int vibor = -1;
	int nomer = 0;
	createAvto(mass, nomer);
	while (vibor != 4)
	{
		system("cls");
		for (int i = 0; i < size; i++) {
			if (mass[i].name != "")
				cout << i + 1 << mass[i].name << endl;
			else
				cout << i + 1 << "." << endl;
		}
		cout << " Что хотите сделать ещё?\n 1 - просмотр.\n 2 - Добавить ещё машин.\n 3 - поиск по цвету(Для примера сделаю, по остальным показателям аналогично будет).\n 4 - Выход.\n";
		cin >> vibor;
		if (vibor == 1)
			viewAvto(mass, size);
		if (vibor == 2)
			createAvto(mass, nomer);
		if (vibor == 3)
			poiskColor(mass, size);
	}	*/

	/*Задание 4:
	Реализовать структуру «Машина»(цвет, модель, номер).Номер машины может представлять из себя или пятизначный номер или слово до 8 символов.
		Рекомендации : номер реализовать как объединение.
		Создать массив из 10 экземпляров структуры «Машина» и реализовать для него следующие функции :
	Заполнение машины
		Печать машины
	Редактировать машину
		Печать всех машин
		Поиск машины по номеру*/

	const int size = 10;
	mashine arr[size];
	int vibor;
	do
	{
		zapolnenieDobavl(arr, size);
		system("cls");
		for (int i = 0; i < size; i++) {
			if (arr[i].model == "")
				cout << i + 1 << "." << endl;
			else
			{
				if (arr[i].Unumber.intNum != '\0')
					cout << i + 1 << ". " << arr[i].model << "\t" << arr[i].color << "\t" << arr[i].Unumber.intNum;
				else
					cout << i + 1 << ". " << arr[i].model << "\t" << arr[i].color << "\t" << arr[i].Unumber.stringNum;
			}
		}
		cout << " \n Перед вами список ваших машин. Какую операцию надо провести далее?\n1 - Добавить.\n 2 - Печать.\n 3 - Редактировать.\n 4 - поиск\n";
		cin >> vibor;
		if (vibor == 1)
			zapolnenieDobavl(arr, size);
		if (vibor == 2)
			viewMass(arr);
		if (vibor == 3)
			redaktmashine(arr);
		if (vibor == 4)
			searchMash(arr,size);
	} while (vibor != 0);
}