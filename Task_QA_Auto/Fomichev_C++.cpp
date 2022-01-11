#include <iostream>

using namespace std;

int main() {

/* Если введенное число больше 7, то вывести “Hello” */
    int number;
    cout << "Input number (if value > 7 you will see 'Hello'): ";
    //проверка на ввод только цифры
    while (!(cin >> number) || (cin.peek() != '\n')) {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Please input number!" << endl;
    }
    if (number > 7) cout << "Hello\n";
        else cout << "Number <= 7\n";

/* Eсли введенное имя совпадает с Piter, то вывести “Hello, Piter”, если нет, то вывести "This name isn't Piter" */
    string name;
    cout << "Type name (if name 'Piter', you will see 'Hello, Piter'): ";
    cin >> name;
    if (name.compare("Piter")==0) cout << "Hello, Piter\n";
        else cout << "This name isn't Piter\n";

/* На входе есть числовой массив, необходимо вывести элементы массива кратные 3 */
    int size;
    //задаем размер массива
    cout << "Input size of array: ";
    while (!(cin >> size) || (cin.peek() != '\n')) {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Please input size of array!" << endl;
    }
    int arr[size];
    cout << "Input " << size << " values in array:\n";
        //заполняем массив с клавиатуры
        for (int i = 0; i < size; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            while (!(cin >> arr[i]) || (cin.peek() != '\n')) {
                cin.clear();
                while (cin.get() != '\n');
                cout << "Please input number!" << endl;
                cout << "[" << i + 1 << "]" << ": ";
            }
        }
        //выводим массив кратный 3
        cout << "\nArray multiple of 3: ";
        int amount = 0;
        for (int i = 0; i < size; ++i) {
            if (((arr[i] % 3) == false) && arr[i]!=0) {
                cout << arr[i] << " ";
                amount++;
            }
        }
        if (amount == 0) cout << " does not include anything";
        cout << endl;
        system("pause");
    return 0;
}