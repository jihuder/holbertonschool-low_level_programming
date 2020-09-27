#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
float main(void)
{
char a = 'z';
int b = 2147483647;
shot c = 32767;
float d = 3.4E38;
double e = 1.7E308;
printf("Valor de a=%d bytes\nValor de b=%d bytes\nValor de c=%d bytes\nValor de d=%d bytes\nValor de e=%d", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e));
return (0);
}
