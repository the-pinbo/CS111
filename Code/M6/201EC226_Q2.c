// Lab 6 Questin 2
// Inbasekaran.P 201EC226
/*
Program to accept 5 people’s name, address and telephone number and to search
for the information of a particular person.
i. Based on name
ii. Based on telephone number
*/
// For printf() and scanf()
#include <stdio.h>
// Including stdlib for system("clear") to clear the screen in the terminal.
#include<stdlib.h>
#include<string.h>
struct person {
    char name[50];
    char address[50];
    char number[16];
};
struct person input(){
    struct person s;
    printf("Enter information:\n");
    printf("Enter name: ");
    gets(s.name);
    printf("Enter address: ");
    gets(s.address);
    printf("Enter number along with code: ");
    gets(s.number);
    return s;
}
void display(struct person s){
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s.name);
    printf("Address: %s\n", s.address);
    printf("Phone number: %s\n", s.number);
}
struct person* find_address(char address [], struct person* data, int n){
    for (int i = 0; i < n; i++){
        if(strcmp(address,data->address)){
            return data;
        }
        else{
            data ++;
        }
    }
    printf("Item not found !!!\n");
    return NULL;
}
struct person* find_name(char name [], struct person* data, int n){
    for (int i = 0; i < n; i++){
        if(strcmp(name,data->name)){
            return data;
        }
        else{
            data ++;
        }
    }
    printf("Item not found !!!\n");
    return NULL;
}
struct person* find(struct person* data, int n){
    printf("Find\n");
    printf("1)Based on name\n");
    printf("2)Based on telephone number\n");
    int choice;
    scanf("%d",&choice);
    if(choice == 1){
        printf("Enter name: ");
        char name[50];
        gets(name);
        return find_name(name,data,n);
    }else if(choice == 2){
        printf("Enter address: ");
        char address[50];
        gets(address);
        return find_name(address,data,n);

    }else{
        printf("Invalid Choice\n");
    }
    return NULL;
}

int main() {
    struct person s[2];
    for(int i=0; i<2;++i){
        s[i] = input();
        display(s[i]);
    }
    struct person* item = find(s,2);
    display(*item);
    return 0;
}