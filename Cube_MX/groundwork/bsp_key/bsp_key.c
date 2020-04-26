#include "bsp_key.h"

#include "main.h"

void mx_key_init(key_info_t *key_cfg)
{
    /* key seg gpio ����*/
    key_cfg->key_seg[0].gpio = KEY_SEG1_GPIO_Port;
    key_cfg->key_seg[0].gpio_pin = KEY_SEG1_Pin;
    key_cfg->key_seg[1].gpio = KEY_SEG2_GPIO_Port;
    key_cfg->key_seg[1].gpio_pin = KEY_SEG2_Pin;
    key_cfg->key_seg[2].gpio = KEY_SEG3_GPIO_Port;
    key_cfg->key_seg[2].gpio_pin = KEY_SEG3_Pin;
    key_cfg->key_seg[3].gpio = KEY_SEG4_GPIO_Port;
    key_cfg->key_seg[3].gpio_pin = KEY_SEG4_Pin;
    key_cfg->key_seg[4].gpio = KEY_SEG5_GPIO_Port;
    key_cfg->key_seg[4].gpio_pin = KEY_SEG5_Pin;
    key_cfg->key_seg[5].gpio = KEY_SEG6_GPIO_Port;
    key_cfg->key_seg[5].gpio_pin = KEY_SEG6_Pin;
    key_cfg->key_seg[6].gpio = KEY_SEG7_GPIO_Port;
    key_cfg->key_seg[6].gpio_pin = KEY_SEG7_Pin;

    /* key pos gpio ����*/
    key_cfg->key_pos[0].gpio = KEY_POS1_GPIO_Port;
    key_cfg->key_pos[0].gpio_pin = KEY_POS1_Pin;
    key_cfg->key_pos[1].gpio = KEY_POS2_GPIO_Port;
    key_cfg->key_pos[1].gpio_pin = KEY_POS2_Pin;
    key_cfg->key_pos[2].gpio = KEY_POS3_GPIO_Port;
    key_cfg->key_pos[2].gpio_pin = KEY_POS3_Pin;
    key_cfg->key_pos[3].gpio = KEY_POS4_GPIO_Port;
    key_cfg->key_pos[3].gpio_pin = KEY_POS4_Pin;
    key_cfg->key_pos[4].gpio = KEY_POS5_GPIO_Port;
    key_cfg->key_pos[4].gpio_pin = KEY_POS5_Pin;
    key_cfg->key_pos[5].gpio = KEY_POS6_GPIO_Port;
    key_cfg->key_pos[5].gpio_pin = KEY_POS6_Pin;
    key_cfg->key_pos[6].gpio = KEY_POS7_GPIO_Port;
    key_cfg->key_pos[6].gpio_pin = KEY_POS7_Pin;
    key_cfg->key_pos[7].gpio = KEY_POS8_GPIO_Port;
    key_cfg->key_pos[7].gpio_pin = KEY_POS8_Pin;
    key_cfg->key_pos[8].gpio = KEY_POS9_GPIO_Port;
    key_cfg->key_pos[8].gpio_pin = KEY_POS9_Pin;
    key_cfg->key_pos[9].gpio = KEY_POS10_GPIO_Port;
    key_cfg->key_pos[9].gpio_pin = KEY_POS10_Pin;
    key_cfg->key_pos[10].gpio = KEY_POS11_GPIO_Port;
    key_cfg->key_pos[10].gpio_pin = KEY_POS11_Pin;
    key_cfg->key_pos[11].gpio = KEY_POS12_GPIO_Port;
    key_cfg->key_pos[11].gpio_pin = KEY_POS12_Pin;
    key_cfg->key_pos[12].gpio = KEY_POS13_GPIO_Port;
    key_cfg->key_pos[12].gpio_pin = KEY_POS13_Pin;
    key_cfg->key_pos[13].gpio = KEY_POS14_GPIO_Port;
    key_cfg->key_pos[13].gpio_pin = KEY_POS14_Pin;

	
    key_cfg->key_is_press[0].key_char = Keyboard_ESCAPE;
    key_cfg->key_is_press[1].key_char = Keyboard_F1;
    key_cfg->key_is_press[2].key_char = Keyboard_F2;
    key_cfg->key_is_press[3].key_char = Keyboard_F3;
    key_cfg->key_is_press[4].key_char = Keyboard_F4;
    key_cfg->key_is_press[5].key_char = Keyboard_F5;
    key_cfg->key_is_press[6].key_char = Keyboard_F6;
    key_cfg->key_is_press[7].key_char = Keyboard_F7;
    key_cfg->key_is_press[8].key_char = Keyboard_F8;
    key_cfg->key_is_press[9].key_char = Keyboard_F9;
    key_cfg->key_is_press[10].key_char = Keyboard_F10;
    key_cfg->key_is_press[11].key_char = Keyboard_F11;
    key_cfg->key_is_press[12].key_char = Keyboard_F12;
	
    key_cfg->key_is_press[13].key_char = Keyboard_BoLangXian;
    key_cfg->key_is_press[14].key_char = Keyboard_1;
    key_cfg->key_is_press[15].key_char = Keyboard_2;
    key_cfg->key_is_press[16].key_char = Keyboard_3;
    key_cfg->key_is_press[17].key_char = Keyboard_4;
    key_cfg->key_is_press[18].key_char = Keyboard_5;
    key_cfg->key_is_press[19].key_char = Keyboard_6;
    key_cfg->key_is_press[20].key_char = Keyboard_7;
    key_cfg->key_is_press[21].key_char = Keyboard_8;
    key_cfg->key_is_press[22].key_char = Keyboard_9;
    key_cfg->key_is_press[23].key_char = Keyboard_0;
    key_cfg->key_is_press[24].key_char = Keyboard_JianHao;
    key_cfg->key_is_press[25].key_char = Keyboard_DengHao;
    key_cfg->key_is_press[26].key_char = Keyboard_Backspace;
	
    key_cfg->key_is_press[27].key_char = Keyboard_Tab;
    key_cfg->key_is_press[28].key_char = Keyboard_q;
    key_cfg->key_is_press[29].key_char = Keyboard_w;
    key_cfg->key_is_press[30].key_char = Keyboard_e;
    key_cfg->key_is_press[31].key_char = Keyboard_r;
    key_cfg->key_is_press[32].key_char = Keyboard_t;
    key_cfg->key_is_press[33].key_char = Keyboard_y;
    key_cfg->key_is_press[34].key_char = Keyboard_u;
    key_cfg->key_is_press[35].key_char = Keyboard_i;
    key_cfg->key_is_press[36].key_char = Keyboard_o;
    key_cfg->key_is_press[37].key_char = Keyboard_p;
    key_cfg->key_is_press[38].key_char = Keyboard_ZuoZhongKuoHao;
    key_cfg->key_is_press[39].key_char = Keyboard_YouZhongKuoHao;
    key_cfg->key_is_press[40].key_char = Keyboard_FanXieGang;
	
	
    key_cfg->key_is_press[41].key_char = Keyboard_CapsLock;
    key_cfg->key_is_press[42].key_char = Keyboard_a;
    key_cfg->key_is_press[43].key_char = Keyboard_s;
    key_cfg->key_is_press[44].key_char = Keyboard_d;
    key_cfg->key_is_press[45].key_char = Keyboard_f;
    key_cfg->key_is_press[46].key_char = Keyboard_g;
    key_cfg->key_is_press[47].key_char = Keyboard_h;
    key_cfg->key_is_press[48].key_char = Keyboard_j;
    key_cfg->key_is_press[49].key_char = Keyboard_k;
    key_cfg->key_is_press[50].key_char = Keyboard_l;
    key_cfg->key_is_press[51].key_char = Keyboard_FenHao;
    key_cfg->key_is_press[52].key_char = Keyboard_DanYinHao;
    key_cfg->key_is_press[53].key_char = Keyboard_ENTER;
	
    key_cfg->key_is_press[54].key_char = Keyboard_LeftShift;   //���ⰴ�� 54
    key_cfg->key_is_press[55].key_char = Keyboard_z;
    key_cfg->key_is_press[56].key_char = Keyboard_x;
    key_cfg->key_is_press[57].key_char = Keyboard_c;
    key_cfg->key_is_press[58].key_char = Keyboard_v;
    key_cfg->key_is_press[59].key_char = Keyboard_b;
    key_cfg->key_is_press[60].key_char = Keyboard_n;
    key_cfg->key_is_press[61].key_char = Keyboard_m;
    key_cfg->key_is_press[62].key_char = Keyboard_Douhao;
    key_cfg->key_is_press[63].key_char = Keyboard_JuHao;
    key_cfg->key_is_press[64].key_char = Keyboard_XieGang_WenHao;
    key_cfg->key_is_press[65].key_char = Keyboard_RightShift;   //���ⰴ�� 65
	
    key_cfg->key_is_press[66].key_char = Keyboard_LeftControl;  //���ⰴ�� 66
    key_cfg->key_is_press[67].key_char = Keyboard_LeftWindows;  //���ⰴ�� 67
    key_cfg->key_is_press[68].key_char = Keyboard_LeftAlt;		//���ⰴ�� 68
    key_cfg->key_is_press[69].key_char = Keyboard_KongGe;
    key_cfg->key_is_press[70].key_char = Keyboard_RightAlt;		//���ⰴ�� 70
    key_cfg->key_is_press[71].key_char = Keyboard_RightWindows; //���ⰴ�� 71
    key_cfg->key_is_press[72].key_char = Keyboard_Application;
    key_cfg->key_is_press[73].key_char = Keyboard_RightControl; //���ⰴ�� 73
    key_cfg->key_is_press[74].key_char = Keyboard_PrintScreen;
    key_cfg->key_is_press[75].key_char = Keyboard_ScrollLock;
    key_cfg->key_is_press[76].key_char = Keyboard_Pause;
    key_cfg->key_is_press[77].key_char = Keyboard_Insert;
    key_cfg->key_is_press[78].key_char = Keyboard_Home;
    key_cfg->key_is_press[79].key_char = Keyboard_PageUp;
    key_cfg->key_is_press[80].key_char = Keyboard_Delete;
    key_cfg->key_is_press[81].key_char = Keyboard_End;
    key_cfg->key_is_press[82].key_char = Keyboard_PageDown;
    key_cfg->key_is_press[83].key_char = Keyboard_UpArrow;
    key_cfg->key_is_press[84].key_char = Keyboard_LeftArrow;
    key_cfg->key_is_press[85].key_char = Keyboard_DownArrow;
    key_cfg->key_is_press[86].key_char = Keyboard_RightArrow;
}
/*������Ҫʹ�õ�seg gpio��ƽ��������seg gpio�õ�*/
void key_scan_gpio_set(key_info_t *key_cfg,uint8_t seg)
{
    uint8_t i;
    for(i=0; i<MAX_SEG; i++)
        {
            if(i==(seg-1))
                {
                    HAL_GPIO_WritePin(key_cfg->key_seg[i].gpio,key_cfg->key_seg[i].gpio_pin,GPIO_PIN_SET);
                }
            else
                {
                    HAL_GPIO_WritePin(key_cfg->key_seg[i].gpio,key_cfg->key_seg[i].gpio_pin,GPIO_PIN_RESET);
                }

        }
}
/*��ȡGPIO*/
void key_scan_gpio_read(key_info_t *key_cfg,uint8_t seg)
{
    uint8_t i;
    for(i=0; i<MAX_POS; i++)
        {
            key_cfg->key_is_press_seg[seg-1][i] =
                HAL_GPIO_ReadPin(key_cfg->key_pos[i].gpio,key_cfg->key_pos[i].gpio_pin);
        }
}
void key_scan(key_info_t *key_cfg,uint8_t seg)
{
    key_scan_gpio_set(key_cfg,seg);
    key_scan_gpio_read(key_cfg,seg);
}
/*��ɨ��õ��ļ�ֵ���µ���Ӧ���*/
void key_scan_updata(key_info_t *key_cfg)
{
    uint8_t i;
    /*
    	��Ӧԭ��ͼ
    	SEG1 1-13   ->13
    	SEG2 14-27  ->14
    	SEG3 28-41	->14
    	SEG4 42-54	->13
    	SEG5 55-66	->12
    	SEG6 67-74	->8
    	SEG7 75-87	->13
    */
    /*SEG1 0-12   ->13*/
    for(i=0; i<13; i++)
        {
            key_cfg->key_is_press[i].press_it = key_cfg->key_is_press_seg[0][i];
        }
    /*SEG2 13-26  ->14*/
    for(i=0; i<14; i++)
        {
            key_cfg->key_is_press[i+13].press_it = key_cfg->key_is_press_seg[1][i];
        }
    /*SEG3 27-40	->14*/
    for(i=0; i<14; i++)
        {
            key_cfg->key_is_press[i+27].press_it = key_cfg->key_is_press_seg[2][i];
        }
    /*SEG4 41-53	->13*/
    for(i=0; i<13; i++)
        {
            key_cfg->key_is_press[i+41].press_it = key_cfg->key_is_press_seg[3][i];
        }
    /*SEG5 54-65	->12*/
    for(i=0; i<12; i++)
        {
            key_cfg->key_is_press[i+54].press_it = key_cfg->key_is_press_seg[4][i];
        }
    /*SEG6 66-73	->8*/
    for(i=0; i<8; i++)
        {
            key_cfg->key_is_press[i+66].press_it = key_cfg->key_is_press_seg[5][i];
        }
    /*SEG7 74-86	->13*/
    for(i=0; i<13; i++)
        {
            key_cfg->key_is_press[i+74].press_it = key_cfg->key_is_press_seg[6][i];
        }
}	
uint8_t used_it[6] = {KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER};
uint8_t used_key[6] = {KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER,KEY_NO_USER};
void key_info_get(key_info_t *key_cfg)
{
	uint8_t i,point=0;
	for(i=0;i<6;i++)
	{
		/*����˻���������ʹ��*/
		if(used_it[i]==1)
		{
			/*��鰴���Ƿ�����*/
			if(key_cfg->key_is_press[used_key[i]].press_it==0)
			{
				used_it[i]=KEY_NO_USER;
				used_key[i] = KEY_NO_USER;
				key_cfg->keyboard.keypad[i] = 0;
			}	
		}
	}	
	key_cfg->keyboard.byte0_off.Left_Alt = key_cfg->key_is_press[KEY_LEFT_ALT].press_it;
	key_cfg->keyboard.byte0_off.Left_Control = key_cfg->key_is_press[KEY_LEFT_CONTROL].press_it;
	key_cfg->keyboard.byte0_off.Left_GUI = key_cfg->key_is_press[KEY_LEFT_WIN].press_it;
	key_cfg->keyboard.byte0_off.Left_Shift = key_cfg->key_is_press[KEY_LEFT_SHIFT].press_it;
	key_cfg->keyboard.byte0_off.Right_Alt = key_cfg->key_is_press[KEY_RIGHT_ALT].press_it;
	key_cfg->keyboard.byte0_off.Right_Control = key_cfg->key_is_press[KEY_RIGHT_CONTROL].press_it;
	key_cfg->keyboard.byte0_off.Right_GUI = key_cfg->key_is_press[KEY_RIGHT_WIN].press_it;
	key_cfg->keyboard.byte0_off.Right_Shift = key_cfg->key_is_press[KEY_RIGHT_SHIFT].press_it;
	for(i=0;i<MAX_KEY;i++)
	{
		if((i!=KEY_LEFT_ALT)&&(i!=KEY_LEFT_CONTROL)&&(i!=KEY_LEFT_WIN)&&(i!=KEY_LEFT_SHIFT)
			&&(i!=KEY_RIGHT_ALT)&&(i!=KEY_RIGHT_CONTROL)&&(i!=KEY_RIGHT_WIN)&&(i!=KEY_RIGHT_SHIFT))
		{
			if(key_cfg->key_is_press[i].press_it==1)
			{
				//����ð������£�����6�������������δʹ�ã���ʹ�ô˻�����
				for(point=0;point<6;point++)
				{
					/*���������������Ϊ�����˰���*/
					if((used_key[0]!=i)&&(used_key[1]!=i)&&(used_key[2]!=i)&&
						(used_key[3]!=i)&&(used_key[4]!=i)&&(used_key[5]!=i))
					{
						if(used_it[point]==KEY_NO_USER)
						{
							used_it[point]=1;//��Ǵ˰����Ѿ�ʹ��
							used_key[point]=i;//��¼ʹ�ô˻������İ���
							key_cfg->keyboard.keypad[point]=key_cfg->key_is_press[i].key_char;
							point = 6 ; 
						}
					}
				}
			}
		}
	}
}
void key_update(uint8_t *pTxbuf,key_info_t *key_cfg)
{
	uint8_t i;
	for(i=0;i<8;i++)pTxbuf[i]=0;
	/*���ⰴ�����⴦��*/
	key_info_get(key_cfg);
    if(key_cfg->keyboard.byte0_off.Left_Control == 1)  pTxbuf[0]|= 1<<Left_Control;
    if(key_cfg->keyboard.byte0_off.Left_Shift == 1)	  pTxbuf[0]|= 1<<Left_Shift;
    if(key_cfg->keyboard.byte0_off.Left_Alt == 1)	  pTxbuf[0]|= 1<<Left_Alt;
    if(key_cfg->keyboard.byte0_off.Left_GUI == 1)	  pTxbuf[0]|= 1<<Left_GUI;
    if(key_cfg->keyboard.byte0_off.Right_Control == 1) pTxbuf[0]|= 1<<Right_Control;
    if(key_cfg->keyboard.byte0_off.Right_Shift == 1)	  pTxbuf[0]|= 1<<Right_Shift;
    if(key_cfg->keyboard.byte0_off.Right_Alt == 1)	  pTxbuf[0]|= 1<<Right_Alt;
    if(key_cfg->keyboard.byte0_off.Right_GUI == 1)	  pTxbuf[0]|= 1<<Right_GUI;
    pTxbuf[1]=0;
//	BYTE2--BYTE7 ��ͨ����
	pTxbuf[2]=key_cfg->keyboard.keypad[0];        
	pTxbuf[3]=key_cfg->keyboard.keypad[1];
	pTxbuf[4]=key_cfg->keyboard.keypad[2];
	pTxbuf[5]=key_cfg->keyboard.keypad[3];
	pTxbuf[6]=key_cfg->keyboard.keypad[4];
	pTxbuf[7]=key_cfg->keyboard.keypad[5];
}
