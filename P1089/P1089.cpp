#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <stack>
#include <queue>
#include <list>
using namespace std;
int main()
{
	int m_h=0,m_g=0,m_d,z;
	for(int i=1;i<=12;i++)
	{
		scanf("%d",&m_d);
		if(m_h+300<m_d)
		{
			printf("-%d",i);
			break;
		}
		else
		{
			m_h+=300;
			z=floor(m_h/100);
			m_h-=z*100;
		}
		if(i==12)
		{
			printf("%d",m_h+z*120);
		}
	}
	return 0;
}