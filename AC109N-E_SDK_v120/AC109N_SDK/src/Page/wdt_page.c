/*! \page10 WDT ���ָ��
 *
 * \section intro_sec_wdt WDT ����
 *
 * - WDT(watch dog timer)���Ź���ʱ�����ڷ�ֹϵͳ����������ѭ���Ȳ���ȷ��״̬��ÿ��ϵͳ��λ֮�󣬿��Ź�Ĭ�ϴ��ڹرյ�״̬������������ʱ����򿪡�������ϵͳ��λʱ���Ź�Ҳ�ᱻ�ر�WDT_CON��bit5-bit0�����ܱ������򣬶���6��bit��д��������ѭ�������̣������д������Ч��\n
 *   1����CRC_REGL�Ĵ�������Ϊ0xA5\n
 *   2����CRC_REGH�Ĵ�������Ϊ0x6E\n
 *   3��дWDTCON\n
 *   4����CRC_REGL��CRC_REGH����Ϊ����ֵ\n
 *   Note���忴�Ź�����bit6д'1'�������������ƣ����������κ�ʱ��ֱ�ӽ����忴�Ź��Ķ�����

 * \section wdt1 WDT_CON �Ĵ�����
 * - WDT_CON������д�ɶ���ResetֵΪ0x00��\n
 *   Bit3~0�����Ź����ʱ��ѡ��\n
 *   0000: 	1mS\n
 *   0001: 	2mS\n
 *   0010: 	4mS\n
 *   0011: 	8mS\n
 *   0100: 	16mS\n
 *   0101: 	32mS\n
 *   0110: 	64mS\n
 *   0111: 	128mS\n
 *   1000: 	256mS\n
 *   1001: 	512mS\n
 *   1010: 	1S\n
 *   1011: 	2S\n
 *   1100: 	4S\n
 *   1101: 	8S\n
 *   1110: 	16S\n
 *   1111: 	32S\n
 *   Bit4�����Ź���ʱ��ʹ��,����Ч\n
 *   Bit5�����Ź�ģʽѡ��0:	���Ź����������ϵͳ��λ�����ǿ��Ź�����Ҫ����ģʽ��1:	���Ź������WINT��1���ɲ����жϣ�����ģʽ��Ҫ���ڵ���\n
 *   Bit6��д'1'�忴�Ź�������ԶΪ'0'\n
 *   Bit7��wdt�ж������־����WDRMD ����Ϊ1ʱ��WDT����Ὣ��λ��1����Ҫ��������WCLRд1����0\n
��ע���������ʱ��ֻ�ǲο�ֵ��ʵ���ϣ�wdt�ɲ�׼ȷ��Ƭ��RC������������ʵ�����ʱ����ܻ��иߴ�100%��ƫ��Ҳ�ͬоƬ֮��Ҳ�޷���֤һ���ԡ�������ѡ�����ʱ��ʱ���������㹻������\n

 */