#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float width;
	float h_speed_1;
	float h_speed_2;
	float w_speed;
	cin >> width >> h_speed_1 >> h_speed_2;
	cin >> w_speed;

	while (w_speed >= h_speed_1 || w_speed >= h_speed_2) {
		cout << "water speed >= humen speed" << endl;
		cin >> w_speed;
	}

	float agl = w_speed / h_speed_1;
	float V1 = sqrt(h_speed_1 * h_speed_1 - w_speed * w_speed);
	float V2 = sqrt(h_speed_2 * h_speed_2 - w_speed * w_speed);

	cout << "angle = " << acos(agl) * 180 / 3.14159265 << endl;
	cout << "time1 = " << width / V1 << endl;
	cout << "time2 = " << (width / 2) / V1 + (width / 2) / V2 << endl;
}
