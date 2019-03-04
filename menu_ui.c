#include "menu_ui.h"

//进入相应的页面
void Enter_Page(menu_i32 index,menu_u8 KeyValue)
{
	sub_index.Current_Page = index ;
	switch(sub_index.Current_Page)
	{
		case	MAIN_PAGE 	  :
					Menu_Main_Init();
			    break ;
			    
		case	DETECT_PAGE	  :
					
			    break ;
			    
		case  LOG_PAGE	  :
			
			    break ;
		
		//进入音量设置页面
		case	VOLUME_PAGE   :
					volume_page_ui_process(current_mode.Current_Volume_Level);
			    break ;
			    
		//进入亮度设置页面
		case	BRIGNE_PAGE	  :
					backlight_page_ui_process(current_mode.Current_Backlight_Level);
			    break ;
			    
		//进入无线设置页面
		case	WLAN_PAGE	  :
					wlan_page_process(current_mode.Current_Select_Wlan);
			    break ;
			    
		//进入语言设置页面
		case	LANGUAGE_PAGE :
					language_page_ui_process(current_mode.Current_Select_Language);
					break ;
			
		//进入灵敏度设置页面
		case	SENSIVITY_PAGE:	
					sensivity_page_process(current_mode.Current_Sensivity);
					break ;
		
		default:
				  break ;
	}
}


//主菜单初始化
void Menu_Main_Init(void)
{
	sub_index.main_current_index = 0 ;
	sub_index.Current_Page = MAIN_PAGE ;
	//.....刷新回主页面的UI和状态
}

//主页面UI处理
void main_page_ui_process(menu_u8 index)
{
	switch(index)
	{
		case 0:
				break ;
		case 1:
				break ;
		case 2:
				break ;
		case 3:
				break ;
		case 4:
				break ;
		case 5:
				break ;
		case 6:
				break ;
		default :
				break ;
	}
}

//音量设置ui处理
void volume_page_ui_process(menu_u8 index)
{
		switch(index)
		{
			case 0:
					
					break ;
			
			case 1:
					
					break ;
			
			case 2:
					
					break ;
			
			case 3:
					
					break ;
			
			case 4:
					
					break ;
			default:
					break ;
		}
}

//背光设置ui处理
void backlight_page_ui_process(menu_u8 index)
{
		switch(index)
		{
			case 0:
					
					break ;
			
			case 1:
					
					break ;
			
			case 2:
					
					break ;
			
			case 3:
					
					break ;
			
			case 4:
					
					break ;
			default:
					break ;
		}
}

//无线数据上传页面ui处理
void wlan_page_ui_process(menu_u8 index)
{
		switch(index)
		{
			case 0:
					
					break ;
			case 1:
					
					break ;
			default:
				break ;
		}
}

//语言页面ui处理
void language_page_ui_process(menu_u8 index)
{
	switch(index)
	{
		case 0:
					
		      break ;
		case 1:
					
		      break ;
		default:
					break ;
	}
}

//灵敏度页面ui处理
void sensivity_ui_process(menu_u8 index)
{
	switch(index)
	{
		case 0:
		  	 
		     break ;
		case 1:
				 
		     break ;
		case 2:
				
		     break ;
		default:
					break ;
	}
}

