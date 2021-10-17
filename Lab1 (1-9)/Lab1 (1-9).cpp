// Задание 1
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, a;
    int d;
    cout << "Введите положительно вещественное число:" << endl;
    cin >> x;
    while (x < 0)
    {
        cout << "Это не положительное число. Введите положительно вещественное число:" << endl;
        cin >> x;
    }
    a = x * 10;
    d = (int)a % 10;
    cout << "Первая цифра из дробной части:" << d << endl;
    return 0;
}

// Задание 2
/*
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int s, h1, h2, m;
	cout << "Введите количество секунд от начала суток" << endl;
	cin >> s;
	while (s < 0)
	{
		cout << "Секунды не могут быть отрицательными. Введите еще раз количество секунд от начала суток" << endl;
		cin >> s;
	}
	h1 = s / 3600;
	h2 = s % 3600;
	m = h2 / 60;
	cout << "Часов прошло " << h1 << ", а минут " << m << endl;
	return 0;
}
*/
// Задание 3
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "";
    double s, m, h, gr_s, gr_m, gr_h, vs_gr;
    cout << "Введите количество часов(в 12 часовом формате): " << endl;
    cin >> h;
    while ((h > 11) || (h < -1))
    {
        cout << "Введиет количество часов от 0 до 11" << endl;
        cin >> h;
    }
    cout << "Введите минуты: " << endl;
    cin >> m;
    while ((m < 0) || (m > 59))
    {
        cout << "Введиет минуты не меньше нуля, но и не больше 59" << endl;
        cin >> m;
    }
    cout << "Введите количество секунд: " << endl;
    cin >> s;
    while ((s > 59) || (s < 0))
    {
        cout << "Введиет секунды не меньше нуля, но и не больше 59" << endl;
        cin >> s;
    }
    gr_h = h * 30;
    gr_m = m * 0.5;
    gr_s = s / 120;
    vs_gr = gr_h + gr_m + gr_s;
    cout << "Угол между положением часовой стрелки в начале суток и ее заданном положении: " << vs_gr << " градусов" << endl;
    return 0;
}
*/
// Задание 4
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите 2 переменных: " << endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "1 переменная стала " << a << ", а 2 переменная стала " << b;
    return 0;
}
*/
// Задание 5
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, P, S;
    cout << "Введите длину 2 катетов: " << endl;
    cin >> a >> b;
    while ((a <= 0) || (b <= 0))
    {
        cout << "Длина катетов дожна быть больше 0, введите длину 2 катетов еще раз" << endl;
        cin >> a >> b;
    }
    c = sqrt(a * a + b * b);
    P = a + b + c;
    S = (a * b) / 2;
    cout << "Площадь треугольника равна " << S << " Периметр треугольника равна " << P;
    return 0;
}
*/
// Задание 6
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, p, a1, a2, b1, b2, c, d;
    cout << "Введите четырехзначное число" << endl;
    cin >> n;
    while ((n <= 999) || (n >= 10000))
    {
        cout << "Это не четырехзначное число. Еще раз введите четырехзначное число " << endl;
        cin >> n;
    }
    a1 = n / 1000;
    a2 = n % 1000;
    b1 = a2 / 100;
    b2 = a2 % 100;
    c = b2 / 10;
    d = b2 % 10;
    p = a1 * b1 * c * d;
    cout << "Произведение цифр заданного четырехзначного числа равно " << p;
    return 0;
}
*/
// Задание 7
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, reversed, a;
    cout << "Введите трехзначное число" << endl;
    cin >> n;
    while ((n <= 99) || (n >= 1000))
    {
        cout << "Это не трехзначное число. Введите еще раз трехзначное число " << endl;
        cin >> n;
    }
    while (n != 0)
    {
        reversed = n % 10;
        n = n / 10;
        cout << reversed;
    }
    return 0;
}
*/
// Задание 8
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, a, b, c, d, e, f, g, h;
    cout << "Введите число x для решения 3x^4-5x^3+2x^2-x+7: " << endl;
    cin >> x;
    // x(3x^3-5x^2+2x-1)+7
    // x(x(3x^2-5x+2)-1)+7
    // x(x(x(3x-5)+2)-1)+7
    a = 3 * x;
    b = a - 5;
    c = x * b;
    d = c + 2;
    e = x * d;
    f = e - 1;
    g = x * f;
    h = g + 7;
    cout << "3*(" << x << ")^4-5*(" << x << ")^3+2*(" << x << ")^2-" << x << "+7 = " << h;
    return 0;
}
*/
// Задание 9
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3, del, del_x, del_y, del_z, x, y, z;
    cout << "Введите коэффициенты систеиемы уравнений " << endl << "a1x + b1y + с1z = d1" << endl << "a2x + b2y + с2z = d2" << endl << "a3x + b3y + с3z = d3" << endl;
    cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2 >> a3 >> b3 >> c3 >> d3;
    del = a1 * b2 * c3 + a2 * b3 * c1 + b1 * c2 * a3 - a3 * b2 * c1 - b3 * c2 * a1 - a2 * b1 * c3;
    while (del == 0)
    {
        cout << "Определитель системы не должен быть равен 0. Введите снова коэффициенты систеиемы уравнений " << endl;
        cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2 >> a3 >> b3 >> c3 >> d3;
        del = a1 * b2 * c3 + a2 * b3 * c1 + b1 * c2 * a3 - a3 * b2 * c1 - b3 * c2 * a1 + a2 * b1 * c3;
    }

    del_x = d1 * b2 * c3 + d2 * b3 * c1 + b1 * c2 * d3 - d3 * b2 * c1 - d2 * b1 * c3 - b3 * c2 * d1;
    del_y = a1 * d2 * c3 + a2 * d3 * c1 + d1 * c2 * a3 - a3 * d2 * c1 - a2 * d1 * c3 - d3 * c2 * a1;
    del_z = a1 * b2 * d3 + a2 * b3 * d1 + b1 * d2 * a3 - a3 * b2 * d1 - a2 * b1 * d3 - b3 * d2 * a1;
    x = del_x / del;
    y = del_y / del;
    z = del_z / del;
    cout << "Ответ: (" << x << ";" << y << ";" << z << ")";
    return 0;
}
*/