#ifndef UART_UART_H_
#define UART_UART_H_

extern void Configurar_UART0(void);
extern void Configurar_UART1(void);
extern char readChar(void);
extern void printChar(char c);
extern void printString(char* string, int Size);
extern int readString(char delimitador, char *string);
extern void invertString(char delimitador, char *string, int Size);
#endif /* UART_UART_H_ */