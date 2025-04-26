#include <iostream>
#include "ModulesOlefirov.h"
#include <fstream>
#include <string>
#include <cassert>
#include <locale.h>



using namespace std;

// ������� ��� �������� �� ���� ������ �������� �����
bool fileContains(const string& filename, const string& text) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        if (line.find(text) != string::npos) return true;
    }
    return false;
}

int main() {

setlocale(LC_ALL, "ukr");

    cout << "===  ���������� ������� 10.1 10.2 10.3 ===\n";

    // ---------- ����� ��� ������ 10.1 ----------
    cout << "\n���� 10.1: ����� ���\n";

    string words[] = {"��������", "�����", "���"};
    for (int i = 0; i < 3; ++i) {
        string input = "input_task_10.1_" + to_string(i+1) + ".txt";
        string output = "output_task_10.1_" + to_string(i+1) + ".txt";

        ofstream f(input);
        f << words[i];
        f.close();

        processText(input, output);

        assert(fileContains(output, "ʳ������ �����������"));
        assert(fileContains(output, "�����"));
        cout << "���� 10.1 #" << i+1 << " �������� \n";
    }

    // ---------- ����� ��� ������ 10.2 ----------
    cout << "\n���� 10.2: ����� ���������� � ����\n";

    string initialTexts[] = {"", "����!", "�� ��������  ������ ��� ��������"};

    for (int i = 0; i < 3; ++i) {
        string filename = "output_task_10.2_" + to_string(i+1) + ".txt";
        ofstream f(filename);
        f << initialTexts[i];
        f.close();

        appendInfoToFile(filename);

        assert(fileContains(filename, "ʳ������ �������"));
        assert(fileContains(filename, "���� ��������"));
        cout << "���� 10.2 #" << i+1 << " �������� \n";
    }

    // ---------- ����� ��� ������ 10.3 ----------
    cout << "\n���� 10.3: ���������� S � ������� �������������\n";

    struct TestData {
        double x, y, z;
        int b;
    } testData[] = {
        {1, 2, 3, 5},   // ��������� �������
        {0, 1, 2, 15},  // x=0
        {1, 2, -1, 7}   // z<0 (���������� z)
    };

    for (int i = 0; i < 3; ++i) {
        string filename = "output_task_10.3_" + to_string(i+1) + ".txt";

        processTask10_3(testData[i].x, testData[i].y, testData[i].z, testData[i].b, filename);

        assert(fileContains(filename, "s_calculation"));
        assert(fileContains(filename, "����� b � ������� ������"));
        cout << "���� 10.3 #" << i+1 << " �������� \n";
    }

    cout << "\n�� ����� ������� ������! \n";
    return 0;
}
