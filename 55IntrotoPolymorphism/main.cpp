#include <iostream>
using namespace std;

class Enemy {
	protected:
		int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};

class Ninja : public Enemy {
public:
	void attack()
	{
		cout << "i am a ninja, nija chop! -" << attackPower << endl;
	}
};

	class Monster : public Enemy {
	public:
		void attack()
		{
			cout << "monster must eat you!!!! -" << attackPower << endl;
		}

	};

	int main() {
		Ninja n;
		Monster m;
		Enemy* enemy1 = &n;		// becuase ninja is of type enemy, this is valid
		Enemy* enemy2 = &m;		//anything that an enemy can do, monster can do
		enemy1->setAttackPower(29); // ninja is just a more specific type of enemy
		enemy2->setAttackPower(99); // envery enemy has a setAttackPower
		n.attack();					// Enemy class does not have attack
		m.attack();					//virtual members make this even easier
	}