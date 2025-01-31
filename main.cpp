/*
������ 3
��� ����� �������:
� ���������� �������� �����. ����� ������������ ������ �-1�, ���������� �������� �� ����� ����� �� ����������� ����� ����� ��������. 
����� ������������ ������ �-2�, ��������� ��������� ������.

������:
����: 7 5 3 1 2 4 6 -1
�����: 5 (� ��������������� ���� ������ �������� ���: {1,2,3,4,5,6,7})
����: 1 1 1 -1
�����: 2 (� ��������������� ���� ������ �������� ���: {1,1,1,1,2,3,4,5,6,7})
���� -2
���������� ���������

������ � ������������:
����� ��������������, ��� ����� ������� ��������� ����� (����� ���� ������ ���� �����).
*/

#include <iostream>
#include <vector>

using namespace std;

void sort_vec(vector<int>& v){
    for (size_t i=0; i<v.size(); ++i){
        for (size_t j=0; j<v.size()-1-i; ++j){
            if (v[j]>v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "Russian");
    vector<int> v;
    int number;
    cout << "����: ";
    cin >> number;

    while (number != -2){
        if (number == -1){
            if (v.size()>=5){
                cout << "�����: " << v[4] << endl;
                cout << "����: ";
            }
            else {
                cout << "� ������� ������ 5 ���������" << endl;
                cout << "����: ";
            }
        }
        else {
            v.push_back(number);
            sort_vec(v);
        }
        cin >> number;
    }

    cout << "���������� ���������";
}