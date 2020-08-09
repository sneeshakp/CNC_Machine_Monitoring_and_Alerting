#include <compare_monitor_data.h>

void compare_data(monitor_data data_index,float * received_data ,float upperlimit)
{
	if(*received_data > upperlimit)
		alert[data_index].status = TRUE;

}