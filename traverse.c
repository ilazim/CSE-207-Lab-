void traverse
{
  struct node *t;
  t = start;
  while (t != NULL)
  {
      printf("%d", t->element);
      t=t->next;
  }
}
