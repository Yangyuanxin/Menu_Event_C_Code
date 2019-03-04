#ifndef __MENU_H
#define __MENU_H
#include "menu_ui.h"
#include "menu_conf.h"
#include "Hardware_setting.h"

typedef struct Menu_Key_Index
{
	menu_u8 main_current_index ;
	menu_u8 detect_current_index ; 
	menu_u8 log_current_index ; 
	menu_u8 volume_level ; 
	menu_u8 backlight_level ; 
	menu_u8 wlan_on_off ; 
	menu_u8 lang_select ; 
	menu_u8 sensivity_select ;
	
	menu_u8 Current_Page ;
}Key_Index;
extern Key_Index sub_index ;

typedef void (*menu_op_func)(menu_u8);
typedef struct OP_STRUCT
{
	int op_menu ; 				//操作菜单
	menu_op_func opfun ;	//操作方法
}OP_MENU_PAGE;



typedef enum 
{
	MAIN_PAGE = 0,
	DETECT_PAGE,
	LOG_PAGE,
	VOLUME_PAGE,
	BRIGNE_PAGE,
	WLAN_PAGE,
	LANGUAGE_PAGE,
	SENSIVITY_PAGE	
}OP_PAGE;


void Enter_Page(menu_i32 index,menu_u8 KeyValue);
void Menu_Select_Item(menu_i32 current_index, menu_u8 KeyValue);

void main_page_process(menu_u8 KeyValue);
void detect_page_process(menu_u8 KeyValue);
void log_page_process(menu_u8 KeyValue);
void volume_page_process(menu_u8 KeyValue);
void backlight_page_process(menu_u8 KeyValue);
void wlan_page_process(menu_u8 KeyValue);
void language_page_process(menu_u8 KeyValue);
void sensivity_page_process(menu_u8 KeyValue);

#endif //__MENU_H
