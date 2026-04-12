#include<iostream>
using namespace std;

class Gun {
    public:
    int ammo;
    int damage;
    int scope;
};

class Player {
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    
    class Helmet {  // Nested Helmet class within Player
        int hp;
        int level;
        public:
        void sethp(int hp) {
            this->hp = hp;
        }
        void setlevel(int level) {
            this->level = level;
        }
        int gethp() {
            return hp;
        }
        int getlevel() {
            return level;
        }
    } helmet;  // Helmet is now correctly declared

    public:
    // Getter
    int gethealth() {
        return health;
    }
    int getage() {
        return age;
    }
    int getscore() {
        return score;
    }
    bool isalive() {
        return alive;
    }
    Gun getgun() {  // Corrected method
        return gun;
    }
    
    // Setter
    void sethealth(int health) {
        this->health = health;
    }
    void setage(int age) {
        this->age = age;
    }
    void setscore(int score) {
        this->score = score;
    }
    void setisalive(bool alive) {
        this->alive = alive;
    }
    void setgun(Gun gun) {
        this->gun = gun;
    }
    
    void sethelmet(int level) {
        helmet.setlevel(level);
        int health = 0;
        if (level == 1) health = 25;
        else if (level == 2) health = 50;
        else if (level == 3) health = 100;
        else cout << "error";
        helmet.sethp(health);
    }
    
    void gethelmet() {
        cout << helmet.gethp() << endl;
        cout << helmet.getlevel() << endl;
    }
};

// Function to add scores of two players
int addscore(Player a, Player b) {
    return a.getscore() + b.getscore();
}

// Function to get the player with the higher score
Player getscoreplayer(Player a, Player b) {
    if (a.getscore() > b.getscore()) return a;
    else return b;
}

int main() {
    Player mrittick;
    Player jonty;  // Static allocation, compile-time
    Player *urvi = new Player;  // Dynamic allocation, runtime
    Player urviObject = *urvi;
    
    Gun akm;
    akm.ammo = 200;
    akm.damage = 150;
    akm.scope = 12;
    
    mrittick.setage(19);
    mrittick.sethealth(100);
    mrittick.setscore(100);
    mrittick.setisalive(true);
    mrittick.setgun(akm);
    mrittick.sethelmet(2);
    
    Gun awm;
    awm.ammo = 100;
    awm.damage = 50;
    awm.scope = 2;
    
    jonty.setage(19);
    jonty.sethealth(100);
    jonty.setscore(100);
    jonty.setisalive(true);
    jonty.setgun(awm);
    jonty.sethelmet(3);
    
    urviObject.setscore(40);
    urviObject.setage(17);
    
    Gun gun123 = mrittick.getgun();
    Player players[3]={mrittick,jonty,*urvi};
    cout<<players[0].gethealth();
    //cout << gun123.damage << endl;
    //cout << gun123.ammo << endl;
    //cout << gun123.scope << endl;
    
//    mrittick.gethelmet();
  //  jonty.gethelmet();
    
    //urvi->sethealth(20);
    //cout << urvi->gethealth() << endl;
    //cout << urviObject.getscore() << endl;
    
   // cout << addscore(mrittick, jonty) << endl;
    
    //Player sanket = getscoreplayer(mrittick, jonty);
   // cout << sanket.getscore() << endl;
    //cout << sanket.gethealth() << endl;
    
    return 0;
}

/*
#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
   // Helmet helmet;
    class Helmet{
        int hp;
        int level;
        public:
        void sethp(int hp){
            this->hp=hp;
        }
        void setlevel(int level){
            this->level=level;
        }
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }
    };
    public:
    //getter
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool isalive(){
        return alive;
    }
    Gun getgun{
        return gun;
    }
    //setter
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setisalive(bool alive){
        this->alive=alive;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }
    void sethelmet(int level){
        Helmet *helmet=new Helmet;
        helmet->setlevel(level);
        int health=0;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else cout<<"error";
        helmet->sethp(health);
        this->helmet=*helmet;
    }
    void gethelmet(){
       cout<<helmet.gethp()<<endl;
       cout<<helmet.getLevel()<<endl;
    }
};
int addscore(Player a,Player b){
    return a.getscore()+b.getscore();
}
Player getscoreplayer(Player a,Player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main(){
    Player mrittick;
    Player jonty;//static allocation,compile time
    Player *urvi=new Player;//dynamic allocation,runtime
    Player urviObject=*urvi;
    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;
    mrittick.setage(19);
    mrittick.sethealth(100);
    mrittick.setscore(100);
    mrittick.setisalive(true);
    mrittick.setgun(akm);
    mrittick.sethelmet(2);
    Gun awm;
    awm.ammo=100;
    awm.damage=50;
    awm.scope=2;
    jonty.setage(19);
    jonty.sethealth(100);
    jonty.setscore(100);
    jonty.setisalive(true);
    jonty.setgun(awm);
    jonty.sethelmet(3);
    urviObject.setscore(40);
    urviObject.setage(17);
    Gun gun123=mrittick.getgun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;
    mrittick.gethelmet();
    jonty.gethelmet();
   // (*urvi).sethealth(20);
    //cout<<(*urvi).gethealth()<<endl;
    urvi->sethealth(20);
    cout<<urvi->gethealth()<<endl;
    cout<<urviObject.getscore()<<endl;
    cout<<addscore(mrittick,jonty)<<endl;
    Player sanket=getscoreplayer(mrittick,jonty);
    cout<<sanket.getscore()<<endl;
    cout<<sanket.gethealth()<<endl;
}
*/