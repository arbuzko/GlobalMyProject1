// заголовочный файл funcs.h
#ifndef __FUNCS_H__ #define __FUNCS_H__
double MySum(double, double); double MySub(double, double);double MyMul(double, double);double MyDiv(double, double);int MyPow(int, int);int MyPow(int num, int n) { int res = num; for (int i = 1; i < n; i++) { res *= num; } return res; }
#endif // __FUNCS_H__