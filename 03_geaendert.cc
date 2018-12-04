
//zu 3:

#include "fcpp.hh"
#include <iostream>

void printarray ()
{
	int length = 0;
	int zaehler[10] ={0,0,0,0,0,0,0,0,0,0};
	bool max_number = true;
	
	
	//Während noch keine 11 Zahlen eingeschrieben worden sind:
	while(length<11)
	{
		int number;
		std::cin>> number;
		
		if(number == 0)
		{
			for( int n = 0; n < 10; n++)
			{
				std::cout<< zaehler[n]<<","<<std::flush;
			} 
			length = length -1;
			
		}
		else if(number > 0)
		{
			for(int j = 0; j<9; j++)
			{
				if(number > zaehler[j] and number <=zaehler[j+1])
				{
					for(int n = 0; n < j; n++)
					{
						zaehler[n] = zaehler[n+1];
					}
					zaehler[j] = number;
						
					max_number = false;
					
				}
				
			}
			if(max_number == true)
			{
				for(int j = 0; j < 9; j++)
				{
					zaehler[j] = zaehler[j+1];
				}
				zaehler[9] = number;
			}
			max_number = true;	
		}
		else if(number == -1)
		{
			break;
		}
		else if(number < -1)
		{
			std::cout<<"Fehler! Das Programm wird beendet.";
			break;
		}
		//Damit kein 11.te Zahl eingegeben werden kann:
		if(length == 10)
		{
			std::cout<<"Array ist voll und wird ausgelesen:"<<std::endl;
			std::cout<< "("<<std::flush;
			for( int n = 0; n < 10; n++)
			{
				std::cout<< zaehler[n]<<","<<std::flush;
			} 
			length = length -1;
			std::cout<<")"<<std::endl;
			break;
		}	
		length= length+1;
	}
}


int main()
{
	std::cout<<"Gebe 10 positive Zahlen ein. Bei negativen Eingaben (außer -1) wird eine Fehlermeldungen ausgegeben und das Programm terminiert. -1 terminiert das Programm. Eine Null gibt den Array aus:"<<std::endl;
	printarray();
}
