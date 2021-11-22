#include <iostream>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using namespace std;
//#define WRITE_TO_FILE
void main()
{
	setlocale(LC_ALL, "");
#ifdef WRITE_TO_FILE
	//cout << "Hello World" << endl;
	ofstream fout("File.txt", std::ios_base::app/*append*/); // Создаём и открываем поток
	fout << "Hello World";
	fout.close();
	system("more File.txt");
#endif // WRITE_TO_FILE
	const int SIZE = 256;
	char buffer[SIZE] = {};
	ifstream fin("File.txt");
	if (fin.is_open())
	{
		while (!fin.eof())//Пока НЕ конец файла
		{
			//fin >> buffer;
			fin.getline(buffer, SIZE);
			cout << buffer << endl;
		}
	}
	else
	{
		cerr << "File not found" << endl;
	}
	fin.close();
}