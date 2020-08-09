#include <compare_monitor_data.h>

class dimension
{
float dimension_var;
void dimension_check();
}dimension_obj;



void read_dimension(float *dimension_var_rxd)
{
//*dimension_var_rxd will be updated with the dimension deviation
}


//Function is called in each T10
void dimension_obj::dimension_check()
{
	read_dimension(&(dimension_obj.dimension_var));
	compare_data(dimension,&(dimension_obj.dimension_var),DIMENSION_DEV_UPPER_LIMIT);
	if(alert_var[dimension].status == TRUE)
	cout<<"Dimension deviation is greater than 0.5 millimeters and the dimension variation is %f %f"<<*dimension_obj.dimension_var;
	
}