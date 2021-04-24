#include <iostream>

#define chislo_v_diapazone(chislo, max_chislo) (((chislo)>=0) && (chislo<(max_chislo))) //входит число в диапазон от нуля (включительно) до переданного ей второго аргумента (исключительно)

#define element_massiva(massiv, stroka, stolbets) (*(*((massiv) + (stroka))+(stolbets))) //доступ к элементу двумерного массива (организованного динамически) посредством разыменования указателей

#define kolichestvo_elementov_massiva(massiv,int) (sizeof(massiv)/sizeof(int)) //возвращение количество элементов локального массива, принимающую на вход ссылку на массив и его тип

int main()
{
    //Задание 1
    int chislo, max_chislo=100;
    std::cout<<"Input a number: ";
    std::cin>>chislo;
    std::cout<<std::boolalpha<<chislo_v_diapazone(chislo, max_chislo)<<"\n";
    
    //Задание 2
    int** massiv = new int*[8]{};
    for (int schetchik = 0; schetchik < 8; schetchik++)
    {
        massiv[schetchik] = new int[8]{};
    }
    massiv[2][3]=17;
    massiv[3][2]=-17;
    std::cout<<element_massiva(massiv,2,3)<<"\n";

    //Задание 3
    int massiv3 [17];
    std::cout<<kolichestvo_elementov_massiva(massiv3, int);

    return 0;
}
