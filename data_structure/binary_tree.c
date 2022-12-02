#include <stdio.h>
#include <stdlib.h>

/***
 * Este é um exercício da implementação do conceito de Arvore binária sendo
 * implementada em C.
*/


struct st_tree {
    int value;
    struct st_tree *branch_right;
    struct st_tree *branch_left;
};
typedef struct st_tree tree;

tree* tree_root(){
    return NULL;
}

void insertBranch(tree** t, int n){
    if(*t == NULL){
        *t = (tree*) malloc(sizeof(tree));
        (*t)->value = n;
        (*t)->branch_right = NULL;
        (*t)->branch_left = NULL;
    }else{
        if(n <= (*t)->value)
            insertBranch(&(*t)->branch_left, n);
        if(n > (*t)->value)
            insertBranch(&(*t)->branch_right, n);
    }
}

void displayBranch(tree *t){
    printf("%d", t->value);
    if(t->branch_left != NULL){
        printf("<");
        displayBranch(t->branch_left);
    }
    if(t->branch_right != NULL){
        printf(">");
        displayBranch(t->branch_right);
    }
}

void displayTree(tree *t){
    if(t == NULL){
        printf("The Tree is empty!\n");
    }else{
        displayBranch(t);
    }
}

int searchOnTree(tree *t, int n){
    if(t == NULL)
        return 0;

    return t->value == n || searchOnTree(t->branch_left, n) || searchOnTree(t->branch_right, n);
}

int main(){
    tree *arvore = tree_root();
    
    displayTree(arvore);

    insertBranch(&arvore, 10);
    insertBranch(&arvore, 14);
    insertBranch(&arvore, 8);
    insertBranch(&arvore, 12);
    insertBranch(&arvore, 9);

    printf("\nShowing the Tree:\n");
    displayTree(arvore);

    printf("\nLooking for a number 7 on the Tree:\n");
    if(searchOnTree(arvore, 7))
        printf("Found!\n");
    else
        printf("Not Found!\n");

    printf("\nLooking for a number 8 on the Tree:\n");
    if(searchOnTree(arvore, 8))
        printf("Found!\n");
    else
        printf("Not Found!\n");

    free(arvore);

    return 0;
}