#include <iostream>
#include <fstream>
using namespace std;

//в первой задаче можно обойтись без создания объектов
//программа считывает текстовой файл в массив и сравнивает его с таким же массивом из другого файла

int main()
{
	char S1[256]; // Хранение строк для сравнения
	char S2[256];

	char file_name1[] = "c:\\1\\11.txt"; // готовые файлы
	char file_name2[] = "c:\\1\\12.txt";
	
	ifstream file1, file2; // создаем объект для файла на чтение
	file1.open(file_name1); // открываем
	file2.open(file_name2); // открываем
	if (file1.is_open()&& file2.is_open()) // если оба файла отркылись - идем дальше
	{
		while (!file1.eof()||!file1.eof()) // циклом считываем по строкам за раз, пока не дойдем до конца одного из файлов
		{
			file1.getline(S1, 255, '\n'); // 255 символов на строку - достаточно
			file2.getline(S2, 255, '\n');
			if (strcmp(S1, S2)) //сравниваем, если результат не 0 (если строки разные)
			{
				cout <<"string 1 - " << S1<<"\n"; // выводим значение каждой из строк фалов
				cout << "string 2 - " << S2;
				cout << "\n-------------------------\n";
			}
		}
		file1.close(); // закрываем
		file2.close();
	}
	else
	{
		cout << "Can not open file ";
	}
}
