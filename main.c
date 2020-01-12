// The basic pointer use
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare and initialize an int variable
    int var = 34;
    // Declare a pointer to int variable
    int *ptr;
    // Initialize ptr to point to variable var
    ptr = &var;
    
    // Access var directly and indirectly
    printf("\nDirect access, variable var value = var = %d", var);
    // you can use %p for the pointer memory address directly or
    // %0x or %0X or %p in hexadecimal representative instead of
    // %d, just to avoid confusion here
    printf("\nIndirect access, variable var value = *ptr = %d", *ptr);
    // Display the address of var two ways
    printf("\n\nThe memory address of variable var = &var = %p", &var);
    printf("\nThe memory address of variable var = ptr = %p\n", ptr);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//int x;
//printf("Введите число: ");
//scanf("%d",&x);
//if(x>60)
//{
//    printf("Зачтено!!!!!\n");
//}
//printf("\a\a\n");
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    
//    int x;
//    printf("Vvedite chislo: ");
//    scanf("%d",&x);
//    if(x>60)
//    {
//        printf("Зачтено!!!!!\n");
//    }
//    else
//        printf("\a\a\n");
//}

//#include<stdio.h>
//void main()
//{
//    int x;
//    printf("Введите число: ");
//    scanf("%d",&x);
//    if(x>0)
//        printf("Число положительное\n");
//    else
//    {
//        if(x<0)
//            printf("Число отрицательное\n");
//        else
//            printf("0\n");
//    }
//    
//}

//#include<stdio.h>
////стр. 27 N4
//void main()
//{
//    int x, y;
//        printf("Put up 2 numbers x and y: ");
//        scanf("%d%d",&x, &y);
//    
//    if (x < y) {
//         printf("%d\t<\t%d\t", x, y);
//    }
//    
//    if (y < x) {
//        printf("%d\t>\t%d\t", x, y);
//    }
//    
//    if (y == x) {
//        printf("%d\t=\t%d\t", x, y);
//    }
//}


//#include<stdio.h>
////стр. 27 N5
//void main()
//{
//    int x,y,z,max;
//    printf("введите 3 числа: ");
//    scanf("%d%d%d",&x,&y,&z);
//    max=x;
//    if(max<y)
//        max=y;
//    if(max<z)
//        max=z;
//    printf("максимальное из чисел :%d %d %d     это %d\n",x,y,z,max);
//}

//#include<stdio.h>
////стр. 27 N6
//void main()
//{
//    int x,y,z,min;
//    printf("введите 3 числа: ");
//    scanf("%d%d%d",&x,&y,&z);
//    min=x;
//    if(min>y)
//        min=y;
//    if(min>z)
//        min=z;
//    printf("максимальное из чисел :%d %d %d     это %d\n",x,y,z,min);
//}

//#include<stdio.h>
////стр. 27 N7
//void main()
//{
//    int x,y,z,min,max,sum,mul;
//    double avg;
//    printf("введите 3 числа: ");
//    scanf("%d%d%d",&x,&y,&z);
//    min=x;
//    max=y;
//    if(min>y)
//        min=y;
//    if(min>z)
//        min=z;
//    if(max<x)
//        max=y;
//    if(max<z)
//        max=z;
//    sum = x + y +z;
//    mul = x*y*z;
//    avg = (double)sum/3;
//    printf("максимальное из чисел :%d %d %d     это %d\nминимальное из чисел :%d %d %d     это %d\nсумма = %d\nпроизведение = %d\nсреднее = %lf\n",x,y,z,max,x,y,z,min,sum,mul,avg);
//}

//#include<stdio.h>
////стр. 27 N8
//void main()
//{
//    int x;
//    printf("Введите число: ");
//    scanf("%d",&x);
//    if(x>60)
//        printf("отлично\n");
//    if(x>30 && x<=60)
//        printf("хорошо \n");
//    if(x>17 && x<=30)
//        printf("удовлетворительно \n");
//    if(x<=17)
//        printf("плохо \n");
//}

//#include<stdio.h>
////стр. 27 N9
//void main()
//{
//    int n;
//    printf("Введите число: ");
//    scanf("%d",&n);
//    if(n>=3 && n<=5){
//        printf("Весна\n");
//    }
//    else{
//        if(n>=6 && n<=8){
//            printf("Лето\n");
//        }
//        else{
//            if(n>=9 && n<=11){
//                printf("Осень\n");
//            }
//            else{
//                printf("Зима\n");
//            }
//        }
//    }
//}

//#include<stdio.h>
////стр. 27 N10
//void main()
//{
//    int xl,yl,xr,yr,x,y;
//    printf("Введите xl, yl:");
//    scanf("%d%d",&xl,&yl);
//    printf("Введите xr, yr:");
//    scanf("%d%d",&xr,&yr);
//    printf("Введите x, y:");
//    scanf("%d%d",&x,&y);
//    if((x>xl) && (x<xr) && (y>yr) && (y<yl))
//        printf("Принадлежит!!!!\n");
//    else
//        printf("Не  Принадлежит!!!!\n");
//
//}

////стр. 27 N11
//#include<stdio.h>
//#include<math.h>
//void main()
//{
//    double xa,ya,xb,yb,ab;
//    printf("xa=");
//    scanf("%lf",&xa);
//    printf("ya=");
//    scanf("%lf",&ya);
//    printf("xb=");
//    scanf("%lf",&xb);
//    printf("yb=");
//    scanf("%lf",&yb);
//    ab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
//    printf("Расстояние между A(%.2lf;%.2lf) i B(%.2lf;%.2lf)=%.2lf\n",xa,ya,xb,yb,ab);
//}

////стр. 27 N12
//#include <stdlib.h>
//#include <stdio.h>
//#include <math.h>
//
//int main(int argc, char *argv[])
//{
//    double x,y,x1,y1,z,r,f;
//    
//    printf("Enter radius of the sphere:\n");
//    scanf("%lf", &r); // считываем радиус сферы
//    printf("Enter x:\n");
//    scanf("%lf", &x); // считываем абсциссу точки
//    printf("Enter y:\n");
//    scanf("%lf", &y); // считываем ординату точки
//    printf("Enter x1:\n");
//    scanf("%lf", &x1);
//    printf("Enter y1:\n");
//    scanf("%lf", &y1);
//    if (pow((x-x1),2)+pow((y-y1),2)<pow(r, 2)){
//        printf("The point lies inside the sphere\n");
//    }
//    else { printf("The point doesn't lie inside the sphere\n");
//    }
//    system("PAUSE");
//}

////стр. 31 N1
//#include <stdlib.h>
//#include <stdio.h>
//#include <math.h>
//
//int main(int argc, char *argv[])
//{
//    int x;
//    printf("Enter x:\n");
//    scanf("%d", &x);
//    if (x==1703) {
//        printf("\nYou are right\n");
//    }
//    else{
//        printf("\nYou are wrong\n");
//    }
//}

////стр. 31 N2
//#include <stdlib.h>
//#include <stdio.h>
//#include <math.h>
//
//int main(int argc, char *argv[])
//{
//    int x, y;
//    double z;
//    printf("Enter x:\n");
//    scanf("%d", &x);
//    printf("Enter y:\n");
//    scanf("%d", &y);
//    if (y==0) {
//        printf("y=0\n");
//        return 0;
//    }
//    z=(double)x/y;
//    printf("z=%lf\n", z);
//}

////KP1, N1
//#include <stdlib.h>
//#include <stdio.h>
//#include <math.h>
//
//int main(int argc, char *argv[])
//{
//    int i;
//    double x, y;
//    for(i=-10;i<=10;i++){
//        if(i<-3){
//        y = sqrt(fabs(i))/(cos(i)-sin(i));
//            printf("y=%lf\n", y);
//        }
//        if(i>=-3 && i<0){
//            y = 100*i*i*sin(i)/(sqrt(10 - i));
//            printf("y=%lf\n", y);
//        }
//        if(i==0){
//            y = 0;
//            printf("y=%lf\n", y);
//        }
//        if(i>0 && i<=3){
//            y = sqrt(pow(10, i))/10*i;
//            printf("y=%lf\n", y);
//        }
//        if(i>3 && i<=10){
//            y = cos(i)-i*cos(i)/(sin(i) + i*sin(i));
//            printf("y=%lf\n", y);
//        }
//    }
//}

////KP1, N5
//#include <stdio.h>
//#include <math.h>
//
//float circle(float);
//float rectangle(float, float);
//float triangle(float, float, float);
//
//main() {
//    char ch;
//    float a,b,c;
//    printf("Круг(c), прямоугольник(r) или треугольник(t): ");
//    scanf("%c", &ch);
//    switch (ch) {
//        case 'c':
//            printf("Радиус: ");
//            scanf("%f", &a);
//            printf("Площадь круга %.2f\n", circle(a));
//            break;
//        case 'r':
//            printf("Длина и ширина: ");
//            scanf("%f%f", &a, &b);
//            printf("Площадь прямоугольника: %.2f\n", rectangle(a,b));
//            break;
//        case 't':
//            printf("Стороны: ");
//            scanf("%f%f%f", &a, &b, &c);
//            printf("Площадь треугольника: %.2f\n", triangle(a,b,c));
//            break;
//    }
//}
//
//float circle(float r) {
//    return 3.14159 * r * r;
//}
//
//float rectangle(float x, float y) {
//    return x * y;
//}
//
//float triangle(float x, float y, float z) {
//    float p;
//    p = (x+y+z) / 2;
//    return sqrt(p * (p-x) * (p-y) * (p-z));
//}

//#include <stdio.h>
//
//int InverseNumbers (int N) {
//    int d, y = 0;
//    while ( N != 0 )
//    {
//        d = N % 10;
//        y = y*10  + d;
//        N = N / 10;
//    }
//    return y;
//}
//
//int SumDigits (int N) {
//    int d, itr = 1, sum = 0;
//    while ( N != 0 )
//    {
//        d = N % 10;
//        sum = sum + d;
//        N = N / 10;
//        itr=itr*10;
//    }
//    return sum;
//}
//
//int NumbersOfDigits (int N) {
//    int itr = 0;
//    while ( N != 0 )
//    {
//        N = N / 10;
//        itr=itr+1;
//    }
//    return itr;
//}
//
//int MaxNumber (int N) {
//    int d, b = 0;
//    while ( N != 0 )
//    {
//        d = N % 10;
//        if(d>b){
//            b = d;
//        }
//        N = N / 10;
//    }
//    return b;
//}
//
//int MinNumber (int N) {
//    int d, b=9;
//    while ( N != 0 )
//    {
//        d = N % 10;
//        if(b>d){
//            b = d;
//        }
//        N = N / 10;
//    }
//    return b;
//}
//
//int EvenNubmer (int N) {
//    int buf, evenNumber = 0;
//    while ( N != 0 )
//    {
//        buf = N % 10;
//        if(buf%2 == 0){
//        evenNumber = evenNumber*10  + buf;
//        }
//        N = N / 10;
//    }
//    return InverseNumbers(evenNumber);
//}
//
//int OddNubmer (int N) {
//    int buf, oddNumber = 0;
//    while ( N != 0 )
//    {
//        buf = N % 10;
//        if(buf%2 == 1){
//            oddNumber = oddNumber*10  + buf;
//        }
//        N = N / 10;
//    }
//    return InverseNumbers(oddNumber);
//}
//
////KP1, N2
//int main() {
//    int     N, s, a, n, max, min, evenNumber, oddNumber;
//    printf ( "\nВведите целое число ");
//    scanf ( "%d", &N );
//    s = SumDigits (N);
//    a = InverseNumbers (N);
//    n = NumbersOfDigits (N);
//    max = MaxNumber (N);
//    min =   MinNumber (N);
//    evenNumber = EvenNubmer (N);
//    oddNumber = OddNubmer (N);
//    printf ( "Число, полученное выписыванием в обратном порядке числа %d, равна %d\n", N, a );
//    printf ( "Сумма цифр числа %d равна %d\n", N, s );
//    printf ( "Количество цифр %d равна %d\n", N, n );
//    printf ( "Максимальная цифра %d равна %d\n", N, max );
//    printf ( "Минимальная цифра %d равна %d\n", N, min );
//    printf ( "Число, состоящее только из четных цифр заданного числа %d равна %d\n", N, evenNumber );
//    printf ( "Число, состоящее только из нечетных цифр заданного числа %d равна %d\n", N, oddNumber);
//}

////KP1, N3
//int main() {
//    int a, b, c, x, y, nok, min, obshiiDelitel;
//    printf ( "\nВведите целое число ");
//    scanf ( "%d", &a );
//    x = a;
//    printf ( "\nВведите целое число ");
//    scanf ( "%d", &b );
//    y = b;
//    while (b != 0) {
//        c = a % b;
//        a = b;
//        b = c;
//    }
//    nok = x*y/a;
//    min = x;
//    if (min > y){
//        min = y;
//    }
//    for(int i=1;i<=min;i++){
//        if(x%i == 0 && y%i == 0){
//            obshiiDelitel = i;
//            printf("Общий делитель, заданных чисел равен %d \n", obshiiDelitel );
//        }
//    }
//    printf("НОД, заданных чисел равен %d \n", a );
//    printf("НОK, заданных чисел равен %d \n", nok );
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main ()
//{
//    int n, p;
//    int *mass;
//    bool flag; //"зачеркивали" ли число для данного p
//    printf("Input n: ");
//    scanf_s("%d", &n);
//    if (n >= 2)
//    {
//        n = n - 1; //теперь n - это количесвтво чисел в массиве
//        mass = (int *)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++)
//            mass[i] = i + 2;
//        for (int i = 0; i < n; i++)
//        {
//            p = mass[i];
//            flag = false;
//            for (int j = i + 1; j < n; j++)
//            {
//                if (!(mass[j] % p))
//                {
//                    for (int k = j; k < n - 1; k++)
//                        mass[k] = mass[k+1];
//                    flag = true;
//                    n--; //уменьшаем, потому что чисел на одно стало меньше
//                    j--; //уменьшаем, для того чтобы снова проверить на кратность j-е число. Оно же теперь стало другим
//                }
//            }
//            if (flag == false) break;
//        }
//        for (int i = 0; i < n; i++)
//            printf("%d ", mass[i]);
//        free(mass);
//    }
//    else
//        printf("Error. n must be >= 2\n");
//    
//    _getch();
//    return 0;
//}




//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    const int N = 31;
//    int x[N]={}, n;
//    do{
//        printf("write size massive from 1 to %d: ", N);
//        scanf("%d", &n);
//    }
//    while(n<1 || n > N);
//        srand(time(NULL));
//        for(int i=0;i<n;i++){
//            x[i] = 1 + rand()%(10 - 1 + 1);
//            //printf("рандомное число равно %d \n", x[i]);
//        }
//        for(int i=0;i<N;i++){
//            //x[i] = rand();
//            printf("x[%d]= %d\n",i, x[i]);
//        }
////        for(int i=0;i<2*N;i++){
////            y[i] = rand();
////        }
//    
//    return 0;
//}

//#include <stdlib.h>
//#include <time.h>
//#include <stdio.h>
//
//int main() {
//    int x , n=5, m=4;
//    
//    printf("vvedite nimer kvartiri: ");
//    scanf("%d", &x);
//    
//    if(x%(n*m)==0){
//        printf("\nKvartira %d naxoditsia v %d podezde na %d etage.\n", x, x/(n*m), n);
//    }
//    
//    if(x%(n*m)%m==0){
//        printf("\nKvartira %d naxoditsia v %d podezde na %d etage.\n", x, x/(n*m) + 1, x%(n*m)/m);
//    }
//    
//    printf("\nKvartira %d naxoditsia v %d podezde na %d etage.\n", x, x/(n*m) + 1, x%(n*m)/m + 1);
//    
//    printf("\n\nThe End");
//    
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<stdio.h>
//
//int x=1;
//int a=1;
//void func1();
//void func1()
//{
//    static int x=555;
//    printf("x=%d\n",x);
//    {
//        int x=25;
//        printf("x=%d\n",x);
//        x++;
//        printf("x=%d\n",x);
//    }
//    x++;
//    printf("x=%d\n",x);
//}
//
//void func2();
//void func2()
//{
//    static int x=50;
//    printf("x=%d\n",x);
//    x++;
//    printf("x=%d\n",x);
//}
//
//void func3();
//void func3()
//{
//    
//    printf("x=%d\n",x);
//    x*=10;
//    printf("x=%d\n",x);
//}
//
//void func4(int a);
//void func4(int a)
//{
//    a*=999;
//}
//
//int main()
//{
//    printf("x=%d\n",x);
//    {
//        int x=5;
//        printf("x=%d\n",x);
//        {
//            int x=7;
//            printf("x=%d\n",x);
//        }
//        printf("x=%d\n",x);
//        func1();
//        func2();
//        func3();
//        func1();
//        func2();
//        func3();
//        func1();
//        func2();
//        func3();
//        printf("x=%d\n",x);
//    }
//    printf("x=%d\n",x);
//    printf("\n\n\nThe end!!!\n");
//    func4(a);
//    printf("x=%d\n",x);
//    printf("a=%d\n",a);
//    return 0;
//}


//// КР N3 N1
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define N 200
//
//void func1(int [], int);
//void func1 (int m[], int n){
//    int A[N], c;
//    
//    for (int i = 0; i < n; i ++ )
//        A[i] = m[i];
//    
//    for (int i = 0; i < n-1; i ++ )
//        for (int j = n-2; j >= i; j -- )
//            if ( A[j] > A[j+1] )
//            {
//                c = A[j]; A[j] = A[j+1];
//                A[j+1] = c;
//            }
//        printf("\n Отсортированный массив:\n");
//           for (int i = 0; i < n; i ++ )
//        printf("%d ", A[i]);
//}
//
//int main()
//{
//    srand(time(NULL));
//    //const int N=100;
//    //int x[N], x_copy[N], y[N], y_copy[N], z[N], sum_deliteley[N], kol_deliteley[N], n, min, max;
//    int n;
//    
//    do
//    {
//        printf("Vvedite razmer massiva ot 1 do %d: ", N);
//        scanf("%d", &n);
//    }
//    while(n<1 || n>N);
//    
//    system("cls");
//    int a[n];
//    
//    for (int i = 0; i < n; i ++ ) {
//        a[i] = 1 + rand()%(100 - 1 + 1);
//        printf("%d ", a[i]);
//    }
//    func1(a, n);
//    
////    vvod_mass(x, n);
////    printf("\n\nSoderjimoe massiva x:\n");
////    vivod_mass(x, n);
////    
////    sort_vozr(x, x_copy, n);
////    printf("\n\nSoderjimoe otsortirovannogo massiva x:\n");
////    vivod_mass(x_copy, n);
//    
// 
//    
//    printf("\n\n\nThe end!!!\n");
//    //getch();
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//    int a = 25, *p;
//    //**p2, ***p3
//    printf("a = %d\n", a);
//    printf("&a = %d\n", &a);
//    
//    p = &a;
//    //p2 = &p;
//    //p3 = &p2;
//    
//    *p = *p + 10;
//    //**p2 = **p2 + 10;
//    //***p3 = ***p3 + 10;
//    //a = a + 10;
//    
//    
//    printf("a = %d\n", &p);
//    //printf("a = %p\n", p);
//    printf("p = %d\n", p);
//    printf("a = %d\n", a);
//    printf("&a = %d\n", &a);
//    printf("p = %d\n", *p);
//    
//    printf("\n\n\nThe end!!!\n");
//    
////    int a, *p;
////    printf("adress a = %d\n", &a);
////    scanf("%d", &p);
////    //scanf("%p", p);
////    printf("a = %d\n", a);
////    printf("&a = %d\n", &a);
////    printf("p = %d\n", p);
////    printf("&p = %d\n", &p);
//    
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//
//int main()
//{
//    char x[40] = "mama mila ramu na balkone u babushki", *p, y[40];
//    
//    strcpy(y, x);
//    
//    printf("\n===========================\n");
//    for(int i=0; i<40; i++)
//        printf("%-4c", x[i]);
//    printf("\n-----------------------\n");
//    for(int i=0; i<40; i++)
//        printf("%-4d", x[i]);
//    printf("\n===========================\n\n\n");
//    
//    p = strtok(x, " ");
//    while(p!=NULL)
//    {
//        printf("\nLeksema p: %s\n", p);
//        printf("Stroka x: %s\n", x);
//        printf("---------------------------------\n\n");
//        
//        //ðàáîòàåì ñ ëåêñåìîé p
//        
//        p = strtok(NULL, " ");
//    }
//    
//    printf("\n===========================\n");
//    for(int i=0; i<40; i++)
//        printf("%-4c", x[i]);
//    printf("\n-------------------------\n");
//    for(int i=0; i<40; i++)
//        printf("%-4d", x[i]);
//    printf("\n==========================\n\n\n");
//    
//    
//    
//    printf("\n\n\nThe end!!!\n");
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main ()
//{
//    int n, p;
//    int *mass;
//    printf("Input n: ");
//    scanf_s("%d", &n);
//        n = n - 1; //теперь n - это количесвтво чисел в массиве
//        mass = (int *)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++)
//            mass[i] = i + 2;
//
//        for (int i = 0; i < n; i++)
//            printf("%d ", mass[i]);
//        free(mass);
//
//
//    _getch();
//    return 0;
//}
