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
	
	

	




	