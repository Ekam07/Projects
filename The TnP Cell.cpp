#include<iostream>  
  #include<vector>  
 #include<stdio.h>  
 #include<cstring>  
 #include<fstream>  
 #include<algorithm>  
  using namespace std;  
 class Company  
  {  
       public:  
               long int date;  
            char name[80],branch[50];  
            void input()  
            {  
                 cout<<"\n Enter Company name: ";  
                 gets(name);  
                 cout<<"\n Enter arrival date: ";  
                 cin>>date;  
                 fflush(stdin);  
                 cout<<"\n Enter Branches Eligible: ";  
                 gets(branch);  
           }  
            void display()  
           {  
                 system("CLS");  
                 //cout<<"\t\tDisplay Upcoming Events ";  
                 cout<<"\n";  
                 cout<<"\n Company Name - "<<name;  
                 cout<<"\n Arrival date - "<<date;  
                 cout<<"\n Branches Eligible - "<<branch;  
                 cout<<"\n";  
                 system("PAUSE");  
                 system("CLS");  
            }  
            bool operator == (Company a)  
            {  
                 if(date==a.date)  
                      return true;  
                 else  
                      return false;  
            }  
  };  
  vector <Company>v;  
  int search_name(char name[],vector<int> &vi);  
  void get_file()  
  {  
       Company x;  
       int i=0;  
       fstream f;  
       f.open("Placement.txt",ios::in);  
       if(f)  
      {  
            f.read((char *) &x,sizeof(class Company));  
            while(!f.eof())  
            {  
                 v.push_back(x);  
                 f.read((char *) &x,sizeof(class Company));  
            }  
       }  
       else  
            ;  
       f.close();  
  }  
  void bubblesort()  
  {  
       int i,j;  
       Company x;  
       for(i=0;i<v.size();i++)  
            for(j=0;j<v.size()-i-1;j++)  
                 if(v[j].date>v[j+1].date)  
                 {  
                      x=v[j];  
                      v[j]=v[j+1];  
                      v[j+1]=x;  
                 }       
  }  
  void insert_new()  
  {  
       char ch='y';  
       int ta;  
       while(ch=='y')  
       {  
            fflush(stdin); 
            vector <int>vi; 
            Company x;  
            x.input();  
            if(search_name(x.name,vi)==0)  
                 v.push_back(x);  
            else  
                 cout<<"\nTHE COMPANY ALREADY EXIST!!!\nCANNOT ADD";  
            cout<<"\n Press [Y] to enter more: ";  
            cin>>ch;  
            fflush(stdin);  
       }  
 }  
  void write_file()  
  {  
       bubblesort();  
       fstream f;  
       f.open("Placement.txt",ios::out);  
       for(int i=0;i<v.size();i++)  
       {  
                 Company x=v[i];  
            f.write((char *) &x,sizeof(class Company));  
       }  
       f.close();  
  }  
  int search_date(long int date,int &i)  
  {  
       int ta=0;  
       for(i=0;i<v.size();i++)  
            if(v[i].date==date)  
            {  
                 ta=1;   
                 break;  
            }  
       return ta;  
  }  
  int search_name(char name[],vector<int> &vi)  
 {  
       int i,ta=0;  
       for(i=0;i<v.size();i++)  
            if(strcmp(v[i].name,name)==0)  
            {  
                 ta=1;  
                 vi.push_back(i); 
            }  
       return ta;  
  }  
//    int search_branch(char branch[],vector<int> &vj)  
//   {  
//        int i,ta=0;  
//        for(i=0;i<v.size();i++)  
//             if(strcmp(v[i].branch,branch)==0) 
//             if ((v[i].branch).find(branch) != std::string::npos) 
//             {  
//                  ta=1;  
//                  vj.push_back(i);  
//             }  
//        return ta;  
//   }  
  void search_and_show()  
  {  
       int ch,i,ta=0;  
       char name[80],branch[50];  
       vector <int>vi;   
       vector <int>vj;  
       long int date;  
       poi:  
       cout<<"\n1.Press to search date"  
       <<"\n2.Press to search company name"  
       <<"\n3.Press to search branch\n";  
       cin>>ch;  
       switch(ch)  
       {  
            case 1:  
                 cout<<"\nEnter date: ";  
                 cin>>date;  
                 if(search_date(date,i)==1) 
                 { 
                      v[i].display(); 
                 }  
                 cout<<"\nRecord NOT FOUND!!!";  
                 break;  
            case 2:  
                 cout<<"\nEnter name: ";  
                 fflush(stdin);  
                 gets(name);  
                 if(search_name(name,vi)==1)  
                 {  
                     for(int j=0;j<vi.size();j++)  
                           v[vi[j]].display();  
                 }  
                 else  
                      cout<<"\nRecord NOT FOUND!!!";  
                 break;  
            // case 3:  
            //      cout<<"nEnter branch: ";  
            //      fflush(stdin);  
            //      gets(branch);  
            //      if(search_branch(branch,vj)==1)  
            //      {  
            //           for(int j=0;j<vj.size();j++)  
            //                v[vj[j]].display();  
            //      }  
            //      else  
            //           cout<<"nRecord NOT FOUND!!!";  
            //      break;  
            default:  
                 cout<<"\nWrong CHOICE!!!";  
                 goto poi;  
       }  
  }  
  void show()  
  {  
       int i;  
       for(i=0;i<v.size();i++)  
            v[i].display();  
  }  
  void delete_data()  
  {  
       int i,j; 
       long int date;  
       //char name[80]; 
       //vector <int>vi;
       vector <Company>::iterator p=v.begin(); 
       cout<<"\nEnter date: ";
       cin>>date; 
     //   cout<<"\nEnter company name: ";  
     //   cin>>name;  
       if (search_date(date,i)==1 ) //&& search_name(name,vi)==1))  
       {    
            puts("\nThe following data is being deleted");
            Company x=v[i]; 
            x.display();    
            p+=i;  
            v.erase(p,p+1);  
       }  
  }  
  void edit_data()  
  {  
       int i,j;   
       //char name[80]; 
       long int date;
       vector <Company>vi; 
       //vector <int>vj; 
       cout<<"\nEnter date:  ";
       cin>>date;
       //cout<<"\nEnter Company name : ";  
       ///gets(name);  
       if(search_date(date,i)==1 ) //&& search_name(name,vj)==1)  
      {  
            cout<<"\nEnter new data:";  
            fflush(stdin);  
            v[i].input();  
       }  
  }  
  int erase_data()
  {
     if( remove( "placement.txt" ) != 0 )
    perror( "Error deleting file" );
    else
    puts( "File successfully deleted" );
    return 0;
  }
  int main()  
  {  
       int i=1;  
       get_file();  
       while(i)  
       {  
            system("CLS");  
            cout<<"\t\t\t-----------------------------------------\n";  
            cout<<"\t\t\t          The Placement Cell             \n ";  
            cout<<"\t\t\t-----------------------------------------\n";  
           cout<<"\n\t\t\tEnter <1> to Add new data"  
                 <<"\n\t\t\tEnter <2> to Display all upcoming events"  
                 <<"\n\t\t\tEnter <3> to Remove data"  
                 <<"\n\t\t\tEnter <4> to Edit data"  
                 <<"\n\t\t\tEnter <5> to Search an event"  
                 <<"\n\t\t\tEnter <6> to erase all data"  
                 <<"\n\t\t\tEnter <0> to Exit";  
            cout<<"\n\n\t\t\tEnter Your Choice:";       
            cin>>i;  
            switch(i)  
            {  
                 case 1 :  
                      insert_new();  
                      break;  
                 case 2 :  
                      show();  
                      break;  
                 case 3 :  
                      delete_data();  
                      break;  
                 case 4 :  
                      edit_data();  
                      break;  
                 case 5 :  
                      search_and_show();  
                      break; 
                 case 6:
                      erase_data();
                      break;      
                 case 0 :  
                      write_file();  
                      break;  
                 default :  
                      cout<<"\nWRONG CHOICE!!!nTRY AGAIN";  
            }  
       }  
       return 0;  
  }  