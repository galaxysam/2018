#include <iostream>

class Table {
public:

  void show();
  void addRow();
  void delRow(int n);
  void addColumn();
  void delColumn(int n);
  void xin(int a,int b);
  void set(int a,int b,char d[7]);
private:
  char c[10][10][7];
  int row;
  int col;
};

int main() {
  Table tb;
  tb.xin(0,0);
  tb.show();
  tb.addRow();
  tb.show();
  tb.addColumn();
  tb.show();
  Table tb1;
  tb1.xin(5,5);
  tb1.show();
  tb1.set(1,1,"30");
  tb1.show();
  tb1.set(2,2,"hello");
  tb1.show();
  tb1.delRow(1);
  tb1.show();
  tb1.delColumn(1);
  tb1.show();
  return 0;
}



void Table::xin(int a,int b)
{
	row=a;
	col=b;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			for(int k=0;k<7;k++)
			{
				c[i][j][k]=' ';
			}
		}
	}
}

void Table::addRow()
{
	row++;
}
void Table::addColumn()
{
	col++;
}
void Table::delColumn(int n)
{
	col=col-n;
}
void Table::delRow(int n)
{
	row=row-n;
}
void Table::show()
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			for(int k=0;k<7;k++)
			{
				std::cout<<c[i][j][k];
			}
			std::cout<<"|||";
		}
		std::cout<<std::endl;std::cout<<std::endl;
	}
	std::cout<<std::endl;std::cout<<std::endl;std::cout<<std::endl;
}

void Table::set(int a,int b,char d[7])
{
	for(int i=0;i<7;i++)
	{
	
	c[a][b][i]=d[i];
	}
}
