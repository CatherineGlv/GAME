#ifndef HAND_H
#define HAND_H

#pragma once

class Hand
{
public:
	Hand();
	virtual ~Hand();

	void Add(Card* pCard);

	void Clear();

	int GetValue() const { }

protected:
	vector<Card*> m_Cards;
};

Hand::Hand()
{
	m_Cards.reserve(7);
}

Hand::~Hand()
{
	Clear();
}

void Hand::Add(Card* pCard)
{
	m_Cards.push_back(pCard);
}

void Hand::Clear()
{
	vector<Card*>::iterator it = m_Cards.begin();
	for (it = m_Cards.begin(); it != m_Cards.end(); ++it)
	{
		delete* it;
		*it = 0;
	}

	m_Cards.clear();
}

int Hand::GetValue() const
{
	if (m_Cards.empty())
	{
		return 0;
	}
	if (m_Cards[0]->GetValue() == 0)
	{
		return 0;
	}

	int total = 0;

	vector<Card*>::const_iterator it;

	for (it = m_Cards.begin(); it != m_Cards.end(); ++it)
	{
		total += (*it)->GetValue();
	}

	bool Ace = false;

	for (it = m_Cards.begin(); it != m_Cards.end(); ++it)
	{
		if ((*it)->GetValue() == Card::ACE)
		{
			Ace = true;
		}
	}

	if (Ace && total <= 11)
	{
		total += 10;
	}
	return total;
}
#endif