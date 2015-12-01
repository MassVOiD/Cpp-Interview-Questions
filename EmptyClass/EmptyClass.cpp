#include <iostream>

class Empty 
{
public:
	Empty(const char *str = NULL);
	Empty(const Empty &other);
	~Empty(void);

	Empty & operator = (const Empty &other);

private:
	char m_data;
};


Empty::Empty(const char *str)
{
	if (str == NULL)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy(m_data, str);
	}
}


Empty::~Empty()
{
	delete[] m_data;
}


Empty::Empty(const Empty &other)
{
	int length = strlen(other);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
}


Empty & Empty::operator=(const Empty &other)
{
	if (this == &other)
	{
		return *this;
	}

	delete[] m_data;
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);

	return *this;
}

