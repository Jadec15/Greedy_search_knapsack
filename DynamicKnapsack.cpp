#include<iostream> 
int max(int a, int b);
void dynamic_knapsack(int W, int Wi[], int Pi[]);


int main()
{
	int Pi[] = { 10, 9, 50 };
	int Wi[] = { 60, 45, 25};
	int  W = 25; //weight limit
	int Items = 3;
	dynamic_knapsack(W, Wi, Pi);
	return 0;
}
int max(int item1, int item2) 
{
	if (item1 > item2)
	{
		return item1;
	}
	else {
		return item2;
	} 
}
void dynamic_knapsack(int W, int Wi[], int Pi[])
{
		int i, weight, Items = 3;
		int P[4][31];

		for (i = 0; i <= Items; i++)
		{

			for (weight = 0; weight < W + 1 ; weight++)
			{
				if (weight == 0 || i == 0) // set  n=0 row to 0 and w = 0 row to 0 as well
					P[i][weight] = 0;
				else if (Wi[i - 1] < weight + 1)
					P[i][weight] = max(Pi[i - 1] + P[i - 1][weight - Wi[i - 1]], P[i - 1][weight]); // -1 due to starting index 
				else
					P[i][weight] = P[i - 1][weight];
			}
		}
		std::cout << "The total weight is " <<P[Items][W];
}
