#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H

#pragma once

class GenericPlayer : public Hand {

	friend ostream& operator<< (ostream& os.const GenericPlayer& aGenericPlayer);
public:
	GenericPlayer(const string& name = " ");
	virtual ~GenericPlayer();

	virtual bool IsHitting() const = 0;

	bool IsBusted() const;

	void Bust() const;
protected:
	string m_Name;
};

GenericPlayer::GenericPlayer(const string& name) :m_Name(name) { }

GenericPlayer::~GenericPlayer() { }

bool GenericPlayer::IsBusted() const {

	return (GetTotal() > 21);
}

void GenericPlayer::Bust() const {

	cout << m_Name << " busts." << endl;
}

ostream& operator<< (ostream& os, const GenericPlayer& aGenericPlayer)
{
	os << aGenericPlayer.m_Name << " :\t";
	vector<Card*>::const_iterator pCard;
	if (!aGenericPlayer.m_Ñàrds.empty())
	{
		for (pCard = aGenericPlayer.m_Cards.begin(); pCard != aGenericPlayer.m_Cards.end(); ++pCard)
			os << *(*pCard) << "\t";
	}
	if (aGenericPlayer.GetTotal() != 0)
	{
		cout << "(" << aGenericPlayer.GetTotal() << ")";
	}
		else
		{
			os << "<empty>";
		}
	return os;
}
#endif