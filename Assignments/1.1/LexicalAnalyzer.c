#include <stdio.h>
#include <string.h>

#define EOI 256

bool isKeyword(char* currentString);
bool isOperator(char* currentString);
bool isStringAnInteger(char* currentString);
bool isCharAnInteger(char currentChar);



int main()
{
    char currentChar = getchar();
    char currentString[100];
    int numberOfCharactersInCurrentString = 0;
    while(true){
        if(currentChar == '\n')
            return EOI;

        while(currentChar != ' ')
        {
            currentString[numberOfCharactersInCurrentString++] = currentChar;
            currentChar = getchar();
        }

        if(isKeyword(currentString))
            printf("Keyword %p\n", currentString);
        else if(isOperator(currentString))
            printf("Operator %p\n", currentString);
        else if(isInteger(currentString))
            printf("Integer %p\n", currentString)
        else
            printf("Error");

    }
}

bool isKeyword(char* currentString)
{
    switch (currentString)
    {
        case "let":
            return true;
        case "and":
            return true;
        case "in":
            return true;
        case "if":
            return true;
        case "then":
            return true;
        case "else":
            return true;
        case "recur":
            return true;
        case "loop":
            return true;
        case "end":
            return true;
        default :
            return false;
    }
}

bool isOperator(char* currentString)
{
    // Valid Operators (, ), =, &&, ||, !, <, ==, +, *, -
    switch(currentString)
    {
        case '(':
            return true;
        case ')':
            return true;
        case '=':
            return true;
        case '&&':
            return true;
        case '||':
            return true;
        case '!':
            return true;
        case '<':
            return true;
        case '==':
            return true;
        case '+':
            return true;
        case '*':
            return true;
        case '-';
            return true;
        default:
            return false;
    }
}

bool isStringAnInteger(char* currentString)
{
    int currentStringPosition = 0;
    int numberOfCharactersInString = strlen(currentString);

    char currentChar = currentString[currentStringPosition];

    while(isCharAnInteger(currentChar) && currentStringPosition < numberOfCharactersInCurrentString)
    {
        currentChar = currentString[++currentStringPosition];
    }

    if(currentStringPosition==numberOfCharactersInCurrentString)
        return true;
    
    return false;
}

bool isCharAnInteger(char currentChar)
{
    switch(currentChar)
    {
        case '1':
            return true;
        case '2':
            return true;
        case '3':
            return true;
        case '4':
            return true;
        case '5':
            return true;
        case '6':
            return true;
        case '7':
            return true;
        case '8':
            return true;
        case '9':
            return true;
        case '0':
            return true;
    }
}