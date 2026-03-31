#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *last = NULL;

void creation();
void insert_beg();
void insert_last();
void display();
void insert_posi();
void delete_first();
void delete_last();
void delete_posi();

int main()
{
    int ch;
    while (1)
    {
        printf("\n1.creation\n2.display\n3.insert_begin\n4.insert_last\n");
        printf("5.insert_atposi\n6.del_first\n7.del_last\n8.del_posi\n9.exit\n");
        printf("enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1: creation(); break;
        case 2: display(); break;
        case 3: insert_beg(); break;
        case 4: insert_last(); break;
        case 5: insert_posi(); break;
        case 6: delete_first(); break;
        case 7: delete_last(); break;
        case 8: delete_posi(); break;
        case 9: exit(0);
        }
    }
}

// creation
void creation()
{
    struct node *new_node;
    int ele;

    printf("Enter elements (-999 to stop):\n");
    scanf("%d", &ele);

    while (ele != -999)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = ele;

        if (last == NULL)
        {
            last = new_node;
            new_node->next = new_node;
        }
        else
        {
            new_node->next = last->next;
            last->next = new_node;
            last = new_node;
        }
        scanf("%d", &ele);
    }
}

// display
void display()
{
    struct node *temp;

    if (last == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = last->next;

    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);

    printf("\n");
}

// insert at beginning
void insert_beg()
{
    struct node *new_node;
    int ele;

    printf("Enter element: ");
    scanf("%d", &ele);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = ele;

    if (last == NULL)
    {
        last = new_node;
        new_node->next = new_node;
    }
    else
    {
        new_node->next = last->next;
        last->next = new_node;
    }
}

// insert at last
void insert_last()
{
    struct node *new_node;
    int ele;

    printf("Enter element: ");
    scanf("%d", &ele);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = ele;

    if (last == NULL)
    {
        last = new_node;
        new_node->next = new_node;
    }
    else
    {
        new_node->next = last->next;
        last->next = new_node;
        last = new_node;
    }
}

// insert at position
void insert_posi()
{
    int ele, posi, i = 1;
    struct node *temp, *new_node;

    printf("Enter element: ");
    scanf("%d", &ele);
    printf("Enter position: ");
    scanf("%d", &posi);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = ele;

    if (last == NULL)
    {
        if (posi != 1)
        {
            printf("Invalid position\n");
            free(new_node);
            return;
        }
        new_node->next = new_node;
        last = new_node;
        return;
    }

    temp = last->next;

    if (posi == 1)
    {
        new_node->next = last->next;
        last->next = new_node;
        return;
    }

    while (i < posi - 1 && temp->next != last->next)
    {
        temp = temp->next;
        i++;
    }

    if (i < posi - 1)
    {
        printf("Position not found\n");
        free(new_node);
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    if (temp == last)
        last = new_node;
}

// delete first
void delete_first()
{
    struct node *temp;

    if (last == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = last->next;

    if (last == last->next)
    {
        free(temp);
        last = NULL;
    }
    else
    {
        last->next = temp->next;
        free(temp);
    }
}

// delete last
void delete_last()
{
    struct node *temp;

    if (last == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (last == last->next)
    {
        free(last);
        last = NULL;
        return;
    }

    temp = last->next;

    while (temp->next != last)
        temp = temp->next;

    temp->next = last->next;
    free(last);
    last = temp;
}

// delete at position
void delete_posi()
{
    struct node *temp, *t;
    int posi, i = 1;

    printf("Enter position: ");
    scanf("%d", &posi);

    if (last == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (posi == 1)
    {
        delete_first();
        return;
    }

    temp = last->next;

    while (i < posi - 1 && temp->next != last->next)
    {
        temp = temp->next;
        i++;
    }

    if (temp->next == last->next)
    {
        printf("Position not found\n");
        return;
    }

    t = temp->next;
    temp->next = t->next;

    if (t == last)
        last = temp;

    free(t);
}
