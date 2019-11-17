# include <stdio.h>
int main(){
	//第一题 
{ 
	int a[7]={1,3,5,7,9,11,13};
	int b[7]={2,3,5,7,11,13,17};
	int c[7+7-1]={0};
	int aa=0,bb=0,cc=0;
	for (;cc<=7+7-1;cc++)
		{
		if (bb==8)goto here2;
		if (aa==8)goto here1;			
		if(a[aa]<=b[bb])
			{							
				c[cc]=a[aa];
				aa++;
			}
		else{									
				c[cc]=b[bb];
				bb++;						
			}		
		}  
	here1:
	for (cc--;cc<=7+7-1+1;cc++){		
		c[cc]=b[bb];
		bb++;
	};
		here2:	
		for (cc--;cc<=7+7-1+1;cc++){			
		c[cc]=a[aa];
		aa++;
	}; 
		
	for (cc=0;cc<=7+7-1;cc++)//输出数组 
		{
			printf("%d ",c[cc]);
		}
	}
}
