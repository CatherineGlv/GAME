#ifndef HOUSE_H
#define HOUSE_H

#pragma once

class House:public GenericPlayer
{
public:
	House(const string& name = "House");
	
	virtual ~House();
	
	virtual bool IsHitting() const;
	
	void FlipFirstCard();
	House::House(const string& name);
	
	GenericPlayer(name)
	{}
	House::~House()
	{}

	
	bool House::IsHitting() const
	{
		return (GetTotal() <= 16);
	}
	void House::FlipFirstCard()
	{
		if (!(m_Cards.empty()))
		{
			m_Cards[0]->Flip();
		}
		else
		{
			cout << "No card to flip!\n";
		}
	}
#endif