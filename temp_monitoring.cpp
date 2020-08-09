#include <temp_monitoring_hdr.h>
#include <system_time.h>
#include <compare_monitor_data.h>



class Temp_mon
{
float temp_read_var;
void  temp_mon();

System_time_obj Time_obj;

void report_temperature();
}Temp_mon_obj;



void read_operating_temperature(float *temp_var)
{
	
//*temp_var will get temperaturee data from temperature sensor

}

//function to be called in each T10
bool Temp_mon_obj::temp_mon()
{
	
read_operating_temperature(&(Temp_mon_obj.temp_read_var));

compare_data(temperature,&Temp_mon_obj.temp_read_var , TEMP_MAX_UPPER_LIMIT);

if(alert_var[temperature].status == TRUE)
	cout<<"Temperature is greater than 35 degrees %f"<<*Temp_mon_obj.temp_read_var;
}


//function to be called in each T10
void Temp_mon_obj::report_temperature()
{
static int half_an_hour_var =1;

if(Temp_mon_obj.Time_obj.system_time == half_an_hour_var*18*100000)
	
	cout<<"Temperature is %f at the time %f"<<temp_read_var<<Temp_mon_obj.Temp_mon_obj.Time_obj.system_time;
}