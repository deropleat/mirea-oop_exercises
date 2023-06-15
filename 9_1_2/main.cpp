#include <iostream>
#include <vector>

struct element
{
	unsigned char data;
	unsigned char data_template;
	
	element& operator|(const element& object)
	{
		int origin, destination;
		for (int i = 0; i < 8; i++)
		{
			origin = (object.data_template >> i) & 1;
			destination = (data_template >> i) & 1;
			
			if (origin & destination)
			{
				origin = (object.data >> i) & 1;
				destination = (data >> i) & 1;
				if (!destination) data |= (origin << i);
			}
		}
		return *this;
	}
	
	element& operator|=(const element& object)
	{
		return operator|(object);
	}
	
	element& operator&(const element& object)
	{
		int origin, destination;
		for (int i = 0; i < 8; i++)
		{
			origin = (object.data_template >> i) & 1;
			destination = (data_template >> i) & 1;
			if (origin & destination) 
			{ 
				origin = (object.data >> i) & 1; 
				destination = (data >> i) & 1; 
				
				if (origin & destination) data |= (1 << i); 
				else data &= ~(1 << i); 
			}
		}
		return *this; 
	}
	
	element& operator&=(const element& object) 
	{ 
		return operator&(object); 
	}
	
	element(unsigned char _data, unsigned char _data_template) 
	{ 
		data = _data; 
		data_template = _data_template; 
	}
}; 

unsigned char in_bits(std::string value) 
{ 
	std::string alphabet = "0123456789ABCDEF"; 
	return alphabet.find(value.at(1)) + 16 * alphabet.find(value.at(0)); 
}

std::string from_bits(unsigned char value) 
{ 
	std::string alphabet = "0123456789ABCDEF"; 
	return std::string(1, alphabet.at(value >> 4)) + std::string(1, alphabet.at(value - 16 * (value >> 4))); 
}

int main() 
{
	char sign; 
	int head, sub, amount = 0; 
	std::string data[2];
	std::vector<element> elements; 

	while (amount < 2 || abs(amount) != amount) std::cin >> amount; 
	for (; amount > 0; amount--)
	{ 
		std::cin >> data[0] >> data[1]; 
		elements.push_back(element(in_bits(data[0]), in_bits(data[1])));
	}

	while (std::cin >> head) 
	{
		std::cin >> sign >> sub; 
		
		if (sign == '&') elements[head - 1] &= elements[sub - 1]; 
		else if (sign == '|') elements[head - 1] |= elements[sub - 1];
	}
	std::cout << from_bits(elements.at(head - 1).data); 
		
	return 0;
}