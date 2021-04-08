#ifndef PLAYER_H
#define PLAYER_H

#pragma once

class Player :public GenericPlayer
{
public:
	Player(const string& name = "");
	virtual ~Player();

	virtual bool IsHitting() const;

	void Win() const;

	void Lose() const;

	void Push() const;
};

Player::Player(const string& name);
	
GenericPlayer(name)
	{}
	Player::~Player()
	{}
	bool Player::IsHitting() const
	{
		cout << m_Name << "do you want à hit? (Y / N): ";
		char response;

		cin >> response;
		return (response == 'ó' || response == 'Ó');

	}
		void Player::Win() const
		{
			cout << m_Name << " wins.\n";
		}
		void Player::Lose() const
		{
			cout << m_Name << " loses.\n";
		}
		void Player::Push() const
		{
			cout << m_Name << " pushes.\n";
		}
#endif