#include <iostream>
using namespace std;
class Influencer {
 private:
  int id;
  string name;
  int followers;
  float likes;
  int posts;
  float engagement;
 public:
  Influencer(int id);
  Influencer(int id,string name,int followers,float likes,int posts);
  void display();
  void addfollowers();
  void addposts();
  float avglikes();
  float addlikes();
  void removefollowers();
  void removeposts();
  float engagementRate();
};

Influencer::Influencer(int i) {
       id=i;
       name="UNKNOWN";
       followers=0;
       likes=0;
       posts=0;
}        

Influencer::Influencer(int i,string n,int f,float l,int p) {
      id=i;
      name=n;
      followers=f;
      likes=l;
      posts=p;
}

void Influencer::display() {
  cout<<"ID: "<<id<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Followers: "<<followers<<endl;
  cout<<"Likes: "<<likes<<endl;
  cout<<"Posts: "<<posts<<endl;
  cout<<"Average likes per post: "<<avglikes()<<endl;
}
                                          
void Influencer::addfollowers() {
  int newfollowers;
  cout<<"New followers to add "<<endl;
  cin>>newfollowers;
  followers+=newfollowers;
  if (newfollowers<0)
  {
    cout<<"Invalid input! values cannot be negative "<<endl;
    return;
  }
  cout<<"Followers added successfully "<<endl;
  cout<<"Current followers: "<<newfollowers<<endl;
}              

void Influencer::addposts() {
   int newposts;
   cout<<"Add new posts "<<endl;
   cin>>newposts;
   posts+=newposts;
   cout<<"New posts added  successfully "<<endl;
   cout<<"Current posts: "<<newposts<<endl;
}

float Influencer::addlikes() {
   float newlikes;
   cout<<"Add new likes "<<endl;
   cin>>newlikes;
   likes+=newlikes;
   cout<<"New likes added successfully "<<endl;
   return likes;
}
void Influencer::removefollowers() {
   int removefollowers;
   cout<<"Remove followers "<<endl;
   cin>>removefollowers;
   if (removefollowers>followers)
   {
       cout<<"Invalid input! values cannot be negative "<<endl;
   }
   else
   {
       followers-=removefollowers;
       cout<<"Followers removed successfully "<<endl;
   }
}
void Influencer::removeposts() {
   int removeposts;
   cout<<"Remove posts "<<endl;
   cin>>removeposts;
   if (removeposts>posts)
  {
       cout<<"Invalid input! values cannot be negative "<<endl;
   }
   else
   {
       posts-=removeposts;
       cout<<"Posts removed successfully "<<endl;
   }
}
float Influencer::avglikes() {
   if (posts==0)
    return 0;;
  
    return likes/posts;
}

float Influencer::engagementRate() {
    engagement=0;
   if (followers==0)
   {
       cout<<"Engagement Rate: 0%"<<endl;
       return 0;
   }
   else
   {
       engagement=(likes/followers)*100;
       cout<<"Engagement Rate: "<<engagement<<"%"<<endl;
       return engagement;
   }
}

int main() {
   int id;
   string name;
   int followers;
   float likes;
   int posts;
   int choice;

 cout<<"====Influencer Profile===="<<endl;  
 cout<<"ID: "<<endl;
 cin>>id;
 
 cout<<"Name: "<<endl;
 cin.ignore();

 getline(cin,name);
 
 cout<<"Followers: "<<endl;
 cin>>followers;
 cout<<"Likes: "<<endl;
 cin>>likes;
 cout<<"Posts: "<<endl;
 cin>>posts;
  
Influencer a1(id,name,followers,likes,posts);

do
{
cout<<"====Infuencer Analytics===="<<endl;
cout<<"1.Add followers "<<endl;
cout<<"2.Add posts "<<endl;
cout<<"3.Add likes "<<endl;
cout<<"4.Remove followers "<<endl;
cout<<"5.Remove posts "<<endl;
cout<<"6.View Average Likes "<<endl;
cout<<"7.View Engagement Rate "<<endl;
cout<<"8.Display profile "<<endl;
cout<<"9.Exit "<<endl;
cout<<"============================"<<endl;
cout<<"Enter choice: "<<endl;
cin>>choice;

switch(choice)
{
case 1:
    a1.addfollowers();
    break;
case 2:
    a1.addposts();
    break;
case 3:
    a1.addlikes();
    break;
case 4:
    a1.removefollowers();
    break;
case 5:
    a1.removeposts();
    break;
case 6:
    a1.avglikes();
    break;
case 7:
    a1.engagementRate();
    break;
case 8:
    a1.display();
    break;
case 9:
    cout<<"Thank you!!!"<<endl;
    break;
default:
    cout<<"Invalid choice "<<endl;
}
    } while(choice!=9);
    
    return 0;
}