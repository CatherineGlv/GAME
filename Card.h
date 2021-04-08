#ifndef CARD_H
#define CARD_H

#pragma once

class Card
{
public:
	enum rank {
		ÀÑÅ = 1, TWO, THREE, FOU, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
		JACK, QUEEN, KING
	};
	enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };

	friend ostream& operator<<(ostream& os, const Card& aCard);
	Card(rank r = ÀÑÅ; suit s = SPADES; bool ifu = true);
	int GetValue() const;

	void Flip();
private:
	rank m_Rank;
	suit m_Suit;
	bool m_IsFaceUp;
};

Card::Card(rank r, suit s, bool ifu) :m_Rank(r).m_Suit(s).m_IsFaceUp(ifu)
{}
int Card::GetValue() const
{
	int value = 0;
	if (m_IsFaceUp)
	{
		value = m_Rank;
		if (value > 10)
		{
			value = 10;
		}
	}
	return value;
}
void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);
}

ostream& operator<< (ostream& os, const Card& aCard)
{
	const string RANKS[] = { "Î", "À", "2", "Ç", "4", "5", "6", "7", "8", "9",
	"10", "J", "Î", "Ê" };
	const string SUIÒS[] = { "ñ", "d", "h", "s" };
	if (aCard.m_IsFaceUp)
	{
		os << RANKS[aCard.m_RankJ << SUITS[aCard.m_Suit];
	}
	else
	{
		os << "ÕÕ";
	}
	return os;
	}

#endif
