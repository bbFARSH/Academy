#include <iostream>
using namespace std;

class Vehicle
{
	int speed;
public:
	virtual void move()const = 0; // чистый виртуальный метод(pure virtual function),
	// именно этот метод и делает класс абстрактным
};
class GroundVehicle :public Vehicle
{
	// абстрактный класс
};
class WaterVehicle :public Vehicle
{
	// абстрактный класс
};
class AirVehicle :public Vehicle
{
	int height; // абстрактный класс
};
class Boat :public WaterVehicle
{
public:
	void move()const
	{
		cout << "Лодка плывет по воде" << endl;
	}
};
class Car :public GroundVehicle
{
public:
	void move()const
	{
		cout << "Машина едит на 4-х колёсах" << endl;
	}
};
class Bike :public GroundVehicle
{
public:
	// конкретный класс, поскольку он ОПРЕДЕЛЯЕТ  чисто виртуальный метод move();
	void move()const
	{
		cout << "Мотоцикл едит на 2-х колёсах" << endl;
	}
};
void main()
{
	setlocale(LC_ALL, "");
	//Vehicle v; // Невозможно создать экземпляр абстрактного класса
	//GroundVehicle gv;
	Bike HD;
	HD.move();
	Car BMW;
	BMW.move();
	Boat boat;
	boat.move();

}