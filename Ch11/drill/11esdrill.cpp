#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int birth_year = 2001;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    int a, b, c, d;
    cin >> a >> hex >> b >> oct >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

    cout << 1234.56789 << "\t\t(defaultfloat)\n" << fixed
         << 1234.56789 << "\t(fixed)\n" << scientific
         << 1234.56789 << "\t(scientific)\n";
    cout << dec << 38 << '\n';

    cout << '|' << setw(8) << "Adrian" << '|' << setw(8) << "Fekete" 
         << '|' << setw(24) << "2001adrian.fekete@gmail.com"
         << '|' << setw(16) << "(420) 420-6969" << "|\n"
         << '|' << setw(8) << "Kristof" << '|' << setw(8) << "Molnar"
         << '|' << setw(24) << "mol3sztalo@gmail.com"
         << '|' << setw(16) << "(420) 696-4204" << "|\n";

    return 0;
}