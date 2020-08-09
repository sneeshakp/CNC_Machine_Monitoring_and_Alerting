class Self_test_status
{
public:	
int self_test_var; //Holds power on self test results
//Function to be called in init(startup)
void self_test_results()
{
	if(self_test_var == 0xff)
		cout<<"All are ok";
	else if(self_test_var == 0x00)
		cout<<"No Data";
	else if(self_test_var == 0x01)
		cout<<"	Controller board in machine is not ok";
	else if(self_test_var == 0x02)
		cout<<"Configuration data in machine is corrupted";
	else
	{
	}
	
}
}Self_test_status_obj;
	
	
class  System_Time
{
	public:
	float system_time_var;//Holds system time
	
	void read_system_time();
}System_Time_obj;


//Function is scheduled in T10	
void System_Time_obj::read_system_time()
{
	//Function to fetch system time and assign it to system_time_var
}
	
	




	