double pow(double a,unsigned int i)
{
	double result =1;
	for(int j=0;j<i;j++)
	{
		result*=a;
	}
	return result;
}
