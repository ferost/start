
#define MAX_INT		0x7FFFFFFF

static int Max(int a, int b);

void main(void)
{
	int max, a = 1, b = 2;
	
	printf("hello world");
	
	while(1)
	{
		max = Max(a, b);
	}
	
	return;
}

static int Max(int a, int b)
{
	return (a > b ? a : b);	
}

static int Min(int a, int b)
{
	return (a < b ? a : b);	
}