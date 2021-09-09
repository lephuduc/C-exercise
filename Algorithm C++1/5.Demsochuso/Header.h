#ifndef _HEADER_
#define _HEADER_
int demchusodequy(int n)
{
	if (n < 10)
	{
		return 1;
	}
	return 1 + demchusodequy(n / 10);
}
#endif