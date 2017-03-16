#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define LENGTH 5

typedef struct node{
    char word[LENGTH+1];
    struct node *next;
}node;

int main(void)
{   
    
    node *node1 = malloc(sizeof(node));
    node *node2 = malloc(sizeof(node));
    strcpy(node1->word, "Hello, ");
    strcpy(node2->word, "World");
    node1->next = node2;
    
    printf("%s", node1->word);
    printf("%s", node2->word);
}