#include<iostream>
#include<conio.h>
#include<string>

std::string arrange(std::string&);
int main() { 
	std::string str;
	std::getline(std::cin, str);
	std::cout<<arrange(str);
	_getch();
}
std::string arrange(std::string& s) {
	int wl[1000] = { 0 };		//word length and address of space vars
	int spc[1000] = { 0 };	//space position
	int j=0,stop,min,index=0,l=0,k=0,sum=0;
	std::string out;
	for (std::string::size_type i = 0; i <= s.size(); i++) {
		if (s[i] == ' ' || s[i] == '.') {
			spc[j] = i;
			j++;
		}
		if (s[i] == ' '||s[i]=='.') {
			if (k == 0) {
				wl[k] = i;
			}
			else 
			{
				wl[k] = i - sum ;
			}
		    sum += wl[k]+1;
			k++;

		}
		stop = j;	
	}				//Loops above to count the total number of words(wl) in the string and the positions of the spaces (spc)
	min = wl[0];
	for (int i = 0;i < stop ;i++) {
		for (int j = 0;j < stop - 1;j++) {
			if (min > wl[j + 1]) {
				min = wl[j + 1];
				index = (j + 1);
			}
		}
		if (index != 0) {
			for (int k = (spc[index - 1] + 1); k < (spc[index]+1);k++) {		//To append words according to sizes in the string out 
				out += (s[k]);
			}
		}
		else
		{
			for (int k = 0;k < (spc[index]+1);k++) {			
				out += (s[k]);
			}
		}
			wl[index] *= 100;	
			min = wl[0];
			index = 0;
	}
	for (std::string::size_type i = 0; i <= out.size(); i++) {		//loop to convert capital character in entered str to lower
		if (::isupper(out[i]))
			out[i]=::tolower(out[i]);
	}
	for (std::string::size_type i = 0; i <= out.size(); i++) {		//loop to put space where a period is seen
		if (out[i]=='.')
			out[i] = ' ';
	}
	out[0]=::toupper(out[0]);	//To capitalise the first character
	out[out.size()-1] = '.';	//To put period at the end of the sentence
	return out;
}