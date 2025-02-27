#include <iostream>
#include <string>  // std::string
using namespace std;

// Define the UTID struct
class UTID
{
public:
    UTID(string initialName, string initialEID, long long initialNumber);//constructor
    ~UTID();//desctructor
    string GetName();//accessor functions
    void SetName(string Name);
    string GetEID();
    void SetEID(string EID);
    long long GetNumber();
    void SetNumber(long long Number);
    void LoveUT();
private:
    string myName;     //Theses are called fields
    string myEID;      //Each has a name and type
    long long myNumber;
};

//constructor
UTID::UTID(string initialName, string initialEID, long long initialNumber)
{
    myName = initialName;
    myEID = initialEID;
    myNumber = initialNumber;
}
//desctructor
UTID::~UTID()
{
}

string UTID::GetName()
{
    return myName;
}
void UTID::SetName(string Name)
{
    myName = Name;
}
string UTID::GetEID()
{
    return myEID;
}
void UTID::SetEID(string EID)
{
    myEID = EID;
}
long long UTID::GetNumber()
{
    return myNumber;
}
void UTID::SetNumber(long long Number)
{
    myNumber = Number;
}
void UTID::LoveUT()
{
    cout<<"I love UT!"<<endl;
}

int main(){
    UTID MyStudentID("Hook'Em","he12345",1234567891234567);
    MyStudentID.LoveUT();
    cout << "MyStudentID contains the following information:" << endl;
    cout << "Name: "<< MyStudentID.GetName() << endl;
    cout << "EID: "<< MyStudentID.GetEID() <<endl;
    cout << "idNumber: "<< MyStudentID.GetNumber() <<endl;
    MyStudentID.LoveUT();
    
    MyStudentID.SetName("Hannah Lu");
    MyStudentID.SetEID("hl12345");
    MyStudentID.SetNumber(1234567890000000);
    MyStudentID.LoveUT();
    cout << "MyStudentID contains the following information:" << endl;
    cout << "Name: " << MyStudentID.GetName() << endl;
    cout << "EID: " << MyStudentID.GetEID() << endl;
    cout << "idNumber: " << MyStudentID.GetNumber() << endl;
    MyStudentID.LoveUT();
    return 0;
}




