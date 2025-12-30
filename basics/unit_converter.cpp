#include <iostream>
using namespace std;

int main() {
	int main_menu, sub_menu; //메인 메뉴, 서브 메뉴
	float inch, centi; //인치, 센티미터
	float cel, fah; //화씨, 섭씨

	while (1) {
		cout << "[단위변환 프로그램] \n";
		cout << "1. 인치 <-> 센티미터 \n";
		cout << "2. 화씨 <-> 섭씨 \n";
		cout << "메뉴를 선택 하세요.: ";
		cin >> main_menu;

		if (main_menu == 1) {
			cout << endl;
			cout << "1. 인치 -> 센티미터 \n";
			cout << "2. 센티미터 -> 인치 \n";
			cout << "메뉴를 선택 하세요.: ";
			cin >> sub_menu;
			if (sub_menu == 1) {
				cout << endl;
				cout << "inch를 입력하세요.: ";
				cin >> inch;
				centi = inch * 2.54;
				cout << inch << "inch = " << centi << "cm" << endl;
				cout << endl;
			}
			else if (main_menu == 2) {
				cout << endl;
				cout << "cm를 입력하세요.: ";
				cin >> centi;
				inch = centi / 2.54;
				cout << centi << "centi = " << inch << "inch" << endl;
				cout << endl;
			}
		}
		else if (main_menu == 2) {
			cout << endl;
			cout << "1. 화씨 -> 섭씨 \n";
			cout << "2. 섭씨 -> 화씨 \n";
			cout << "메뉴를 선택 하세요.: ";
			cin >> sub_menu;
			if (sub_menu == 1) {
				cout << endl;
				cout << "℉를 입력하세요. : ";
				cin >> fah;
				cel = (fah - 32) * 5 / 9;
				cout << fah << "℉ = " << cel << "℃" << endl;
				cout << endl;
			}
			else if (sub_menu == 2) {
				cout << endl;
				cout << "℃를 입력하세요.: ";
				cin >> cel;
				fah = (cel * 9 / 5) + 32;
				cout << cel << "℃ = " << fah<< "℉ " << endl;
				cout << endl;
			}
		}
		return 0;
	}

}
