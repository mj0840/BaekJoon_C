#include<stdio.h>
int main()
{
	int t, m, c, a;
	scanf("%d %d\n%d", &t, &m, &c);
	if (m + c >=60)
	{
		a = (m + c) / 60;
		m = (m + c) % 60;
		t = t + a;
		
		if (t >= 24)
		{
			t = t % 24;
		}
		printf("%d %d", t, m);
	}
	else
		printf("%d %d\n", t, m + c);
	return 0;
}