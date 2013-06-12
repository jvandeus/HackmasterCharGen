double streGlobal,intelGlobal,wisGlobal,dexGlobal,conGlobal,lokGlobal,chaGlobal=0,BP=100,sum=0,round=0,hon=0;
double dmgmodOut,strfeatOut,liftOut,carryOut,dragOut,atkintOut,wisinitOut,wisdefOut,dexinitOut,dexatkOut,dexdefOut,chaturnOut;
std::string cla="";
std::string race="";

int roll(int numb,int die)// rolls the die type, follows by the number of times rolled, returns the sum of the rolls.
{
	int fin=0;
	while(numb>0){
		fin += rand() % die + 1; //additive results, rolls until number of times is finished
		numb--;
	}
	return fin;
}

double rounder(double d){
	d=floor(d+.5);
	return d;
}