#include<iostream>
#include <cstring>

using namespace std;

class Boarder
{
public:
    int BoarderId;
    string BoarderName;
    string PhoneNo;
    string BedType;
    int RoomNo;
    string EntryDate;
    void SetBorder(int BoarderId,string BoarderName,string PhoneNo,string BedType,int RoomNo,string EntryDate);
    int GetBoarderId();
    string GetBoarderName();
    string GetBoarderPhoneNo();
    string GetBoarderBedType();
    int GetBoarderRoomNo();
    string GetBoarderEntryDate();
};

void Boarder::SetBorder(int BoarderId,string BoarderName,string PhoneNo,string BedType,int RoomNo,string EntryDate)
{
    this->BoarderId = BoarderId;
    this->BoarderName = BoarderName;
    this->PhoneNo = PhoneNo;
    this->BedType = BedType;
    this->RoomNo = RoomNo;
    this->EntryDate = EntryDate;
}

int Boarder::GetBoarderId()
{
    return BoarderId;
}

string Boarder::GetBoarderName()
{
    return BoarderName;
}

string Boarder::GetBoarderPhoneNo()
{
    return PhoneNo;
}

string Boarder::GetBoarderBedType()
{
    return BedType;
}

int Boarder::GetBoarderRoomNo()
{
    return RoomNo;
}

string Boarder::GetBoarderEntryDate()
{
    return EntryDate;
}

void Boarder_Entry(Boarder ob[],int &N)
{
    int boarderID,roomNo;
    string boarderNAME,phoneNo,bedType,entryDate;
    cout<<"\n\t\t\t    Enter The Boarder ID: ";
    cin>>boarderID;
    cout<<"\t\t\t    Enter The Boarder Name: ";
    cin>>boarderNAME;
    cout<<"\t\t\t    Enter The Phone Number: ";
    cin>>phoneNo;
    cout<<"\t\t\t    Enter The Bed Type (Single or Double): ";
    cin>>bedType;
    cout<<"\t\t\t    Enter The Room Number: ";
    cin>>roomNo;
    cout<<"\t\t\t    Enter The Entry Date: ";
    cin>>entryDate;
    ob[N].SetBorder(boarderID,boarderNAME,phoneNo,bedType,roomNo,entryDate);
}

void Show_All_Info(Boarder ob[],int &N)
{
    cout<<"\n\t\t\t   Total Number Of Student: "<<N<<endl;
    cout<<"\n\t\t\t-----------------------------------------\n";
    cout<<"\n\t\t\t   All Information:\n";
    cout<<"\n\t\t\t-----------------------------------------\n\n";
    for(int i=0; i<N; i++)
    {
        cout<<"\t\t\t   Boarder ID     :        "<<ob[i].GetBoarderId()<<endl;
        cout<<"\t\t\t   Boarder Name   :        "<<ob[i].GetBoarderName()<<endl;
        cout<<"\t\t\t   Phone Number   :        "<<ob[i].GetBoarderPhoneNo()<<endl;
        cout<<"\t\t\t   Bed Type       :        "<<ob[i].GetBoarderBedType()<<endl;
        cout<<"\t\t\t   Room Number    :        "<<ob[i].GetBoarderRoomNo()<<endl;
        cout<<"\t\t\t   Entry Date     :        "<<ob[i].GetBoarderEntryDate()<<endl;
        cout<<"\n\t\t\t-----------------------------------------\n\n";
    }
    if(N==0)
    {
        cout<<"\t\t\t   No Boarder Information Is Founded.";
    }
}

void Search_By_Id(Boarder ob[],int &N)
{
    int id,count=0;
    cout<<"\t\t\t   Enter The ID: ";
    cin>>id;
    cout<<"\n\t\t\t-----------------------------------------\n";
    cout<<"\n\t\t\t   Searched Information of Id: "<<id<<endl;
    cout<<"\n\t\t\t-----------------------------------------\n\n";
    for(int i=0; i<N; i++)
    {
        if(ob[i].GetBoarderId()==id)
        {
            cout<<"\t\t\t   Boarder ID: "<<ob[i].GetBoarderId()<<endl;
            cout<<"\t\t\t   Boarder Name: "<<ob[i].GetBoarderName()<<endl;
            cout<<"\t\t\t   Phone Number: "<<ob[i].GetBoarderPhoneNo()<<endl;
            cout<<"\t\t\t   Bed Type: "<<ob[i].GetBoarderBedType()<<endl;
            cout<<"\t\t\t   Room Number: "<<ob[i].GetBoarderRoomNo()<<endl;
            cout<<"\t\t\t   Entry Date: "<<ob[i].GetBoarderEntryDate()<<endl;
            count++;
        }
    }
    if(count==0)
    {
        cout<<"\t\t\t   No Boarder Information Is Founded Through ID.";
    }
    cout<<"\n\t\t\t-----------------------------------------\n\n";
}

void Search_By_Name(Boarder ob[],int &N)
{
    string name;
    int count=0;
    cout<<"\t\t\t   Enter The Name: ";
    cin>>name;
    cout<<"\n\t\t\t-----------------------------------------\n";
    cout<<"\n\t\t\t   Searched Information of Name: "<<name<<endl;
    cout<<"\n\t\t\t-----------------------------------------\n\n";
    for(int i=0; i<N; i++)
    {
        if(ob[i].GetBoarderName()==name)
        {
            cout<<"\t\t\t   Boarder ID: "<<ob[i].GetBoarderId()<<endl;
            cout<<"\t\t\t   Boarder Name: "<<ob[i].GetBoarderName()<<endl;
            cout<<"\t\t\t   Phone Number: "<<ob[i].GetBoarderPhoneNo()<<endl;
            cout<<"\t\t\t   Bed Type: "<<ob[i].GetBoarderBedType()<<endl;
            cout<<"\t\t\t   Room Number: "<<ob[i].GetBoarderRoomNo()<<endl;
            cout<<"\t\t\t   Entry Date: "<<ob[i].GetBoarderEntryDate()<<endl;
            count++;
        }
    }
    if(count==0)
    {
        cout<<"\t\t\t   No Boarder Information Is Founded Through Name.";
    }
    cout<<"\n\t\t\t-----------------------------------------\n\n";
}

void Search_By_Room(Boarder ob[],int &N)
{
    int roomno,count=0;
    cout<<"\t\t\t   Enter The Room Number: ";
    cin>>roomno;
    cout<<"\n\t\t\t-----------------------------------------\n";
    cout<<"\n\t\t\t   Searched Information of Room Number: "<<roomno<<endl;
    cout<<"\n\t\t\t-----------------------------------------\n\n";
    for(int i=0; i<N; i++)
    {
        if(ob[i].GetBoarderRoomNo()==roomno)
        {
            cout<<"\t\t\t   Boarder ID     :        "<<ob[i].GetBoarderId()<<endl;
            cout<<"\t\t\t   Boarder Name   :        "<<ob[i].GetBoarderName()<<endl;
            cout<<"\t\t\t   Phone Number   :        "<<ob[i].GetBoarderPhoneNo()<<endl;
            cout<<"\t\t\t   Bed Type       :        "<<ob[i].GetBoarderBedType()<<endl;
            cout<<"\t\t\t   Room Number    :        "<<ob[i].GetBoarderRoomNo()<<endl;
            cout<<"\t\t\t   Entry Date     :        "<<ob[i].GetBoarderEntryDate()<<endl;
            count++;
        }
    }
    if(count==0)
    {
        cout<<"\t\t\t   No Boarder Information Is Founded Through Room Number.";
    }
    cout<<"\n\t\t\t-----------------------------------------\n\n";
}

void Delete_Boarder_Info_By_ID(Boarder ob[],int &N)
{
    if(N!=0)
    {
        int id;
        cout<<"\t\t\t   Enter The ID: ";
        cin>>id;
        cout<<"\n\t\t\t-----------------------------------------\n";
        cout<<"\n\t\t\t   Delete Boarder Information of Id: "<<id<<endl;
        cout<<"\n\t\t\t-----------------------------------------\n\n";
        for(int i=0; i<N; i++)
        {
            if(ob[i].GetBoarderId()==id)
            {
                for(int j=i; j<N-1; j++)
                {
                    ob[j].SetBorder(ob[j+1].GetBoarderId(),ob[j+1].GetBoarderName(),ob[j+1].GetBoarderPhoneNo(),ob[j+1].GetBoarderBedType(),ob[j+1].GetBoarderRoomNo(),ob[j+1].GetBoarderEntryDate());
                }
                N--;
                cout<<"\n\t\t\t   Boarder Information Has Been Deleted.";
            }
        }
    }
    else
    {
        cout<<"\n\t\t\t--------------------------------------\n";
        cout<<"\n\t\t\t   No Boarder Exist To Delete.";
    }
}

void Update_Boarder_Info(Boarder ob[],int &N)
{
    if(N!=0)
    {
        int id;
        cout<<"\n\t\t\t   Enter The ID: ";
        cin>>id;
        cout<<"\n\t\t\t-----------------------------------------\n";
        cout<<"\n\t\t\t   Update Boarder Information of Id: "<<id<<endl;
        cout<<"\n\t\t\t-----------------------------------------\n\n";
        for(int i=0; i<N; i++)
        {
            if(ob[i].GetBoarderId()==id)
            {
                int boarderID,updatedRoomNo;
                string updatedBoarderNAME,updatedPhoneNo,updatedBedType,updatedEntryDate;
                cout<<"\n\t\t\t   Enter The Boarder Updated Name: ";
                cin>>updatedBoarderNAME;
                cout<<"\n\t\t\t   Enter The Updated Phone Number: ";
                cin>>updatedPhoneNo;
                cout<<"\n\t\t\t   Enter The Updated Bed Type: ";
                cin>>updatedBedType;
                cout<<"\n\t\t\t   Enter The Updated Room Number: ";
                cin>>updatedRoomNo;
                cout<<"\n\t\t\t   Enter The Updated Entry Date: ";
                cin>>updatedEntryDate;
                ob[i].SetBorder(id,updatedBoarderNAME,updatedPhoneNo,updatedBedType,updatedRoomNo,updatedEntryDate);
            }
        }
        cout<<"\n\t\t\t--------------------------------------\n";
        cout<<"\n\t\t\t   Boarder Information Has Been Updated.";
    }
    else
    {
        cout<<"\n\t\t\t--------------------------------------\n";
        cout<<"\n\t\t\t   No Boarder Exist To Update Information.";
    }
}

int main()
{
    Boarder ob[20];
    int NumOfBoarder=0,dBed = 1500,sBed = 1000,i;
    int choice,choice2,choice3,choice4,numDays,bill;
    string bedType;
    cout<<"\n\n\n\t\t\t--------------------------------------";
    cout<<"\n\n\t\t\t ##### HOSTEL MANAGEMENT SYSTEM ##### ";
    cout<<"\n\n\t\t\t--------------------------------------";
    while(choice!=6)
    {
        cout<<"\n\n\t\t\t--------------------------------------";
        cout<<"\n\n\t\t\t   MAIN MENU "<<endl;
        cout<<"\t\t\t   1. Boarder Entry"<<endl;
        cout<<"\t\t\t   2. Show All Information"<<endl;
        cout<<"\t\t\t   3. Search Boarder"<<endl;
        cout<<"\t\t\t   4. Delete Boarder"<<endl;
        cout<<"\t\t\t   5. Boarder Information Update"<<endl;
        cout<<"\t\t\t   6. Exit"<<endl;
        cout<<"\n\t\t\t--------------------------------------";
        cout<<"\n\n";
        cout<<"\t\t\t   Enter Your Choice: ";

        cin>>choice;

        switch(choice)
        {
        case 1:
            int n;
            cout<<"\t       ------------------------------------------------------------"<<endl;
            cout<<"\n\t\t Payment Details: \n"<<endl;
            cout<<"\t\t Price of Single Bed Room Including Meal Per Day: 1000TK."<<endl<<endl;
            cout<<"\t\t Price of Double Bed Room Including Meal Per Day: 1500TK."<<endl<<endl;
            cout<<"\t       ------------------------------------------------------------"<<endl;
            cout<<"\t\t\t    Enter The Number Of Student: ";
            cin>>n;

            for(i=NumOfBoarder; i<NumOfBoarder+n; i++)
            {
                Boarder_Entry(ob,i);
            }
            NumOfBoarder = NumOfBoarder+n;
            break;
        case 2:
            Show_All_Info(ob,NumOfBoarder);
            break;

        case 3:
            cout<<"\n\n";
            cout<<"\t\t\t   SEARCH BOARDER"<<endl;
            cout<<"\t\t\t   1. Search By ID"<<endl;
            cout<<"\t\t\t   2. Search By Name"<<endl;
            cout<<"\t\t\t   3. Search By Room Number"<<endl;
            cout<<"\t\t\t   Enter Your Choice: ";
            cin>>choice3;
            switch(choice3)
            {
            case 1:
                Search_By_Id(ob,NumOfBoarder);
                break;
            case 2:
                Search_By_Name(ob,NumOfBoarder);
                break;
            case 3:
                Search_By_Room(ob,NumOfBoarder);
                break;
            default :
                cout<<"\t\t\t   Invalid selection."<<endl;
                cout<<"\n\n";
            }
            break;
        case 4:
            cout<<"\n\n";
            cout<<"\n\t\t\t   DELETE BOARDER INFORMATION"<<endl;
            cout<<"\n\t\t\t   1. Bill Generation"<<endl;
            cout<<"\n\t\t\t   2. Delete Information"<<endl;
            cout<<"\n\t\t\t   Enter Your Choice: ";
            cin>>choice4;
            cout<<"\n\n";

            switch(choice4)
            {
            case 1:
                if(NumOfBoarder!=0)
                {
                    cout<<"\n\t\t\t   How Many Day Boarder Stayed: ";
                    cin>>numDays;
                    cout<<"\t    Single Bed or Double Bed (Type S For Single & D For Double): ";
                    cin>>bedType;
                    if(bedType=="S" || bedType=="s")
                    {
                        bill = numDays*sBed;
                        cout<<"\n\t\t\t   Total Bill of Single Bed for "<<numDays<<" Days is: "<<bill<<endl;
                    }
                    if(bedType=="D" || bedType=="d")
                    {
                        bill = numDays*dBed;
                        cout<<"\n\t\t\t   Total Bill of Double Bed for "<<numDays<<" Days is: "<<bill<<endl;
                    }
                }
                else
                {
                    cout<<"\n\t\t\t--------------------------------------\n";
                    cout<<"\n\t\t\t   No Boarder Exist To Generate Bill.";
                }
                break;
            case 2:
                Delete_Boarder_Info_By_ID(ob,NumOfBoarder);
                break;
            default :
                cout<<"\t\t\t   Invalid selection."<<endl;
                cout<<"\n\n";
            }
            break;
        case 5:
            Update_Boarder_Info(ob,NumOfBoarder);
            break;
        case 6:
            break;
        default:
        {
            cout<<"\t\t\t   Invalid selection."<<endl;
            cout<<"\t\t\t   Press any key to continue"<<endl;
        }
        }
    }
}


