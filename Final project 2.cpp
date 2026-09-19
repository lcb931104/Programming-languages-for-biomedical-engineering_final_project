#include <iostream>
#include <string>
#include <limits>
#include <unordered_map>

using namespace std;

// 存講座信息
struct lecture 
{
    string time;
    string location;
    string food;
    int registeredUsers = 0; 
};
// 忘記密碼
struct QA 
{
    string question;
    string answer;
};

// 字典
unordered_map<int, lecture> lectureMap;
unordered_map<string, int> managerMap;
unordered_map<string, QA> QAMap;
// 函數聲明
void addLecture();
void cancelLecture();
void viewLectures();
void registerLunch();
void confirmDemand();
void changepassword();
void addmanager();
void deletemanager();


int main() {
	managerMap["user"] = 0000;
    int choice;

    do {
    	while(true)
	    {
	    	cout << "\n================= Home =================\n";
            cout << "1. Add a lecture         (manager only)\n";
            cout << "2. Cancel a lecture      (manager only)\n";
            cout << "3. Confirm the order  \n";
            cout << "4. Search for lectures\n";
            cout << "5. Reservation        \n";
            cout << "6. Add a manager         (manager only)\n";
            cout << "7. Delete a manager      (manager only)\n";
            cout << "8. Forgot password    \n";
            cout << "9. Exit               \n";
            cout << "\nEnter your choice: ";
            cin >> choice;

	        if (choice != static_cast<int>(choice) || choice >9 || choice < 1 || cin.fail()) 
	        { 
	   	        cin.clear();  // 清除錯誤標誌
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
		        choice = 0; 
                cout << "Invalid choice! Please try again. \n";
            }
            else
            {
            	int choice;
        	    break;
		    }
	    }
        

        switch (choice) {
            case 1:
			{
				start_case1:
				string account;
                int password;
                
                cout << "Please enter the account(or press 0 to go back Home): ";
	            cin >> account;
	            if (account == "0")
	            {
	            	break;
				}
	            cout << "Please enter the password: ";
	            cin >> password;
	            
                if (password != static_cast<int>(password) || cin.fail()) 
	            { 
	                cin.clear();  // 清除錯誤標誌
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    
	                if(managerMap.find(account) == managerMap.end())
                    {
                	    cout << "The account doesn't exist.\n";
                	    cout << "Please try again\n";
                	    cout << "------------------------------------\n";
                	    goto start_case1;
				    }
				    
		            password = 0; 
                    cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case1;
                }
                
                if(managerMap.find(account) == managerMap.end())
                {
                	cout << "The account doesn't exist.\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case1;
				}
                if(managerMap[account] != password)
                {
                	cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case1;
				}
                else
                {
                	addLecture();
                	break;
				}
			}
            
            case 2:
            {
            	start_case2:
            	string account;
                int password;
                
                cout << "Please enter the account(or press 0 to go back Home): ";
	            cin >> account;
	            if (account == "0")
	            {
	            	break;
				}
	            cout << "Please enter the password: ";
	            cin >> password;
                
                if (password != static_cast<int>(password) || cin.fail()) 
	            { 
	                cin.clear();  // 清除錯誤標誌
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    
	                if(managerMap.find(account) == managerMap.end())
                    {
                	    cout << "The account doesn't exist.\n";
                	    cout << "Please try again\n";
                	    cout << "------------------------------------\n";
                	    goto start_case1;
				    }
				    
		            password = 0; 
                    cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case1;
                }
                
                if(managerMap.find(account) == managerMap.end())
                {
                	cout << "The account doesn't exist.\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case2;
				}
                if(managerMap[account] != password)
                {
                	cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case2;
				}
                else
                {
                	cancelLecture();
                	break;
				}
			}
                
            case 3:
            	confirmDemand();
            	break;
                
            case 4:
            	viewLectures();
                break;
                
            case 5:
                registerLunch();
                break;
                
            case 6:
            {
            	start_case6:
            	string account;
                int password;
                
                cout << "Please enter the account(or press 0 to go back Home): ";
	            cin >> account;
	            if (account == "0")
	            {
	            	break;
				}
	            cout << "Please enter the password: ";
	            cin >> password;
	            
	            if (password != static_cast<int>(password) || cin.fail()) 
	            { 
	                cin.clear();  // 清除錯誤標誌
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    
	                if(managerMap.find(account) == managerMap.end())
                    {
                	    cout << "The account doesn't exist.\n";
                	    cout << "Please try again\n";
                	    cout << "------------------------------------\n";
                	    goto start_case1;
				    }
				    
		            password = 0; 
                    cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case1;
                }
                
                if(managerMap.find(account) == managerMap.end())
                {
                	cout << "The account doesn't exist.\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case6;
				}
                if(managerMap[account] != password)
                {
                	cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case6;
				}
                else
                {
                	addmanager();
                	break;
				}
			}
            
            case 7:
            {
            	start_case7:
				string account;
                int password;
                
                cout << "Please enter the account(or press 0 to go back Home): ";
	            cin >> account;
	            if (account == "0")
	            {
	            	break;
				}
	            cout << "Please enter the password: ";
	            cin >> password;
	            
	            if (password != static_cast<int>(password) || cin.fail()) 
	            { 
	                cin.clear();  // 清除錯誤標誌
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    
	                if(managerMap.find(account) == managerMap.end())
                    {
                	    cout << "The account doesn't exist.\n";
                	    cout << "Please try again\n";
                	    cout << "------------------------------------\n";
                	    goto start_case1;
				    }
				    
		            password = 0; 
                    cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case1;
                }
                
                if(managerMap.find(account) == managerMap.end())
                {
                	cout << "The account doesn't exist.\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case7;
				}
                if(managerMap[account] != password)
                {
                	cout << "The password is wrong\n";
                	cout << "Please try again\n";
                	cout << "------------------------------------\n";
                	goto start_case7;
				}
                else
                {
                	deletemanager();
                	break;
				}
			}
			
			case 8:
				changepassword();
				break;
			
            case 9:
                cout << "Exiting program. Goodbye!\n";
                break;
                
        }
    } while (choice != 9);

    return 0;
}

//add manager
void addmanager(){
	
	cout << "\n========== Add a manager ==========\n";
	start:
	string username;
	string question;
	string answer;
	int password;
	
	cout << "Please enter the new user's name(or press 0 to go back Home): ";
	cin >> username;
	if(username == "0")
	{
		return;
	}
	if(managerMap.find(username) != managerMap.end())
	{
		cout << "That user has already been registered as a manager.  \n";
		cout << "Please check again if the new user's name is correct.   \n";
		cout << "------------------------------------\n";
		goto start;
	}
	cout << "Please enter his/her password in format XXXX : ";
	cin >> password;
	
	if(password != static_cast<int>(password) || cin.fail())
	{
	    cin.clear();  // 清除錯誤標誌
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter the correct password format \n";
        cout << "------------------------------------\n";
		goto start;
	}
	if(password > 9999 || password < 0)
	{
		cout << "Please enter the correct password format \n";
		goto start;
	}
	
	managerMap[username] = password;
	
	cout << "\n========== set a question (for forgotten password) ==========\n";
	cout << "Enter the question: ";
	cin >> question;
	cout << "Enter the answer: ";
	cin >> answer;
	
	QA newQA = {question,answer};
	QAMap[username] = newQA;
	
	cout << "\nYou have successfully add his/her manager qualify \n" ;
    cout << "Press Enter to return to Home...";
    cin.get();  
    cin.get();
    return;
}

//changepassword
void changepassword(){
	cout << "\n========== forgot password ==========\n";
	start:
	string username;
	string answer;
	int password;
	
	cout << "Please enter your account (or press 0 to go back Home): ";
	cin >> username;
	
	if(username == "0")
	{
		return;
	}
	if(username == "user")
	{
		cout << "You can't change that user's password\n";
		cout << "------------------------------------\n";
		goto start;
	}
	if(managerMap.find(username) == managerMap.end())
	{
		cout << "He/She is not one of the manager  \n";
		cout << "Please check again if the date is correct.   \n";
		cout << "------------------------------------\n";
		goto start;
	}
	
	cout << "Q: " << QAMap[username].question << endl;
	cout << "A: ";
	cin >> answer;
	
	string realanswer = QAMap[username].answer;
	if(answer == realanswer)
	{
		start1:
		cout << "Please enter the new password in format XXXX: \n";
		cin >> password;
		
		if(password != static_cast<int>(password) || cin.fail())
	    {
	    	cin.clear();  // 清除錯誤標誌
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the correct password format \n";
            cout << "------------------------------------\n";
		    goto start1;
		}
		if(password > 9999 || password < 0)
	    {
		    cout << "Please enter the correct password format \n";
		    goto start1;
	    }
	    
	    managerMap[username] = password;
	    
		cout << "\nYou have successfully change your password\n" ;
        cout << "Press Enter to return to Home...";
        cin.get();  
        cin.get();
        return;	
	}
	
	else if(answer != realanswer)
	{
		cout << "incorrect answer.\n";
		cout << "Please check again whether this account belongs to you. \n";
        cout << "------------------------------------\n";
		goto start;
	}
}

//delete manager
void deletemanager(){
	cout << "\n========== delete a manager ==========\n";
	start:
	string username;
	int password;
	
	cout << "Please enter user you want to cancel his/her manager qualify (or press 0 to go back Home): ";
	cin >> username;
	if(username == "0")
	{
		return;
	}
	if(username == "user")
	{
		cout << "You can't delete that user\n";
		cout << "------------------------------------\n";
		goto start;
	}
	if(managerMap.find(username) == managerMap.end())
	{
		cout << "He/She is not one of the manager  \n";
		cout << "Please check again if the date is correct.   \n";
		cout << "------------------------------------\n";
		goto start;
	}
	managerMap.erase(username);
	
	cout << "\nYou have successfully deleted his/her manager qualify \n" ;
    cout << "Press Enter to return to Home...";
    cin.get();  
    cin.get();
    return;
}

// 管理者新增講座
void addLecture() {
	
	cout << "\n========== Add a lecture ==========\n";	 
    
	int time_num;
	
start1:
	while(true)
	{
		cout << "Enter time in format YYYYMMDD (or press 0 to go back Home): ";
	    cin >> time_num;
	    
	    if(time_num == 0)
	    {
		    return;
	    }
	    else if (time_num != static_cast<int>(time_num) || time_num < 20000000 || cin.fail()) 
	    { 
	   	    cin.clear();  // 清除錯誤標誌
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the correct time format \n";
            cout << "------------------------------------\n";
        }
        else
        {
        	break;
		}
	}
    
	string time = to_string(time_num);
	string location;
	string detail;

	
	int year = time_num / 10000;          
    int month = (time_num / 100) % 100;  
    int day = time_num % 100; 
    
	
	if(year < 2024 || year > 2050)
	{
		cout << "The year must be between 2024 and 2050. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start1;
	}
	
	if(month < 1 || month > 12)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start1;
	}
	
	if(day < 1 || day > 31)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start1;
	}
	
	if(lectureMap.find(time_num) != lectureMap.end())
	{
		cout << "There has a lecture been register in that day.  \n";
		cout << "Please check again if the date is correct.   \n";
		cout << "------------------------------------\n";
		goto start1;
	}
    
    cout << "Enter location: ";
    cin >> location;
    
    
    cout << "Enter food details: ";
    cin >> detail;
    
    lecture newlecture = {time,location,detail};
    lectureMap[time_num] = newlecture;

    cout << "Lecture added successfully!\n";
    
    int choice1;
	do
	{
        cout << "\ncountinue to add or not\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cout << "\nEnter your choice: ";
        cin >> choice1;
    
	
    	switch(choice1)
        {
    	    case 1:
    	    	cout << "\n========== Add a lecture ==========\n";
    		    goto start1;
    		
    	    case 2:
    		    return;
    	
    	    default:
                cout << "Invalid choice! Please try again.\n";
	    }
	    
	}while (choice1 != 1 || choice1 != 2);
    
}
//取消
void cancelLecture(){
	cout << "\n========== Cancel a lecture ==========\n";
	int cancel_num;
	
start2:
	if (lectureMap.empty())
	{
        cout << "There hasn't any lecture lunch boxes been register\n";
        return;
    }
    
    cout << "Dates has lecture:  \n";
    for (const auto& entry : lectureMap) 
	{
        cout << entry.first << "\n";                  // entry.first 是鍵
    }
	
	while(true)
	{
		cout << "Enter time you want to cancel (or press 0 to go back Home): ";
	    cin >> cancel_num;
	    
	    if(cancel_num == 0)
	    {
		    return;
	    }
	    else if (cancel_num != static_cast<int>(cancel_num) || cancel_num < 20000000 || cin.fail()) 
	    { 
	   	    cin.clear();  // 清除錯誤標誌
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
		    //time_num = 0; 
            cout << "Please enter the correct time format \n";
            cout << "------------------------------------\n";
        }
        else
        {
        	break;
		}
	}
	
	int year = cancel_num / 10000;          
    int month = (cancel_num / 100) % 100;  
    int day = cancel_num % 100; 
	
	if(year < 2024 || year > 2050)
	{
		cout << "The year must be between 2024 and 2050. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start2;
	}
	
	if(month < 1 || month > 12)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start2;
	}
	
	if(day < 1 || day > 31)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start2;
	}
	
	if (lectureMap.find(cancel_num) == lectureMap.end()) 
	{
        cout << "Sorry,there has no lecture in that day.\n";
        cout << "------------------------------------\n";
        goto start2;
    }
	
	lectureMap.erase(cancel_num);
	
	cout << "\nYou have successfully reserved for a lunch box on Lecture \n" ;
    cout << "Press Enter to return to Home...";
    cin.get();  
    cin.get();
    return;
}

// 顯示所有講座及午餐細節
void viewLectures() {
	
	cout << "\n========== Lectures and Lunch Details ==========\n";
start3:
    if (lectureMap.empty())
	{
        cout << "There hasn't any lecture lunch boxes been register\n";
        return;
    }
    
    cout << "Dates has lecture:  \n";
    for (const auto& entry : lectureMap) 
	{
        cout << entry.first << "\n";                  // entry.first 是鍵
    }

    cout << "------------------------------------\n";
    
    int date;
    while(true)
	{
		cout << "Please enter the date that you want to search (or press 0 to go back Home): ";
	    cin >> date;
	    
	    if(date == 0)
	    {
		    return;
	    }
	    else if (date != static_cast<int>(date) || date < 20000000 || cin.fail()) 
	    { 
	   	    cin.clear();  // 清除錯誤標誌
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
		    date = 0; 
            cout << "Please enter the correct time format \n";
            cout << "------------------------------------\n";
        }
        else
        {
        	break;
		}
	}
    
    int year = date / 10000;          
    int month = (date / 100) % 100;  
    int day = date % 100; 
	
	if(year < 2024 || year > 2050)
	{
		cout << "The year must be between 2024 and 2050. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start3;
	}
	
	if(month < 1 || month > 12)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start3;
	}
	
	if(day < 1 || day > 31)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start3;
	}
	
	if (lectureMap.find(date) == lectureMap.end()) 
	{
        cout << "Sorry,there has no lecture in that day.\n";
        cout << "------------------------------------\n";
        goto start3;
    }

	
    cout << "\nLocation: " << lectureMap[date].location << "\n";
    cout << "Food: " << lectureMap[date].food << "\n";
    cout << "Reserved Users: " << lectureMap[date].registeredUsers << "\n";
    
    int choice3_1;
	do
	{
        cout << "\nreserve or not\n";
        cout << "1. reserve\n";
        cout << "2. No\n";
        cout << "\nEnter your choice: ";
        cin >> choice3_1;
    
	
    	switch(choice3_1)
        {
    	    case 1:
    	    	lectureMap[date].registeredUsers++;
    	    	cout << "You have successfully reserved for a lunch box on Lecture \n" ;
    		    goto start3_2;
    		
    	    case 2:
    		    goto start3_2;
    	
    	    default:
                cout << "Invalid choice! Please try again.\n";
	    }
	    
	}while (choice3_1 != 1 || choice3_1 != 2);
	
	start3_2:
    int choice3_2;
	do
	{
        cout << "\ncountinue to search or not\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cout << "\nEnter your choice: ";
        cin >> choice3_2;
    
	
    	switch(choice3_2)
        {
    	    case 1:
    	    	cout << "\n========== Lectures and Lunch Details ==========\n";
    		    goto start3;
    		
    	    case 2:
    		    return;
    	
    	    default:
                cout << "Invalid choice! Please try again.\n";
	    }
	    
	}while (choice3_2 != 1 || choice3_2 != 2);
	
    
}

// 用戶登記參加
void registerLunch() {
	
	cout << "\n========== Reservation ==========\n";
start4:
    if (lectureMap.empty())
	{
        cout << "There hasn't any lecture lunch boxes been register\n";
        return;
    }
    
    cout << "Dates has lecture:  \n";
    for (const auto& entry : lectureMap) 
	{
        cout << entry.first << "\n";                  // entry.first 是鍵
    }
    
    cout << "------------------------------------\n";
    int register_date;
    while(true)
	{
		cout << "Please enter the date you want to reserve (or press 0 to go back Home): ";
	    cin >> register_date;
	    
	    if(register_date == 0)
	    {
		    return;
	    }
	    else if (register_date != static_cast<int>(register_date) || register_date < 20000000 || cin.fail()) 
	    { 
	   	    cin.clear();  // 清除錯誤標誌
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
		    register_date = 0; 
            cout << "Please enter the correct time format \n";
            cout << "------------------------------------\n";
        }
        else
        {
        	break;
		}
	}
    
    int year = register_date / 10000;          
    int month = (register_date / 100) % 100;  
    int day = register_date % 100; 
	
	if(year < 2024 || year > 2050)
	{
		cout << "The year must be between 2024 and 2050. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start4;
	}
	
	if(month < 1 || month > 12)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start4;
	}
	
	if(day < 1 || day > 31)
	{
		cout << "Nonexistent time. Please enter again. \n";
		cout << "------------------------------------\n";
		goto start4;
	}
	
	if (lectureMap.find(register_date) == lectureMap.end()) 
	{
        cout << "Sorry,there has no lecture in that day.\n";
        cout << "------------------------------------\n";
        goto start4;
    }

    lectureMap[register_date].registeredUsers++;
    
    cout << "\nYou have successfully reserved for a lunch box on Lecture \n" ;
    cout << "Press Enter to return to Home...";
    cin.get();  
    cin.get();
    return;
}

// 管理者確認午餐需求數量
void confirmDemand() {
	
	cout << "\n========== Confirmation ==========\n";
    if (lectureMap.empty())
	{
        cout << "There hasn't any lecture lunch boxes been register\n";
        return;
    }
    
    for (const auto& entry : lectureMap) 
	{
        cout << "Time: " << entry.first << "\n";                  // entry.first 是鍵
        cout << "Location: " << entry.second.location << "\n";    // entry.second 是值，這是 Lecture 結構體
        cout << "Food: " << entry.second.food << "\n";
        cout << "reserved users: " << entry.second.registeredUsers << "\n";
        cout << "------------------------------------\n";
    }
    
    cout << "\nPress Enter to return to Home...";
    cin.get();  
    cin.get(); 
	return; 
}
