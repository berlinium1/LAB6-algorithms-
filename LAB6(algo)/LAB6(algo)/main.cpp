//
//  main.cpp
//  LAB6(algo)
//
//  Created by Берлинский Ярослав Владленович on 01.12.2020.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
int func(int a1, int a2)
{
    if (a1*a2==0) return (a1+a2);
    if (a1<a2)
        return func(a1, a2%a1);
    else return func(a1%a2, a2);
};
int main(){
    int a,b;
    cout<<"Введіть значення першого числа: ";
    cin>>a;
    cout<<"\nВведіть значення другого числа: ";
    cin>>b;
    if (a<0 || b<0) {a=fabs(a);
        b=fabs(b);
        printf("\nНСД(%d, %d) = %d\n", a,b,func(a,b));
    }
    else printf("\nНСД(%d, %d) = %d\n", a,b,func(a,b));
}
