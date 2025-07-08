#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void print_int(int n){
    if(n < 0){
        putchar('-');
        n = -n;
    }

    if(n == 0){
        putchar('0');
        return;
    }

    int digit[10], i = 0;
    while(n > 0){
        digit[i] = n % 10;
        n = n / 10;
        i++;
    }

    i--;
    while(i >= 0){
        putchar(digit[i] + '0');
        i--;
    }
}

void print_str(const char* s){
    while(*s != '\0'){
        putchar(*s);
        s++;
    }
    
}

void my_print(const char* format, ...){
    va_list args;
    va_start(args,format);

    for(int i=0;format[i]!='\0';i++){
        if(format[i]=='%' && format[i+1]!='\0'){
            i++;
            if(format[i]=='d'){
                int num = va_arg(args,int);
                print_int(num);
            }
            else if(format[i]=='s'){
                char *str = va_arg(args,char*);
                print_str(str);
            }
            else{
                putchar('%');
                putchar(format[i]);
            } 
        } 
        else{
            putchar(format[i]);
        }
        
    }
}

int main(){
    my_print("hi iam %d years old",20);
    return 0;
}
