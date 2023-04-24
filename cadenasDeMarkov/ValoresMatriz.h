#pragma once
#include<vector>
#include<iostream>
using namespace System;
using namespace std;
const int FILA = 4;
const int COL1 = 4;
const int COL2 = 1;


class ValoresMatriz {
private:
    vector<int>numeros;
    int ultimoV;
    int arreglo[91];
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0,
        d1 = 0, d2 = 0, d3 = 0, d4 = 0,
        e1 = 0, e2 = 0, e3 = 0, e4 = 0,
        f1 = 0, f2 = 0, f3 = 0, f4 = 0,
        sumaC = 0, sumaD = 0, sumaE = 0, sumaF = 0;

    double a_11, a_12, a_13, a_14,
        a_21, a_22, a_23, a_24,
        a_31, a_32, a_33, a_34,
        a_41, a_42, a_43, a_44;

    double result[FILA][COL2];
    double result2[FILA][COL2];
    double result3[FILA][COL2];
    double result4[FILA][COL2];

    int clima1 = 0, clima2 = 0, clima3 = 0, clima4 = 0;
    double maximo1, maximo2, maximo3, maximo4;
public:
    ValoresMatriz() {

    }
    ~ValoresMatriz() {}
    void agregarNumeros(int cant) {
        Random nox;
        int nax;
        for (size_t i = 0; i < cant; i++) {
            nax = nox.Next(1, 5);
            numeros.push_back(nax);
        }
        for (size_t i = 0; i < cant; i++) {
            cout << numeros[i] << " ";
            ultimoV = numeros[cant - 1];
        }

        for (size_t i = 0; i < cant; i++) {
            if (numeros[i] == 1) cout << " S ";
            else if (numeros[i] == 2) cout << " PS ";
            else if (numeros[i] == 3) cout << " N ";
            else cout << " PN ";
        }
        copy(numeros.begin(), numeros.end(), arreglo);
        cout << endl;
        for (int i = 0; i < numeros.size(); i++) {
            cout << arreglo[i] << " ";
        }
    }

    int getUltimoValor() { return this->ultimoV; }
    int getClima1() { return this->clima1; }
    int getClima2() { return this->clima2; }
    int getClima3() { return this->clima3; }
    int getClima4() { return this->clima4; }
    void matrizFinal1(double matriz1[][COL1], double matriz2[][COL2], double result[][COL2]) {

        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * matriz2[k][j];
                }
                result[i][j] = sum;
            }
        }

        //mostramos el resultado jijijiJA
        cout << "Matriz resultante: " << endl;
        maximo1 = result[0][0];
        clima1;
        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                cout << "matriz [" << i << "][" << j << "] " << result[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (result[i][j] >= maximo1) maximo1 = result[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (maximo1 == result[0][0])      clima1 = 10;
                else if (maximo1 == result[1][0]) clima1 = 11;
                else if (maximo1 == result[2][0]) clima1 = 12;
                else if (maximo1 == result[3][0]) clima1 = 13;
            }
            cout << endl;
        }

        cout << endl;
        cout << endl;

        cout << "La probabilidad maxima es " << maximo1 << " por lo que el clima deberia ser " << clima1;
        cout << endl;
        cout << endl;
    }
    void matrizFinal2(double matriz1[][COL1], double matriz2[][COL2], double result2[][COL2]) {
        double aux[FILA][COL2];
        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * matriz2[k][j];
                }
                aux[i][j] = sum;
            }
        }

        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * aux[k][j];
                }
                result2[i][j] = sum;
            }
        }

        //mostramos el resultado jijijiJA
        cout << "Matriz resultante 2: " << endl;
        maximo2 = result2[0][0];
        clima2;
        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                cout << "matriz [" << i << "][" << j << "] " << result2[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (result2[i][j] >= maximo2) maximo2 = result2[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (maximo2 == result2[0][0]) clima2 = 10;
                else if (maximo2 == result2[1][0]) clima2 = 11;
                else if (maximo2 == result2[2][0]) clima2 = 12;
                else if (maximo2 == result2[3][0]) clima2 = 13;
            }
            cout << endl;
        }

        cout << endl;
        cout << endl;

        cout << "La probabilidad maxima es " << maximo2 << " por lo que el clima deberia ser " << clima2;
        cout << endl;
        cout << endl;
    }
    void matrizFinal3(double matriz1[][COL1], double matriz2[][COL2], double result3[][COL2]) {
        double aux[FILA][COL2];
        double aux1[FILA][COL2];
        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * matriz2[k][j];
                }
                aux[i][j] = sum;
            }
        }
        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * aux[k][j];
                }
                aux1[i][j] = sum;
            }
        }

        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * aux1[k][j];
                }
                result3[i][j] = sum;
            }
        }

        //mostramos el resultado jijijiJA
        cout << "Matriz resultante 2: " << endl;
        maximo3 = result3[0][0];
        clima3;
        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                cout << "matriz [" << i << "][" << j << "] " << result3[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (result3[i][j] >= maximo3) maximo3 = result3[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (maximo3 == result3[0][0]) clima3 = 10;
                else if (maximo3 == result3[1][0]) clima3 = 11;
                else if (maximo3 == result3[2][0]) clima3 = 12;
                else if (maximo3 == result3[3][0]) clima3 = 13;
            }
            cout << endl;
        }

        cout << endl;
        cout << endl;

        cout << "La probabilidad maxima es " << maximo3 << " por lo que el clima deberia ser " << clima3;
        cout << endl;
        cout << endl;
    }
    void matrizFinal4(double matriz1[][COL1], double matriz2[][COL2], double result4[][COL2]) {
        double aux[FILA][COL2];
        double aux1[FILA][COL2];
        double aux2[FILA][COL2];
        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * matriz2[k][j];
                }
                aux[i][j] = sum;
            }
        }
        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * aux[k][j];
                }
                aux1[i][j] = sum;
            }
        }
        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * aux1[k][j];
                }
                aux2[i][j] = sum;
            }
        }

        for (int i = 0; i < FILA; i++) {
            for (int j = 0; j < COL2; j++) {
                double sum = 0;
                for (int k = 0; k < COL1; k++) {
                    sum += matriz1[i][k] * aux2[k][j];
                }
                result4[i][j] = sum;
            }
        }

        //mostramos el resultado jijijiJA
        cout << "Matriz resultante 2: " << endl;
        maximo4 = result4[0][0];
        clima4;
        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                cout << "matriz [" << i << "][" << j << "] " << result4[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (result4[i][j] >= maximo4) maximo4 = result4[i][j];
            }
            cout << endl;
        }

        for (int i = 0; i < FILA; i++) {

            for (int j = 0; j < COL2; j++) {
                if (maximo4 == result4[0][0]) clima4 = 10;
                else if (maximo4 == result4[1][0]) clima4 = 11;
                else if (maximo4 == result4[2][0]) clima4 = 12;
                else if (maximo4 == result4[3][0]) clima4 = 13;
            }
            cout << endl;
        }

        cout << endl;
        cout << endl;

        cout << "La probabilidad maxima es " << maximo4 << " por lo que el clima deberia ser " << clima4;
        cout << endl;
        cout << endl;
    }

    void contar(int cant) {

        //------------------------------------------------------------
        for (int z = 0; z < cant; z++) {
            if (arreglo[z] == 1) {
                for (int w = z + 1; w < z + 2; w++) {
                    if (arreglo[w] == 1) c1++;
                    else if (arreglo[w] == 2) c2++;
                    else if (arreglo[w] == 3) c3++;
                    else if (arreglo[w] == 4) c4++;
                    //continue;
                }
            }
            if (arreglo[z] == 2) {
                for (int w = z + 1; w < z + 2; w++) {
                    if (arreglo[w] == 1) d1++;
                    else if (arreglo[w] == 2) d2++;
                    else if (arreglo[w] == 3) d3++;
                    else if (arreglo[w] == 4) d4++;
                    //continue;
                }
            }
            if (arreglo[z] == 3) {
                for (int w = z + 1; w < z + 2; w++) {
                    if (arreglo[w] == 1) e1++;
                    else if (arreglo[w] == 2) e2++;
                    else if (arreglo[w] == 3) e3++;
                    else if (arreglo[w] == 4) e4++;
                    //continue;
                }
            }
            if (arreglo[z] == 4) {
                for (int w = z + 1; w < z + 2; w++) {
                    if (arreglo[w] == 1) f1++;
                    else if (arreglo[w] == 2) f2++;
                    else if (arreglo[w] == 3) f3++;
                    else if (arreglo[w] == 4) f4++;
                    //continue;
                }
            }
        }



        //--------------------------------------------------------
        cout << " \n C1: " << c1 <<
            "\n C2: " << c2 <<
            "\n C3: " << c3 <<
            "\n C4: " << c4

            << " \n D1: " << d1 <<
            "\n D2: " << d2 <<
            "\n D3: " << d3 <<
            "\n D4: " << d4

            << " \n E1: " << e1 <<
            "\n E2: " << e2 <<
            "\n E3: " << e3 <<
            "\n E4: " << e4

            << " \n F1: " << f1 <<
            "\n F2: " << f2 <<
            "\n F3: " << f3 <<
            "\n F4: " << f4 << "\n";

        sumaC = c1 + c2 + c3 + c4;
        sumaD = d1 + d2 + d3 + d4;
        sumaE = e1 + e2 + e3 + e4;
        sumaF = f1 + f2 + f3 + f4;

        cout << "\n C: " << sumaC << "\n D: " << sumaD << "\n E: " << sumaE << "\n F: " << sumaF << "\n";

    }
    void matrizEstocastica() {
        a_11 = c1 * 1.0 / sumaC; a_12 = d1 * 1.0 / sumaD; a_13 = e1 * 1.0 / sumaE; a_14 = f1 * 1.0 / sumaF;
        a_21 = c2 * 1.0 / sumaC; a_22 = d2 * 1.0 / sumaD; a_23 = e2 * 1.0 / sumaE; a_24 = f2 * 1.0 / sumaF;
        a_31 = c3 * 1.0 / sumaC; a_32 = d3 * 1.0 / sumaD; a_33 = e3 * 1.0 / sumaE; a_34 = f3 * 1.0 / sumaF;
        a_41 = c4 * 1.0 / sumaC; a_42 = d4 * 1.0 / sumaD; a_43 = e4 * 1.0 / sumaE; a_44 = f4 * 1.0 / sumaF;


        cout << "\nLos datos probabilisticos xd  son: \n a11: "
            << a_11 << " \n a12: " << a_12 << "\n a13: " << a_13 << " \n a14: " << a_14 << "\n"
            << "\n a21: " << a_21 << " \n a22: " << a_22 << "\n a23: " << a_23 << " \n a24: " << a_24 << "\n"
            << "\n a31: " << a_31 << " \n a32: " << a_32 << "\n a33: " << a_33 << " \n a34: " << a_34 << "\n"
            << "\n a41: " << a_41 << " \n a42: " << a_42 << "\n a43: " << a_43 << " \n a44: " << a_44 << "\n";
    }
    void matricesPyS() {
        matrizEstocastica();
        double matriz1[FILA][COL1] = { {a_11,a_12,a_13,a_14},
                                {a_21,a_22,a_23,a_24},
                                {a_31,a_32,a_33,a_34},
                                {a_41,a_42,a_43,a_44} };

        //mostrar valores de la primera matriz
        for (int a = 0; a < FILA; a++) {
            for (int b = 0; b < COL1; b++) {
                cout << matriz1[a][b] << " ";
            }
            cout << endl;
        }

        //calulando valor de la segunda matriz
        int mt2_11 = 0, mt2_21 = 0, mt2_31 = 0, mt2_41 = 0;

        //re chafa esta forma de conseguir el valor 2da matriz XD a lo progra1 carita fachera facherita 8|
        if (ultimoV == 1) {
            mt2_11 = 1;
            mt2_21 = 0;
            mt2_31 = 0;
            mt2_41 = 0;
        }
        else if (ultimoV == 2) {
            mt2_11 = 0;
            mt2_21 = 1;
            mt2_31 = 0;
            mt2_41 = 0;
        }
        else if (ultimoV == 3) {
            mt2_11 = 0;
            mt2_21 = 0;
            mt2_31 = 1;
            mt2_41 = 0;
        }
        else if (ultimoV == 4) {
            mt2_11 = 0;
            mt2_21 = 0;
            mt2_31 = 0;
            mt2_41 = 1;
        }


        //mostrando matriz 2
        cout << "MATRIZ 2: " << endl;
        double matriz2[FILA][COL2] = { {mt2_11},
                                        {mt2_21},
                                        {mt2_31},
                                         {mt2_41} };
        for (int a = 0; a < FILA; a++) {
            for (int b = 0; b < COL2; b++) {
                cout << matriz2[a][b] << " ";
            }
            cout << endl;
        }
        cout << endl;
        matrizFinal1(matriz1, matriz2, result);
        matrizFinal2(matriz1, matriz2, result2);
        matrizFinal3(matriz1, matriz2, result3);
        matrizFinal4(matriz1, matriz2, result4);

    }

    void operacion(int cant) {
        agregarNumeros(cant);
        contar(cant);
        matricesPyS();
    }

};