
typedef enum
{
	TP_VIDEOSTANDARD_UNKNOW				= 0x00000000,		//Invalid

	TP_VIDEOSTANDARD_PAL				= 0x00000001,		//PAL size:720*576 f/s : 25
	TP_VIDEOSTANDARD_NTSC_2997			= 0x00000002,		//NTSC size:720*486  f/s : 29.97
	TP_VIDEOSTANDARD_NTSC_30			= 0x00000004,		//NTSC size:720*486 f/s : 30
	TP_VIDEOSTANDARD_SECAM				= 0x00000008,		//SECAM

	TP_VIDEOSTANDARD_1920_1080_50i		= 0x00000010,		//HDTV size:1920*1080 f/s : 25  interlaced
	TP_VIDEOSTANDARD_1920_1080_5994i	= 0x00000020,		//HDTV size:1920*1080 f/s : 29.97 interlaced
	TP_VIDEOSTANDARD_1920_1080_60i		= 0x00000040,		//HDTV size:1920*1080 f/s : 30 interlaced

	TP_VIDEOSTANDARD_1920_1080_2398p	= 0x00000080,		//HDTV size:1920*1080 f/s : 23.98 progressive
	TP_VIDEOSTANDARD_1920_1080_24p		= 0x00000100,		//HDTV size:1920*1080 f/s : 24 progressive
	TP_VIDEOSTANDARD_1920_1080_25p		= 0x00000200,		//HDTV size:1920*1080 f/s : 25 progressive
	TP_VIDEOSTANDARD_1920_1080_2997p	= 0x00000400,		//HDTV size:1920*1080 f/s : 29.97 progressive
	TP_VIDEOSTANDARD_1920_1080_30p		= 0x00000800,		//HDTV size:1920*1080 f/s : 30 progressive

	TP_VIDEOSTANDARD_1280_720_2398p		= 0x00001000,	    //HDTV size:1280*720 f/s : 23.98 progressive
	TP_VIDEOSTANDARD_1280_720_24p		= 0x00002000,		//HDTV size:1280*720 f/s : 24 progressive
	TP_VIDEOSTANDARD_1280_720_50p		= 0x00004000,		//HDTV size:1280*720 f/s : 50 progressive
	TP_VIDEOSTANDARD_1280_720_5994p		= 0x00008000,		//HDTV size:1280*720 f/s : 59.94 progressive

	TP_VIDEOSTANDARD_1440_1080_50i		= 0x00010000,	    //HD  size:1440*1080 f/s : 25 interlaced
	TP_VIDEOSTANDARD_1440_1080_5994i	= 0x00020000,	    //HD  size:1440*1080 f/s : 29.97 interlaced
	TP_VIDEOSTANDARD_1440_1080_60i		= 0x00040000,	    //HD  size:1440*1080 f/s : 30 interlaced

	TP_VIDEOSTANDARD_PAL_16_9			= 0x00080000,		//PAL size:720*576 f/s : 25
	TP_VIDEOSTANDARD_NTSC_2997_16_9		= 0x00100000,		//NTSC size:720*486  f/s : 29.97
	TP_VIDEOSTANDARD_NTSC_30_16_9		= 0x00200000,		//NTSC size:720*486 f/s : 30
	TP_VIDEOSTANDARD_NTSC_2997_480		= 0x00400000,		//NTSC size:720*480  f/s : 29.97  //�����ţ���ֹ�Ժ���������ٸĳ�480
	TP_VIDEOSTANDARD_NTSC_30_480		= 0x00800000,		//NTSC size:720*480 f/s : 30 //�����ţ���ֹ�Ժ���������ٸĳ�480


	TP_VIDEOSTANDARD_1280_1080_50i		= 0x01000000,	    //HD  size:1280*1080 f/s : 25 interlaced
	TP_VIDEOSTANDARD_1280_1080_5994i	= 0x02000000,	    //HD  size:1280*1080 f/s : 29.97 interlaced
	TP_VIDEOSTANDARD_1280_1080_60i		= 0x04000000,	    //HD  size:1280*1080 f/s : 30 interlaced

	//�������ö�����ʱʹ�õġ� ������ζ�������Ū

	TP_VIDEOSTANDARD_1280_720_25p		= 0x10000001,		//
	TP_VIDEOSTANDARD_1280_720_2997p		= 0x10000002,		//

	TP_VIDEOSTANDARD_1920_1080_50p		= 0x10000004,		//
	TP_VIDEOSTANDARD_1920_1080_5994p	= 0x10000008,		//

	TP_VIDEOSTANDARD_1440_1080_50p		= 0x10000010,	    //
	TP_VIDEOSTANDARD_1440_1080_5994p	= 0x10000020,	    //
	TP_VIDEOSTANDARD_1440_1080_25p		= 0x10000040,	    //
	TP_VIDEOSTANDARD_1440_1080_2997p	= 0x10000080,	    //

	TP_VIDEOSTANDARD_PAL_50P			= 0x10000100,		//PAL size:720*576 f/s : 25
	TP_VIDEOSTANDARD_NTSC_5994P			= 0x10000200,		//NTSC size:720*486  f/s : 29.97
	TP_VIDEOSTANDARD_PAL_50P_16_9		= 0x10000400,
	TP_VIDEOSTANDARD_NTSC_5994P_16_9	= 0x10000800,

	TP_VIDEOSTANDARD_PAL_25P			= 0x10001000,		//PAL size:720*576 f/s : 25
	TP_VIDEOSTANDARD_NTSC_2997P			= 0x10002000,		//NTSC size:720*486  f/s : 29.97
	TP_VIDEOSTANDARD_PAL_25P_16_9		= 0x10004000,
	TP_VIDEOSTANDARD_NTSC_2997P_16_9	= 0x10008000,

	TP_VIDEOSTANDARD_720_480_2398p		= 0x10010000,
}TP_VIDEO_STANDARD	;// ������Ƶ��ʽ��׼ö�ٶ���;


#define TP_VIDEOSTANDARD_ALL 0xffffffff   //ȱʡ֧��������ʽ hh