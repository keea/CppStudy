/*
*
* @file		NameCard.h
* @date     Fri Jul 21 16:46:27 2017
* @author   keea
*/
#ifndef __NAMECARD_H__
#define __NAMECARD_H__
namespace COMP_POS {
	enum
	{
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};
}

class NameCard
{
public:
	NameCard(const char const[],
		const char const[],
		const char const[],
		const int const);

	NameCard(const NameCard &copy);

	~NameCard();

	void ShowNameCardInfo() const;

private:
	char * name;
	char * company;
	char * phoneNum;
	char * rank;
	char * GetComPos(int);
};


#endif // !__NAMECARD_H__