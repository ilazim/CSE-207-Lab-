int pop()
{
    struct node *toDelete, *secondLastNode;

    if(tos == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = tos;
        secondLastNode = tos;
        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == tos)
        {
            tos = NULL;
        }
        else
        {

            secondLastNode->next = NULL;
        }

        free(toDelete);

    }
}
