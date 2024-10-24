#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

// Función para aplicar Insertion Sort y contar comparaciones
unsigned long long insertionSort(vector<int> &arr) {
    unsigned long long contadorComparaciones = 0;
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int aux = arr[i];
        int marcador = i;

        // Comparar y desplazar elementos
        while (marcador > 0 && aux < arr[marcador - 1]) {
            arr[marcador] = arr[marcador - 1];
            marcador--;
            contadorComparaciones++;  // Cuenta cada comparación en el while
            contadorComparaciones++;
        }

        // Inserción
        arr[marcador] = aux;
        contadorComparaciones++;  // Cuenta la comparación fallida que sale del while
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
        unsigned long long cantidadCondicionales  = insertionSort(arr);
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
        unsigned long long cantidadCondicionales  = insertionSort(arr);
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
        unsigned long long cantidadCondicionales  = insertionSort(arr);
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
