/*
*
* @file		NameCard.h
* @date     Thu Jul 20 17:00:00 2017
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
	NameCard(const char const [],
		const char const [],
		const char const [],
		const int const );

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
