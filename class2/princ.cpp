class Screen
{
	unsigned long start;
	unsigned long rows;
	unsigned long columns;
	bool active;

public:
	Screen(unsigned long st, unsigned long ro = 400, unsigned long co = 600)
	{
		start = st;
		rows = ro;
		columns = co;
		active = false;
	}
	unsigned long size()
	{
		return rows * columns;
	}
	unsigned long cls()
	{
		return columns;
	}
	unsigned long rws()
	{
		return rows;
	}
	unsigned long strt() {
		return start;
	}
};

class Point
{
	unsigned long y;
	unsigned long x;
	unsigned char vlr;
public:
	Point(unsigned long ord = 0, unsigned long abc = 0, unsigned char pv = 0)
	{
		x = abc;
		y = ord;
		vlr = pv;		
	}
	unsigned long abc()
	{
		return x;
	}
	unsigned long ord()
	{
		return y;
	}
};

class Punkt
{
	short abc;
	short ord;

public:
	Punkt(short h=0, short v=0)
	{
		abc = h;
		ord = v;
	}
};


unsigned long pos(Point p, Screen s);

int main()
{
	size_t constexpr asz = 30;
	Screen bsc(0);
	Screen sml(0, 100, 150);
	unsigned long sz1 = bsc.size();
	unsigned long sz2 = sml.size();

	Point trA(114,  28,  1);
	Point trB( 14,  20, 10);
	Point trC(  0,   0,  5);

	unsigned long p1s1 = pos(trA, bsc);
	Punkt ps[asz];
	for (short i = 0; i < asz; i++)
		ps[i]=Punkt(i+3,i-3);
}

unsigned long pos(Point p, Screen s)
{
	return p.abc()+p.ord()*s.cls()+s.strt();
}
