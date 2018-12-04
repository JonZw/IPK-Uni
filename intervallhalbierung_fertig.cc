#include "fcpp.hh"


double funktion(double xn, double w)
{
	return xn*xn - w;
}


double intervall(double a, double b, double w, double m)
{
	while(funktion(a,w)<1e-15 && funktion(b,w) >1e-12)
	{
		m = (a+b) /2;
		if(funktion(m,w) == 0)
		{
			return m;
		}
		else if(funktion(m,w)<0)
		{
			a = m;
		}
		else if(funktion(m,w)>0)
		{
			b = m;
		}
	}
	return m;
}

int main(int argc, char** argv)
{
	double a= enter_int("Geben Sie bitte a ein: ");
    double b= enter_int("Geben Sie b biite ein: ");
    double w= enter_int("Geben Sie bitte die Wurzel an: ");
    double m= 0.0;
	return print(intervall(a,b,w,m)); 
}		
