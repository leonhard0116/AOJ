#include<cstdio>
int n[6],i,j;
int main(){for(;i++<3;){for(j=0;j++<6;)scanf("%d",n+j-1);for(j=5;j>2;j--){n[j]-=n[j-3];if(n[j]<0){n[j]+=60;n[j-1]--;}}printf("%d %d %d\n",n[3],n[4],n[5]);}}


#if IDEA
int n[6],i,j;
int main()
{
	for(;i++<3;)
	{
		for(j=0;j++<6;)scanf("%d",n+j-1);
		//for(j=5;j>3;j--)if(n[j]<n[j-3]){n[j]+=60;n[j-1]--;}
		for(j=5;j>2;j--){n[j]-=n[j-3];if(n[j]<0){n[j]+=60;n[j-1]--;}}
		printf("%d %d %d\n",n[3],n[4],n[5]);
	}
}


#include <iostream>
#include <string>

int main()
{
	int n[6],i,j;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 6; j++) std::cin >> n[j];
		if(n[5]<n[2]){n[5]+=60; n[4]--;}
		if(n[4]<n[1]){n[4]+=60; n[3]--;}
		std::cout << n[3] - *n << " " << n[4] - n[1] << " " << n[5] - n[2] << std::endl;
	}
}
#endif
