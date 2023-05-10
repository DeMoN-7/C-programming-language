#include<stdio.h>
#include<stdlib.h>

typedef struct treetype
{
    struct treetype *left;
    int data;
    struct treetype * right;
    
}tree;

tree * memory()
{
    tree * p=(tree*) malloc(sizeof(tree));
    p->left=NULL;
    p->right=NULL;
    return p;

}
tree * create(tree * root,int num)
{
    tree *p;
    if(root==NULL)
    {
        p=memory();
        p->data=num;
        root =p;
        return (root);
        
    }
    else if(root->data>num)
    {
        root->left=create(root->left,num);

    }
    else if(root->data<num)
    {
        root->right=create(root->right,num);

    }
    else 
    {
        printf("Invalid data");
    }
    return root;
}

void pre_order(tree * root)
{
    if (root!=0)
    {
        printf("%d ", root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void in_order(tree * root)
{
    if (root!=NULL)
    {
        in_order(root->left);
        printf("%d ",root->data);
        in_order(root->right);
    }
}
void post_order(tree * root)
{
    if (root!=0)
    {
        post_order(root->left);
        post_order(root->right);
        printf("%d ",root->data);
    }
}
void count(tree * root,int *p)
{
    if (root!=0)
    {
        (*p)++;
        count(root->left,p);
        count(root->right,p);
        
    }
}
int count1(tree * root)
{
    int c=1;
    if (root == NULL)
    {
        return 0;
    }
    else {
        c=c+count1(root->left)+count1(root->right);
        // c=c+
        return c;
    }
}
void count_leaf(tree * root,int * p)
{
    if (root!=0)
    {
        if (root->left==NULL && root->right==NULL)
        (*p)++;
        count_leaf(root->left,p);
        count_leaf(root->right,p);
        
    }
}
void get_max(tree * root,int * max)
{
    
    if (root!=0)
    {
        if (root->data>(*max))
        {
            (*max)=root->data;
        }
        get_max(root->right,max);
    }
    
}
void get_min(tree *root,int * min)
{
    if (root!=0)
    {
        if (root->data<(*min))
        {
            (*min)=root->data;
        }
        get_min(root->left,min);
    }
}
void left_node(tree *root,int *x)
{
    if (root!=0)
    {
        (*x)++;
        count(root->left,x);
        count(root->right,x);
        
    }
}
void right_node(tree *root,int *z)
{
    if (root!=0)
    {
        (*z)++;
        count(root->left,z);
        count(root->right,z);
        
    }
}
void main()
{
    tree * root=NULL;
    int max=0,min=0;
    int num,c=0,c1=0,coo=0;
    int x=0,z=0;

    do
    {
        printf("\n\n1.Create\n2.Preorder\n3.Inorder\n4.Postorder\n5.Count\n6.Count Leaf\n7.Maximum\n8.Minimum\n9.Nodes in the right side of root \n10.Nodes in the left side of root\n11.Nodes with left child only\n12.Nodes with Right child only\n13.Exit ");
        scanf(" %d",&num);

        switch (num)
        {
            case 1:
            {
                int x;
                printf("Enter the data ");
                scanf("%d",&x);

                root=create(root,x);
                break;
            }
            case 2:
            {
                if (root==NULL)
                {
                    printf("\nEmpty");
                }
                else
                {
                    pre_order(root);
                }
                break;
            }
            case 3:
            {
                if (root== NULL)
                {
                    printf("Empty");
                }
                else
                {
                    in_order(root);
                }
                break;
            }
            case 4:
            {
                if (root == NULL)
                {
                    printf("Empty");

                }
                else
                {
                    post_order(root);

                }
                break;
            }
            case 5:
            {c=0;
                if (root == NULL)
                {
                    printf("empty");
                }
                else
                {
                    count(root,&c);
                    printf("\nNumber of nodes:%d",c);
                }
                break;
            }
            case 6:
            {
                if (root == NULL)
                {
                    printf("Empty");
                }
                else
                {
                    count_leaf(root,&c1);
                    printf("No. of lefs are %d ",c1);
                }
                break;
            }
            case 7:
                get_max(root,&max);
                printf("%d",max);
                break;
            case 8:
                get_min(root,&min);
                printf("%d ",min);
                break;
            case 9:
                left_node(root->left,&x);
                printf("no. of nodes in right: %d ",x);
                break;
            case 10:
                right_node(root->right,&z);
                printf("no. of nodes in left: %d ",z);
                break;
                case 11:
                  coo=count1(root);
                printf("no of nodes %d",coo);
                break;

        }
    } while (num!=13);
    
}