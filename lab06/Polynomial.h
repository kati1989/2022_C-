//
// Created by Kati on 10/26/2022.
//
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>
using namespace std;
class Polynomial {
// Polinom együtthatói
    double *coefficients;
// Polinom együtthatóinak a száma
    int capacity;
public:
    Polynomial(int degree, const double coefficients[]);
    Polynomial(const Polynomial &that);
    Polynomial(Polynomial &&that);
    ~Polynomial();
// Polinom fokszáma
    int degree() const;
// Polinom értéke a megadott pontban
    double evaluate(double x) const;
// Polinom deriváltja
    Polynomial derivative() const;
    double operator[](int index) const;
    friend Polynomial operator -(const Polynomial &a);
    friend Polynomial operator +(const Polynomial &a, const Polynomial &b);
    friend Polynomial operator -(const Polynomial &a, const Polynomial &b);
    friend Polynomial operator *(const Polynomial &a, const Polynomial &b);
    friend ostream & operator <<(ostream& out, const Polynomial& what);
/* copy assignment - mély másolat letiltása értékadásra nézve */
    Polynomial& operator=(const Polynomial&) = delete;
/* move assignment - sekély másolat letiltása értékadásra nézve */
    Polynomial& operator=(Polynomial&&) = delete;
};
#endif

/*
 *
 * 3. feladat - Parciális 2017
Adott egy Polynomial.h fejállomány, amely egy egész együtthatós polinom típust deklarál.
P(x) = a0Xn + a1Xn-1 + ...+ an-1x + an
degree(P) → n
együtthatók száma (capacity): n + 1
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>
using namespace std;
class Polynomial {
// Polinom együtthatói
double *coefficients;
// Polinom együtthatóinak a száma
int capacity;
public:
Polynomial(int degree, const double coefficients[]);
Polynomial(const Polynomial &that);
Polynomial(Polynomial &&that);
~Polynomial();
// Polinom fokszáma
int degree() const;
// Polinom értéke a megadott pontban
double evaluate(double x) const;
// Polinom deriváltja
Polynomial derivative() const;
double operator[](int index) const;
friend Polynomial operator -(const Polynomial &a);
friend Polynomial operator +(const Polynomial &a, const Polynomial &b);
friend Polynomial operator -(const Polynomial &a, const Polynomial &b);
friend Polynomial operator *(const Polynomial &a, const Polynomial &b);
friend ostream & operator <<(ostream& out, const Polynomial& what);
/* copy assignment - mély másolat letiltása értékadásra nézve */
//Polynomial& operator=(const Polynomial&) = delete;
///* move assignment - sekély másolat letiltása értékadásra nézve */
//Polynomial& operator=(Polynomial&&) = delete;
//};
//#endif
//FEJLETT PROGRAMOZÁSI TECHNIKÁK (C++)
//6. GYAKORLAT
//        ________________________________________________________________________________
//Követelmény
//● Implementáljuk a deklarált függvényeket / operátorokat egy polynomial.cpp állományban.
//● Minden egyes függvényre készítsünk olyan kódrészletet (main.cpp), amelyben ellenőrizhető az
//adott függvény helyessége.
//Magyarázat
//● A degree függvény visszatéríti a polinom fokszámát.
//● Az evaluate függvény kiértékeli a polinomot a megadott pontban Horner-módszerrel.
//● A derivative függvény visszatéríti a polinom derivált polinomját.
//● Az index operatort elegendő csak olvasásra megírni.
//Pontozás:
//● konstruktor: 0.5 pont
//● copy konstruktor: 0.5 pont
//● move konstruktor: 0.5 pont
//● destruktor: 0.5 pont
//● operator<<: 1 pont
//● degree(): 0.5 pont
//● evaluate(): 0.5 pont
//● derivative(): 0.5 pont
//● operator[]: 1 pont
//● operator -, +, -, *: 2 pont
//● main: 2.5 pon
//*/