#include<iostream>

int Pi[] = {50, 140, 60};
int Wi[] = {10, 7, 6};

int main()
{
	int W = 30;

	if (Wi[0] > W)
	{
		std::cout << "no full items can be taken \n";
		return 0;
	} 

	int i = 0;
	int totalweight = Wi[0];
	int totalprofit = Pi[0];
	while (totalweight + Wi[i + 1] <= W)
	{
		totalweight = totalweight + Wi[i + 1];
		totalprofit = totalprofit + Pi[i + 1];
		i++;
	}
	std::cout << "items up to"<< i+ 1 << "profit" << totalprofit;
	

}
