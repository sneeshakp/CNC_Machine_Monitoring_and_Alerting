#include <system_time.h>

class operation_time
{
float oper_time_var;

void operation_time();

System_Time_obj Time_obj;

}operation_time_obj;


void operating_time_obj::operation_time()
{
	static int quarter_an_hour_var =1;
	ompare_data(operating_time,&operating_time_obj.Time_obj.system_time_var, TEMP_MAX_UPPER_LIMIT);

    if(alert_var[operating_time].status == TRUE)
		cout<<"operating time had exceeded 6 hours and the tie now is %f"<<operating_time_obj.Time_obj.system_time_var;
}