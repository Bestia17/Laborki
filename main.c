#include <stdio.h>  // zawiera operacje wejścia wyjścia np. printf()

int zwraca1001 (int dzielnik){
    int tysiac=1000;

    for(int i = 0;i<dzielnik ; i++)
        {
        tysiac=tysiac + 1.0/dzielnik;
        }

return tysiac;
}

float zwraca1001f (int dzielnik){
    float tysiac=1000;

    for(int i = 0;i<dzielnik ; i++)
        {
        tysiac=tysiac +1.0/dzielnik;
        }

return tysiac;
}

int main()
{

    printf("Cześć świecie!\n");


    double double_ = 15.60349345;
    float float_ = 55.232454;
    int int_ = 1234562344;
    char char_ = 'P'; // kod ASCII

    printf("Wypisywanie liczb = %e - %f - %d -%d] \n",double_, float_ , int_, char_); // char przetłumaczony na ASCII, %c

    printf("int : %d flout : %d double : %d char : %d \n",sizeof(int_ ), sizeof(float_), sizeof(double_), sizeof(char_));
    //sizeof - zwraca rozmiar obiektu w wielokrotności char
    printf("1001 = %d \n", zwraca1001(2));

    printf("1001 = %f \n", zwraca1001f(8192)); // 2^13
    printf("1001 = %f \n", zwraca1001f(16384)); // 2^14
    printf("1001 = %f \n", zwraca1001f(32768)); // 2^15

    return 0;
}
