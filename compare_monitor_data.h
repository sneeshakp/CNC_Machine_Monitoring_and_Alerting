#define TRUE 0X01
#define FALSE 0x00

enum monitor_data
{
	temperature = 0,
	dimension =1,
	operating_time=2,
	maximum
};


struct alert_result
{
	bool status;
    float upperimit;
}alert_var[maximum];
	
void compare_data(monitor_data data_index,float * received_data ,float upperlimit);