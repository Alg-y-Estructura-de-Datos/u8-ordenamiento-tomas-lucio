#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

unsigned long long quickSort(vector<int> &arr, int inicio, int fin) {
    unsigned long long contadorComparaciones = 0;
    if (inicio < fin) {
        contadorComparaciones++;
        int i = inicio, j = fin;
        int pivot = arr[(inicio + fin) / 2];
        while (i <= j) {
            while (arr[i] < pivot) {
                i++;
                contadorComparaciones++;
            }
            while (arr[j] > pivot) {
                j--;
                contadorComparaciones++;
            }
            contadorComparaciones++;
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
            contadorComparaciones++;
        }

        // Llamadas recursivas para las dos mitades
        contadorComparaciones += quickSort(arr, inicio, j);
        contadorComparaciones += quickSort(arr, i, fin);
    }
    return contadorComparaciones;
}



// Función para mostrar el array
void printArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    ifstream file("numeros.txt");
    string line;
    vector<int> arr;

    if (file.is_open()) {
        // Leer el archivo y extraer los números
        while (getline(file, line, ',')) {
            stringstream ss(line);
            int num;
            ss >> num;
            arr.push_back(num);
        }
        file.close();

        // Mostrar el array antes de ordenar
//        cout << "Array desordenado: ";
//        printArray(arr);

        // Aplicar Bubble Sort
        unsigned long long cantidadCondicionales  = quickSort(arr,0,arr.size() - 1);
        cout << "Cantidad de comparaciones numeros al Azar: " << cantidadCondicionales << endl;
        // Mostrar el array ordenado
        cout << "Array ordenado: "<< endl;
//        printArray(arr);
//
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }

    ifstream file2("numerosOrdenados.txt");
    if (file2.is_open()) {
        // Leer el archivo y extraer los números
        while (getline(file2, line, ',')) {
            stringstream ss(line);
            int num;
            ss >> num;
            arr.push_back(num);
        }
        file2.close();

        // Mostrar el array antes de ordenar
//        cout << "Array desordenado: ";
//        printArray(arr);

        // Aplicar Bubble Sort
        unsigned long long cantidadCondicionales  = quickSort(arr,0,arr.size() - 1);
        cout << "Cantidad de comparaciones numeros ordenados: " << cantidadCondicionales << endl;
        // Mostrar el array ordenado
        cout << "Array ordenado: "<< endl;
//        printArray(arr);
//
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }

    ifstream file3("numerosInversa.txt");
    if (file3.is_open()) {
        // Leer el archivo y extraer los números
        while (getline(file3, line, ',')) {
            stringstream ss(line);
            int num;
            ss >> num;
            arr.push_back(num);
        }
        file3.close();

        // Mostrar el array antes de ordenar
//        cout << "Array desordenado: ";
//        printArray(arr);

        // Aplicar Bubble Sort
        unsigned long long cantidadCondicionales  = quickSort(arr,0,arr.size() - 1);
        cout << "Cantidad de comparaciones numeros ordenados: " << cantidadCondicionales << endl;
        // Mostrar el array ordenado
        cout << "Array ordenado: "<< endl;
//        printArray(arr);
//
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }

    return 0;
}
