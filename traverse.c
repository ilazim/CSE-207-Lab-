void traverse()
{
  struct node *t;
  t = start;
  while (t != NULL)
  {
      printf("%d\n", t->element);
      t=t->next;
  }
}
