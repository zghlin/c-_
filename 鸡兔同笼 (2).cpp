/*
����ͬ������
�������ӹ�nֻ����m���š�����n��m������������ӵ����������û�н⣬�����No����
һ���������
�������輦��aֻ������bֻ����a + b = n��2a + 4b = m�������a = (4n-m)/2��b = n-a.��ʲô������������أ����ȣ�a��b������������Σ�a��b�����ǷǸ��ġ�

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chicken,rabbit,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    chicken=(4*n-m)/2;
    rabbit=n-chicken;
    if(m%2==1||chicken<0||rabbit<0)
        printf("No");
    else
        printf("%d %d\n",chicken,rabbit);
    system("pause");
	return 0;
}
