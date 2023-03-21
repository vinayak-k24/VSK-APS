#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int item;
    struct node *left,*right;
}*NODE;//Self Referential pointer

NODE BSTinsert(NODE root);
void PreTraverse(NODE p);
void InTraverse(NODE p);
void PostTraverse(NODE p);

NODE getNode()
{
    NODE newnode=(struct node*)malloc(sizeof(struct node));//Dynamic Allocation of newnode

    if(newnode==NULL){
        printf(" --Error\n\n");
        exit(0);
    }
    printf("\n\n  => Enter an integer to insert in BST : ");
    scanf("%d",&newnode->item);
    newnode->left=NULL;
    newnode->right=NULL;

    return(newnode);
}

int main()
{

    NODE r=NULL;//Root of the tree
    int num,choice;

    while(1){
        printf("\n\n     ---Menu---     \n  => Insert - 1\n  => Pre-order Display - 2\n  => In-order Display - 3\n  => Post-order Display - 4\n  => Exit - 5\n");
        printf("\n  =>Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: r=BSTinsert(r);
                    break;

            case 2: printf("  --- PRE-order => ");
                    PreTraverse(r);
                    printf("\n");
                    break;

            case 3: printf("  --- IN-order => ");
                    InTraverse(r);
                    printf("\n");
                    break;

            case 4: printf("  --- Post-order => ");
                    PostTraverse(r);
                    printf("\n");
                    break;

            case 5: printf("  => You have selected EXIT\n");
                    exit(0);
                    break;

            default:
                    printf("   === Invalid Selection ===   \n");
                    break;
        }//End of Switch
    }//End of While loop
}//End of Main

NODE BSTinsert(NODE root)
{
    NODE p = getNode();
    if(root == NULL)
    {
        printf("\n  ---First node inserted---\n");
        return p;
    }
    NODE prev,temp;
    temp = root;
    prev = NULL;
    while(temp != NULL)
    {
        prev = temp;
        if(temp->item > p->item)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if(prev->item > p->item)
        prev->left = p;
    else
        prev->right = p;

    return root;
}

void PreTraverse(NODE p)
{
    if(p!=NULL){
        printf("  %d  ",p->item);
        PreTraverse(p->left);
        PreTraverse(p->right);
    }
}
void InTraverse(NODE p)
{
    if(p!=NULL){
        InTraverse(p->left);
        printf("  %d  ",p->item);
        InTraverse(p->right);
    }
}
void PostTraverse(NODE p)
{
    if(p!=NULL){
        PostTraverse(p->left);
        PostTraverse(p->right);
        printf("  %d  ",p->item);
    }
}