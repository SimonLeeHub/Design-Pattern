/*!
* \brief 菜单项
* 
* 实际承担菜单的载体
* 
* \author Lee 
* \date 2019.02.25
*/
#pragma once
class CMenuItem
{
public:
	CMenuItem(std::string name, std::string description, double price, bool vegetarian);
	~CMenuItem(void);
	std::string name;
	std::string description;
	bool vegetarian;
	double price;
	std::string getName(void);
	std::string getDescription(void);
	double getPrice(void);
	bool isVegetarian(void);
};

