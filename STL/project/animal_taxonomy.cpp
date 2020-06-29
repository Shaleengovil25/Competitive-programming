#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <iterator>

using namespace std;

void function1(string s, multimap <string,vector<string>> m);
void function2(multimap <string,vector<string>> m);
void function3(int a,string s,multimap <string,vector<string>> m);

int main() {
    
    multimap <string,vector<string>> m;
    // m.insert({"animal_name",name_of_its:{"Kingdom","Phylum","Class","Order","Family","Genus","Species"}})
    m.insert({"human",{"animalia","chordata","mammalia","primates","hominidae","Homo","sapiens"}});
    m.insert({"cobra",{"animalia","chordata","reptilia","squamata","elapidae","Naja","naja"}});
    m.insert({"alligator",{"animalia","chordata","reptilia","crocodilia","alligatoridae","Alligator","mississippiensis"}});
    m.insert({"lion",{"animalia","chordata","mammalia","carnivora","felidae","Panthera","leo"}});
    m.insert({"tiger",{"animalia","chordata","mammalia","carnivora","felidae","Panthera","tigris"}});
    m.insert({"blue whale",{"animalia","chordata","mammalia","artiodactyla","balaenopteridae","Balaenoptera","musculus"}});
    m.insert({"dolphin",{"animalia","chordata","mammalia","artiodactyla","delphinidae","Delphinus","delphis"}});
    m.insert({"horse",{"animalia","chordata","mammalia","perissodactyla","equidae","Equus","caballus"}});
    m.insert({"elephant",{"animalia","chordata","mammalia","proboscidea","elephantidae","Elephas","maximus"}});
    m.insert({"cat",{"animalia","chordata","mammalia","carnivora","felidae","Felis","catus"}});
    m.insert({"dog",{"animalia","chordata","mammalia","carnivora","canidae","Canis","familiaris"}});
    m.insert({"rat",{"animalia","chordata","mammalia","rodentia","muridae","Rattus","norvegicus"}});
    m.insert({"monkey",{"animalia","chordata","mammalia","primate","cebidae","Macaca","fascicularis"}});
    m.insert({"camel",{"animalia","chordata","mammalia","artiodactyla","camelidae","Camelus","dromedarius"}});
    m.insert({"fox",{"animalia","chordata","mammalia","carnivora","canidae","Vulpes","bengalensis"}});
    m.insert({"kangaroo",{"animalia","chordata","mammalia","diprotodontia","macropodiformes","Macropus","fuliginosus"}});
    m.insert({"platypus",{"animalia","chordata","mammalia","monotremata","ornithorhynchidae","Ornithorhynchus","anatinus"}});
    m.insert({"peacock",{"animalia","chordata","aves","galliformes","phasianidae","Pavo","cristatus"}});
    m.insert({"vulture",{"animalia","chordata","aves","accipitriformes","cathartidae","Niophron","percnopterus"}});
    m.insert({"penguin",{"animalia","chordata","aves","sphenisciformes","spheniscidae","Aptinodytes","forsteri"}});
    m.insert({"parrot",{"animalia","chordata","aves","psittaciformes","psittacidae","Psittacula","eupatria"}});
    m.insert({"pigeon",{"animalia","chordata","aves","columbiformes","columbidae","Columba","livia"}});
    m.insert({"crow",{"animalia","chordata","aves","passeriformes","corvidae","Corvus","splendens"}});
    m.insert({"ostrich",{"animalia","chordata","aves","struthioniformes","struthionidae","Struthio","camelus"}});


    
    cout << "Welcome to Animal Toaxonomy!\n\n";
    cout << "Choose:\n1.Enter animal name to know Taxonomy\n2.Search animals by Taxonomy\n";
    int x;
    cin >> x;
    switch(x){
        case 1:
        {
            cout << "Enter animal name:\n";
            string s;
            cin >> s;
            function1(s,m);
            break;
        }    
        case 2:   
        {
            cout << "Group animals by:\n";
            function2(m);
            break;
        }
        default:
        {
            cout << "You entered the wrong choice! :(";
            break;
        }
    }

    return 0;
}

void function1(string s, multimap <string,vector<string>> m){
    
    unordered_multimap <string,vector<string>> m1;
    int flag = 0;
    m1.insert(m.begin(),m.end());
    unordered_multimap<string,vector<string>> :: iterator it;
    for(it=m1.begin();it!=m1.end();it++){
        if(it->first == s){
            flag = 1;
            cout << "\nKingdom: " << it->second[0] <<endl;
            cout << "\nPhylum: " << it->second[1] <<endl;
            cout << "\nClass: " << it->second[2] <<endl;
            cout << "\nOrder: " << it->second[3] <<endl;
            cout << "\nFamily: " << it->second[4] <<endl;
            cout << "\nGenus: " << it->second[5] <<endl;
            cout << "\nSpecies: " << it->second[5] << " " << it->second[6] <<endl;
        }
    }
    if(flag == 0){
        cout << "Sorry, " << s << " do not exist in my database!";
    }
    return;
}

void function2(multimap <string,vector<string>> m){
    string s;
    int x;
    cout << "1.Kingdom\n2.Phylum\n3.Class\n4.Order\n5.Family\n6.Genus\n7.Species epithet\n";
    cin >> x;
    switch(x){
        case 1:
        {
            s = "animalia";
            cout << "\n";
            function3(0,s,m);
            break;
        }
        case 2:
        {
            cout << "Enter Phylum name:\n";
            cin >> s;
            cout << "\n";
            function3(1,s,m);
            break;
        }
        case 3:
        {
            cout << "Enter Class name:\n";
            cin >> s;
            cout << "\n";
            function3(2,s,m);
            break;
        }
        case 4:
        {
            cout << "Enter Order name:\n";
            cin >> s;
            cout << "\n";
            function3(3,s,m);
            break;
        }
        case 5:
        {
            cout << "Enter Family name:\n";
            cin >> s;
            cout << "\n";
            function3(4,s,m);
            break;
        }
        case 6:
        {
            cout << "Enter Genus name:\n";
            cin >> s;
            cout << "\n";
            function3(5,s,m);
            break;
        }
        case 7:
        {
            cout << "Enter Species epithet:\n";
            cin >> s;
            cout << "\n";
            function3(6,s,m);
            break;
        }
        default:
        {
            cout << "You entered the wrong choice! :(";
            break;
        }
    }
    return;
}

void function3(int a,string s,multimap <string,vector<string>> m){
    string str[] = {"Kingdom","Phylum","Class","Order","Family","Genus","Species"};
    multimap <string,vector<string>> :: iterator it;
    int count = 1;
    int flag = 0;
    for(it=m.begin();it!=m.end();it++){
        if(it->second[a] == s){
            flag = 1;
            cout << count << ")" <<  it->first << endl;
            count++;
        }
    }
    if(flag == 1){
        cout << "\n" << "Found " << count-1 << " animal grouped under " << str[a] << " name: " << s;
        cout << "\n" << "Hope you find it useful!" << endl;
    }
    else{
        cout << "Sorry," << str[a] << " named " << s << " do not exist in my database!"; 
    }
    return;
}
