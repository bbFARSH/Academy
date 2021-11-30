#include <iostream>
using namespace std;

class Vehicle
{
	int speed;
public:
	virtual void move()const = 0; // ������ ����������� �����(pure virtual function),
	// ������ ���� ����� � ������ ����� �����������
};
class GroundVehicle :public Vehicle
{
	// ����������� �����
};
class WaterVehicle :public Vehicle
{
	// ����������� �����
};
class AirVehicle :public Vehicle
{
	int height; // ����������� �����
};
class Boat :public WaterVehicle
{
public:
	void move()const
	{
		cout << "����� ������ �� ����" << endl;
	}
};
class Car :public GroundVehicle
{
public:
	void move()const
	{
		cout << "������ ���� �� 4-� ������" << endl;
	}
};
class Bike :public GroundVehicle
{
public:
	// ���������� �����, ��������� �� ����������  ����� ����������� ����� move();
	void move()const
	{
		cout << "�������� ���� �� 2-� ������" << endl;
	}
};
void main()
{
	setlocale(LC_ALL, "");
	//Vehicle v; // ���������� ������� ��������� ������������ ������
	//GroundVehicle gv;
	Bike HD;
	HD.move();
	Car BMW;
	BMW.move();
	Boat boat;
	boat.move();

}