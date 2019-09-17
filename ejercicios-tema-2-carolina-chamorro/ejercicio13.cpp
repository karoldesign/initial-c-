//Ejercicios del tema 2

#include <iostream>
#include <iomanip>
#include <limits>
#include <math.h>
using namespace std;

int ejercicio1() {

    double volumen = (M_PI * (14.5*14.5) * 26.79) / 3;
    cout << "El volumen de un cono es " << volumen;

    return 0;
}

int ejercicio2() {
    
    double ratio = 14.5;
    double altura = 26.79;
    double volumen = (M_PI * (ratio*ratio) * altura) / 3;
    cout << "El volumen de un cono es " << volumen;
    
    return 0;
}

int ejercicio3() {
    
    int number;
    cout << "Grados Farenhait a grados Celsius: " << endl;
    cin >> number;
    cout << 5/ 9 * (number - 32) << " ºC" << endl;
    
    return 0;
}

int ejercicio4() {
    
    int seconds;
    double hours, minute, second;
    cout << "Escribe una cifra en segundos: ";
    cin >> seconds;
    hours = seconds / 3600;
    minute = ((seconds - hours*3600)/60);
    second = seconds - (hours*3600+minute*60);
    cout << hours << " horas, " << minute << " minutos y " << second << " segundos" << endl;
    
    return 0;
}

int ejercicio5() {
    
    double p1, p2, p3, p4, ef, el, hp, ap;
    cout << "Nota práctica 1: ";
    cin >> p1;
    cout << "Nota práctica 2: ";
    cin >> p2;
    cout << "Nota práctica 3: ";
    cin >> p3;
    cout << "Nota práctica 4: ";
    cin >> p4;
    cout << "Exámen final: ";
    cin >> ef;
    cout << "Ejercicio de laboratorio: ";
    cin >> el;
    cout << "Hojas de problemas: ";
    cin >> hp;
    cout << "Asistencia y participación: ";
    cin >> ap;
    
    cout << "Nota final: " << ((el + hp + ap)/3 * 0.15) + (ef * 0.65) + (((p1 + p2 + p3 + p4) / 4) * 0.20);
    
    return 0;
}

int ejercicio6() {
    
    int r, a, b, c, d;
    double function1, function2, function3, total;
    cout << "Escribe un valor r: ";
    cin >> r;
    cout << "Escribe un valor a: ";
    cin >> a;
    cout << "Escribe un valor b: ";
    cin >> b;
    cout << "Escribe un valor c: ";
    cin >> c;
    cout << "Escribe un valor d: ";
    cin >> d;
    
    function1 = 4 / 3*(r+34);
    function2 = 9*(a +b*c);
    function3 = 3 + d*(2 + a) / a+b*d;
    
    total = function1 - function2 + function3;
    cout << "Final:  " << total << endl;
    
    return 0;
}

int ejercicio7() {
    
    int x = 12;
    double sigma = 2.1836;
    int y = 3;
    double lambda = 1.11695;
    double alfa = 328.67;
    double f;
    
    f = 3 * ((x + sigma + y) / x*x - y*y) - lambda * (alfa - 13.7);
    cout << "Resultado:  " << f << endl;
    cout << "x:  " << x << endl;
    cout << "Sigma:  " << sigma << endl;
    cout << "y:  " << y << endl;
    cout << "Lambda:  " << lambda << endl;
    cout << "alfa:  " << alfa << endl;
    
    return 0;
}

int ejercicio8() {
    
    double sb, cd, ca, he, sub, irpf, tirpf, sn;
    int nh, nmd;
    cout << "Sueldo base: ";
    cin >> sb;

    cout << "Complemento de destino: ";
    cin >> cd;

    cout << "Complemento de cargo académico: ";
    cin >> ca;

    cout << "Horas extras realizadas: ";
    cin >> he;
    
    cout << "Número de hijos: ";
    cin >> nh;
    
    cout << "Número de mayores dependientes: ";
    cin >> nmd;
    
    //Cálculo del sueldo bruto
    sub = ca + sb + cd + (he * 23);
    
    // Cálculo del IRPF
    irpf = 24;
    
    if (nh != 0 && nmd != 0) {
        irpf = 24 - (nh * 2) - nmd;
    }
    
    // Retención por IRPF
    tirpf = sub * (irpf * 0.01);
    
    // Retención por IRPF
    sn = sub - tirpf;
    
    cout << "Sueldo base: " << sb << " €" << endl;
    cout << "Complemento de destino: " << cd << " €" << endl;
    cout << "Complemento de cargo académico: " << ca << " €" << endl;
    cout << "Horas extras realizadas: " << he << endl;
    cout << "Número de hijos: " << nh << endl;
    cout << "Número de mayores dependientes: " << nmd << endl;
    cout << "Cálculo de la nómina.- " << endl;
    cout << "Sueldo bruto " << sub << " €" << endl;
    cout << "Porcentaje de IRPF: " << irpf << "%" << endl;
    cout << "Retención por IRPF: " << tirpf << " €" << endl;
    cout << "Sueldo neto: " << sn << " €" << endl;
    
    return 0;
}

int ejercicio9() {
    
    int a = 1;
    double d = 1.0;
    
    cout << 46 % 9 + 4 * 4 - 2 << endl;
    
    cout << 45 + 43 % 5 * (23 * 3 % 2) << endl;
    
    cout << 45 + 45 * 50 % a-- << endl;
    
    cout << 1.5 * 3 + (++d) << endl;
    
    cout << 1.5 * 3 + d++ << endl;
    
    cout << 3 / (a + 3) << endl;
    
    return 0;
}

int ejercicio10() {
    
    int lado1, lado2, grados, angGrad;
    cout << "Lado 1 del triángulo: ";
    cin >> lado1;
    cout << "Lado 2 del triángulo: ";
    cin >> lado2;
    cout << "Grados del ángulo: ";
    cin >> grados;
    
    angGrad = grados * M_PI / 180;
    cout << (lado1 * lado2 * angGrad) / 2;
    
    
    return 0;
}

int ejercicio11() {
    
    double x, y, f;
    cout << "Variable 1: ";
    cin >> x;
    cout << "Variable 2: ";
    cin >> y;
    
    f = sqrt(pow(1.531, (x + y)) + ((exp(x) - exp(y)) * (sin(x) * tan(y)) / (log(y)*pow(3.141592, x))));
    
    cout << f << endl;
    
    return 0;
}

int ejercicio12() {
    
    int value1, value2, value3;
    double cuota;
    cout << "Capital prestado: ";
    cin >> value1;
    cout << "Interés anual: ";
    cin >> value2;
    cout << "Años que dura el prestamos: ";
    cin >> value3;
    
    cuota = (value1 * (value2 / 12)) / (100 * (1 - (1 + ((value2 / 12) / 100) - (value3 * 12) )));
    
    cout << "Cuota mensual: " << cuota << endl;
    cout << "Total pagado: " << cuota * (value3 * 12);
    
    return 0;
}

int ejercicio13() {
    
    int value1, value2, value3, aux;
    cout << "Introduce la cantidad 1: ";
    cin >> value1;
    cout << "Introduce la cantidad 2: ";
    cin >> value2;
    cout << "Introduce la cantidad 3: ";
    cin >> value3;

    if (value1 > value2) {
        aux=value1;
        value1=value2;
        value2=aux;
    }

    if (value1 > value3) {
        aux=value1;
        value1=value3;
        value3=aux;
    }

    if (value2 > value3) {
        aux=value2;
        value2=value3;
        value3=aux;
    }

    cout << "Cantidades en orden: " << value1 << ", " << value2 << " y " << value3 << endl;
    
    return 0;
}

int ejercicio14() {
    
    char value1, value2, value3;
    cout << "Introduce el texto 1: ";
    cin >> value1;
    cout << "Introduce el texto 2: ";
    cin >> value2;
    cout << "Introduce el texto 3: ";
    cin >> value3;

    cout << "Textos añadidos: " << value1 << ", " << value2 << " y " << value3 << endl;
    
    return 0;
}

int ejercicio15() {
    
    double p1, p2, p3, p4, ef, el, hp, ap;
    cout << "Nota práctica 1: ";
    cin >> p1;
    cout << "Nota práctica 2: ";
    cin >> p2;
    cout << "Nota práctica 3: ";
    cin >> p3;
    cout << "Nota práctica 4: ";
    cin >> p4;
    cout << "Exámen final: ";
    cin >> ef;
    cout << "Ejercicio de laboratorio: ";
    cin >> el;
    cout << "Hojas de problemas: ";
    cin >> hp;
    cout << "Asistencia y participación: ";
    cin >> ap;
    

    if (p1 > 5 && p2 > 5 && p3 > 5 && p4 > 5 && ef >= 4) {
        cout << "Nota final: " << (((el + hp + ap)/3 * 0.15) + (ef * 0.65) + ((p1 + p2 + p3 + p4) / 4) * 0.20);
    }
    
    cout << "Estás suspenso" << endl;
    
    return 0;
}


int ejercicio16() {
    
    int value;
    cout << "Introduce número: ";
    cin >> value;
    
    if (value != 0) {
        if(value % 2 == 0) {
            cout << "El número: " << value << " es par" << endl;
        } else {
            cout << "El número: " << value << " es inpar" << endl;
        }
        ejercicio16();
    }
    
    return 0;
}


int ejercicio17() {
    
    int value;
    double total = 0;
    char unitOfMeasure;
    string measure;
    cout << "Introduce un número real seguido de un espacio y una letra: ";
    cin >> value >> unitOfMeasure;
    
    if (value != 0) {
        switch (unitOfMeasure) {
            case 'p':
                // pulgadas a cm
                measure = "cm";
                total = value * 2.54;
            case 'm':
                // millas a metros
                measure = "km";
                total = value * 1609.34;
                break;
            case 'f':
                // grados Fahrenheit a grados celsius
                measure = "ºF";
                total = (value - 32) * 5 / 9;
                break;
            case 'g':
                // litros a galones líquidos
                measure = "gal";
                total = value / 3.785;
                break;
            case 'o':
                // gramos a Onzas
                measure = "gr";
                total = value / 28.35;
                break;
            case 'l':
                // km a Libras
                measure = "km";
                total = value * 2.205;
                break;
            default:
                cout << "No tengo esa unidad de medida" << endl;
                break;
        }
        
        cout << "La conversión es: " << total << " " << measure << endl;
    }

    return 0;
}

int ejercicio18() {
    
    int value;
    cout << "Introduce número: ";
    cin >> value;
    
    if (value > 0 && value < 101) {
        
        cout << "1 x " << value << " = " << value << endl;
        cout << "2 x " << value << " = " << value * 2 << endl;
        cout << "3 x " << value << " = " << value * 3 << endl;
        cout << "4 x " << value << " = " << value * 4 << endl;
        cout << "5 x " << value << " = " << value * 5 << endl;
        cout << "6 x " << value << " = " << value * 6 << endl;
        cout << "7 x " << value << " = " << value * 7 << endl;
        cout << "8 x " << value << " = " << value * 8 << endl;
        cout << "9 x " << value << " = " << value * 9 << endl;
        cout << "10 x " << value << " = " << value * 10 << endl;
        
    } else {
       ejercicio18();
    }
    
    return 0;
}

int ejercicio19() {
    
    int value, value2, total;
    char operators;
    cout << "Introduce número, espacio, operador, espacio y número: ";
    cin >> value >> operators >> value2;
    
    if (value != 0) {
        switch (operators) {
            case '+':
                total = value + value2;
                cout << value << " + " << value2 << " = " << total << endl;
                break;
            case '-':
                total = value - value2;
                cout << value << " - " << value2 << " = " << total << endl;
                break;
            case '*':
                total = value * value2;
                cout << value << " * " << value2 << " = " << total << endl;
                break;
            case '/':
                total = value / value2;
                cout << value << " / " << value2 << " = " << total << endl;
                break;
        }
        
    }
    
    return 0;
}

int ejercicio20() {
    
    cout << "El ejercicio 20 ejecuta: " << endl;
    
//    cout << a << c << b << endl;
    cout << "103.33333x" << endl;
    
//    cout << setw(5) << a << setw(10) << setprecision(2)
//    << c << b << endl;
    cout << "    10       3.3x" << endl;
    
//    cout << setw(5) << setprecision(2) << c << setw(10)
//    << b << setw(10) << a << endl;
    cout << " 3.3         x        10" << endl;

    return 0;
}

int ejercicio21() {
    
    int unit, numberId;
    double price, total;
    char question, symbol;
    string name, lastName, lastName2, wordId, productName, productName2, numberProduct, address1 ,address2, address3, address4, address5, address6;
    cout << "Precio del producto: ";
    cin >> price;
    cout << "Unidades: ";
    cin >> unit;
    cout << "¿Descuento (s/n)? ";
    cin >> question;
    cout << "Nombre y apellidos del cliente: ";
    cin >> name >> lastName >> lastName2;
    cout << "NIF del cliente: ";
    cin >> numberId >> symbol >> wordId;
    cout << "Dirección del cliente: ";
    cin >> address1 >> address2 >> address3 >> address4 >> address5 >> address6;
    cout << "Nombre del producto: ";
    cin >> productName >> productName2 >> numberProduct;
    string productNames = productName + " " + productName2 + " " + numberProduct;
    string andress = address1 + " " + address2 + " " + address3 + " " + address4 + " " + address5 + " " + address6;
    
    cout << "Factura: " << endl;
    cout.width(600); cout << right << name << " " << lastName << " " << lastName2 << endl;
    cout.width(600); cout << right << andress << endl;
    cout.width(600); cout << right << numberId << symbol << wordId << endl;
    cout << "Producto: " << productName << endl;
    cout << "Precio unitario" << endl;
    cout.width(600); cout << right << price << endl;
    cout << "Unidades" << endl;
    cout.width(600); cout << right << unit << endl;
    cout << "Total" << endl;
    cout.width(600); cout << right << price * unit << endl;
    total = price * unit;
    if (question == 's') {
        cout << "Descuento" << endl;
        cout.width(600); cout << right << ((price * unit) * 0.85) - total << endl;
        cout << "Total tras descuento" << endl;
        total = (price * unit) - ((price * unit) * 0.15);
        cout.width(600); cout << right << total << endl;
    }
    cout << "I.V.A. (21%)" << endl;
    cout.width(600); cout << right << setprecision(3) << total * 0.21 << endl;
    cout << "Precio final" << endl;
    cout.width(600); cout << right << setprecision(3) << total + (total * 0.21)<< endl;
    
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int ejercicio = 0;
    cout << "¿Qué ejercicio quieres ejecutar?: ";
    cin >> ejercicio;
    
    switch (ejercicio) {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
        case 6:
            ejercicio6();
            break;
        case 7:
            ejercicio7();
            break;
        case 8:
            ejercicio8();
            break;
        case 9:
            ejercicio9();
            break;
        case 10:
            ejercicio10();
            break;
        case 11:
            ejercicio11();
            break;
        case 12:
            ejercicio12();
            break;
        case 13:
            ejercicio13();
            break;
        case 14:
            ejercicio14();
            break;
        case 15:
            ejercicio15();
            break;
        case 16:
            ejercicio16();
            break;
        case 17:
            ejercicio17();
            break;
        case 18:
            ejercicio18();
            break;
        case 19:
            ejercicio19();
            break;
        case 20:
            ejercicio20();
            break;
        case 21:
            ejercicio21();
            break;
            
        default:
            cout << "No tengo ese ejercicio" << endl;
            break;
    }
    return 0;
}
