/*
#include <stdio.h>

int main()
{ //comments 
    printf("Hello World!");
    printf("\nI am Brendon!");

    return 0;
}
*/
/*
VARIABLES
#include <stdio.h>

int main()
{
    int x; //declaration 
    x = 123; // initialization
    int y = 321;//doing both declaration and intialization

    int age = 21;
    float gpa = 4.82; //floating-point number
    char grade = 'A';
    //C is not OOP so there are no string since strings are objects
    char name[] = "Brendon"; // an array of character emulating a str

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("GPA: %f\n",  gpa);
    return 0;
}
*/
/*data types

#include <stdio.h>
#include <stdbool.h>                //to use boolean variables

int main()
{
    char a = 'A';                    //single char -- %c
    char b[] = "Bathos";             // array of chars(emulated str) --  %s

    float c = 3.141592;             // 4 bytes(32bits of precision) 6-7 digts -- %f
    double d = 3.141592653589793;   //8 bytes(64 bits of precision) 15-16 digits -- %lf

    bool e = true;                  // 1 byte(true or false) -- %d

    char f = 120;                   //1 byte(-128 to + 127) %d or %c
    unsigned char g = 255;          //1 byte(0 to + 255) %d or % c

    short int h = 32767;            //2 bytes(-32.768 to +32.768) -- %d
    unsigned short int i = 65535;   //2 bytes(0 to +65,535) -- %d

    int j = 2147483647;             //4 bytes(-2,147,483,648 to +2,147,483,647)  -- %d
    unsigned int k = 4294967295L;   //4 bytes(0 to + value) -- %u

    long long int l = 9223372036854775807; //4 bytes(-l to +l) -- %lld
    unsigned long long int m = 184446744073709551615U;//(0 to m) -- %llu

    printf("%c\n", a);
    printf("%s\n", b);
    printf("%f\n", c);
    printf("%0.15lf\n", d);
    printf("%d\n", e);              //1 == true  & 0 == false
    printf("%c\n", f);              //return the char at ascii value 100
    printf("%d\n", f);              //return decimal value
    printf("%d\n", g);              //unsigned char -> numerical value
    printf("%d\n", h);              //short
    printf("%d\n", i);               //unsigned short
    printf("%f\n", j);
    printf("%u\n", k);
    printf("%lld\n", l);
    printf("%llu\n",m);
    

    return 0;
}
*/

/*format specifies
    % = defines and formats a type of data to be displayed

    %c = character
    %s = string (array of characters)
    %f float
    %lf = double
    %d = integer

    %.1 = decimal precision
    %1 = minimum field width
    #- = left align 

#include <stdio.h>

int main()
{
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item1: $%-8.2f\n", item1);
    printf("Item2: $%-8.2f\n", item2);
    printf("Item3: $%-8.2f\n", item3);

    return 0;
}
*/

/* constants
    constant = fixed value that cannot be altered by the program during its execution


#include <stdio.h>

int main()
{
   const float PI = 3.14159;

    printf("%f", PI);

    return 0;
}
*/

/*arithmetic operators
   +,-,*,/,%,++,-- 
#include <stdio.h>

int main()
{
    int x =5;
    int y =2;

    //float z = x/(float)y;
    //printf("%.2f", z);

    int z = x % y;
    printf("%d", z);
    return 0;
}
*/
/*input
#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; //bytes   
    int age;
    
    printf("\nWhat is your name? ");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name) -1] = '\0';

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("\nHey %s!", name);
    printf("\nYou are %d years old", age); 

    return 0;
}
*/
/*math functions
#include <stdio.h>
#include <math.h>

int main()
{
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(30);
    double I = cos(45); 
    double J = tan(45);

    printf("\n %lf", A);
    printf("\n%f", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%f", F);
    printf("\n%f", G);
    printf("\n%f", H);
    printf("\n%f", I);
    printf("\n%f", J);



    return 0;

}*/

/*if statements
#include <stdio.h>

int main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now signed up!");
    }
    else if (age < 0)
    {
        printf("Error: You haven't been born yet");
    }
    else
    {
        printf("You are too young to sign up!");
    }

    return 0;
}

#include <stdio.h>

int findMax(int x, int y)
{
    return (x > y )? x : y;
}

int main()
{
    int max = findMax(3,4);

    printf("%d", max);

    return 0;
*/

/*switch
 #include <stdio.h>

 int main()
 {
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n")
        break;
    case 'B':
        printf("you did good\n");
    case 'C':
        printf("you did okay\n");
    case 'D':
        printf("at least its not an F\n");
    case 'F':
        print("You failed!\n");
    default:
        printf("Please enter value grade");
        break;
    }


    return 0;
 }
 */

/*Logic operators
#include <stdio.h>
#include <stdbool.h>

int main()
{
    float temp = 25;
    bool sunny = true;

    if (temp <= 0 || temp >= 30 )
    {
        printf("\nWeather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }

    return 0;
}
*/

/*Functions
#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    char name[] = "Yoko";
    int age = 22;

    birthday(name, age);

    return 0;
}


#include <stdio.h>

double square(double x)
{
    double res = x * x;
    return res;
}

int main()
{
    double x = square(3.14);

    printf("\n%.2lf", x);
    return 0;
}
*/

/*string functions*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hey";
    char str2[]= "dude";

    strlwr(str1);           //converts a string to lowercase
    strupr(str1);           //converts a string to uppercase
    strcat(str1, str2);     //appends str2 to end of str1
    strncat(str1, str2, 1); //appends n chars from str2 to str1
    strcpy(str1, str2);     //copy str2 to str1
    strncpy(str1, str2, 4); //copy n characters of str2 to str1

    strset(str1, '?');      //sets all characters of string to given char
    strnset(str1, 'x', 1);  //sets first n chars of string to given char
    strrev(str1);           //reverse a string

    int res = strlen(str1);             //returns string length as int
    int res = strcmp(str1, str2);       //string compare all characters
    int res = strncmp(str1, str2, 1);   //string compare n characters
    int res = strcmpi(str1, str1);      //string compare all (ignore case)
    int res = strnicmp(str1, str1, 1);  //string compare n characters(ignore case)



    return 0;

}
*/

/*for loops
#include <stdio.h>

int main()
{
    for(int i = 10; i >= 0; i-=2)
    {   
        printf("%d\n", i);
    }

    return 0;
}
*/

/*while loop
#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];

    printf("\nWhat is your name? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nYou did not enter your name!");
         printf("\nWhat is your name? ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
}
*/

/*do while loop
#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;

    do{
        printf("\nEnter a number above 0: ");
        scanf("%d", &number);

        if(number > 0)
        {
            sum += number;
        }
    }while(number > 0);

    printf("\n%d", sum);

    return 0;
}*/

/*continue and break
    continue = skips the rest of the code & forces the next iteration of the loop
    break = exits a loop/switch
*/

/*Arrays
#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    //printf("$%.2lf", prices[4]);

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
*/

/*2d arrays: Ints
#include <stdio.h>

int main()
{
    /*int numbers[2][3] = {
                            {1,2,3},
                            {4,5,6}
                        };
    int numbers[3][3];
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int cols = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("\nNumber of rows: %d\n", rows);
    printf("\nNumber of columns: %d\n", cols);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*2D Arrays: Strings
#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    strcpy(cars[0], "Tesla");
    int len = sizeof(cars)/sizeof(cars[0]);

    for(int i = 0; i < len; i++)//strlen works but doesnt seem recommended
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}
*/

/*Swapping Variables
#include <stdio.h>
#include <string.h>

int main()
{
    char x[15] = "water"; // size strs should be the same
    char y[15] = "soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);


    return 0;
}*/

/*Structs-- similar to classes but cannot contain methods
#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    struct Player player1, player2;
    
    strcpy(player1.name, "Yomi");
    player1.score = 4;

    strcpy(player2.name, "Kiri");
    player1.score = 5;

    printf("Player: %s\n", player1.name);
    printf("Score: %d\n", player1.score);

    printf("Player: %s\n", player2.name);
    printf("Score: %d\n", player2.score);

    return 0;
}
*/

/*Typedef = reserved keyword that gives an existing datatype a nickname
#include <stdio.h>
#include <string.h>

//typedef char user[25];
typedef struct
{
    char name[25];
    char password[12];
    int id;
}User;

int main()
{
    
    User user1 = {"Yomiko", "yomiko@123", 11869745};
    User user2 = {"Kiritsugu", "kirito_86", 11235454};
    
    printf("Username:\t%s\n", user1.name);
    printf("Password:\t%s\n", user1.password);
    printf("Id:\t\t%d\n", user1.id);

    printf("\n==================================\n\n");

    printf("Username:\t%s\n", user2.name);
    printf("Password:\t%s\n", user2.password);
    printf("Id:\t\t%d\n", user2.id);

    return 0;
}
*/

/*enum = a user defined type of named integer identifiers  helps make the program more readable
#include <stdio.h>

enum Day{Sun = 1 , Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat=  7};

int main()
{

    enum Day today = Sun;

    if (today = Sun || today == Sat)
    {
        printf("\nIts the weekend, Party time!");
    }
    else
    {
        printf("\nI have to work today:(");
    }

    return 0;
}*/

/*Random Number Generation = A set of values or elements that are statistically random 
                            (Don't use these for any sort of cryptographic security)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int num1 = (rand() % 6) + 1;          //1-6 random num between 0- 32627
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    print("%d\n", num1);
    print("%d\n", num2);
    print("%d\n", num3);

    return 0;
}
*/

/*BITWISE OPERATOR = special operators used in bit level programming 
                    (knowing binary #NB)
       & = AND
       | = OR
       ^ = XOR
       << = left shift
       >> = right shift



#include <stdio.h>


int main()
{
    int x = 6;   //00000110 = 6
    int y = 12;  //00001100 = 12
    int z = 0;   //00000000 = 0

    z = x & y;   //00000100     
    printf("AND = %d\n", z);

    z = x | y;   //00001110
    printf("OR = %d\n", z);

    z = x ^ y;   //00001010
    printf("XOR = %d\n", z);

    z = x << 2;   //00011000
    printf("left shift = %d\n", z);

    z = x >> 1;   //00000011
    printf("Right shift = %d\n", z);

    return 0;
}*/
/*memory
#include <stdio.h>

int main()
{
    char a;
    int b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    

    printf("%p\n", &a);
    printf("%p\n", &b);
   



    return 0;
}*/

/*POINTERS
#include <stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old", *pAge); //dereferencing

}

int main()
{
    //pointer = a variable like reference that holds a memory address to another variable
    //      * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL;
    pAge = &age;

    //printf("------------------------------------------------\n");

    //printf("address of age: \t%p\n", &age);
    //printf("value of pAge: \t\t%p\n", pAge);

    //printf("size of age: \t\t%d bytes\n", sizeof(age));
    //printf("size of pAge: \t\t%d bytes\n", sizeof(pAge));

    //printf("value of age: \t\t%d\n", age);
    //printf("value at stored addr: \t%d\n", *pAge);
    
    //printf("------------------------------------------------\n");

    printAge(pAge);

    return 0;
}
*/



