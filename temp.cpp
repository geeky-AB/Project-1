#include<iostream>
using namespace std;

int r1_ent(int prize){
	int a;
	cout<<"--> WHO IS KNOWN AS KING KHAN IN BOLLYWOOD"<<endl<<"1) AAMIR KHAN     2)SALMAN KHAN"<<endl<<"3)SHAH RUKH KHAN    4)NONE OF THE AMOVE"<<endl;
	cin>>a;
	if(a==3){
		cout<<"CORRECT ANSWER "<<endl<<endl;
		prize=prize+5000;
	}
	else{
		cout<<"SORRY ITS A WRONG ANSWER"<<endl;
		goto result1;
	}
	
	cout<<"-->WHO IS SON OF SH. RISHI KAPOOR"<<endl<<"1) SHAMMI KAPPOOR     2)SHASHI KAPOOR"<<endl<<"3)ROHAN KAPOOR    4)RANBIR KAPOOR"<<endl;
	cin>>a;
	if(a==4){
		cout<<"CORRECT ANSWER "<<endl<<endl;
		prize=prize+5000;
	}
	else{
		cout<<"SORRY ITS A WRONG ANSWER"<<endl;
		goto result1;
	}
	cout<<"--> WHO IS STARRED IN MOVIE TITANIC"<<endl<<"1) BRAD PITT     2)LEONARDO DI CAPRIO"<<endl<<"3)VIN DIESEL    4)WILL SMITH"<<endl;
	cin>>a;
	if(a==2){
		cout<<"CORRECT ANSWER "<<endl<<endl;
		prize=prize+5000;
		goto result1;
	}
	else{
		cout<<"SORRY ITS A WRONG ANSWER"<<endl;
		goto result1;
	}
	result1:
		cout<<"YOUR AMOUNT IS: "<<prize<<endl;
		
		return prize;
}

int r2_sp(int prize){
	cout<<"YOUR SECOND ROUND IS SPORTS ROUND"<<endl;
	int a;
	cout<<"--> WHO IS CAPTAIN OF ENGLAND CRICKET TEAM DURING HISTORIC MOMENT OF YUVRAJ SINGH HITTING 6 SIXES"<<endl<<"1)KEVIN PETERSON     2)STUART BRAUD"<<endl<<"3)ANDREW FLINTOFF    4)KP COLLINGWOOD"<<endl;
	cin>>a;
	if(a==1){
		cout<<"YOUR ANSWER IS CORRECT!!!"<<endl;
		prize=prize+10000;
	}
	else{
		cout<<"YOUR ANSWER IS WRONG!!!"<<endl;
		goto result2;
	}
	
	cout<<"--> WHO IS CURRENT BOWLING COACH OF INDIAN NATIONAL CRICKET TEAM "<<endl<<"1)BRAT LEE     2)ANIL KUMBLE"<<endl<<"3)BHARAT ARUN    4)KAMLI"<<endl;
	cin>>a;
	if(a==3){
		cout<<"YOUR ANSWER IS CORRECT!!!"<<endl;
		prize=prize+10000;
	}
	else{
		cout<<"YOUR ANSWER IS WRONG!!!"<<endl;
		goto result2;
	}
	
	cout<<"--> WHO IS CURRENT PRESIDENT OF BCCI"<<endl<<"1)ANURAG THAKUR     2)SOURAV GANGULY"<<endl<<"3)VIRENDAR SEHWAG    4)SACHIN TENDULKAR"<<endl;
	cin>>a;
	if(a==2){
		cout<<"YOUR ANSWER IS CORRECT!!!"<<endl;
		prize=prize+10000;
	}
	else{
		cout<<"YOUR ANSWER IS WRONG!!!"<<endl;
		goto result2;
	}
	
	
	result2:
		cout<<"YOUR AMOUNT IS: "<<prize<<endl;
		
		return prize;
}


int r3_his(int prize){
	cout<<"YOUR THIRD ROUND IS HISTORY ROUND"<<endl;
	int a;
	cout<<"--> WHO IS SON OF AKBAR"<<endl<<"1)HUMAYUN     2)SHER SHAH SURI"<<endl<<"3)JAHANGIR    4)BAIRAM KHAN"<<endl;
	cin>>a;
	if(a==3){
		cout<<"YOUR ANSWER IS CORRECT!!!"<<endl;
		prize=prize+20000;
	}
	else{
		cout<<"YOUR ANSWER IS WRONG!!!"<<endl;
		goto result3;
	}
	
	cout<<"--> WHEN WAS FIRST BATTLE OF PANIPAT WAS FOUGHT "<<endl<<"1)1526     2)1560"<<endl<<"3)1515    4)1530"<<endl;
	cin>>a;
	if(a==1){
		cout<<"YOUR ANSWER IS CORRECT!!!"<<endl;
		prize=prize+20000;
	}
	else{
		cout<<"YOUR ANSWER IS WRONG!!!"<<endl;
		goto result3;
	}
	
	cout<<"--> WHEN WAS FIRST COTTEN MILL  ESTABLISHED IN INDIA"<<endl<<"1)1800     2)1818"<<endl<<"3)1820    4)1825"<<endl;
	cin>>a;
	if(a==2){
		cout<<"YOUR ANSWER IS CORRECT!!!"<<endl;
		prize=prize+20000;
	}
	else{
		cout<<"YOUR ANSWER IS WRONG!!!"<<endl;
		goto result3;
	}
	
	
	result3:
		cout<<"YOUR AMOUNT IS: "<<prize<<endl;
		
		return prize;
}




	


int main()
{   string name;
    int prize=0;
    int x,y,z;




	cout<<"                                      --------------PLEASE ENTER YOUR NAME--------------------"<<endl;
	cin>>name;
	
	cout<<"                                   ------WELCOME "<<name<<", LETS PLAY KAUN BANEGA MALAMAL--------"<<endl;
	cout<<"                                              LETS HAVE A LOOK AT GENERAL INSTRUCTIONS"<<endl;
	cout<<"                                        1)  PLAY FAIR AND DO AS INSTRUCTED OR YOU WILL BE DISQUALIFIED "<<endl;
	cout<<"                                        2)  THERE ARE 3 ROUNDS IN TOTAL"<<endl;
	cout<<"                                        3)  EACH QUESTION IN ROUND 1 EARNS YOU AN AMOUNT OF RS. 5K"<<endl;
	cout<<"                                        4)  EACH QUESTION IN ROUND 2 EARNS YOU AN AMOUNT OF RS. 10K"<<endl;
	cout<<"                                        5)  EACH QUESTION IN ROUND 3 EARNS YOU AN AMOUNT OF RS. 20K"<<endl;
	cout<<"                                        6)  THERE ARE NO LIFELINES"<<endl;
	cout<<"                                        7)  SO, LETS PLAY THE GAME "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"YOUR FIRST ROUND IS ENTERTAINMENT ROUND "<<endl;
	
	 x=r1_ent(0);
	 
	 if(x==15000)
	 {
	 	 y=r2_sp(15000);
	 }
	 
	 
	  if(y==45000)
	 {
	 	 z=r3_his(45000);
	 }
	 
	 if(z==105000){
	 	
      cout<<"CONGO YOU HAVE CLEARED ALL THE ROUND"<<endl<<" ITS TIME TO SAY GOOD BYE"<<endl;	 
	  }
	  else{
	  	cout<<"SORRY TRY NEXT TIME HARDER"<<endl;
	  }
	
	
		
		return 0;
}
