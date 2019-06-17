#include <iostream>

int main(int argc, char** argv) {
	int i,j;
	int a;
	int x;
	int b[20];
	int c,s,cs;
	
	int count=0;
	int sum=0;
	int max=0;
	for(i=100;i<10000;i++)
	{
		
		x=1;
		for(j=2;j<=i/2;j++)
		{
			a=i%j;
			if(a==0){
			x=0;break;
			}
		}
		if(x==0)continue;
		
		a=i;
		for(j=0;;j++){
			
			b[j]=a-a/10*10;
			a=a/10;
			if(a==0)break;
		}
		c=1;
		s=0;
		cs=0;
		for(j;j>=0;j--)
		{
			c=c*b[j];
			s=s+b[j];
			cs=cs+b[j]*b[j];
			
		}

		if(c<2||s<2||cs<2)continue;
		
		for(j=2;j<=c/2;j++)
		{
			if(c==2||c==3)break;
			
			a=c%j;
			if(a==0||c<2){
			x=0;break;
			}
		}
		if(x==0)continue;
		
		
		for(j=2;j<=s/2;j++)
		{
			if(s==2||s==3)break;
			a=s%j;
			if(a==0||s<2){
			x=0;break;
			}
		}
		if(x==0)continue;
		
		
		for(j=2;j<=cs/2;j++)
		{
			if(cs==2||cs==3)break;
			a=cs%j;
			if(a==0||cs<2){
			x=0;break;
			}
		}
		if(x==0)continue;
		
		count++;
		sum=sum+i;
		max=i;
		std::cout<<i<<" ";
		
		
		
		
		
	}
	std::cout<<"个数等于="<<count<<" 总和="<<sum<<" 最大值="<<max ;
	
}
