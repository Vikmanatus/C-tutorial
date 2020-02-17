# 💾 C Tutorial

## 🔗 Link of the tutorial

```
https://www.youtube.com/watch?v=KJgsSFOSQv0&t=2330s
```

## ❓Informations

To compile and run your program use `gcc [cFile].c` and `./a.out`

## ⛓️ Assigning a variable

```
char characterName[] = "Johnny";
int characterAge = 35;
printf("There was a man called %s. ", characterName);
characterAge=25;
printf("He was %d",characterAge);
printf("\n");
```

## 📡 Data Types

`char` : used to store one single character

`char variable[]` : used to store a string of character's

`int` : used to store a number

`double` : used to store a decimal value

## 👨🏻‍🏫 Useful Information

```
char character = "i";
printf("Bla bla, %s bla %d, %f, %c", "bla", 500, 500.976,character );
```

Format specifiaor: %d allows you to print a number, %s allows you to print a string, %f allows you to print a decimal,
%c allows yopu to print a character

```
printf("%f", 5 * 3);
```

You can use math operations inside printf

```
printf("%f", pow(2, 3));
```

This will give you 2^3

More informations about C functions on the link below

```
https://courses.cs.washington.edu/courses/cse351/14sp/sections/1/Cheatsheet-c.pdf
```

```
/* I am a comment */
```

Syntax to write a comment in C

```
const int num = 5;
```

Declare a constant in C
In printf() function, variables insides are constant

## Get user Input

```
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d", age);
    return 0;



    Another function
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    This function will accepts only 20 character to display bechause the variable can accept no more
    stdin: standard input
    return 0;
```

## Basic Calculator

```
    double number1;
    double number2;

    printf("Enter the first number: ");
    scanf("%lf", &number1);

    printf("Enter the second number: ");
    scanf("%lf", &number2);

    printf("Answer: %f\n", number1 + number2);
    return 0;
```
