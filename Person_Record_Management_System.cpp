
#include<iostream>
#include<string>
#include<map>
#include<cstdlib>
using namespace std;
int main()
{
    map<string,long int> mp;
    map<string,long int>::iterator it;
    int ch;
    long int phone_no,new_no;
    string name,temp_name;
    while(1)
    {                        
        cout<<"\nPerson Record!"<<endl;
        cout<<"Menu\n1: Insert Data\n2: Display Data\n3: Search Data\n4: Delete Data\n5: Update\nEnter ur Choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        cout<<"Insert Data"<<endl;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter phone no.: ";
            cin>>phone_no;
            mp.insert(pair<string,long int>(name,phone_no));
            cout<<"Successfully Done!"<<endl;
        break;
        case 2:
            cout<<"\nPerson Details"<<endl;
            for(it=mp.begin();it!=mp.end();it++)
            {
                cout<<"Name: "<<(*it).first<<"\nPhone no.: "<<(*it).second<<endl;
            }
        break;
        case 3:
            cout<<"\nSearch Data"<<endl;
            cout<<"Enter name: ";
            cin>>name;
            if(mp.count(name)!=0)
            {
                cout<<"Name: "<<mp.find(name)->first<<"\nPhone no.: "<<mp.find(name)->second<<endl;
            }
            else
            {
                cout<<"Invalid Name!"<<endl;
            }
        break;
        case 4:
                    cout<<"\nDelete Data"<<endl;
           
            cout<<"Enter name: ";
            cin>>name;
            mp.erase(name); 
            cout<<"Successfully Done!"<<endl;    
        break;
        case 5:
            cout<<"\nUpdate Data"<<endl;
           
            cout<<"Enter name: ";
            cin>>name;
            it=mp.find(name);
            if(it!=mp.end())
            {
                cout<<"Enter new number: ";
                cin>>new_no;
            	it->second=new_no;
            	cout<<"Successfully Done!"<<endl;
            }
            else
            {
            	cout<<"Invalid!"<<endl;
            }
        break;
        default:
        cout<<"Wrong Choice!"<<endl;
            break;
        }
    }
}
