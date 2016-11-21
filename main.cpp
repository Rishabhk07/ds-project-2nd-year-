#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>

using namespace std;



class design
{
string upload;

public:
void enter(){
    int ans;
system("cls");
cout<<"\t\twelcome to the design part of your TEXT Tee\n";
cout<<"chose your design\n";

cout<<"1.Build in Design\n2.Design your own\n\n\n";
cin>>ans;
if(ans == 1 ){

    build_in();


}else if(ans == 2){

    int r =  own();



}

}



int build_in(){

damn:

    system("cls");
cout<<"We have some of the most amazing designs to chose from\n";

int option;
char ans;


FILE *fp;

fp = fopen("quotes.text","r+");

int i = 0;

while(!feof(fp)){

    i++;
    char quote[100000];

    fscanf(fp,"%s",quote);

    cout<<i<<". "<<quote<<"\n";

}

fclose(fp);



cout<<"chose your option ?\n\n";
cin>>option;


fp = fopen("quotes.text","r+");
string quo;
int j = 0;
while(!feof(fp)){

    j++;
    char quote[10000] ;

    fscanf(fp,"%s",quote);
    quo = quote;
    if(j == option){
        break;
    }

}

cout<<"you chosed: "<<quo<<"\n\n\n";

mid: // go to statemnt ahead

cout<<"Do you want to continue ?\n";
cout<<"Y - yes \ N - No\n\n";
cin>>ans;

if(ans == 'y' || ans == 'Y')
    {
    upload = quo;
    return 1;
    }
else if(ans == 'n' || ans == 'N')
{
    goto damn;

}
else{

    cout<<"Invalid Input";
    system("pause");
    goto mid;

}

}

int own(){

    string quote;
    char ans;

    again:

    cout<<"Enter your own design ?\n";
    cin>>quote;
    cout<<"\n";

    cout<<"\tyou entered : "<<quote<<"\n\n";


now:
    ans = 'NULL';
    cout<<"Do you want to continue ?\n";
    cout<<"Y - yes \ N - No\n";
    cin>>ans;

    if(ans == 'y' || ans =='Y')
    {
    upload = quote;
    return 1;
    }
    else if(ans == 'n' || ans == 'N')
    {
    return 0;

    }
    else{

    cout<<"Invalid Input\n";
   system("pause");
    goto now;

    }



}
};
class tshirt
{
    public:
	char size_;
	int range_;
    string color_;
    design *ds;
    char decide;
    string full;
    string gender_;
    int brand;
    string sleeve_;



	public:
		tshirt()
		{
			size_=0;
			range_=0;
			color_="NULL";

			ds = new design();
		}
		tshirt(int sz,int rn,string cl,double pr)
		{
			size_=sz;
			range_=rn;
			color_=cl;
			ds = new design();

		}

		int chose(){


		    //int price_;

            label_1:
            label:
        system("cls");
		cout<<"chose your size \n";
		cout<<" S - small \n M-medium \n L - large \n XL - extra large\n";
		cin>>size_;

		system("cls");

		cout<<"chose your color\n";
		cout<<"Black \tRed\t Green\t Blue\t All\n";
		cin>>color_;

		system("cls");

		cout<<"chose your price range ?\n";
		cout<<"1. 500 - 700 \n2. 700 - 1000 \n \n";
		cin>>range_;

		system("cls");

		cout<<"sleeve option\n";
		cout<<"1. Full\n2. Half\n";
		cin>>sleeve_;

		system("cls");

		cout<<"select Gender :-\n";
		cout<<"M - Male \t F - Female\n";
		cin>>gender_;


		system("cls");

		if(gender_ == "M" || gender_ == "m"){
		cout<<"select brand\n\n";
		cout<<"1.tommy hilfiger \n2.Lacoste\n3.Lee Cooper\n4.Ed-hardy\n5.Reebok\n";
		}else if(gender_=="f" || gender_ ==" F"){

		cout<<"select brand";
		cout<<"1.tommy hilfiger \n2.Lacoste\n3.Lee Cooper\n4.Ed-hardy\n5.Forever 21\n6.BeBe\n";

		}

		cin>>brand;

		system("cls");

		cout<<"you chose :\n\n";
		cout<<"Size: "<<size_<<"\t";
		cout<<"color: "<<color_<<"\t";
		if(range_ == 1){
		cout<<"range: Rs 500-700\t";
		}else if(range_ == 2){
		cout<<"range: Rs 700-1000\t";
		}
		cout<<"Brand: ";
		if(gender_=="m" || gender_ == "M" ){
		switch(brand){
        case 1:
            cout<<"Tommy Hilfiger\n";
            break;
        case 2:
            cout<<"Lacoste\n";
            break;
        case 3:
            cout<<"Lee Cooper\n";
            break;
        case 4:
            cout<<"Ed-Hardy\n";
            break;
        case 5:
            cout<<"Reebok\n";


		}
		}else{
		switch(brand){
        case 1:
            cout<<"Tommy Hilfiger\n";
            break;
        case 2:
            cout<<"Lacoste\n";
            break;
        case 3:
            cout<<"Lee Cooper\n";
            break;
        case 4:
            cout<<"Ed-Hardy\n";
            break;
        case 5:
            cout<<"Forever 21\n";
            break;
        case 6:
            cout<<"BeBe";

		}


		}
        cout<<"\n";

        n:
		cout<<"continue -> Y\n";
		cout<<"Back -> N\n";
		fflush(stdin);
		cin>>decide;

		if(decide=='y' || decide=='Y'){
            return 1;
		}else if(decide == 'n' || decide == 'N'){
            goto label;
		}else{
            goto n;
		}
		}

		int call_design()
            {
                ds = new design;
                ds->enter();
            }


};



char cr_name[100],cr_address[100],cr_contact[100],cr_email[100];
float ammount;

class logistics
{
	string pickup_add,del_nm;
	public:
		logistics()
		{
			pickup_add="NULL";

			del_nm="NULL";

			}
			logistics(string picka,string deln)
			{
				pickup_add=picka;
				del_nm=deln;

			}

			void ekart(){
                system("cls");

			    cout<<"Order has been confirmed and will dispatch soon \n";
			    cout<<"Logistic partner: Ekart\n";

			    system("pause");
			}

        };




class shipment  {


    int ship_id;
    string mop;

    public:

    void confirm(){
            char a;
            system("cls");

        cout<<"                                 Order Confirmed \n";
        cout<<"                            Shipment details are as follows:-\n";
        cout<<"Name: "<<cr_name<<"\n";
        cout<<"Delivery Address: "<<cr_address<<"\n";
        cout<<"Delivery Contact: "<<cr_contact<<"\n";
        cout<<"Mode of Payment: Cash on Delivery\n";
        cout<<"Total amount: ";
        FILE *fp = fopen("order.text","r+");
        int sno;


        cout<<ammount<<"\n";

        cout<<endl<<endl;
        cout<<"Track Order :"<<endl;
        cout<<"Yes - Y\n";
        cout<<"No - N\n";
        cin>>a;
        if(a=='y' || a=='Y'){
        logistics e;
        e.ekart();
           }
        else if(a=='n' || a=='N'){
                system("pause");

        }


    }

};



class order:public tshirt
{
	int order_id,total_tshirt;
	double total_amt;
	//shipment *sp;
	public:
		order()
		{
			order_id=0;
			total_tshirt=0;
			total_amt=0.0;
			//sp = new shipment();

		}
		order(int oi,int tt,double ta)
		{
			order_id=oi;
			total_tshirt=tt;
			total_amt=ta;
			//sp = new shipment();
		}


        void place(tshirt t){
            int sno =1;
            system("cls");

            //cout<<"range :"<<t.range_<<"\n";


            if(t.range_ == 1){
                    int tax = 500*0.14;
                    int design_cost = 100;
                    int total = 500 + tax + design_cost;
            cout<<"\tT-shirt Price: Rs 500/- \n";
            cout<<"\tTax: Rs "<<tax<<"/-\n";
            cout<<"\tPrint Cost: Rs"<<design_cost<<"/-\n";
            cout<<"\n";
            cout<<"\tTotal: Rs"<<total<<"/-\n";
            ammount = total;
            }
            else if(t.range_==2){
            int tax = 800*0.14;
            int design_cost = 100;
            int total = 800 + tax + design_cost;
            cout<<"\tT-shirt Price: Rs 800/- \n";
            cout<<"\tTax: Rs "<<tax<<"/-\n";
            cout<<"\tPrint Cost: Rs"<<design_cost<<"/-\n";
            cout<<"\n";
            cout<<"\tTotal: Rs"<<total<<"/-\n";
            ammount = total;
            }
            cout<<"\tBrand: ";
            if(t.gender_=="m" || t.gender_ == "M" ){
		switch(t.brand){
        case 1:
            cout<<"Tommy Hilfiger\n";
            break;
        case 2:
            cout<<"Lacoste\n";
            break;
        case 3:
            cout<<"Lee Cooper\n";
            break;
        case 4:
            cout<<"Ed-Hardy\n";
            break;
        case 5:
            cout<<"Reebok\n";
        case 6:
            cout<<"All\n";

		}
		}else{
		switch(brand){
        case 1:
            cout<<"Tommy Hilfiger\n";
            break;
        case 2:
            cout<<"Lacoste\n";
            break;
        case 3:
            cout<<"Lee Cooper\n";
            break;
        case 4:
            cout<<"Ed-Hardy\n";
            break;
        case 5:
            cout<<"Forever 21\n";
            break;
        case 6:
            cout<<"BeBe\n";

		}
    }



            FILE *fp;
            fp = fopen("order.text","a+");
            fprintf(fp,"%s %f\n",cr_email,ammount);
            fclose(fp);


            char an;

            cout<<"Confirm Order:- \n";
            cout<<"Yes - Y\n";
            cout<<"No - N\n";
            cin>>an;

            if(an == 'y' || an == ' Y'){
                shipment *sp;
                sp = new shipment();
                sp->confirm();
            }
        }


      void  admin_o(){

        system("cls");
        char user[100];
        float amm;
        FILE *fp;
        fp = fopen("order.text","r+");

        cout<<"\t\t userId\t\t\tammount\n";

        while(!feof(fp)){
            try{
                fscanf(fp,"%s %f\n",user,&amm);
            }catch(int e){
            cout<<"error opening the file "<<e;
            }
            cout<<"\t\t"<<user<<"\t"<<amm<<"\n";
            cout<<"\n";
        }

        fclose(fp);

        system("pause");

        }
};





class customer
{
    order o;
	string name,email,password,contact,address;
	int id;

	public:
		customer()
		{
			name="NULL";
			id=0;
			contact="NULL";
			email="NULL";
		}
		customer(string nm,int id1,string cn,string em)
		{
			name=nm;
			id=id1;
			contact=cn;
			email=em;

		}

		void signup(){
		    up:
		    id = 1;
		    system("CLS");
		    cout<<"Full Name : ";
		    cin>>name;
		    cout<<"email: ";
		    cin>>email;
		    cout<<"contact:";
		    cin>>contact;
		    cout<<"address: ";
		    cin>>address;
		    cout<<"Password:";
		    fflush(stdin);
		    cin>>password;
		    //cout<<" "customer;

            //ofstream customer("E:\login\login.dat",ios::app);
           // customer<<name<<" "<<email<<" "<<contact<<" "<<password<<"\n";1
           FILE *before;

           before = fopen("lg.text","r+");

           char u[100],p[100];

            while(!feof(before)){
                fscanf(before,"%s %s",u,p);
                if(u == email ){
                    system("cls");
                    cout<<"User with same user id already exists !! Please select another user id"<<endl;
                    system("pause");
                    goto up;
                }
            }

           FILE *fp,*fpl;

           fp = fopen("login.text","a+");
           fpl = fopen("lg.text","a+");


           fprintf(fp,"%s %s %s %s %s\n",name.c_str(),email.c_str(),contact.c_str(),address.c_str(),password.c_str());

           fprintf(fpl,"%s %s\n",email.c_str(),password.c_str());

           fclose(fp);
           fclose(fpl);

           cout<<"\n";

        cout<<"Signup Successfully !! username : "<<email<<" and password : "
        <<password<<"\n\n";

        system("pause");



		}

		int login(){
		system("CLS");

		string user;
		string password;


		char name[100],email[100],password_[50],contact[100],address[100];


		cout<<"username:";
		cin>>user;
		cout<<"password:";
		cin>>password;

		FILE *fp;
		FILE *fp2;

		fp = fopen("lg.text","r+");
		fp2 = fopen("login.text","r+");



		while(!feof(fp)){

        char user_in[100];
        char password_in[100];


        fscanf(fp,"%s %s",user_in,password_in);


        //cout<<"user"<<user_in<<"\n";
        //cout<<"password"<<password_in<<"\n";

        if(user == user_in && password == password_in){

            while(!feof(fp2)){
                    //cout<<"hello 1";



                fscanf(fp2,"%s %s %s %s %s",name,email,contact,address,password_);

                cout<<"name:"<<name<<"\n";


                if(email == user && password == password_in){

                        system("cls");
                        cout<<"\t\t\tWelcome "<<name<<"\n";

                        strcpy(cr_name,name);
                        strcpy(cr_address,address);
                        strcpy(cr_contact,contact);
                        strcpy(cr_email,email);

                        break;

                }


            }

            if(user == "admin" && password == "admin")
            {
                return 2;
            }

            return 1;

        }

        }
            return 0;

		}


		void call_order(tshirt t){

            o.place(t);

		}



void admin_c(){
char user[100];
float amm;
system("cls");
char name[100],email[100],password_[50],contact[100],address[100];
cout<<"\t\tName\t\temail\t\tcontact\t\taddress\n";
cout<<"\n\n\n";
FILE *fp;
fp = fopen("login.text","r+");
while(!feof(fp)){
    fscanf(fp,"%s %s %s %s %s\n",name,email,contact,address,password_);
    cout<<"\t\t"<<name<<"\t"<<email<<"\t"<<contact<<"\t"<<address<<"\n";
    cout<<"\n";
}

fclose(fp);
system("pause");
}


};

class admin:public order,public customer{
public:
void call_admin(){
int aan;
ad:
system("cls");
cout<<"\t\tWelcome Admin\n";
cout<<"\tWhat do you want to see ?\n";
cout<<"\t1. All orders \n";
cout<<"\t2. All users \n";
cout<<"\t3. Signout \n";
cin>>aan;

switch(aan){
case 1 :

    order::admin_o();
    goto ad;
    break;
case 2:

    customer::admin_c();
    goto ad;
break;

}
}


};



int main(){


    int choice;
    mai:
        system("cls");


    cout<<"                                   TEXT TEES\n";
    cout<<"********************************************************************************\n";
    cout<<"1. Sign Up\n";
    cout<<"2. Login\n";
    cout<<"3. Exit\n";
    cin>>choice;
    switch(choice){
case 1:
    {


    customer c;
    c.signup();
    goto mai;
    break;

    }
case 2:{
    customer cl;
    int ans = cl.login();
    if(ans == 1){

        char ans_;
        cout<<"Login succesfully !! \n";
        cout<<"continue -> y\n";
        cout<<"Sign out -> n\n";
        cin>>ans_;
        if(ans_ == 'n' || ans_ == 'N'){

            goto mai;
        }else if(ans_ == 'y' || ans_ == 'Y'){
            char ans;
            tshirt t;
            chese:
            t.chose();
            //cout<<"range = "<<t.range_<<"\n";
            cout<<cr_name<<" ";
            cout<<"do you wish to continue to design your TEE ?\n";
            cin>>ans;
            if(ans == 'y' || ans == 'Y' ){
                    t.call_design();

            }



             ram:
            cout<<"\n";
            cout<<"Do you wish to continue to order ?\n";
            cin>>ans;
            if(ans == 'y' || ans =='Y'){
                cl.call_order(t);

                char y;
                system("cls");
                cout<<"Do you want to order another Tee?\n"<<endl;
                cout<<"Yes - Y\n"<<endl;
                cout<<"Sign out - N\n"<<endl;
                cin>>y;
                if(y=='y' || y == 'Y'){
                        goto chese;
                }
                else if(y == 'n' || y == 'N'){
                goto mai;
                }


            }else if(ans == 'n' || ans == 'N'){
                cout<<"do you wish redisign your tee ?\n";
                cin>>ans;
                if(ans == 'y' || ans =='Y'){
                        t.chose();
                }else{
                        goto ram;
                }
            }
        }



    }else if(ans == 2){

            admin a;
            a.call_admin();
            goto mai;

    }
    else{
        system("cls");
        cout<<"No such user found"<<endl;
        system("pause");
        goto mai;
    }
    break;
}
case 3:
    exit(1);
    }

}




