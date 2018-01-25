int foo(node *rear)
{
	if(!rear)
		return 0;
	return foo(rear->next, rear);
}
int foo(node * current, node * rear)
{
	if(current == rear)
	{
		return 1;
	}
	//foo

	int result = foo(current->next,rear);
	return result;
}