//EightSideDie.h
#include<ostream>

using namespace std;

class EightSideDie
{
	public:
		EightSideDie();
		EightSideDie(const EightSideDie& aDie);
		
		void roll();
		int getCurrent() const;
		int getSideCount(int num) const;
		bool validCount(int num) const;
		static EightSideDie addAll(const EightSideDie& aDie, const EightSideDie& aDie2);
		int largest() const;
		bool operator== (const EightSideDie& obj);
		friend ostream& operator<<(ostream& out, const EightSideDie& aDie);
		void reset();

		void print();
		void showRolledFaces() const;

	private: 
		int counts[9];
		int recentFace; 
};








