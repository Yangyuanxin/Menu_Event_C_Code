#ifndef __HARDWARE_SETTING_H
#define __HARDWARE_SETTING_H
#include "menu_conf.h"
#define SENSIVITY_HIGH 200
#define SENSIVITY_MIDDLE 300
#define SENSIVITY_LOW   500

#define CHINESE 0
#define ENGLISH 1

#define WLAN_OFF 0
#define WLAN_ON  1

#define BACKLIGHT_LEVEL0 100
#define BACKLIGHT_LEVEL1 200
#define BACKLIGHT_LEVEL2 300
#define BACKLIGHT_LEVEL3 400
#define BACKLIGHT_LEVEL4 500

#define VOLUME_LEVEL0 100
#define VOLUME_LEVEL1 200
#define VOLUME_LEVEL2 300
#define VOLUME_LEVEL3 400
#define VOLUME_LEVEL4 500

typedef struct Current_User_Data
{
	//当前的灵敏度
	menu_u32 Current_Sensivity ;					
	//当前选择的语言
	menu_u8 Current_Select_Language ;
	//当前选择的无线开关
	menu_u8 Current_Select_Wlan ;
	//当前选择的背光级别
	menu_u32 Current_Backlight_Level ;
	//当前选择的音量级别
	menu_u32 Current_Volume_Level ;
	//当前选择的记录项
	menu_u8 Current_Log_item ;
}Current_Select_Mode ;
extern Current_Select_Mode current_mode ;


//设置音量
void setting_volume(menu_u32 index);
//设置语言
void setting_language(menu_u32 index);
//设置灵敏度
void setting_sensivity(menu_u32 index);
//设置背光亮度
void setting_backlight(menu_u32 index);
//设置无线开关的状态
void setting_wlan_status(menu_u32 index);

#endif


