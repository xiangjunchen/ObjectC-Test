#define MAX_EXT_NAME_SIZE				32
#define MAX_FILETYPE_NAME				32
// ����ģʽ������ΪTP_ACCESS_MODE
#define TP_ACCESS_NO					0x00000000
#define TP_ACCESS_READ					0x00000001
#define TP_ACCESS_WRITE					0x00000002
#define TP_ACCESS_FORCE					0x00000004							// ljj @ 2006-12-28 for DVD open
#define TP_ACCESS_GETINFO				0x00000008							// for TPAVFile: don't create cutlist ,ljj @ 2008-7-11
#define TP_ACCESS_GETIMAGE				0x00000010							// for TPAVFile: don't prepare decoding.,ljj @ 2008-7-11
#define TP_ACCESS_PREPARE				0x00000020
#define TP_ACCESS_GETAUDIO				0x00000040
#define TP_ACCESS_NOEXTINFO				0x00000080
#define TP_ACCESS_NOCHECKRATE			0x00000100
#define TP_ACCESS_NOPROXYCTRL			0x00001000							// ljj @ 2008-12-2 for no proxy format limit access for LIHUILI's Import
#define TP_ACCESS_DBEINFO				0x00002000							// swx 2009-03-14 for Doblly E track info
#define TP_ACCESS_STARTTC				0x00004000							// ljj @2009-4-9
#define TP_ACCESS_KEEP_ODD				0x00008000							// ���ô˱�־����ͼ����ʾ��ʵ�Ŀ�ȣ������������в�Ϊż���� add by wgf@2010-5-18
#define TP_ACCESS_GETCOMPBUF			0x00020000							// ljj@2010-11:��ȡ�ļ��е���Ƶ����Ƶ��ѹ��buffer
#define TP_ACCESS_WRITECOMPBUF			0x00040000							// ljj@2010-11:���ļ���д����Ƶ����Ƶ��ѹ��buffer
#define TP_ACCESS_ENCBUFOUT				0x00080000							// ljj@2010-11:�������������ص��õ�����buffer��
#define TP_ACCESS_DONT_CREATE_INDEX		0x00010000							// Openʱ��������index�ļ� add by wgf@2011-1-10
#define TP_ACCESS_IGNORE_ALPHA		0x00020000							// ȡͼƬbufferʱ������alpha����Ҫ���ڲ��淶alpha��BMP�ļ� add by wgf@2012-6-5
//////////////////////////////////////////////////////////////////////////

// ��Ƶ��ʽ����
// #define TP_VIDEO_STANDARD_NUM			19
//////////////////////////////////////////////////////////////////////////

// �ļ���ʽ�������Ͷ���
#define TPFILEFORMAT_SET_TYPE_NULL		0x00000000
#define TPFILEFORMAT_SET_TYPE_VIDEO		0x00000001
#define TPFILEFORMAT_SET_TYPE_VIDEO_V	0x00000002
#define TPFILEFORMAT_SET_TYPE_VIDEO_P	0x00000004
#define TPFILEFORMAT_SET_TYPE_VIDEO_P_SERIAL 0x00000008
#define TPFILEFORMAT_SET_TYPE_AUDIO		0x00000010
#define TPFILEFORMAT_SET_TYPE_KEY		0x00000020
#define TPFILEFORMAT_SET_TYPE_ALL		(TPFILEFORMAT_SET_TYPE_VIDEO_V | TPFILEFORMAT_SET_TYPE_VIDEO_P | TPFILEFORMAT_SET_TYPE_VIDEO_P_SERIAL | TPFILEFORMAT_SET_TYPE_AUDIO | TPFILEFORMAT_SET_TYPE_KEY)

// �ļ���ʽ�������Ͷ���
#define TPFILEFORMAT_OPERA_TYPE_NULL		0x00000000
#define TPFILEFORMAT_OPERA_TYPE_RECORD		0x00000001
#define TPFILEFORMAT_OPERA_TYPE_EDIT		0x00000002
#define TPFILEFORMAT_OPERA_TYPE_COMPILE		0x00000004
#define TPFILEFORMAT_OPERA_TYPE_DES_CLIP	0x00000008
#define TPFILEFORMAT_OPERA_TYPE_DES_FILE	0x00000010
#define TPFILEFORMAT_OPERA_TYPE_DES_TLTEMP	0x00000020
#define TPFILEFORMAT_OPERA_TYPE_DES_BKTEMP	0x00000040
#define TPFILEFORMAT_OPERA_TYPE_SETPROFILE	0x00001000
#define TPFILEFORMAT_OPERA_TYPE_ALL		(TPFILEFORMAT_OPERA_TYPE_RECORD | TPFILEFORMAT_OPERA_TYPE_EDIT | TPFILEFORMAT_OPERA_TYPE_COMPILE | TPFILEFORMAT_OPERA_TYPE_DES_CLIP | TPFILEFORMAT_OPERA_TYPE_DES_FILE  | TPFILEFORMAT_OPERA_TYPE_DES_TLTEMP | TPFILEFORMAT_OPERA_TYPE_DES_BKTEMP)

//////////////////////////////////////////////////////////////////////////
typedef long							TP_ACCESS_MODE;						// ����ģʽ
typedef DWORD							TP_SPLITVIEW_RES;

// ImgFormatSu�õ�ֵ����ֵ��lScanMode������ɻ򡣱�ʾ�˸�ʽ��֧�ֵ�ɨ���ʽ��
#define NXImgFmtSu_ScanMode_None				0x00000000
#define NXImgFmtSu_ScanMode_Interlace			0x00000001					// ����ɨ��
#define NXImgFmtSu_ScanMode_Progressive			0x00000002					// ����ɨ��
#define NXImgFmtSu_ScanMode_TopFieldFirst		0x00010000					// �������ȣ����������ɨ�裬û�����ѡ�
#define NXImgFmtSu_ScanMode_BottomFieldFirst	0x00020000					// �׳����ȣ����������ɨ�裬û�����ѡ�

// ImgFormatSu�õ�ֵ����ֵ��lColorBits������ɻ򡣱�ʾ�˸�ʽ��֧�ֵ����ص�ͨ��������λ����
#define NXImgFmtSu_ColorBit_None		0x00000000
#define NXImgFmtSu_ColorBit_8			0x00000001
#define NXImgFmtSu_ColorBit_10			0x00000002
#define NXImgFmtSu_ColorBit_12			0x00000004
#define NXImgFmtSu_ColorBit_14			0x00000008
#define NXImgFmtSu_ColorBit_16			0x00000010
#define NXImgFmtSu_ColorBit_All			0xffffffff


// �����зֶ��壬��Ӧ����TP_SPLITVIEW_RES
typedef enum
{
	TPEFF_SPLITVIEW_TRUEFX_BOTTOM		= 0,								// 0
	TPEFF_SPLITVIEW_TRUEFX_LEFT,											// 1
	TPEFF_SPLITVIEW_TRUEFX_TOP,												// 2
	TPEFF_SPLITVIEW_TRUEFX_RIGHT,											// 3

	TPEFF_SPLITVIEW_FXTRUE_BOTTOM ,
	TPEFF_SPLITVIEW_FXTRUE_LEFT,
	TPEFF_SPLITVIEW_FXTRUE_TOP,
	TPEFF_SPLITVIEW_FXTRUE_RIGHT,

	TPSPLITVIEW_PAINTORRES_COUNT,
}eTP_SPLITVIEW_RES;

// �༭ʱ��Ⱦģʽ����
typedef enum
{
	eTPRenderLayerModeInvalid			= 8,
	eTPRenderLayerModeAll,
	eTPRenderLayerModeCurrent,
	eTPRenderLayerModeCurrentPlusBG,
	eTPRenderLayerModeBG,
	eTPRenderLayerModeCurrentPlusFG,
	eTPRenderLayerModeFG,
	eTPRenderLayerModeFGPlusBG,
	eTPRenderLayerModeKey,
	eTPRenderLayerModeEffectSrc,
	eTPRenderLayerModeEffectDst,
	eTPRenderLayerModeEffectAudioFrequence,
	eTPRenderLayerModeEffectAudioTone,
	eTPRenderLayerModeTracking,
	eTPRenderLayerModeLast
}ETPEditEngineRenderLayerMode;

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

// ����Present�Ĵ������Ͷ���
typedef enum
{
	eNX_PRESENT_WND_MV					= 0,
	eNX_PRESENT_WND_SV,
	eNX_PRESENT_WND_EFFECT_EDIT,
	eNX_PRESENT_WND_CG_EDIT,
	eNX_PRESENT_WND_CG_MONITOR,
	eNX_PRESENT_WND_CG_EDIT_3D,
	eNX_PRESENT_WND_UPLOAD_SHOW,
	eNX_PRESENT_WND_CLIP_IMPORT,
	eNX_PRESENT_WND_CURVE_SHIFT,
	eNX_PRESENT_WND_ACCRLEFT,												// �߼���ɫУ����ര��
	eNX_PRESENT_WND_ACCRMID,												// �߼���ɫУ���м䴰��
	eNX_PRESENT_WND_ACCRRIGHT,												// �߼���ɫУ���Ҳര��
	eNX_PRESENT_WND_ICON_PLAY,
	eNX_PRESENT_WND_3DPARTICLE,												// 3D���ӣ�����
	eNX_PRESENT_WND_3DMODIFY,												// 3D����
	eNX_PRESENT_WND_AUDIOCURVESHIFT,										// ��Ƶ���߱��ٴ���
	eNX_PRESENT_WND_3DCLIPIMPORT,											// 3D�زĵ��빤�ߴ���
	eNX_PRESENT_WND_3DMATERIAL,												// 3D���ʴ���
	eNX_PRESENT_WND_3DCAMERA,												// 3D�������
	eNX_PRESENT_WND_3DGLOBLECAMERA,											// �����������
	eNX_PRESENT_WND_AUDIOSOUNDKEY,											// ��ƵƵ�׷���
	eNX_PRESENT_WND_MODALDIALOG,											// ģʽ�Ի��򴰿�
	eNX_PRESENT_WND_MULTICAMERA,											// �ྵͷ�༭����
	eNX_PRESENT_WND_TRIMLEFT,                                               // Trim�༭��ര��
	eNX_PRESENT_WND_TRIMRIGHT,                                              // Trim�༭�Ҳര��
	eNX_PRESENT_WND_HDMIOUTPUT,												// HDMI�������
	eNX_PRESENT_WND_OUTPUTCARD,												// �忨�������

	eNX_PRESENT_WND_MAX,
}ENX_Present_Window_type;

// ������Ƶ��ʾ����
// �����ֻ����3D�汾����Ч�������2D�汾����Ҫ����
typedef enum
{
	eNX_StereoDisplayType_LeftEye,											// ֻ��ʾ����
	eNX_StereoDisplayType_RightEye,											// ֻ��ʾ����
	eNX_StereoDisplayType_SideBySide,										// �����۷ֵ���ߺ��ұ���ʾ
	eNX_StereoDisplayType_TopBottom,										// �����۷ֵ������������ʾ
	eNX_StereoDisplayType_SideBySideStretch,								// �����۷ֵ���ߺ��ұ���ʾ
	eNX_StereoDisplayType_TopBottomStretch,									// �����۷ֵ������������ʾ
	eNX_StereoDisplayType_Compose,											// �����۵�����ʾ
	eNX_StereoDisplayType_ComposeLR,										// ����-���ۺϳ���ʾ
	eNX_StereoDisplayType_ComposeRL,										// ����-���ۺϳ���ʾ
	eNX_StereoDisplayType_RedBlue,											// ������ʾ
	eNX_StereoDisplayType_RedGreen,											// ������ʾ
	eNX_StereoDisplayType_BlueBrown,										// ������ʾ

	eNX_StereoDisplayType_Unknown
}ENX_StereoDisplayType;

// ��ȡ��Ƶ��ʽ�ı�ʶ�ַ���
typedef enum
{
	evstmView							= 0x01,
	evstmWidthHeight					= 0x02,
	evstmFrameRate						= 0x04,
	evstmBitCount						= 0x08,
	evstmAll							= 0x0f,
}eTPVideoStandardTitleMask;

// ���TC��λ����Ϣ(�ϲ��Թ�粿��)
typedef enum
{
	eNX_TrackTCPos_Null,													// ����ʾ���TC��
	eNX_TrackTCPos_LeftTop,													// ���Ͻ���ʾ���TC��
	eNX_TrackTCPos_RightTop,												// ���Ͻ���ʾ���TC��
	eNX_TrackTCPos_LeftBottom,												// ���½���ʾ���TC��
	eNX_TrackTCPos_RightBottom,												// ���½���ʾ���TC��
	eNX_TrackTCPos_CenterBottom,											// ���еײ���ʾ���TC��

	eNX_TrackTCPos_Unknown
}ENX_TrackTCPos;

// Raw���ݸ�ʽ
typedef enum
{
	eNX_RawDataType_Unknown,												// δ֪����
	eNX_RawDataType_Red,													// RED Raw��ʽ
	eNX_RawDataType_Sony,													// SONY Raw��ʽ
}ENX_RawDataType;

//////////////////////////////////////////////////////////////////////////
// Audio support structure define
// Audio bits support
#define TP_AudioBits_Bad				0x00000000
#define TP_AudioBits_8					0x000000001
#define	TP_AudioBits_16					0x000000002
#define TP_AudioBits_24					0x000000004
#define TP_AudioBits_32					0x000000008
#define TP_AudioBits_All				0xffffffff

// Audio Channel support
#define TP_AudioChannel_Bad				0x00000000
#define TP_AudioChannel_1				0x00000001
#define TP_AudioChannel_2				0x00000002
#define TP_AudioChannel_4				0x00000004
#define TP_AudioChannel_8				0x00000008
#define TP_AudioChannel_5_1				0x00000010	//only for DTS:5.1channal; for AC3,EAC3: 5.1.
#define TP_AudioChannel_2_DM			0x00000020	//only for AC3,E-AC3: dual mono (2 seperate mono)
#define TP_AudioChannel_3_0_LCR			0x00000040	//only for AC3,E-AC3: 2.1:L,C,R
#define TP_AudioChannel_2_1_LRS			0x00000080	//only for AC3,E-AC3: 2.1:L,R,S
#define TP_AudioChannel_3_1_LCRS		0x00000100	//only for AC3,E-AC3: 3.1:L,C,R,S
#define TP_AudioChannel_3_2_LCRLsRs		0x00000200	//only for AC3,E-AC3: 3.2:L,C,R,Ls,Rs
#define TP_AudioChannel_2_2_LCRS		0x00000400	//only for AC3,E-AC3: 2.2:L,C,R,S
#define TP_AudioChannel_2_1				0x00000800	//only for AC3,E-AC3: 2.1:L,R,Lfe(����)
#define TP_AudioChannel_2_0				0x00001000	// stereo audio
#define TP_AudioChannel_7_1				0x00002000	// 7.1
#define TP_AudioChannel_All				TP_AudioChannel_1|TP_AudioChannel_2|TP_AudioChannel_4|TP_AudioChannel_8

// Audio Sample support
#define TP_AudioSample_Bad				0x00000000
#define TP_AudioSample_8				0x00000001
#define TP_AudioSample_16				0x00000002
#define TP_AudioSample_22_05			0x00000004
#define TP_AudioSample_44_1				0x00000008
#define TP_AudioSample_48				0x00000010
#define TP_AudioSample_96				0x00000020
#define TP_AudioSample_192				0x00000040
#define TP_AudioSample_32				0x00000080							// ����by ljj@2011-7-22
#define TP_AudioSample_All				0xffffffff

//////////////////////////////////////////////////////////////////////////
typedef LONG							TP_MEDIA_CLASS_TYPE;				// �ļ�����
typedef DWORD							PixelFormat;						// ���ظ�ʽ
//////////////////////////////////////////////////////////////////////////

// ������Ƶ���÷�ʽ����
typedef enum
{
	NX3DFrameType_None					= 0,
	NX3DFrameType_TopBottom				= 1,								// һ֡�ڰ��������ӽǣ���˳����ϵ������У�����˫Ŀ��Ƶ�����������ҡ�
	NX3DFrameType_LeftRight				= 2,								// һ֡�ڰ��������ӽǣ���˳����������У�����˫Ŀ��Ƶ�����������ҡ�
	NX3DFrameType_Seperate				= 3,								// һ֡��ֻ����һ���ӽǣ�����ӽǰ�˳����֡���У�����˫Ŀ��Ƶ��������ҡ�

	// [[ljj@2010-11-12:����2Dģʽ��FrameBuffer��
	NX3DFrameType_2D					= 100,
	// ]]
}NX3DFrameType;
// ��Ƶ��ʽ��������
typedef struct tag_TPTimeBase
{
	int									iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	int									lTimeRate;							// 15, 24, 25, 2997, 30
	int									lTimeScale;							// 1����100
	long								lWidth;
	long								lHeight;
}TPTimeBase, *LPTPTimeBase;

// ��Ƶ��ʽ(δѹ��)����
typedef struct tag_TPAudioFormat
{
	WORD								iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	WORD								iChannels;							// ͨ����
	DWORD								iSamplesRate;						// ������
	WORD								iBitsPerSample;						// ����λ��
}TPAudioFormat, *LPTPAudioFormat;

// ��Ƶѹ����������
typedef struct tag_TPAudioCompressPara
{
	WORD								iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	DWORD								iDataRate;							// �����ʣ���bpsΪ��λ
	DWORD								iInterleave;						// ����֡��
	DWORD								dwPrivateDataSize;					// ˽�������ֽ���
	BYTE*								pPrivateData;						// ˽������
}TPAudioCompressPara, *LPTPAudioCompressPara;

// ��Ƶ��ʽ���壺��Ƶѹ����ʽ�Ͳ���
typedef struct tag_TPAudioFormatEx
{
	DWORD								iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	TPAudioFormat						tpAudioFormat;						// ��Ƶ��ѹ����ʽ
	DWORD								dwFOURCC;							// FOURCC Codes
	TPAudioCompressPara					tpAudioCompressPara;				// ѹ������
}TPAudioFormatEx, *LPTPAudioFormatEx;
/***********��Ƶ��ʽ�����ṹ*******************/
typedef enum
{
	TP_ScanMode_Invalid 				= 0x00000000,
	TP_ScanMode_Interlaced				= 0x00000001,
	TP_ScanMode_Progressive				= 0x00000002,
}TP_SCANMODE;
typedef enum
{
	TP_AspectRatio_Unknown = 0x00000000,
	TP_AspectRatio_4_3  = 0x00000001,
	TP_AspectRatio_16_9 = 0x00000002,
}TP_ASPECTRATIO;
// �ֱ�����Ϣ����
typedef struct tag_TPResolutionInfo
{
	DWORD								dwSize;
	long								lWidth;								// ���
	long								lHeight;							// �߶�
	TP_ASPECTRATIO						tpAspectRatio;						// ��߱�
	TPTimeBase							tpTimeBase;							// ��ʽ
	TP_SCANMODE							tpScanMode;							// ɨ��ģʽ
	TP_VIDEO_STANDARD                   eVideoStandard;						// �ߵ�����ͳһ
}TPResolutionInfo, *LPTPResolutionInfo;

// ͼ����Ƶ֡��ʽ(δѹ��)����
typedef struct tag_TPImageFormat
{
	DWORD								iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	DWORD								iWidth;								// ͼ���
	DWORD								iHeight;							// ͼ���
	DWORD								iBitsPerPixel;						// ÿ��������ռλ��
	DWORD								iRowbytes;							// ÿ����ռ�ֽ���
	DWORD								iPixFmt;							// ���ظ�ʽ  ��ӦPixelFormat
	DWORD								dwFrameSize;						// ÿ֡ͼ��Ĵ�С
	DWORD								iAspectRatioNum;					// �����ݺ�ȷ���
	DWORD								iAspectRatioDen;					// �����ݺ�ȷ�ĸ
	BOOL								bStill;								// �Ƿ�Ϊ��̬ͼ��
	TP_SCANMODE							tpScanMode;							// ͼ��ɨ��ģʽ
	DWORD								dwPrivateDataSize;					// ˽�������ֽ���
	void*								pPrivateData;						// ˽������
	DWORD								iAFDType;							// AFD���ͣ���Ӧ�汾�� >= 1
}TPImageFormat, *LPTPImageFormat;

// ��Ƶѹ�������ṹ����
typedef struct tag_TPVideoCompressPara
{
	DWORD								iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	DWORD								iKeyFrame;							// �ؼ�֡
	DWORD								iDataRate;							// �����ʣ���bpsΪ��λ
	DWORD								dwPrivateDataSize;					// ˽�������ֽ���
	DWORD								dwCompressType;						// ѹ������
	void*								pPrivateData;						// ˽������
}TPVideoCompressPara, *LPTPVideoCompressPara;

// ��Ƶ��ʽ������ѹ����ʽ�Ͳ������ṹ����
typedef struct tag_TPVideoFormat
{
	DWORD								iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	TPTimeBase							tpTimeBase;							// ֡���ʣ���������Ƶ��׼��
	TP_VIDEO_STANDARD					tpVideoStandard;					// ��Ƶ��ʽ
	TPImageFormat						tpImageFormat;						// ͼ���ʽ
	DWORD								dwFOURCC;							// FOURCC Codes
	TPVideoCompressPara					tpVideoCompressPara;				// ѹ������
	DWORD								dwSubMediaType;						// ��ʱʹ��, һ�㲻Ҫ��
	NX3DFrameType						e3DFrameType;						// ������Ƶ��֡buffer����
	BOOL								b3DHasZInfo;						// ������Ƶ�Ƿ��������Ϣ
	double								db3DDistanceOfEyes;					// ������Ƶ��˫Ŀ����
	double								db3DFocus;							// ������Ƶ�Ľ���ֵ
	long								l3DViewCount;						// ������Ƶ���ӽǸ���
	long								l3DViewAngleValueCount;				// ������Ƶ���ӽǵĽǶȸ���
	double*								p3DViewAngleValue;					// ������Ƶ���ӽǵĽǶ�����
}TPVideoFormat, *LPTPVideoFormat;

// �ļ���ʽ�ṹ����
typedef struct tag_TPFileFormat
{
	DWORD								iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	BOOL								bHasVideo;							// �Ƿ�����Ƶ
	BOOL								bHasAudio;							// �Ƿ�����Ƶ
	GUID								guidFileType;						// �ļ�����GUID
	DWORD								dwFileHeadSize;						// �ļ�ͷ�ߴ�
	TPVideoFormat						tpVideoFormat;						// ��Ƶ��ʽ
	TPAudioFormatEx						tpAudioFormatEx;					// ��Ƶ��ʽ
}TPFileFormat, *LPTPFileFormat;

// ĳһ֡ͼ���ͼ�����ݽṹ����ѹ��������
typedef struct tag_TPImageData
{
	int									iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	int									iOrgX;								// ԴBufferλ��Ŀ��Buffer����ʼ��X����   //ADD BY HAN
	int									iOrgY;								// ԴBufferλ��Ŀ��Buffer����ʼ��Y����   //ADD BY HAN
	int									iDesWidth;							// Ŀ��Buffer��
	int									iDesHeight;							// Ŀ��Buffer��
	int									iOffsetX;							// ͼ����ԴBuffer�е�ƫ��X����
	int									iOffsetY;							// ͼ����ԴBuffer�е�ƫ��Y����
	int									iWidth;								// ͼ���
	int									iHeight;							// ͼ���
	int									iSrcPitch;							// ԴBuffer Pitch
	int									iSrcHeight;							// ԴBuffer��
	int									iBitsPerPixel;						// ������ռλ��
	DWORD								dwCurPos;							// ͼ������֡��
	BYTE*								pData;								// ͼ������
	PixelFormat							ePixFmt;							// ͼ���ʽ
	BYTE*								pExData;							// ����ͼ������
	int									iExDataSize;						// ����ͼ�����ݴ�С
	long								lTimeCode;							// ʱ��
}TPImageData, *LPTPImageData;

// ��Ƶ���ݽṹ����
typedef struct tag_TPAudioData
{
	int									iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	WORD								iChannels;							// ͨ����
	DWORD								dwSamplesRate;						// ������
	WORD								iBitsPerSample;						// ����λ��
	TP_MEDIA_CLASS_TYPE					lMediaClassType;					// ��Ƶͨ����
	ULONGLONG							ulStartSample;						// ��ʼ������λ��
	ULONGLONG							ulSampleCount;						// ��������
	BYTE*								pData;								// ��Ƶ����
}TPAudioData, *LPTPAudioData;

// ĳ����Ƶ���ݵĽṹ
typedef struct tag_TPAudioSegmentData
{
	int									iSize;								// �ṹ��С
	DWORD								dwVersion;							// �汾��
	DWORD								dwInPoint;							// ���
	DWORD								dwOutPoint;							// ����
	DWORD								dwSampleRate;						// ����Ƶ��
	DWORD								dwSampleSize;						// ������
	DWORD								dwValidBitsPerSample;				// ÿ��sample����Чλ��
	DWORD								dwActualBitsPerSample;				// ÿ��sample��ʵ��λ��������ռ�ڴ��λ��
	DWORD								dwDataSize;							// �������ݴ�С
	BYTE*								pData;								// ��Ƶ����
	BYTE**								pStereoSurround;
	int									nActualChannel;
				// ʵ����Ҫ��������Ŀ
	// ������������Ƶ����
}TPAudioSegmentData, *LPTPAudioSegmentData;

// ͼ���С�ṹ����
typedef struct tag_TPImageSize
{
	DWORD								dwWidth;							// ���
	DWORD								dwHeight;							// �߶�
}TPImageSize, *LPTPImageSize;

typedef struct tag_TPPixelAspectRatio
{
	long								lPixelAspectRatioNum;				// ���ؿ�߱ȷ���
	long								lPixelAspectRatioScale;				// ���ؿ�߱ȷ�ĸ
}TPPixelAspectRatio, *LPTPPixelAspectRatio;

// ͼ����Ƶ֧֡�ָ�ʽ(δѹ��)�ṹ����
typedef struct tag_NXImageFormatSu
{
	// ljj@2010-12-27:ȥ��dwSize������
	// ljj@2011-7-22:ȥ��dwPrefWidth/Height����pImageSizeSu�����档ȥ��dwVideoStandSu����pFrameRateSu������
	// ljj@2011-7-22:ȥ��lAspectRatio����pAspectRatioSu������
	// ljj@2011-7-22:ȥ����VideoStandardEx����֮����������ֱ�۲�����������ط����жϵ�֡�ʣ�����ط�����ɫλ����8/10λ����
	// ljj@2011-7-22:����֡��֧��ѡ��
	// ljj@2011-7-22:������ɫλ��֧��ѡ��
	// ljj@2011-7-26:ȥ��bStill���ʹ˽ṹ���ϼ���NXVideoFormatSu::dwMediaType�����ظ������ù����߽����жϣ�ʹ��TP_MEDIA_CLASS_V_P|TP_MEDIA_CLASS_V_SERIAL����
	// ljj@2011-7-26:���Ӳ���bUnLimitImgSize��dwWidthStep��dwHeightStep��bUnLimitFrameRate��
	// ljj@2011-7-26:ȥ��dwVersion
	// ljj@2011-7-27:����dbFrameRateStep

	DWORD								dwMinWidth;							// ͼ���
	DWORD								dwMinHeight;						// ͼ���
	DWORD								dwMaxWidth;							// ͼ���
	DWORD								dwMaxHeight;						// ͼ���
	BOOL								bUnLimitImgSize;					// FALSE:ֻ��֧�����޸���ߡ����min/maxWidth/Height��һ����Χ��������ֵ��TRUE��
																			// ����˼��˵����߲����ڸ����ķ�Χ���������������ֻ���й̶��ļ���ֵ���⼸���̶�ѡ��ֵ���������pImgSizeSu���档
																			// �����TRUE�����Ƿ�Χ������˼�ǿ����ڿ�߷�Χ��������������������˵���������pImgSizeSu���������Ƽ��Ŀ�ߡ�
	DWORD								dwWidthStep;						// ���ֵ�ĵ�������
	DWORD								dwHeightStep;						// �߶�ֵ�ĵ�������
	long								lSuggestImageSizeNum;				// �ṩ�ɹ��û�ѡ��ļ��ֳߴ�����
	TPImageSize*						pImageSizeSu;						// ͼ���Сָ��

	double								dbMinFrameRate;						// ��С֡��֧��
	double								dbMaxFrameRate;						// ���֡��֧��
	BOOL								bUnLimitFrameRate;					// TRUE:ֻ��֧�����޸�֡�ʡ�FALSE:֡�ʿ����޵������ο�bLimitImgSize.
	double								dbFrameRateStep;					// FrameRate�ĵ�������
	long								lSuggestFrameRateNum;				// �Ƽ��û�ѡ���֡�ʸ���
	double*								pSuggestFrameRateSu;				// �Ƽ��û�ѡ���֡��

	DWORD								dwPixFormat;						// ����ͬһ��ѹ����ʽ��˵���п����в�ͬ�����ظ�ʽ,���Ը��ݲ�ͬ�����ظ�ʽ����ʵ�ʵ��ֽ���
	DWORD								dwColorBits;						// ֧�ֵ�ColorBits��NXImgFmtSu_ColorBit_8,10,12,14,16...
	DWORD								dwScanMode;							// ��֧�ֵ�ͼ��ɨ��ģʽ,NXImgFmtSu_ScanMode_Interlace,NXImgFmtSu_ScanMode_Progressive�����ж���/�׳�����ѡ�
	long								lPixelAspectRatioSuNum;				// ֧�ֵ����ؿ�߱ȸ���.�����0��NULL����˼��ֻ֧��Ĭ�ϵ�1��1���ء�
	LPTPPixelAspectRatio				pPixelAspectRatioSu;				// ֧�ֵ����ؿ�߱�


}NXImageFormatSu, *LPNXImageFormatSu;

// ͼ����Ƶѹ������֧�ָ�ʽ(ѹ��)�ṹ����
typedef struct tag_NXVideoCompressParaSu
{
	// ljj@2011-7-22:ȥ��dwPrefDataRate;��֮��SuggestDataRateSu����
	// ljj@2011-7-22:ȥ��dwPrefKeyframe;��֮��SuggestKeyFrameSu����
	// ljj@2011-7-26:���Ӳ���dwDataRateStep,bUnLimitDataRate��
	DWORD								dwMinKeyFrame;
	DWORD								dwMaxKeyFrame;
	long								lSuggestKeyFrameNum;				// �Ƽ��û�ѡ��Ĺؼ�֡����
	DWORD*								pSuggestKeyFrameSu;					// �Ƽ��û�ѡ��Ĺؼ�֡

	DWORD								dwMinDataRate;						// �����ʣ���bpsΪ��λ
	DWORD								dwMaxDataRate;						// �����ʣ���bpsΪ��λ
	BOOL								bUnLimitDataRate;					// �������Ƿ�������������������ο�NXImageFormatSu::bLimitImgSize�ĺ��塣
	DWORD								dwDataRateStep;						// �����ʵĵ�����������bpsΪ��λ��
	long								lSuggestDataRateNum;				// �Ƽ��û�ѡ������ʸ���
	DWORD*								pSuggestDataRateSu;					// �Ƽ��û�ѡ������ʣ�bps��

	DWORD								dwPrivateDataSize;					// ˽�������ֽ���
	BYTE*								pPrivateData;						// ˽������
}NXVideoCompressParaSu, *LPNXVideoCompressParaSu;

// ��Ƶ֧�ָ�ʽ���壨����ѹ����ʽ�Ͳ�����
typedef struct tag_NXVideoFormatSu
{
	// ljj@2010-12-27:ȥ��dwSize,bRealTime,bIsCompress�����á�dwVideoStandSu��ImageFormatSu���ظ���ȥ��֮����lVideoStandSuNumΪlImgFmtSuCount;
	// ljj@2011-7-26:ȥ��dwVersion
	// ljj@2011-7-28:��չdwMediaTypeΪULONGLONG 64λ���Ա���չ��־
	TCHAR								ptszFormat[MAX_FILETYPE_NAME];		// ��Ƶ��ʽ����
	DWORD								dwFOURCC;							// FOURCC Codes  //��Ӧ�ڱ������͵�����
	TP_ACCESS_MODE						tpAccessType;						// �������Խ���ѹ�����ǽ�ѹ��
	NXVideoCompressParaSu				tpVCParaSu;							// ѹ����ʽ����

	long								lImgFmtSuCount;						// ��֧�ֵ���ʽ����hh
	NXImageFormatSu*					pImageFormatSu;

	ULONGLONG							dwMediaType;						// ����һ��MediaType��־, ������ȫ����FileManage�ڵ�FileTypeTable��CompresserTable, V_V/ V_P/ A�ȡ������Ƿ�֧��3DAgent���Ƿ�֧�������ȡ�
}NXVideoFormatSu, *LPNXVideoFormatSu;

// ��Ƶ֧�ֽṹ���壬������Ƶѹ����ʽ�Ͳ���
typedef struct tag_NXAudioFormatSu
{
	// ljj@2010-12-27:ȥ��dwSize��bIsCompress,����
	// ljj@2011-7-22:ȥ��dwPrefCompDataRate;��֮��pSuggestDataRateSu����
	// ljj@2011-7-26:���Ӳ���bUnLimitDataRate��dwDataRateStep��dwVersion
	// ljj@2011-7-28:��չdwMediaTypeΪULONGLONG 64λ���Ա���չ��־

	TCHAR								ptszFormat[MAX_FILETYPE_NAME];		// ��Ƶ��ʽ����
	DWORD								dwFOURCC;							// FOURCC Codes
	TP_ACCESS_MODE						tpAccessType;						// �������Խ���ѹ�����ǽ�ѹ��

	// ��Ƶ������Ϣ
	DWORD								dwChannelInfo;						// TP_AudioChannel
	DWORD								dwSamplesInfo;						// TPAudioSample
	DWORD								dwBitsInfo;							// ����λ�� : TP_AudioBits

	// ѹ������
	DWORD								dwMinCompDataRate;					// �����ʣ���bpsΪ��λ
	DWORD								dwMaxCompDataRate;					// �����ʣ���bpsΪ��λ
	BOOL								bUnLimitDataRate;					// �������Ƿ�������������������ο�NXImageFormatSu::bLimitImgSize�ĺ��塣
	DWORD								dwDataRateStep;						// �����ʵ�����������bpsΪ��λ
	long								lSuggestDataRateNum;				// �Ƽ��û�ѡ������ʸ���
	DWORD*								pSuggestDataRateSu;					// �Ƽ��û�ѡ������ʣ�bps��


	ULONGLONG							dwMediaType;						// V_V/ V_P/ A�ȡ�

	DWORD								dwPrivateSize;						// ˽�������ֽ���
	BYTE*								pPrivateData;						// ˽������
}NXAudioFormatSu, *LPNXAudioFormatSu;


// ��չ����ṹ����
typedef struct tab_NXExtNameTable
{
	//ljj@2011-7-26:ȥ��dwSize��dwVersion
	TCHAR								ptszExtName[MAX_EXT_NAME_SIZE];		// ����֧�ֶ����ļ���չ������
}NXExtNameTable, *LPNXExtNameTable;

// �ļ�֧�ָ�ʽ���壨����ѹ����ʽ�Ͳ�������ѹ���ļ�����͸�������Ҫ����������½ṹ���б�
typedef struct tag_NXFileFormatSu
{
	//ljj@2010-12-27:ȥ��dwSize������;dwVideoStandardSu��TPVideoFormatSu�ظ���ȥ����
	//ljj@2011-7-26:ȥ��dwVersion
	TCHAR								ptszFileTypeGroup[MAX_FILETYPE_NAME];// �ļ�����������
	long								lExtNameCount;						// ֧���ļ���չ������
	LPNXExtNameTable					lpExtNameTable;						// ��չ����(�����ڲ����)
	GUID								guidFileType;
	TCHAR								ptszFileTypeName[MAX_FILETYPE_NAME];// �ļ���������
	TP_ACCESS_MODE						tpAccessMode;
	BOOL								bCanVideo;
	BOOL								bCanAudio;
	long								lVideoFormatSuNum;
	NXVideoFormatSu*					pVideoFormatSu;
	long								lAudioFormatSuNum;
	NXAudioFormatSu*					pAudioFormatSu;
	DWORD								dwExtraType;
}NXFileFormatSu, *LPNXFileFormatSu;


//// ������Ϣ���壬ֻҪ������ʽ��Ϣ
//typedef struct tag_NXBaseSystemInfo
//{
//	TP_VIDEO_STANDARD					tpEditVideoStandard;				// ��ǰ�༭����Ƶ��ʽ
//	TPAudioFormat						tpAudioFormat;						// ��ǰ�༭����Ƶ��ʽ
//	tag_NXBaseSystemInfo()
//	{
//		tpEditVideoStandard = TP_VIDEOSTANDARD_PAL;
//		tpAudioFormat.iChannels = 1;
//		tpAudioFormat.iSamplesRate = 48000;
//		tpAudioFormat.iBitsPerSample = 16;
//	}
//}NXBaseSystemInfo;

// �ؼ�����grid
typedef struct tag_TPEffectSet_Grid
{
	long								lIntervalX;
	long								lIntervalY;
	long								lOffsetX;
	long								lOffsetY;
	DWORD								dwColor;
}TPEffectSet_Grid, *LPTPEffectSet_Grid;

// ���ֵĽṹ����
typedef struct tag_TPTextOut
{
	long								lOffsetX;							// ����xλ��
	long								lOffsetY;							// ����yλ��
	long								lBkOffsetX;							// ����xλ��
	long								lBkOffsetY;							// ����yλ��
	DWORD								dwColor;
	TCHAR								strTextout[1024];
}TPTextOut, *LPTPTextOut;

// SplitMark�ṹ����
typedef struct tag_TPSplitMark
{
	BOOL								bShowSplit;
	FLOAT								rcLeft;
	FLOAT								rcRight;
	FLOAT								rcTop;
	FLOAT								rcBottom;
	UINT								type;
}TPSplitMark, *LPTPSplitMark;

// ��ȫ�����
typedef struct tag_NXSafeBoxParam
{
	BOOL								bShowBoard;							// �Ƿ���ʾ��ȫ��
	float								lSafeBoxX;							// ��ȫ��xֵ
	float								lSafeBoxY;							// ��ȫ��yֵ
}NXSafeBoxParam;

// ���TC��Ϣ�ṹ����(�ϲ��Թ�粿��)
typedef struct tag_NXTrackTcInfo
{
	int									iTrackCount;						// �������
	TPTextOut							stTcTextInfo[20];					// Tc������Ϣ
}NXTrackTcInfo, *LPNXTrackTcInfo;

// ����ʶ����������Ϣ����
typedef struct tag_FaceArea
{
	double								dX;
	double								dY;
	double								dWidth;
	double								dHeight;
	int									iFaceID;
}FaceArea;

// MV/SV��ʾ�������ýṹ����
typedef struct tag_TPVideoDispProperty
{
	double								dRatio;								// ���ٷֱ�
	BOOL								bOnlyMove;
	BOOL								bOnlyZoom;
	POINT								ptOffset;
	BOOL								bDrawGrid;
	TPEffectSet_Grid					tpGrid;
	TPTextOut							tpTextOut;							// �������
	BOOL								bShowZebra;
	TPSplitMark							tpSplitMark;
	BOOL								bDrawCenterXY;
	double								dCenterX;
	double								dCenterY;
	BOOL								bIsPlay;
	NXSafeBoxParam						stSafeBox[4];						// ��ȫ����������ι涨Ϊ16:9��Ƶ ��Ļ��4:3 ��Ƶ ��Ļ
	BOOL								bTrackTcDisplay;                    // �Ƿ�TC����ʾ
	BOOL								bMultiTrackTcDisplay;               // �Ƿ��Ƕര����ʾ
	DWORD								dwMultiWndCount;                    // �ര����ʾ��λ��
	ENX_TrackTCPos						eTrackTcDisplay;					// ���TC��λ����Ϣ
	NXTrackTcInfo						stVideoTrackTc;						// ��Ƶ���Tc��Ϣ
	NXTrackTcInfo						stAudioTrackTc;						// ��Ƶ���Tc��Ϣ
	int									nOverlayDisplayID;
}TPVideoDispProperty, *LPTPVideoDispProperty;

// MV������ʾģʽ
typedef enum
{
	MV_MODE_FIT,
	MV_MODE_33,
	MV_MODE_50,
	MV_MODE_75,
	MV_MODE_100,
	MV_MODE_150,
	MV_MODE_200,
	MV_MODE_400,
	MV_MODE_MCSAFEBD,														// �ྵͷģʽ��ȫ��
}MV_MODE;

// ���Ϲ��Seek����
typedef enum
{
	SEEK_FRAME,
	SEEK_ODD,
	SEEK_EVEN
}SEEK_TYPE;

// Trim��ʱ����ʾ�������ýṹ����
typedef struct tag_TPVideoTrimDisplayProperty
{
	TPTextOut							tpTextOut;							// �������
	BOOL								bDrawMarkPt;
	BOOL								bDrawTLIn;
	BOOL								bDrawTLOut;
	BOOL								bDrawTrimIn;
	BOOL								bDrawTrimOut;
	BOOL								bDrawSegIn;
	BOOL								bDrawSegOut;
	BOOL								bDrawEndPoint;
	int									nSegType;
	MV_MODE								eMode;
	DWORD								dwBKColor;
	NSRect								rtDest;
	NSRect								rtSrc;
	int (*draw_auxiliary_line_2d)();
	DWORD								dwOutBorderCr;						// ���ε�ͼ��߿���ɫ
	float								fOutLineWidth;						// ������߿�������С
	DWORD								dwInBorderCr;						// ���ε�ͼ�ڱ߿���ɫ
	float								fInLineWidth;						// �����ڱ߿�������С
	float								fRatioWH;							// ��ͼ����ڴ��ڵı���
	DWORD								dwFieldDisplayType;					// ��������ʾ���ͣ�0 ����ʾ��1 ��ʾ�泡��2 ż����ʾ
	float								fSpeedShow;
	BOOL								bShowSpeed;
	BOOL								bDrawFaceArea;
	SEEK_TYPE							eSeekType;
}TPVideoTrimDisplayProperty,*LPTPVideoTrimDisplayProperty;

// ������¼��ǰ����ĺܶ�������Ϣ
struct  TPEngineConfigPara
{
	int									nCGProxyEditmode;					// proxy mode cg Full edit or not
	int									nCGScrollMode;						// scroll mode
	BOOL								nAudioMuteWhenNRealTime;			// not realtime audio mute.
	unsigned int						nCGMemoryLimit;						// cg use total mem.
	long								lRealSDlProxyRate;
	long								lRealHDlProxyRate;
	BOOL								bField;								// Frame or field ��Ҫ��720P��Proxy�༭��
	BOOL								bFieldTwiceRedner;
	long								lSoundCardDelayTime;				// �����ӳ�ʱ��/for sdi-����ͬ��
	int									nCutCount;							// ������¼��Ƶ֡���ָ�ķ�����Ϊ�˱�1920����������ӦΪ16�ı���
	BOOL								bLeftEye;							// ����MV�����ֻ�۾���buffer��true��ʾ���ۣ�false��ʾ����
	int									iOutputDevice;						// ����豸��0 ���豸 1 Nv3D 2 ���ӻ�
	int									nCG3DAAMode_sd;						// �����ģʽ
	int									nCG3DAAMode_hd;
	int									nCG3DAALevel_sd;					// ������ȼ�
	int									nCG3DAALevel_hd;
	int									nCG3DAABlur_sd;						// �����ģ��
	int									nCG3DAABlur_hd;
	BOOL								bLightGPU;							// ������GPU����༭���ϲ��Թ������
	BOOL								bProxyFrame;						// ��������֡�༭���ǰ����༭���ϲ��Թ������
	int									iHDProxySize;						// �������༭����������ţ��ϲ��Թ������
};

// ������Ϣ���壬ֻҪ������ʽ��Ϣ
typedef struct tag_NXEngineBaseSystemInfo
{
	TP_VIDEO_STANDARD					tpEditVideoStandard;				// ��ǰ�༭����Ƶ��ʽ
	TPAudioFormat						tpAudioFormat;						// ��ǰ�༭����Ƶ��ʽ
}NXEngineBaseSystemInfo;

// �����ز���Ϣ
typedef struct _tagSTPEngineClipInfo
{
	long								lEffType;							// 0 clip 1: transition
	void*								pCurEffect;							// ��ǰ�ؼ����
	void*								pClipInfo;							// ָ��ʱ���ߵ�Clip��Ϣ,��engineclip����Ϣ,��ʱ�ɲ���
	void*								pNodeGraph;							// ��ǰ�ز��ϵĽڵ�ͼ����
	void*								pCurNode;							// ��ǰ�༭�Ľڵ�
	long								lSplitDirection;					// 0:ˮƽ 1:��ֱ
	double								dSplitViewRatio;					// 0~100�ٷֱȣ�ȱʡΪ0
	long								lTrackIn;							// Clip�ڵ�ǰʱ�����ϵ������
	long								lTrackOut;
	GUID								gTrackID;							// Clip����Track��ID
}STPEngineClipInfo;

// ��Ƶ�����Ϣ�ṹ����
struct STPSpecialAudioTrack
{
	GUID								gTrackID;
	__int64								iTrackIn;
	__int64								iTrackOut;
};

// ������Ƶ��Ϣ
typedef struct _tagSTPSpecialAudioInfo
{
	int									    iTrackCount;
}STPSpecialAudioInfo;

// �������ϵͳ�������ݽṹ
typedef struct tag_TPDetectPrecisonStu
{
	DWORD								dwVersion;
	long								lSensitivity;
	long								lMinLength;
	BOOL								bDistrubClear;
	long								lDisturbthreshold;
	BOOL								bShotMerger;
	long								lMerge;
	long								lShotType;
}TPDetectPrecisonStu, *LPTPDetectPrecisonStu;

//�����ı�ṹ����
typedef struct tag_TPParamChangeStu
{
	int									iIndex;								// ����
	int									iSubIndexCount;						// mini param adjʱ�����
	int*								pIndexArray;						// ��������
}TPParamChangeStu, *LPTPParamChangeStu;

typedef struct tag_TPEffectLinkParaStu
{
	long								lParamIndex;
	long								lSubParamIndex;
}TPEffectLinkParaStu, *LPTPEffectLinkParaStu;

typedef struct tag_TPEffectLinkParaStuEx
{
	long								lLinkNum;
	LPTPEffectLinkParaStu				pLinkParaStu;
}TPEffectLinkParaStuEx, *LPTPEffectLinkParaStuEx;

// ������Ƶ��ʾ��������
typedef struct tag_NXStereoDisplayParam
{
	ENX_Present_Window_type				eNXPresentWindowType;				// Ԥ�ര������
	ENX_StereoDisplayType				eNXStereoDisplayType;				// ������Ƶ��ʾ����
	float								fStereoSplitRatio;					// �����۷ָ����
	void*								hWnd;								// ���ھ��
	float								fCenterX;
	float								fCenterY;
	BOOL								bLeft;
	BOOL								bDrawCenter;
}NXStereoDisplayParam;

//////////////////////////////////////////////////////////////////////////
// Raw�����ڲ�����ַ�������
#define NX_RAWDATA_MAX_STR_LEN			64

// ����Raw�ļ���ʽ���ݶ���
typedef struct tag_NXEngineRawData
{
	ENX_RawDataType						eRawType;							// Raw���ݸ�ʽ����
	float								fKelvin;
	float								fTint;
	float								fExposure;
	float								fGainR;
	float								fGainG;
	float								fGainB;
	float								fSaturation;
	float								fContrast;
	float								fBrightness;
	float								fDRX;
	float								fShadow;
	float								fFLUT;
	__int64								iISO;
	TCHAR								ptszGammaCurve[NX_RAWDATA_MAX_STR_LEN];
	TCHAR								ptszColorSpace[NX_RAWDATA_MAX_STR_LEN];
}NXEngineRawData, *LPNXEngineRawData;

//////////////////////////////////////////////////////////////////////////
typedef enum MV_COMMAND
{
	MV_GETMODE,
	MV_SETMODE,
	MV_GETOFFSET,
	MV_SETOFFSET,
	MV_GETDATAXY,
};

