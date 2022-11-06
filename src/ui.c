// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: ios-ui

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void hideToday_Animation(lv_obj_t * TargetObject, int delay);
void islandExpand_Animation(lv_obj_t * TargetObject, int delay);
void islandExpandDown_Animation(lv_obj_t * TargetObject, int delay);
void unlock_Animation(lv_obj_t * TargetObject, int delay);
void lock_Animation(lv_obj_t * TargetObject, int delay);
void showToday_Animation(lv_obj_t * TargetObject, int delay);
void showControl_Animation(lv_obj_t * TargetObject, int delay);
void closeControl_Animation(lv_obj_t * TargetObject, int delay);
void hideToRight_Animation(lv_obj_t * TargetObject, int delay);
void hideToLeft_Animation(lv_obj_t * TargetObject, int delay);
void revealFromRight_Animation(lv_obj_t * TargetObject, int delay);
void revealFromLeft_Animation(lv_obj_t * TargetObject, int delay);
void opacityShow_Animation(lv_obj_t * TargetObject, int delay);
void opacityHide_Animation(lv_obj_t * TargetObject, int delay);
void homeUp_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_bootScreen(lv_event_t * e);
lv_obj_t * ui_bootScreen;
lv_obj_t * ui_Image26;
lv_obj_t * ui_homeScreen;
void ui_event_homePanel(lv_event_t * e);
lv_obj_t * ui_homePanel;
lv_obj_t * ui_Panel8;
lv_obj_t * ui_Image13;
void ui_event_Image14(lv_event_t * e);
lv_obj_t * ui_Image14;
lv_obj_t * ui_Image12;
void ui_event_Panel2(lv_event_t * e);
lv_obj_t * ui_Panel2;
void ui_event_Panel4(lv_event_t * e);
lv_obj_t * ui_Panel4;
lv_obj_t * ui_appItem2;
lv_obj_t * ui_appIcon2;
lv_obj_t * ui_appLabel2;
lv_obj_t * ui_appItem1;
lv_obj_t * ui_appIcon1;
lv_obj_t * ui_appLabel1;
lv_obj_t * ui_appItem;
lv_obj_t * ui_appIcon;
lv_obj_t * ui_appLabel;
lv_obj_t * ui_appItem7;
lv_obj_t * ui_appIcon7;
lv_obj_t * ui_appLabel7;
lv_obj_t * ui_appItem6;
lv_obj_t * ui_appIcon6;
lv_obj_t * ui_appLabel6;
void ui_event_Panel5(lv_event_t * e);
lv_obj_t * ui_Panel5;
lv_obj_t * ui_appItem3;
lv_obj_t * ui_appIcon3;
lv_obj_t * ui_appLabel3;
lv_obj_t * ui_appItem4;
lv_obj_t * ui_appIcon4;
lv_obj_t * ui_appLabel4;
lv_obj_t * ui_appItem5;
lv_obj_t * ui_appIcon5;
lv_obj_t * ui_appLabel5;
lv_obj_t * ui_appItem8;
lv_obj_t * ui_appIcon8;
lv_obj_t * ui_appLabel8;
void ui_event_Panel6(lv_event_t * e);
lv_obj_t * ui_Panel6;
lv_obj_t * ui_appItem9;
void ui_event_Image25(lv_event_t * e);
lv_obj_t * ui_Image25;
lv_obj_t * ui_appLabel9;
lv_obj_t * ui_appItem10;
lv_obj_t * ui_appIcon10;
lv_obj_t * ui_appLabel10;
lv_obj_t * ui_appItem11;
lv_obj_t * ui_appIcon11;
lv_obj_t * ui_appLabel11;
lv_obj_t * ui_appItem12;
lv_obj_t * ui_appIcon12;
lv_obj_t * ui_appLabel12;
void ui_event_appPanel(lv_event_t * e);
lv_obj_t * ui_appPanel;
lv_obj_t * ui_calculatorPanel;
lv_obj_t * ui_Panel23;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Panel24;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Panel25;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Panel26;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Panel27;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Panel33;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Panel29;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Panel30;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Panel31;
lv_obj_t * ui_Label25;
lv_obj_t * ui_Panel32;
lv_obj_t * ui_Label26;
lv_obj_t * ui_Panel34;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Panel35;
lv_obj_t * ui_Label29;
lv_obj_t * ui_phoneNumber1;
lv_obj_t * ui_Panel28;
lv_obj_t * ui_Label30;
lv_obj_t * ui_Panel36;
lv_obj_t * ui_Label31;
lv_obj_t * ui_Panel37;
lv_obj_t * ui_Label32;
lv_obj_t * ui_Panel38;
lv_obj_t * ui_Label33;
lv_obj_t * ui_Panel39;
lv_obj_t * ui_Label34;
lv_obj_t * ui_Panel40;
lv_obj_t * ui_Label35;
lv_obj_t * ui_Panel41;
lv_obj_t * ui_Label36;
lv_obj_t * ui_phonePanel;
lv_obj_t * ui_Panel9;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Panel7;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Panel11;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Panel12;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Panel13;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Panel14;
lv_obj_t * ui_Image23;
lv_obj_t * ui_Panel15;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Panel16;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Panel17;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Panel18;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Panel19;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Panel20;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Panel21;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Panel22;
lv_obj_t * ui_Image24;
lv_obj_t * ui_phoneNumber;
void ui_event_lockscreenPanel(lv_event_t * e);
lv_obj_t * ui_lockscreenPanel;
lv_obj_t * ui_dateText;
lv_obj_t * ui_hour1;
lv_obj_t * ui_hour2;
lv_obj_t * ui_timeSep;
lv_obj_t * ui_minute1;
lv_obj_t * ui_minute2;
lv_obj_t * ui_musicPanel;
lv_obj_t * ui_musicProgress;
lv_obj_t * ui_musicInfo;
lv_obj_t * ui_musicPlay;
lv_obj_t * ui_musicPrevious;
lv_obj_t * ui_musicNext;
lv_obj_t * ui_musicTime;
lv_obj_t * ui_musicAlbum;
lv_obj_t * ui_musicLength;
lv_obj_t * ui_Image20;
lv_obj_t * ui_Image21;
void ui_event_todayPanel(lv_event_t * e);
lv_obj_t * ui_todayPanel;
lv_obj_t * ui_batteryPanel;
lv_obj_t * ui_battery1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_battery2;
lv_obj_t * ui_Label2;
lv_obj_t * ui_battery3;
lv_obj_t * ui_battery4;
lv_obj_t * ui_weatherPanel;
lv_obj_t * ui_weatherCity;
lv_obj_t * ui_weatherTemp;
lv_obj_t * ui_weatherIcon;
lv_obj_t * ui_weatherInfo;
lv_obj_t * ui_weatherPanel1;
lv_obj_t * ui_weatherCity1;
lv_obj_t * ui_weatherTemp1;
lv_obj_t * ui_weatherIcon1;
lv_obj_t * ui_weatherInfo1;
void ui_event_controlListener(lv_event_t * e);
lv_obj_t * ui_controlListener;
void ui_event_controlCenter(lv_event_t * e);
lv_obj_t * ui_controlCenter;
lv_obj_t * ui_Panel10;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Image6;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Image5;
lv_obj_t * ui_Image7;
void ui_event_Slider2(lv_event_t * e);
lv_obj_t * ui_Slider2;
lv_obj_t * ui_Image11;
lv_obj_t * ui_Slider1;
lv_obj_t * ui_Image15;
lv_obj_t * ui_Image9;
lv_obj_t * ui_Image10;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Image8;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Image16;
lv_obj_t * ui_Image17;
lv_obj_t * ui_Image18;
lv_obj_t * ui_Image19;
void ui_event_dynamicIsland(lv_event_t * e);
lv_obj_t * ui_dynamicIsland;
lv_obj_t * ui_Image22;
lv_obj_t * ui_homePill;
void ui_event_homeListener(lv_event_t * e);
lv_obj_t * ui_homeListener;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void hideToday_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, -320);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void islandExpand_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_width);
    lv_anim_set_values(&PropertyAnimation_0, 100, 200);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 200);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_width);
    lv_anim_set_values(&PropertyAnimation_1, 200, 100);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 500);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}
void islandExpandDown_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_height);
    lv_anim_set_values(&PropertyAnimation_0, 30, 100);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 200);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_height);
    lv_anim_set_values(&PropertyAnimation_1, 100, 30);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 500);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}
void unlock_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -480);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void lock_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -480, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_in);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void showToday_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, -320, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void showControl_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -20, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 100);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 100);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, -480, -20);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}
void closeControl_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -20);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 100);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, -20, -480);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 500);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}
void hideToRight_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 320);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void hideToLeft_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, -320);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void revealFromRight_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 320, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void revealFromLeft_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, -320, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void opacityShow_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 230);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void opacityHide_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 230, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void homeUp_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -10, -20);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 500);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, -20, -10);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 500);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_bootScreen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        _ui_screen_change(ui_homeScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 2000);
    }
}
void ui_event_homePanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        lock_Animation(ui_lockscreenPanel, 0);
    }
}
void ui_event_Image14(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_appPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_homePanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_phonePanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_calculatorPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_Panel2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        lock_Animation(ui_lockscreenPanel, 0);
    }
}
void ui_event_Panel4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        revealFromRight_Animation(ui_Panel5, 0);
        hideToLeft_Animation(ui_Panel4, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        showToday_Animation(ui_todayPanel, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        lock_Animation(ui_lockscreenPanel, 0);
    }
}
void ui_event_Panel5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        hideToRight_Animation(ui_Panel5, 0);
        revealFromLeft_Animation(ui_Panel4, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        lock_Animation(ui_lockscreenPanel, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        hideToLeft_Animation(ui_Panel5, 0);
        revealFromRight_Animation(ui_Panel6, 0);
    }
}
void ui_event_Panel6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        hideToRight_Animation(ui_Panel6, 0);
        revealFromLeft_Animation(ui_Panel5, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        lock_Animation(ui_lockscreenPanel, 0);
    }
}
void ui_event_Image25(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_appPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_homePanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_phonePanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_calculatorPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_appPanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        lock_Animation(ui_lockscreenPanel, 0);
    }
}
void ui_event_lockscreenPanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        unlock_Animation(ui_lockscreenPanel, 700);
        islandExpandDown_Animation(ui_dynamicIsland, 0);
    }
}
void ui_event_todayPanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        hideToday_Animation(ui_todayPanel, 0);
    }
}
void ui_event_controlListener(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        showControl_Animation(ui_controlCenter, 0);
    }
}
void ui_event_controlCenter(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        closeControl_Animation(ui_controlCenter, 0);
    }
}
void ui_event_Slider2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        onBrightnessChange(e);
    }
}
void ui_event_dynamicIsland(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        islandExpand_Animation(ui_dynamicIsland, 0);
    }
}
void ui_event_homeListener(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        homeUp_Animation(ui_homePill, 0);
        _ui_flag_modify(ui_homePanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_appPanel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

///////////////////// SCREENS ////////////////////
void ui_bootScreen_screen_init(void)
{
    ui_bootScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_bootScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_bootScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bootScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image26 = lv_img_create(ui_bootScreen);
    lv_img_set_src(ui_Image26, &ui_img_804517313);
    lv_obj_set_width(ui_Image26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image26, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image26, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image26, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_bootScreen, ui_event_bootScreen, LV_EVENT_ALL, NULL);

}
void ui_homeScreen_screen_init(void)
{
    ui_homeScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_homeScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_homeScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homeScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_homeScreen, &ui_img_1950924084, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_homePanel = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_homePanel, 320);
    lv_obj_set_height(ui_homePanel, 480);
    lv_obj_set_align(ui_homePanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_homePanel, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_homePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_homePanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homePanel, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_homePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_homePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_homePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_homePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_homePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel8 = lv_obj_create(ui_homePanel);
    lv_obj_set_width(ui_Panel8, 300);
    lv_obj_set_height(ui_Panel8, LV_SIZE_CONTENT);    /// 70
    lv_obj_set_x(ui_Panel8, 0);
    lv_obj_set_y(ui_Panel8, -20);
    lv_obj_set_align(ui_Panel8, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Panel8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel8, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel8, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image13 = lv_img_create(ui_Panel8);
    lv_img_set_src(ui_Image13, &ui_img_219474335);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image13, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image14 = lv_img_create(ui_Panel8);
    lv_img_set_src(ui_Image14, &ui_img_491994894);
    lv_obj_set_width(ui_Image14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image14, LV_SIZE_CONTENT);    /// 1
    lv_obj_add_flag(ui_Image14, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image12 = lv_img_create(ui_Panel8);
    lv_img_set_src(ui_Image12, &ui_img_455833711);
    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image12, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel2 = lv_obj_create(ui_homePanel);
    lv_obj_set_width(ui_Panel2, 320);
    lv_obj_set_height(ui_Panel2, 300);
    lv_obj_set_x(ui_Panel2, 1);
    lv_obj_set_y(ui_Panel2, 53);
    lv_obj_add_flag(ui_Panel2, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_Panel2, LV_DIR_HOR);
    lv_obj_set_style_radius(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_Panel2);
    lv_obj_set_width(ui_Panel4, 320);
    lv_obj_set_height(ui_Panel4, 300);
    lv_obj_set_x(ui_Panel4, -1);
    lv_obj_set_y(ui_Panel4, 4);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel4, LV_OBJ_FLAG_EVENT_BUBBLE | LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC);      /// Flags
    lv_obj_set_style_radius(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem2 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_appItem2, 100);
    lv_obj_set_height(ui_appItem2, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem2, 200);
    lv_obj_set_y(ui_appItem2, 0);
    lv_obj_clear_flag(ui_appItem2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon2 = lv_img_create(ui_appItem2);
    lv_img_set_src(ui_appIcon2, &ui_img_17953382);
    lv_obj_set_width(ui_appIcon2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel2 = lv_label_create(ui_appItem2);
    lv_obj_set_width(ui_appLabel2, 80);
    lv_obj_set_height(ui_appLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel2, 0);
    lv_obj_set_y(ui_appLabel2, 70);
    lv_obj_set_align(ui_appLabel2, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel2, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_appLabel2, "Compass");
    lv_obj_set_style_text_align(ui_appLabel2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem1 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_appItem1, 100);
    lv_obj_set_height(ui_appItem1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem1, 100);
    lv_obj_set_y(ui_appItem1, 0);
    lv_obj_clear_flag(ui_appItem1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon1 = lv_img_create(ui_appItem1);
    lv_img_set_src(ui_appIcon1, &ui_img_53790458);
    lv_obj_set_width(ui_appIcon1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel1 = lv_label_create(ui_appItem1);
    lv_obj_set_width(ui_appLabel1, 80);
    lv_obj_set_height(ui_appLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel1, 0);
    lv_obj_set_y(ui_appLabel1, 70);
    lv_obj_set_align(ui_appLabel1, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel1, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel1, "Calendar");
    lv_obj_set_style_text_align(ui_appLabel1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_appItem, 100);
    lv_obj_set_height(ui_appItem, LV_SIZE_CONTENT);    /// 50
    lv_obj_clear_flag(ui_appItem, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon = lv_img_create(ui_appItem);
    lv_img_set_src(ui_appIcon, &ui_img_1592444385);
    lv_obj_set_width(ui_appIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel = lv_label_create(ui_appItem);
    lv_obj_set_width(ui_appLabel, 80);
    lv_obj_set_height(ui_appLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel, 0);
    lv_obj_set_y(ui_appLabel, 70);
    lv_obj_set_align(ui_appLabel, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel, "Store");
    lv_obj_set_style_text_align(ui_appLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem7 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_appItem7, 100);
    lv_obj_set_height(ui_appItem7, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem7, 0);
    lv_obj_set_y(ui_appItem7, 100);
    lv_obj_clear_flag(ui_appItem7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon7 = lv_img_create(ui_appItem7);
    lv_img_set_src(ui_appIcon7, &ui_img_57185403);
    lv_obj_set_width(ui_appIcon7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon7, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel7 = lv_label_create(ui_appItem7);
    lv_obj_set_width(ui_appLabel7, 80);
    lv_obj_set_height(ui_appLabel7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel7, 0);
    lv_obj_set_y(ui_appLabel7, 70);
    lv_obj_set_align(ui_appLabel7, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel7, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel7, "Maps");
    lv_obj_set_style_text_align(ui_appLabel7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem6 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_appItem6, 100);
    lv_obj_set_height(ui_appItem6, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem6, 100);
    lv_obj_set_y(ui_appItem6, 100);
    lv_obj_clear_flag(ui_appItem6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon6 = lv_img_create(ui_appItem6);
    lv_img_set_src(ui_appIcon6, &ui_img_704780285);
    lv_obj_set_width(ui_appIcon6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon6, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel6 = lv_label_create(ui_appItem6);
    lv_obj_set_width(ui_appLabel6, 80);
    lv_obj_set_height(ui_appLabel6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel6, 0);
    lv_obj_set_y(ui_appLabel6, 70);
    lv_obj_set_align(ui_appLabel6, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel6, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel6, "Mail");
    lv_obj_set_style_text_align(ui_appLabel6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_Panel2);
    lv_obj_set_width(ui_Panel5, 320);
    lv_obj_set_height(ui_Panel5, 300);
    lv_obj_set_x(ui_Panel5, 320);
    lv_obj_set_y(ui_Panel5, 0);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel5, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC);     /// Flags
    lv_obj_set_style_radius(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem3 = lv_obj_create(ui_Panel5);
    lv_obj_set_width(ui_appItem3, 100);
    lv_obj_set_height(ui_appItem3, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem3, 200);
    lv_obj_set_y(ui_appItem3, 0);
    lv_obj_clear_flag(ui_appItem3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon3 = lv_img_create(ui_appItem3);
    lv_img_set_src(ui_appIcon3, &ui_img_1592444385);
    lv_obj_set_width(ui_appIcon3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon3, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel3 = lv_label_create(ui_appItem3);
    lv_obj_set_width(ui_appLabel3, 80);
    lv_obj_set_height(ui_appLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel3, 0);
    lv_obj_set_y(ui_appLabel3, 70);
    lv_obj_set_align(ui_appLabel3, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel3, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel3, "App Store");
    lv_obj_set_style_text_align(ui_appLabel3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem4 = lv_obj_create(ui_Panel5);
    lv_obj_set_width(ui_appItem4, 100);
    lv_obj_set_height(ui_appItem4, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem4, 100);
    lv_obj_set_y(ui_appItem4, 0);
    lv_obj_clear_flag(ui_appItem4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon4 = lv_img_create(ui_appItem4);
    lv_img_set_src(ui_appIcon4, &ui_img_1337163929);
    lv_obj_set_width(ui_appIcon4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon4, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel4 = lv_label_create(ui_appItem4);
    lv_obj_set_width(ui_appLabel4, 80);
    lv_obj_set_height(ui_appLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel4, 0);
    lv_obj_set_y(ui_appLabel4, 70);
    lv_obj_set_align(ui_appLabel4, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel4, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel4, "Wallet");
    lv_obj_set_style_text_align(ui_appLabel4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem5 = lv_obj_create(ui_Panel5);
    lv_obj_set_width(ui_appItem5, 100);
    lv_obj_set_height(ui_appItem5, LV_SIZE_CONTENT);    /// 50
    lv_obj_clear_flag(ui_appItem5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon5 = lv_img_create(ui_appItem5);
    lv_img_set_src(ui_appIcon5, &ui_img_1482800339);
    lv_obj_set_width(ui_appIcon5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon5, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel5 = lv_label_create(ui_appItem5);
    lv_obj_set_width(ui_appLabel5, 80);
    lv_obj_set_height(ui_appLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel5, 0);
    lv_obj_set_y(ui_appLabel5, 70);
    lv_obj_set_align(ui_appLabel5, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel5, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel5, "Camera");
    lv_obj_set_style_text_align(ui_appLabel5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem8 = lv_obj_create(ui_Panel5);
    lv_obj_set_width(ui_appItem8, 100);
    lv_obj_set_height(ui_appItem8, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem8, 0);
    lv_obj_set_y(ui_appItem8, 100);
    lv_obj_clear_flag(ui_appItem8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon8 = lv_img_create(ui_appItem8);
    lv_img_set_src(ui_appIcon8, &ui_img_522094295);
    lv_obj_set_width(ui_appIcon8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon8, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel8 = lv_label_create(ui_appItem8);
    lv_obj_set_width(ui_appLabel8, 80);
    lv_obj_set_height(ui_appLabel8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel8, 0);
    lv_obj_set_y(ui_appLabel8, 70);
    lv_obj_set_align(ui_appLabel8, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel8, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel8, "Photos");
    lv_obj_set_style_text_align(ui_appLabel8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel6 = lv_obj_create(ui_Panel2);
    lv_obj_set_width(ui_Panel6, 320);
    lv_obj_set_height(ui_Panel6, 300);
    lv_obj_set_x(ui_Panel6, 320);
    lv_obj_set_y(ui_Panel6, 0);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel6, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC);     /// Flags
    lv_obj_set_style_radius(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem9 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_appItem9, 100);
    lv_obj_set_height(ui_appItem9, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem9, 200);
    lv_obj_set_y(ui_appItem9, 0);
    lv_obj_clear_flag(ui_appItem9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image25 = lv_img_create(ui_appItem9);
    lv_img_set_src(ui_Image25, &ui_img_623455816);
    lv_obj_set_width(ui_Image25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image25, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image25, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image25, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel9 = lv_label_create(ui_appItem9);
    lv_obj_set_width(ui_appLabel9, 80);
    lv_obj_set_height(ui_appLabel9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel9, 0);
    lv_obj_set_y(ui_appLabel9, 70);
    lv_obj_set_align(ui_appLabel9, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel9, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel9, "Calculator");
    lv_obj_set_style_text_align(ui_appLabel9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem10 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_appItem10, 100);
    lv_obj_set_height(ui_appItem10, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem10, 100);
    lv_obj_set_y(ui_appItem10, 0);
    lv_obj_clear_flag(ui_appItem10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon10 = lv_img_create(ui_appItem10);
    lv_img_set_src(ui_appIcon10, &ui_img_489517470);
    lv_obj_set_width(ui_appIcon10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon10, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon10, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel10 = lv_label_create(ui_appItem10);
    lv_obj_set_width(ui_appLabel10, 80);
    lv_obj_set_height(ui_appLabel10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel10, 0);
    lv_obj_set_y(ui_appLabel10, 70);
    lv_obj_set_align(ui_appLabel10, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel10, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel10, "TV");
    lv_obj_set_style_text_align(ui_appLabel10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem11 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_appItem11, 100);
    lv_obj_set_height(ui_appItem11, LV_SIZE_CONTENT);    /// 50
    lv_obj_clear_flag(ui_appItem11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon11 = lv_img_create(ui_appItem11);
    lv_img_set_src(ui_appIcon11, &ui_img_1000907604);
    lv_obj_set_width(ui_appIcon11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon11, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon11, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel11 = lv_label_create(ui_appItem11);
    lv_obj_set_width(ui_appLabel11, 80);
    lv_obj_set_height(ui_appLabel11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel11, 0);
    lv_obj_set_y(ui_appLabel11, 70);
    lv_obj_set_align(ui_appLabel11, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel11, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel11, "Safari");
    lv_obj_set_style_text_align(ui_appLabel11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appItem12 = lv_obj_create(ui_Panel6);
    lv_obj_set_width(ui_appItem12, 100);
    lv_obj_set_height(ui_appItem12, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_appItem12, 0);
    lv_obj_set_y(ui_appItem12, 100);
    lv_obj_clear_flag(ui_appItem12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_appItem12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appItem12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appItem12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon12 = lv_img_create(ui_appItem12);
    lv_img_set_src(ui_appIcon12, &ui_img_2001447086);
    lv_obj_set_width(ui_appIcon12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_appIcon12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_appIcon12, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appIcon12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_appIcon12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_appLabel12 = lv_label_create(ui_appItem12);
    lv_obj_set_width(ui_appLabel12, 80);
    lv_obj_set_height(ui_appLabel12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_appLabel12, 0);
    lv_obj_set_y(ui_appLabel12, 70);
    lv_obj_set_align(ui_appLabel12, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_appLabel12, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_appLabel12, "Weather");
    lv_obj_set_style_text_align(ui_appLabel12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appPanel = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_appPanel, 320);
    lv_obj_set_height(ui_appPanel, 480);
    lv_obj_set_align(ui_appPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_appPanel, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_appPanel, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_calculatorPanel = lv_obj_create(ui_appPanel);
    lv_obj_set_width(ui_calculatorPanel, 320);
    lv_obj_set_height(ui_calculatorPanel, 480);
    lv_obj_set_align(ui_calculatorPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_calculatorPanel, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_calculatorPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_calculatorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_calculatorPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_calculatorPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_calculatorPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel23 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel23, 60);
    lv_obj_set_height(ui_Panel23, 60);
    lv_obj_set_x(ui_Panel23, 35);
    lv_obj_set_y(ui_Panel23, 90);
    lv_obj_set_align(ui_Panel23, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel23, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel23, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel23, lv_color_hex(0xA5A5A5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel23, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel23, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel23, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel23, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label11 = lv_label_create(ui_Panel23);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "%");
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel24 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel24, 60);
    lv_obj_set_height(ui_Panel24, 60);
    lv_obj_set_x(ui_Panel24, -105);
    lv_obj_set_y(ui_Panel24, 90);
    lv_obj_set_align(ui_Panel24, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel24, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel24, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel24, lv_color_hex(0xA5A5A5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel24, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel24, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel24, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel24, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label19 = lv_label_create(ui_Panel24);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "C");
    lv_obj_set_style_text_font(ui_Label19, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel25 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel25, 60);
    lv_obj_set_height(ui_Panel25, 60);
    lv_obj_set_x(ui_Panel25, 35);
    lv_obj_set_y(ui_Panel25, 160);
    lv_obj_set_align(ui_Panel25, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel25, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel25, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel25, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel25, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel25, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel25, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label20 = lv_label_create(ui_Panel25);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "9");
    lv_obj_set_style_text_font(ui_Label20, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel26 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel26, 60);
    lv_obj_set_height(ui_Panel26, 60);
    lv_obj_set_x(ui_Panel26, 35);
    lv_obj_set_y(ui_Panel26, 230);
    lv_obj_set_align(ui_Panel26, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel26, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel26, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel26, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel26, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel26, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel26, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label21 = lv_label_create(ui_Panel26);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "6");
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel27 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel27, 60);
    lv_obj_set_height(ui_Panel27, 60);
    lv_obj_set_x(ui_Panel27, -105);
    lv_obj_set_y(ui_Panel27, 300);
    lv_obj_set_align(ui_Panel27, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel27, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel27, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel27, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel27, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel27, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel27, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label22 = lv_label_create(ui_Panel27);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "1");
    lv_obj_set_style_text_font(ui_Label22, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel33 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel33, 60);
    lv_obj_set_height(ui_Panel33, 60);
    lv_obj_set_x(ui_Panel33, 105);
    lv_obj_set_y(ui_Panel33, 230);
    lv_obj_set_align(ui_Panel33, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel33, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel33, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel33, lv_color_hex(0xDEA320), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel33, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel33, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel33, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel33, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel33, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label27 = lv_label_create(ui_Panel33);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "-");
    lv_obj_set_style_text_font(ui_Label27, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel29 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel29, 60);
    lv_obj_set_height(ui_Panel29, 60);
    lv_obj_set_x(ui_Panel29, 105);
    lv_obj_set_y(ui_Panel29, 90);
    lv_obj_set_align(ui_Panel29, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel29, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel29, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel29, lv_color_hex(0xDEA320), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel29, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel29, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel29, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel29, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel29, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label23 = lv_label_create(ui_Panel29);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "/");
    lv_obj_set_style_text_font(ui_Label23, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel30 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel30, 60);
    lv_obj_set_height(ui_Panel30, 60);
    lv_obj_set_x(ui_Panel30, -105);
    lv_obj_set_y(ui_Panel30, 160);
    lv_obj_set_align(ui_Panel30, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel30, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel30, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel30, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel30, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel30, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel30, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label24 = lv_label_create(ui_Panel30);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, "7");
    lv_obj_set_style_text_font(ui_Label24, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel31 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel31, 60);
    lv_obj_set_height(ui_Panel31, 60);
    lv_obj_set_x(ui_Panel31, 105);
    lv_obj_set_y(ui_Panel31, 160);
    lv_obj_set_align(ui_Panel31, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel31, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel31, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel31, lv_color_hex(0xDEA320), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel31, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel31, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel31, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel31, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel31, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label25 = lv_label_create(ui_Panel31);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label25, "X");
    lv_obj_set_style_text_font(ui_Label25, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel32 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel32, 60);
    lv_obj_set_height(ui_Panel32, 60);
    lv_obj_set_x(ui_Panel32, -35);
    lv_obj_set_y(ui_Panel32, 230);
    lv_obj_set_align(ui_Panel32, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel32, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel32, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel32, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel32, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel32, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel32, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label26 = lv_label_create(ui_Panel32);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label26, "5");
    lv_obj_set_style_text_font(ui_Label26, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel34 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel34, 60);
    lv_obj_set_height(ui_Panel34, 60);
    lv_obj_set_x(ui_Panel34, 35);
    lv_obj_set_y(ui_Panel34, 300);
    lv_obj_set_align(ui_Panel34, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel34, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel34, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel34, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel34, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel34, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel34, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label28 = lv_label_create(ui_Panel34);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label28, "3");
    lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel35 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel35, 60);
    lv_obj_set_height(ui_Panel35, 60);
    lv_obj_set_x(ui_Panel35, 105);
    lv_obj_set_y(ui_Panel35, 300);
    lv_obj_set_align(ui_Panel35, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel35, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel35, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel35, lv_color_hex(0xDEA320), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel35, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel35, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel35, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel35, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel35, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label29 = lv_label_create(ui_Panel35);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label29, "+");
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_phoneNumber1 = lv_textarea_create(ui_calculatorPanel);
    lv_obj_set_width(ui_phoneNumber1, 250);
    lv_obj_set_height(ui_phoneNumber1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_phoneNumber1, 0);
    lv_obj_set_y(ui_phoneNumber1, -165);
    lv_obj_set_align(ui_phoneNumber1, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_phoneNumber1, "1024");
    lv_textarea_set_one_line(ui_phoneNumber1, true);
    lv_obj_set_style_text_align(ui_phoneNumber1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_phoneNumber1, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_phoneNumber1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_phoneNumber1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_phoneNumber1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_phoneNumber1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel28 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel28, 60);
    lv_obj_set_height(ui_Panel28, 60);
    lv_obj_set_x(ui_Panel28, 105);
    lv_obj_set_y(ui_Panel28, 370);
    lv_obj_set_align(ui_Panel28, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel28, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel28, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel28, lv_color_hex(0xDEA320), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel28, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel28, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel28, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel28, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel28, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label30 = lv_label_create(ui_Panel28);
    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label30, "=");
    lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel36 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel36, 60);
    lv_obj_set_height(ui_Panel36, 60);
    lv_obj_set_x(ui_Panel36, -35);
    lv_obj_set_y(ui_Panel36, 300);
    lv_obj_set_align(ui_Panel36, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel36, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel36, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel36, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel36, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel36, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel36, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label31 = lv_label_create(ui_Panel36);
    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label31, "2");
    lv_obj_set_style_text_font(ui_Label31, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel37 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel37, 60);
    lv_obj_set_height(ui_Panel37, 60);
    lv_obj_set_x(ui_Panel37, -105);
    lv_obj_set_y(ui_Panel37, 230);
    lv_obj_set_align(ui_Panel37, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel37, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel37, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel37, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel37, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel37, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel37, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label32 = lv_label_create(ui_Panel37);
    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label32, "4");
    lv_obj_set_style_text_font(ui_Label32, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel38 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel38, 60);
    lv_obj_set_height(ui_Panel38, 60);
    lv_obj_set_x(ui_Panel38, -35);
    lv_obj_set_y(ui_Panel38, 160);
    lv_obj_set_align(ui_Panel38, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel38, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel38, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel38, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel38, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel38, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel38, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label33 = lv_label_create(ui_Panel38);
    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label33, "8");
    lv_obj_set_style_text_font(ui_Label33, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel39 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel39, 60);
    lv_obj_set_height(ui_Panel39, 60);
    lv_obj_set_x(ui_Panel39, -35);
    lv_obj_set_y(ui_Panel39, 90);
    lv_obj_set_align(ui_Panel39, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel39, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel39, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel39, lv_color_hex(0xA5A5A5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel39, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel39, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel39, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel39, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel39, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label34 = lv_label_create(ui_Panel39);
    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label34, "^");
    lv_obj_set_style_text_font(ui_Label34, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel40 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel40, 135);
    lv_obj_set_height(ui_Panel40, 60);
    lv_obj_set_x(ui_Panel40, -72);
    lv_obj_set_y(ui_Panel40, 370);
    lv_obj_set_align(ui_Panel40, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel40, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel40, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel40, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel40, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel40, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel40, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label35 = lv_label_create(ui_Panel40);
    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label35, -35);
    lv_obj_set_y(ui_Label35, 0);
    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label35, "0");
    lv_obj_set_style_text_font(ui_Label35, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel41 = lv_obj_create(ui_calculatorPanel);
    lv_obj_set_width(ui_Panel41, 60);
    lv_obj_set_height(ui_Panel41, 60);
    lv_obj_set_x(ui_Panel41, 35);
    lv_obj_set_y(ui_Panel41, 370);
    lv_obj_set_align(ui_Panel41, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel41, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel41, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel41, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel41, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel41, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel41, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label36 = lv_label_create(ui_Panel41);
    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label36, ".");
    lv_obj_set_style_text_font(ui_Label36, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_phonePanel = lv_obj_create(ui_appPanel);
    lv_obj_set_width(ui_phonePanel, 320);
    lv_obj_set_height(ui_phonePanel, 480);
    lv_obj_set_align(ui_phonePanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_phonePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_phonePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_phonePanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_phonePanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_phonePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel9 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel9, 60);
    lv_obj_set_height(ui_Panel9, 60);
    lv_obj_set_x(ui_Panel9, 0);
    lv_obj_set_y(ui_Panel9, 90);
    lv_obj_set_align(ui_Panel9, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel9, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel9, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel9, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label7 = lv_label_create(ui_Panel9);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "2");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel7 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel7, 60);
    lv_obj_set_height(ui_Panel7, 60);
    lv_obj_set_x(ui_Panel7, -80);
    lv_obj_set_y(ui_Panel7, 90);
    lv_obj_set_align(ui_Panel7, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel7, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel7, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel7, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label6 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "1");
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel11 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel11, 60);
    lv_obj_set_height(ui_Panel11, 60);
    lv_obj_set_x(ui_Panel11, 0);
    lv_obj_set_y(ui_Panel11, 160);
    lv_obj_set_align(ui_Panel11, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel11, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel11, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel11, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label8 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "5");
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel12 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel12, 60);
    lv_obj_set_height(ui_Panel12, 60);
    lv_obj_set_x(ui_Panel12, 0);
    lv_obj_set_y(ui_Panel12, 230);
    lv_obj_set_align(ui_Panel12, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel12, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel12, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel12, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label9 = lv_label_create(ui_Panel12);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "8");
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel13 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel13, 60);
    lv_obj_set_height(ui_Panel13, 60);
    lv_obj_set_x(ui_Panel13, -80);
    lv_obj_set_y(ui_Panel13, 300);
    lv_obj_set_align(ui_Panel13, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel13, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel13, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel13, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel13, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel13, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label10 = lv_label_create(ui_Panel13);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "*");
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel14 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel14, 60);
    lv_obj_set_height(ui_Panel14, 60);
    lv_obj_set_x(ui_Panel14, 0);
    lv_obj_set_y(ui_Panel14, 370);
    lv_obj_set_align(ui_Panel14, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel14, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel14, lv_color_hex(0x17A847), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel14, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel14, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel14, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Image23 = lv_img_create(ui_Panel14);
    lv_img_set_src(ui_Image23, &ui_img_1276322231);
    lv_obj_set_width(ui_Image23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image23, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image23, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image23, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel15 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel15, 60);
    lv_obj_set_height(ui_Panel15, 60);
    lv_obj_set_x(ui_Panel15, 80);
    lv_obj_set_y(ui_Panel15, 90);
    lv_obj_set_align(ui_Panel15, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel15, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel15, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel15, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel15, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel15, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel15, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label12 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "3");
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel16 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel16, 60);
    lv_obj_set_height(ui_Panel16, 60);
    lv_obj_set_x(ui_Panel16, -80);
    lv_obj_set_y(ui_Panel16, 160);
    lv_obj_set_align(ui_Panel16, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel16, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel16, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel16, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel16, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel16, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label13 = lv_label_create(ui_Panel16);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "4");
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel17 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel17, 60);
    lv_obj_set_height(ui_Panel17, 60);
    lv_obj_set_x(ui_Panel17, 80);
    lv_obj_set_y(ui_Panel17, 160);
    lv_obj_set_align(ui_Panel17, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel17, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel17, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel17, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel17, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel17, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label14 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "6");
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel18 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel18, 60);
    lv_obj_set_height(ui_Panel18, 60);
    lv_obj_set_x(ui_Panel18, -80);
    lv_obj_set_y(ui_Panel18, 230);
    lv_obj_set_align(ui_Panel18, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel18, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel18, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel18, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel18, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel18, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel18, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label15 = lv_label_create(ui_Panel18);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "7");
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel19 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel19, 60);
    lv_obj_set_height(ui_Panel19, 60);
    lv_obj_set_x(ui_Panel19, 80);
    lv_obj_set_y(ui_Panel19, 230);
    lv_obj_set_align(ui_Panel19, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel19, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel19, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel19, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel19, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel19, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel19, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label16 = lv_label_create(ui_Panel19);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "9");
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel20 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel20, 60);
    lv_obj_set_height(ui_Panel20, 60);
    lv_obj_set_x(ui_Panel20, 0);
    lv_obj_set_y(ui_Panel20, 300);
    lv_obj_set_align(ui_Panel20, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel20, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel20, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel20, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel20, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel20, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel20, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label17 = lv_label_create(ui_Panel20);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "0");
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel21 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel21, 60);
    lv_obj_set_height(ui_Panel21, 60);
    lv_obj_set_x(ui_Panel21, 80);
    lv_obj_set_y(ui_Panel21, 300);
    lv_obj_set_align(ui_Panel21, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel21, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel21, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel21, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel21, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel21, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel21, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label18 = lv_label_create(ui_Panel21);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "#");
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel22 = lv_obj_create(ui_phonePanel);
    lv_obj_set_width(ui_Panel22, 60);
    lv_obj_set_height(ui_Panel22, 60);
    lv_obj_set_x(ui_Panel22, 80);
    lv_obj_set_y(ui_Panel22, 370);
    lv_obj_set_align(ui_Panel22, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel22, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel22, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel22, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Panel22, 35, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Panel22, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel22, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Image24 = lv_img_create(ui_Panel22);
    lv_img_set_src(ui_Image24, &ui_img_back_png);
    lv_obj_set_width(ui_Image24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image24, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image24, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image24, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_phoneNumber = lv_textarea_create(ui_phonePanel);
    lv_obj_set_width(ui_phoneNumber, 250);
    lv_obj_set_height(ui_phoneNumber, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_phoneNumber, 0);
    lv_obj_set_y(ui_phoneNumber, -165);
    lv_obj_set_align(ui_phoneNumber, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_phoneNumber, "045");
    lv_textarea_set_one_line(ui_phoneNumber, true);
    lv_obj_set_style_text_align(ui_phoneNumber, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_phoneNumber, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_phoneNumber, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_phoneNumber, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_phoneNumber, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_phoneNumber, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lockscreenPanel = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_lockscreenPanel, 320);
    lv_obj_set_height(ui_lockscreenPanel, 480);
    lv_obj_set_align(ui_lockscreenPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_lockscreenPanel, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_lockscreenPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lockscreenPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lockscreenPanel, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_lockscreenPanel, &ui_img_1950924084, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_lockscreenPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_lockscreenPanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_lockscreenPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dateText = lv_label_create(ui_lockscreenPanel);
    lv_obj_set_width(ui_dateText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dateText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dateText, 1);
    lv_obj_set_y(ui_dateText, 55);
    lv_obj_set_align(ui_dateText, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_dateText, "Saturday, 05 November");
    lv_obj_set_style_text_color(ui_dateText, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dateText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dateText, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_hour1 = lv_img_create(ui_lockscreenPanel);
    lv_img_set_src(ui_hour1, &ui_img_one_64_png);
    lv_obj_set_width(ui_hour1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_hour1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_hour1, -75);
    lv_obj_set_y(ui_hour1, 75);
    lv_obj_set_align(ui_hour1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_hour1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_hour1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_hour1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_hour1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_hour2 = lv_img_create(ui_lockscreenPanel);
    lv_img_set_src(ui_hour2, &ui_img_two_64_png);
    lv_obj_set_width(ui_hour2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_hour2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_hour2, -30);
    lv_obj_set_y(ui_hour2, 75);
    lv_obj_set_align(ui_hour2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_hour2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_hour2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_hour2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_hour2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeSep = lv_label_create(ui_lockscreenPanel);
    lv_obj_set_width(ui_timeSep, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeSep, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeSep, 0);
    lv_obj_set_y(ui_timeSep, 78);
    lv_obj_set_align(ui_timeSep, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_timeSep, ":");
    lv_obj_set_style_text_color(ui_timeSep, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_timeSep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_timeSep, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_minute1 = lv_img_create(ui_lockscreenPanel);
    lv_img_set_src(ui_minute1, &ui_img_four_64_png);
    lv_obj_set_width(ui_minute1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_minute1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_minute1, 30);
    lv_obj_set_y(ui_minute1, 75);
    lv_obj_set_align(ui_minute1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_minute1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_minute1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_minute1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_minute1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_minute2 = lv_img_create(ui_lockscreenPanel);
    lv_img_set_src(ui_minute2, &ui_img_five_64_png);
    lv_obj_set_width(ui_minute2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_minute2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_minute2, 70);
    lv_obj_set_y(ui_minute2, 75);
    lv_obj_set_align(ui_minute2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_minute2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_minute2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_minute2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_minute2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_musicPanel = lv_obj_create(ui_lockscreenPanel);
    lv_obj_set_width(ui_musicPanel, 300);
    lv_obj_set_height(ui_musicPanel, LV_SIZE_CONTENT);    /// 0
    lv_obj_set_x(ui_musicPanel, 0);
    lv_obj_set_y(ui_musicPanel, 250);
    lv_obj_set_align(ui_musicPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_musicPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_musicPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_musicPanel, lv_color_hex(0x9C0052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_musicPanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_musicPanel, lv_color_hex(0x001C62), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_musicPanel, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_musicPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_musicProgress = lv_bar_create(ui_musicPanel);
    lv_bar_set_value(ui_musicProgress, 25, LV_ANIM_OFF);
    lv_obj_set_width(ui_musicProgress, 200);
    lv_obj_set_height(ui_musicProgress, 5);
    lv_obj_set_x(ui_musicProgress, 0);
    lv_obj_set_y(ui_musicProgress, 40);
    lv_obj_set_align(ui_musicProgress, LV_ALIGN_TOP_MID);

    lv_obj_set_style_radius(ui_musicProgress, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_musicProgress, lv_color_hex(0xB2B5B2), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_musicProgress, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_musicInfo = lv_label_create(ui_musicPanel);
    lv_obj_set_width(ui_musicInfo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicInfo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicInfo, 41);
    lv_obj_set_y(ui_musicInfo, 1);
    lv_label_set_text(ui_musicInfo, "Anti-Hero\nTaylor Swift");
    lv_obj_set_style_text_color(ui_musicInfo, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_musicInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_musicPlay = lv_img_create(ui_musicPanel);
    lv_img_set_src(ui_musicPlay, &ui_img_play_png);
    lv_obj_set_width(ui_musicPlay, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicPlay, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicPlay, 0);
    lv_obj_set_y(ui_musicPlay, 55);
    lv_obj_set_align(ui_musicPlay, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_musicPlay, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_musicPlay, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_musicPrevious = lv_img_create(ui_musicPanel);
    lv_img_set_src(ui_musicPrevious, &ui_img_previous_png);
    lv_obj_set_width(ui_musicPrevious, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicPrevious, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicPrevious, -70);
    lv_obj_set_y(ui_musicPrevious, 55);
    lv_obj_set_align(ui_musicPrevious, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_musicPrevious, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_musicPrevious, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_musicNext = lv_img_create(ui_musicPanel);
    lv_img_set_src(ui_musicNext, &ui_img_next_png);
    lv_obj_set_width(ui_musicNext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicNext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicNext, 70);
    lv_obj_set_y(ui_musicNext, 55);
    lv_obj_set_align(ui_musicNext, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_musicNext, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_musicNext, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_musicTime = lv_label_create(ui_musicPanel);
    lv_obj_set_width(ui_musicTime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicTime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicTime, 0);
    lv_obj_set_y(ui_musicTime, 35);
    lv_label_set_text(ui_musicTime, "1:23");

    ui_musicAlbum = lv_img_create(ui_musicPanel);
    lv_img_set_src(ui_musicAlbum, &ui_img_eight_32_png);
    lv_obj_set_width(ui_musicAlbum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicAlbum, LV_SIZE_CONTENT);    /// 1
    lv_obj_add_flag(ui_musicAlbum, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_musicAlbum, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_musicLength = lv_label_create(ui_musicPanel);
    lv_obj_set_width(ui_musicLength, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicLength, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicLength, 0);
    lv_obj_set_y(ui_musicLength, 35);
    lv_obj_set_align(ui_musicLength, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_musicLength, "4:57");

    ui_Image20 = lv_img_create(ui_lockscreenPanel);
    lv_img_set_src(ui_Image20, &ui_img_204030930);
    lv_obj_set_width(ui_Image20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image20, -90);
    lv_obj_set_y(ui_Image20, 400);
    lv_obj_set_align(ui_Image20, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image20, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image20, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image20, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image20, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image20, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image20, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image20, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image20, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image20, 16, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image20, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image20, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image20, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image20, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image20, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image20, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui_Image20, 16, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Image20, lv_color_hex(0xE2E2E2), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Image20, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_color(ui_Image20, lv_color_hex(0xE2E2E2), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_opa(ui_Image20, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_width(ui_Image20, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_pad(ui_Image20, 0, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui_Image20, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Image20, 200, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Image21 = lv_img_create(ui_lockscreenPanel);
    lv_img_set_src(ui_Image21, &ui_img_1918312013);
    lv_obj_set_width(ui_Image21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image21, 90);
    lv_obj_set_y(ui_Image21, 400);
    lv_obj_set_align(ui_Image21, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image21, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image21, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image21, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image21, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image21, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image21, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image21, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image21, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image21, 16, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image21, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image21, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image21, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image21, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image21, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image21, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui_Image21, 16, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_Image21, lv_color_hex(0xE2E2E2), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Image21, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_color(ui_Image21, lv_color_hex(0xE2E2E2), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_opa(ui_Image21, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_width(ui_Image21, 10, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_pad(ui_Image21, 0, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor(ui_Image21, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Image21, 200, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_todayPanel = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_todayPanel, 320);
    lv_obj_set_height(ui_todayPanel, 480);
    lv_obj_set_x(ui_todayPanel, -320);
    lv_obj_set_y(ui_todayPanel, 0);
    lv_obj_set_align(ui_todayPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_todayPanel, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_FLOATING);     /// Flags
    lv_obj_clear_flag(ui_todayPanel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_scrollbar_mode(ui_todayPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_todayPanel, LV_DIR_VER);
    lv_obj_set_style_radius(ui_todayPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_todayPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_todayPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_todayPanel, &ui_img_1950924084, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_todayPanel, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_todayPanel, 240, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_todayPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_batteryPanel = lv_obj_create(ui_todayPanel);
    lv_obj_set_width(ui_batteryPanel, 300);
    lv_obj_set_height(ui_batteryPanel, LV_SIZE_CONTENT);    /// 0
    lv_obj_set_x(ui_batteryPanel, 0);
    lv_obj_set_y(ui_batteryPanel, 50);
    lv_obj_set_align(ui_batteryPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_batteryPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_batteryPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_batteryPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_batteryPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_batteryPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_battery1 = lv_arc_create(ui_batteryPanel);
    lv_obj_set_width(ui_battery1, 60);
    lv_obj_set_height(ui_battery1, 60);
    lv_obj_set_x(ui_battery1, -105);
    lv_obj_set_y(ui_battery1, 0);
    lv_obj_set_align(ui_battery1, LV_ALIGN_TOP_MID);
    lv_arc_set_value(ui_battery1, 50);
    lv_arc_set_bg_angles(ui_battery1, 0, 360);
    lv_arc_set_rotation(ui_battery1, 270);
    lv_obj_set_style_bg_img_src(ui_battery1, &ui_img_smartphone_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_battery1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_battery1, lv_color_hex(0x2CEC37), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_battery1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_battery1, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_battery1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_battery1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_batteryPanel);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -105);
    lv_obj_set_y(ui_Label1, 70);
    lv_obj_set_align(ui_Label1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label1, "50%");

    ui_battery2 = lv_arc_create(ui_batteryPanel);
    lv_obj_set_width(ui_battery2, 60);
    lv_obj_set_height(ui_battery2, 60);
    lv_obj_set_x(ui_battery2, -35);
    lv_obj_set_y(ui_battery2, 0);
    lv_obj_set_align(ui_battery2, LV_ALIGN_TOP_MID);
    lv_arc_set_value(ui_battery2, 75);
    lv_arc_set_bg_angles(ui_battery2, 0, 360);
    lv_arc_set_rotation(ui_battery2, 270);
    lv_obj_set_style_bg_img_src(ui_battery2, &ui_img_smartphone_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_battery2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_battery2, lv_color_hex(0x2CEC37), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_battery2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_battery2, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_battery2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_battery2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_batteryPanel);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -35);
    lv_obj_set_y(ui_Label2, 70);
    lv_obj_set_align(ui_Label2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label2, "75%");

    ui_battery3 = lv_arc_create(ui_batteryPanel);
    lv_obj_set_width(ui_battery3, 60);
    lv_obj_set_height(ui_battery3, 60);
    lv_obj_set_x(ui_battery3, 35);
    lv_obj_set_y(ui_battery3, 0);
    lv_obj_set_align(ui_battery3, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_battery3, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_bg_angles(ui_battery3, 0, 360);
    lv_arc_set_rotation(ui_battery3, 270);
    lv_obj_set_style_arc_width(ui_battery3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_battery3, lv_color_hex(0x2CEC37), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_battery3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_battery3, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_battery3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_battery3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_battery4 = lv_arc_create(ui_batteryPanel);
    lv_obj_set_width(ui_battery4, 60);
    lv_obj_set_height(ui_battery4, 60);
    lv_obj_set_x(ui_battery4, 105);
    lv_obj_set_y(ui_battery4, 0);
    lv_obj_set_align(ui_battery4, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_battery4, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_bg_angles(ui_battery4, 0, 360);
    lv_arc_set_rotation(ui_battery4, 270);
    lv_obj_set_style_arc_width(ui_battery4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_battery4, lv_color_hex(0x2CEC37), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_battery4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_battery4, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_battery4, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_battery4, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_weatherPanel = lv_obj_create(ui_todayPanel);
    lv_obj_set_width(ui_weatherPanel, 140);
    lv_obj_set_height(ui_weatherPanel, 140);
    lv_obj_set_x(ui_weatherPanel, -77);
    lv_obj_set_y(ui_weatherPanel, 172);
    lv_obj_set_align(ui_weatherPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_weatherPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_weatherPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_weatherPanel, lv_color_hex(0x2CAEEC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_weatherPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_weatherPanel, lv_color_hex(0x172268), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_weatherPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_weatherPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_weatherPanel, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_weatherPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weatherCity = lv_label_create(ui_weatherPanel);
    lv_obj_set_width(ui_weatherCity, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherCity, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherCity, 0);
    lv_obj_set_y(ui_weatherCity, -2);
    lv_label_set_text(ui_weatherCity, "Accra");

    ui_weatherTemp = lv_label_create(ui_weatherPanel);
    lv_obj_set_width(ui_weatherTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherTemp, 0);
    lv_obj_set_y(ui_weatherTemp, 15);
    lv_label_set_text(ui_weatherTemp, "27°C");
    lv_obj_set_style_text_font(ui_weatherTemp, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weatherIcon = lv_img_create(ui_weatherPanel);
    lv_img_set_src(ui_weatherIcon, &ui_img_1127648905);
    lv_obj_set_width(ui_weatherIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherIcon, 0);
    lv_obj_set_y(ui_weatherIcon, 52);
    lv_obj_add_flag(ui_weatherIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_weatherIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_weatherInfo = lv_label_create(ui_weatherPanel);
    lv_obj_set_width(ui_weatherInfo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherInfo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherInfo, 0);
    lv_obj_set_y(ui_weatherInfo, 80);
    lv_label_set_text(ui_weatherInfo, "Partly Cloudy\nH: 31° L:23°");

    ui_weatherPanel1 = lv_obj_create(ui_todayPanel);
    lv_obj_set_width(ui_weatherPanel1, 140);
    lv_obj_set_height(ui_weatherPanel1, 140);
    lv_obj_set_x(ui_weatherPanel1, 77);
    lv_obj_set_y(ui_weatherPanel1, 172);
    lv_obj_set_align(ui_weatherPanel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_weatherPanel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_weatherPanel1, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_weatherPanel1, lv_color_hex(0x2E2B3D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_weatherPanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_weatherPanel1, lv_color_hex(0x100F19), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_weatherPanel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_weatherPanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_weatherPanel1, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_weatherPanel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weatherCity1 = lv_label_create(ui_weatherPanel1);
    lv_obj_set_width(ui_weatherCity1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherCity1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherCity1, 0);
    lv_obj_set_y(ui_weatherCity1, -2);
    lv_label_set_text(ui_weatherCity1, "Nairobi");

    ui_weatherTemp1 = lv_label_create(ui_weatherPanel1);
    lv_obj_set_width(ui_weatherTemp1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherTemp1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherTemp1, 0);
    lv_obj_set_y(ui_weatherTemp1, 15);
    lv_label_set_text(ui_weatherTemp1, "16°C");
    lv_obj_set_style_text_font(ui_weatherTemp1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weatherIcon1 = lv_img_create(ui_weatherPanel1);
    lv_img_set_src(ui_weatherIcon1, &ui_img_1127648905);
    lv_obj_set_width(ui_weatherIcon1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherIcon1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherIcon1, 0);
    lv_obj_set_y(ui_weatherIcon1, 52);
    lv_obj_add_flag(ui_weatherIcon1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_weatherIcon1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_weatherInfo1 = lv_label_create(ui_weatherPanel1);
    lv_obj_set_width(ui_weatherInfo1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherInfo1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherInfo1, 0);
    lv_obj_set_y(ui_weatherInfo1, 80);
    lv_label_set_text(ui_weatherInfo1, "Partly Cloudy\nH: 23° L:11°");

    ui_controlListener = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_controlListener, 100);
    lv_obj_set_height(ui_controlListener, 50);
    lv_obj_set_align(ui_controlListener, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_controlListener, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_controlListener, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_controlListener, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_controlListener, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_controlListener, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_controlCenter = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_controlCenter, 320);
    lv_obj_set_height(ui_controlCenter, 480);
    lv_obj_set_x(ui_controlCenter, 0);
    lv_obj_set_y(ui_controlCenter, -480);
    lv_obj_set_align(ui_controlCenter, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_controlCenter, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_style_radius(ui_controlCenter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_controlCenter, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_controlCenter, 245, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel10 = lv_obj_create(ui_controlCenter);
    lv_obj_set_width(ui_Panel10, 120);
    lv_obj_set_height(ui_Panel10, 120);
    lv_obj_set_x(ui_Panel10, 65);
    lv_obj_set_y(ui_Panel10, 50);
    lv_obj_set_align(ui_Panel10, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel10, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel10, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Panel10);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 0);
    lv_obj_set_y(ui_Label4, 20);
    lv_obj_set_align(ui_Label4, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label4, "Anti-Hero");

    ui_Label3 = lv_label_create(ui_Panel10);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 40);
    lv_obj_set_align(ui_Label3, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label3, "Taylor Swift");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xBCBCBC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_Panel10);
    lv_img_set_src(ui_Image2, &ui_img_previous_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image2, -35);
    lv_obj_set_y(ui_Image2, 0);
    lv_obj_set_align(ui_Image2, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image2, 150);

    ui_Image1 = lv_img_create(ui_Panel10);
    lv_img_set_src(ui_Image1, &ui_img_play_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image1, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 150);

    ui_Image3 = lv_img_create(ui_Panel10);
    lv_img_set_src(ui_Image3, &ui_img_next_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image3, 35);
    lv_obj_set_y(ui_Image3, 0);
    lv_obj_set_align(ui_Image3, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image3, 180);

    ui_Panel1 = lv_obj_create(ui_controlCenter);
    lv_obj_set_width(ui_Panel1, 120);
    lv_obj_set_height(ui_Panel1, 120);
    lv_obj_set_x(ui_Panel1, -65);
    lv_obj_set_y(ui_Panel1, 50);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image6 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_Image6, &ui_img_1139252462);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image6, -28);
    lv_obj_set_y(ui_Image6, -28);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image6, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image6, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image6, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image6, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image6, 16, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image6, lv_color_hex(0xC9A520), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image6, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image6, lv_color_hex(0xC9A520), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image6, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image6, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image6, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Image4 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_Image4, &ui_img_1596273026);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image4, 28);
    lv_obj_set_y(ui_Image4, -28);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image4, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image4, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image4, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image4, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image4, 16, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image4, lv_color_hex(0x1ED439), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image4, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image4, lv_color_hex(0x1ED439), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image4, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image4, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image4, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Image5 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_Image5, &ui_img_1837376705);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image5, -28);
    lv_obj_set_y(ui_Image5, 28);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image5, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image5, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image5, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image5, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image5, 16, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image5, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image5, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image5, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image5, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image5, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image5, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Image7 = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_Image7, &ui_img_878056124);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image7, 28);
    lv_obj_set_y(ui_Image7, 28);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image7, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image7, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image7, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image7, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image7, 16, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image7, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image7, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image7, lv_color_hex(0x3D0EC9), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image7, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image7, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image7, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Slider2 = lv_slider_create(ui_controlCenter);
    lv_slider_set_range(ui_Slider2, 1, 255);
    lv_slider_set_value(ui_Slider2, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider2, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider2, 55);
    lv_obj_set_height(ui_Slider2, 120);
    lv_obj_set_x(ui_Slider2, 33);
    lv_obj_set_y(ui_Slider2, 180);
    lv_obj_set_align(ui_Slider2, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Slider2, LV_OBJ_FLAG_GESTURE_BUBBLE);      /// Flags
    lv_obj_set_style_radius(ui_Slider2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider2, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Slider2, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Image11 = lv_img_create(ui_Slider2);
    lv_img_set_src(ui_Image11, &ui_img_1008068399);
    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image11, 0);
    lv_obj_set_y(ui_Image11, -10);
    lv_obj_set_align(ui_Image11, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_Image11, lv_color_hex(0x313031), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_Image11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider1 = lv_slider_create(ui_controlCenter);
    lv_slider_set_value(ui_Slider1, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider1, 55);
    lv_obj_set_height(ui_Slider1, 120);
    lv_obj_set_x(ui_Slider1, 97);
    lv_obj_set_y(ui_Slider1, 15);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Slider1, LV_OBJ_FLAG_GESTURE_BUBBLE);      /// Flags
    lv_obj_set_style_radius(ui_Slider1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Slider1, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Image15 = lv_img_create(ui_Slider1);
    lv_img_set_src(ui_Image15, &ui_img_2139845718);
    lv_obj_set_width(ui_Image15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image15, 0);
    lv_obj_set_y(ui_Image15, -10);
    lv_obj_set_align(ui_Image15, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Image15, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image15, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_Image15, lv_color_hex(0x313031), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_Image15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image9 = lv_img_create(ui_controlCenter);
    lv_img_set_src(ui_Image9, &ui_img_352497594);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image9, -99);
    lv_obj_set_y(ui_Image9, 194);
    lv_obj_set_align(ui_Image9, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image9, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image9, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image9, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image9, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image9, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image9, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image9, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image9, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image9, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image9, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui_Image9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui_Image9, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Image10 = lv_img_create(ui_controlCenter);
    lv_img_set_src(ui_Image10, &ui_img_1614244405);
    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image10, -33);
    lv_obj_set_y(ui_Image10, 194);
    lv_obj_set_align(ui_Image10, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image10, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image10, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image10, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image10, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image10, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image10, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image10, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image10, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image10, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image10, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui_Image10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui_Image10, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Panel3 = lv_obj_create(ui_controlCenter);
    lv_obj_set_width(ui_Panel3, 120);
    lv_obj_set_height(ui_Panel3, 50);
    lv_obj_set_x(ui_Panel3, -65);
    lv_obj_set_y(ui_Panel3, 251);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel3, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image8 = lv_img_create(ui_Panel3);
    lv_img_set_src(ui_Image8, &ui_img_1103371374);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image8, -27);
    lv_obj_set_y(ui_Image8, 0);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image8, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image8, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image8, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image8, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image8, 16, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image8, lv_color_hex(0x280EA8), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image8, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image8, lv_color_hex(0x280EA8), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image8, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image8, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image8, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label5 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 50);
    lv_obj_set_y(ui_Label5, 0);
    lv_obj_set_align(ui_Label5, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label5, "Focus");

    ui_Image16 = lv_img_create(ui_controlCenter);
    lv_img_set_src(ui_Image16, &ui_img_1983457674);
    lv_obj_set_width(ui_Image16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image16, -99);
    lv_obj_set_y(ui_Image16, 325);
    lv_obj_set_align(ui_Image16, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image16, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image16, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image16, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image16, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image16, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image16, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image16, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image16, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image16, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image16, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image16, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image16, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image16, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui_Image16, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui_Image16, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Image17 = lv_img_create(ui_controlCenter);
    lv_img_set_src(ui_Image17, &ui_img_204030930);
    lv_obj_set_width(ui_Image17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image17, -33);
    lv_obj_set_y(ui_Image17, 325);
    lv_obj_set_align(ui_Image17, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image17, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image17, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image17, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image17, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image17, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image17, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image17, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image17, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image17, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image17, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image17, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image17, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image17, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image17, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui_Image17, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui_Image17, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Image18 = lv_img_create(ui_controlCenter);
    lv_img_set_src(ui_Image18, &ui_img_350297007);
    lv_obj_set_width(ui_Image18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image18, 33);
    lv_obj_set_y(ui_Image18, 325);
    lv_obj_set_align(ui_Image18, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image18, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image18, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image18, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image18, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image18, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image18, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image18, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image18, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image18, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image18, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image18, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image18, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image18, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image18, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image18, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui_Image18, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui_Image18, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Image19 = lv_img_create(ui_controlCenter);
    lv_img_set_src(ui_Image19, &ui_img_1918312013);
    lv_obj_set_width(ui_Image19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image19, 99);
    lv_obj_set_y(ui_Image19, 325);
    lv_obj_set_align(ui_Image19, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image19, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image19, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Image19, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Image19, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Image19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Image19, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Image19, lv_color_hex(0x101010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Image19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Image19, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Image19, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_Image19, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Image19, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Image19, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_color(ui_Image19, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_opa(ui_Image19, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_width(ui_Image19, 10, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_outline_pad(ui_Image19, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui_Image19, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor_opa(ui_Image19, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_dynamicIsland = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_dynamicIsland, 100);
    lv_obj_set_height(ui_dynamicIsland, 30);
    lv_obj_set_x(ui_dynamicIsland, 0);
    lv_obj_set_y(ui_dynamicIsland, 10);
    lv_obj_set_align(ui_dynamicIsland, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_dynamicIsland, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dynamicIsland, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dynamicIsland, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dynamicIsland, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_dynamicIsland, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image22 = lv_img_create(ui_dynamicIsland);
    lv_img_set_src(ui_Image22, &ui_img_1597219731);
    lv_obj_set_width(ui_Image22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image22, 0);
    lv_obj_set_y(ui_Image22, 30);
    lv_obj_set_align(ui_Image22, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Image22, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image22, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_homePill = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_homePill, 80);
    lv_obj_set_height(ui_homePill, 5);
    lv_obj_set_x(ui_homePill, 0);
    lv_obj_set_y(ui_homePill, -10);
    lv_obj_set_align(ui_homePill, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_homePill, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_homePill, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homePill, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_homePill, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_homeListener = lv_obj_create(ui_homeScreen);
    lv_obj_set_width(ui_homeListener, 150);
    lv_obj_set_height(ui_homeListener, 30);
    lv_obj_set_align(ui_homeListener, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_homeListener, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_homeListener, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_homeListener, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_homeListener, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homeListener, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_homeListener, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Image14, ui_event_Image14, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel4, ui_event_Panel4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel5, ui_event_Panel5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Image25, ui_event_Image25, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel6, ui_event_Panel6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Panel2, ui_event_Panel2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_homePanel, ui_event_homePanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_appPanel, ui_event_appPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_lockscreenPanel, ui_event_lockscreenPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_todayPanel, ui_event_todayPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_controlListener, ui_event_controlListener, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider2, ui_event_Slider2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_controlCenter, ui_event_controlCenter, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_dynamicIsland, ui_event_dynamicIsland, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_homeListener, ui_event_homeListener, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_bootScreen_screen_init();
    ui_homeScreen_screen_init();
    lv_disp_load_scr(ui_bootScreen);
}
