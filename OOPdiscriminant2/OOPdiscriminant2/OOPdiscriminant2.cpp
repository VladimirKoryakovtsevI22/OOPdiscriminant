#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

struct Result
{
	float x1, x2;
};

class myClass
{
private:
	int a, b, c;
	float D;
	float x1, x2;



public:
	myClass(int a, int b, int c)
	{

		this->a = a;
		this->b = b;
		this->c = c;
		D = this->disc(a, b, c);
		this->decision();
	}
	float disc(int a, int b, int c)
	{
		return b * b - 4 * a * c;
	}

	void decision()
	{
		D = disc(a, b, c);
		if (D > 0)
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
		}
		else if (D == 0)
		{
			x1 = -b / (2 * a);
			x2 = x1;
		}
	}

	void print()
	{
		if (D > 0)
			cout << "У уравнения два корня: x1 = " << x1 << " и x2 = " << x2 << endl;
		else if (D == 0)
			cout << "У уравнения один корень: x = " << x1 << endl;
		else
			cout << "У уравнения нет корней." << endl;
	}



	Result get()
	{
		Result res;
		res.x1 = x1;
		res.x2 = x2;
		return res;
	}

	float get(float x)
	{
		return a * x * x + b * x + c;
	}

	bool operator ==(const myClass& obj)
	{
		return (a == obj.a && b == obj.b && c == obj.c);
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	/*int a, b, c;

	cout << "Введите коэффициенты квадратного уравнения (a, b, c): ";
	cin >> a >> b >> c;

	myClass equation(a, b, c);

	equation.decision();
	equation.print();

	Result result = equation.get();
	printf("x1 = %f and x2 = %f\n", result.x1, result.x2);

	float x = equation.get(3);
	printf("x = %f", x);
	
	myClass ptr1 = myClass(1, -2, 5);
	myClass ptr2 = myClass(1, -2, 5);

	if (ptr1 == ptr2)
	{
		cout << "Уравнения равны." << endl;
	}
	else
	{
		cout << "Уравнения не равны." << endl;
	}
	*/
	int end = 50;
	int start = 50;
	myClass arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	for int(int i = 0; i < size; i++)
	{
		float a = rand() % (end - start + 1) + start;
		float b = rand() % (end - start + 1) + start;
		float c = rand() % (end - start + 1) + start;
		arr[i] = new myClass(a,b,c)
	}

	for (int i = 0; i < size; i++)
		arr[i]->print();
	
	return 0;
}


