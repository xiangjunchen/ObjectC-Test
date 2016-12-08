#define MAX_EXT_NAME_SIZE				32
#define MAX_FILETYPE_NAME				32
// 访问模式，类型为TP_ACCESS_MODE
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
#define TP_ACCESS_KEEP_ODD				0x00008000							// 设置此标志，则图像显示真实的宽度，不进行奇数列补为偶数列 add by wgf@2010-5-18
#define TP_ACCESS_GETCOMPBUF			0x00020000							// ljj@2010-11:获取文件中的视频和音频的压缩buffer
#define TP_ACCESS_WRITECOMPBUF			0x00040000							// ljj@2010-11:向文件中写入视频和音频的压缩buffer
#define TP_ACCESS_ENCBUFOUT				0x00080000							// ljj@2010-11:创建编码器，回调得到编码buffer。
#define TP_ACCESS_DONT_CREATE_INDEX		0x00010000							// Open时，不创建index文件 add by wgf@2011-1-10
#define TP_ACCESS_IGNORE_ALPHA		0x00020000							// 取图片buffer时，忽略alpha，主要用于不规范alpha的BMP文件 add by wgf@2012-6-5
//////////////////////////////////////////////////////////////////////////

// 视频制式个数
// #define TP_VIDEO_STANDARD_NUM			19
//////////////////////////////////////////////////////////////////////////

// 文件格式设置类型定义
#define TPFILEFORMAT_SET_TYPE_NULL		0x00000000
#define TPFILEFORMAT_SET_TYPE_VIDEO		0x00000001
#define TPFILEFORMAT_SET_TYPE_VIDEO_V	0x00000002
#define TPFILEFORMAT_SET_TYPE_VIDEO_P	0x00000004
#define TPFILEFORMAT_SET_TYPE_VIDEO_P_SERIAL 0x00000008
#define TPFILEFORMAT_SET_TYPE_AUDIO		0x00000010
#define TPFILEFORMAT_SET_TYPE_KEY		0x00000020
#define TPFILEFORMAT_SET_TYPE_ALL		(TPFILEFORMAT_SET_TYPE_VIDEO_V | TPFILEFORMAT_SET_TYPE_VIDEO_P | TPFILEFORMAT_SET_TYPE_VIDEO_P_SERIAL | TPFILEFORMAT_SET_TYPE_AUDIO | TPFILEFORMAT_SET_TYPE_KEY)

// 文件格式操作类型定义
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
typedef long							TP_ACCESS_MODE;						// 访问模式
typedef DWORD							TP_SPLITVIEW_RES;

// ImgFormatSu用的值，赋值到lScanMode，可与可或。表示此格式能支持的扫描格式。
#define NXImgFmtSu_ScanMode_None				0x00000000
#define NXImgFmtSu_ScanMode_Interlace			0x00000001					// 隔行扫描
#define NXImgFmtSu_ScanMode_Progressive			0x00000002					// 逐行扫描
#define NXImgFmtSu_ScanMode_TopFieldFirst		0x00010000					// 顶场优先：如果是逐行扫描，没有这个选项。
#define NXImgFmtSu_ScanMode_BottomFieldFirst	0x00020000					// 底场优先：如果是逐行扫描，没有这个选项。

// ImgFormatSu用的值，赋值到lColorBits，可与可或。表示此格式能支持的像素单通道的量化位数。
#define NXImgFmtSu_ColorBit_None		0x00000000
#define NXImgFmtSu_ColorBit_8			0x00000001
#define NXImgFmtSu_ColorBit_10			0x00000002
#define NXImgFmtSu_ColorBit_12			0x00000004
#define NXImgFmtSu_ColorBit_14			0x00000008
#define NXImgFmtSu_ColorBit_16			0x00000010
#define NXImgFmtSu_ColorBit_All			0xffffffff


// 窗口切分定义，对应类型TP_SPLITVIEW_RES
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

// 编辑时渲染模式定义
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
	TP_VIDEOSTANDARD_NTSC_2997_480		= 0x00400000,		//NTSC size:720*480  f/s : 29.97  //先留着，防止以后特殊情况再改成480
	TP_VIDEOSTANDARD_NTSC_30_480		= 0x00800000,		//NTSC size:720*480 f/s : 30 //先留着，防止以后特殊情况再改成480


	TP_VIDEOSTANDARD_1280_1080_50i		= 0x01000000,	    //HD  size:1280*1080 f/s : 25 interlaced
	TP_VIDEOSTANDARD_1280_1080_5994i	= 0x02000000,	    //HD  size:1280*1080 f/s : 29.97 interlaced
	TP_VIDEOSTANDARD_1280_1080_60i		= 0x04000000,	    //HD  size:1280*1080 f/s : 30 interlaced

	//以下设置都是临时使用的。 将来如何定义重新弄

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
}TP_VIDEO_STANDARD	;// 桌面视频制式标准枚举定义;

#define TP_VIDEOSTANDARD_ALL 0xffffffff   //缺省支持所有制式 hh

// 用于Present的窗口类型定义
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
	eNX_PRESENT_WND_ACCRLEFT,												// 高级颜色校正左侧窗口
	eNX_PRESENT_WND_ACCRMID,												// 高级颜色校正中间窗口
	eNX_PRESENT_WND_ACCRRIGHT,												// 高级颜色校正右侧窗口
	eNX_PRESENT_WND_ICON_PLAY,
	eNX_PRESENT_WND_3DPARTICLE,												// 3D粒子，粒子
	eNX_PRESENT_WND_3DMODIFY,												// 3D调节
	eNX_PRESENT_WND_AUDIOCURVESHIFT,										// 音频曲线变速窗口
	eNX_PRESENT_WND_3DCLIPIMPORT,											// 3D素材导入工具窗口
	eNX_PRESENT_WND_3DMATERIAL,												// 3D材质窗口
	eNX_PRESENT_WND_3DCAMERA,												// 3D相机窗口
	eNX_PRESENT_WND_3DGLOBLECAMERA,											// 相机参数调整
	eNX_PRESENT_WND_AUDIOSOUNDKEY,											// 音频频谱分析
	eNX_PRESENT_WND_MODALDIALOG,											// 模式对话框窗口
	eNX_PRESENT_WND_MULTICAMERA,											// 多镜头编辑窗口
	eNX_PRESENT_WND_TRIMLEFT,                                               // Trim编辑左侧窗口
	eNX_PRESENT_WND_TRIMRIGHT,                                              // Trim编辑右侧窗口
	eNX_PRESENT_WND_HDMIOUTPUT,												// HDMI输出窗口
	eNX_PRESENT_WND_OUTPUTCARD,												// 板卡输出窗口

	eNX_PRESENT_WND_MAX,
}ENX_Present_Window_type;

// 立体视频显示定义
// 这项定义只有在3D版本中有效，如果是2D版本，需要忽略
typedef enum
{
	eNX_StereoDisplayType_LeftEye,											// 只显示左眼
	eNX_StereoDisplayType_RightEye,											// 只显示右眼
	eNX_StereoDisplayType_SideBySide,										// 左右眼分到左边和右边显示
	eNX_StereoDisplayType_TopBottom,										// 左右眼分到上面和下面显示
	eNX_StereoDisplayType_SideBySideStretch,								// 左右眼分到左边和右边显示
	eNX_StereoDisplayType_TopBottomStretch,									// 左右眼分到上面和下面显示
	eNX_StereoDisplayType_Compose,											// 左右眼叠加显示
	eNX_StereoDisplayType_ComposeLR,										// 左眼-右眼合成显示
	eNX_StereoDisplayType_ComposeRL,										// 右眼-左眼合成显示
	eNX_StereoDisplayType_RedBlue,											// 红蓝显示
	eNX_StereoDisplayType_RedGreen,											// 红绿显示
	eNX_StereoDisplayType_BlueBrown,										// 蓝棕显示

	eNX_StereoDisplayType_Unknown
}ENX_StereoDisplayType;

// 获取视频制式的标识字符串
typedef enum
{
	evstmView							= 0x01,
	evstmWidthHeight					= 0x02,
	evstmFrameRate						= 0x04,
	evstmBitCount						= 0x08,
	evstmAll							= 0x0f,
}eTPVideoStandardTitleMask;

// 轨道TC码位置信息(合并自广电部门)
typedef enum
{
	eNX_TrackTCPos_Null,													// 不显示轨道TC码
	eNX_TrackTCPos_LeftTop,													// 左上角显示轨道TC码
	eNX_TrackTCPos_RightTop,												// 右上角显示轨道TC码
	eNX_TrackTCPos_LeftBottom,												// 左下角显示轨道TC码
	eNX_TrackTCPos_RightBottom,												// 右下角显示轨道TC码
	eNX_TrackTCPos_CenterBottom,											// 居中底部显示轨道TC码

	eNX_TrackTCPos_Unknown
}ENX_TrackTCPos;

// Raw数据格式
typedef enum
{
	eNX_RawDataType_Unknown,												// 未知类型
	eNX_RawDataType_Red,													// RED Raw格式
	eNX_RawDataType_Sony,													// SONY Raw格式
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
#define TP_AudioChannel_2_1				0x00000800	//only for AC3,E-AC3: 2.1:L,R,Lfe(低音)
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
#define TP_AudioSample_32				0x00000080							// 新增by ljj@2011-7-22
#define TP_AudioSample_All				0xffffffff

//////////////////////////////////////////////////////////////////////////
typedef LONG							TP_MEDIA_CLASS_TYPE;				// 文件类型
typedef DWORD							PixelFormat;						// 像素格式
//////////////////////////////////////////////////////////////////////////

// 立体视频放置方式定义
typedef enum
{
	NX3DFrameType_None					= 0,
	NX3DFrameType_TopBottom				= 1,								// 一帧内包含所有视角，按顺序从上到下排列，例如双目视频，则上左下右。
	NX3DFrameType_LeftRight				= 2,								// 一帧内包含所有视角，按顺序从左到右排列，例如双目视频，则左左右右。
	NX3DFrameType_Seperate				= 3,								// 一帧内只包含一个视角，多个视角按顺序逐帧排列，例如双目视频，先左后右。

	// [[ljj@2010-11-12:兼容2D模式的FrameBuffer。
	NX3DFrameType_2D					= 100,
	// ]]
}NX3DFrameType;
// 视频制式参数定义
typedef struct tag_TPTimeBase
{
	int									iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	int									lTimeRate;							// 15, 24, 25, 2997, 30
	int									lTimeScale;							// 1或者100
	long								lWidth;
	long								lHeight;
}TPTimeBase, *LPTPTimeBase;

// 音频格式(未压缩)定义
typedef struct tag_TPAudioFormat
{
	WORD								iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	WORD								iChannels;							// 通道数
	DWORD								iSamplesRate;						// 采样率
	WORD								iBitsPerSample;						// 量化位数
}TPAudioFormat, *LPTPAudioFormat;

// 音频压缩参数定义
typedef struct tag_TPAudioCompressPara
{
	WORD								iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	DWORD								iDataRate;							// 数据率，以bps为单位
	DWORD								iInterleave;						// 交错帧数
	DWORD								dwPrivateDataSize;					// 私有数据字节数
	BYTE*								pPrivateData;						// 私有数据
}TPAudioCompressPara, *LPTPAudioCompressPara;

// 音频格式定义：音频压缩格式和参数
typedef struct tag_TPAudioFormatEx
{
	DWORD								iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	TPAudioFormat						tpAudioFormat;						// 音频无压缩格式
	DWORD								dwFOURCC;							// FOURCC Codes
	TPAudioCompressPara					tpAudioCompressPara;				// 压缩参数
}TPAudioFormatEx, *LPTPAudioFormatEx;
/***********音频格式参数结构*******************/
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
// 分辨率信息定义
typedef struct tag_TPResolutionInfo
{
	DWORD								dwSize;
	long								lWidth;								// 宽度
	long								lHeight;							// 高度
	TP_ASPECTRATIO						tpAspectRatio;						// 宽高比
	TPTimeBase							tpTimeBase;							// 制式
	TP_SCANMODE							tpScanMode;							// 扫描模式
	TP_VIDEO_STANDARD                   eVideoStandard;						// 高低质量统一
}TPResolutionInfo, *LPTPResolutionInfo;

// 图象视频帧格式(未压缩)定义
typedef struct tag_TPImageFormat
{
	DWORD								iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	DWORD								iWidth;								// 图像宽
	DWORD								iHeight;							// 图像高
	DWORD								iBitsPerPixel;						// 每个像素所占位数
	DWORD								iRowbytes;							// 每行所占字节数
	DWORD								iPixFmt;							// 像素格式  对应PixelFormat
	DWORD								dwFrameSize;						// 每帧图像的大小
	DWORD								iAspectRatioNum;					// 像素纵横比分子
	DWORD								iAspectRatioDen;					// 像素纵横比分母
	BOOL								bStill;								// 是否为静态图像
	TP_SCANMODE							tpScanMode;							// 图像扫描模式
	DWORD								dwPrivateDataSize;					// 私有数据字节数
	void*								pPrivateData;						// 私有数据
	DWORD								iAFDType;							// AFD类型，对应版本号 >= 1
}TPImageFormat, *LPTPImageFormat;

// 视频压缩参数结构定义
typedef struct tag_TPVideoCompressPara
{
	DWORD								iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	DWORD								iKeyFrame;							// 关键帧
	DWORD								iDataRate;							// 数据率，以bps为单位
	DWORD								dwPrivateDataSize;					// 私有数据字节数
	DWORD								dwCompressType;						// 压缩类型
	void*								pPrivateData;						// 私有数据
}TPVideoCompressPara, *LPTPVideoCompressPara;

// 视频格式（包括压缩格式和参数）结构定义
typedef struct tag_TPVideoFormat
{
	DWORD								iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	TPTimeBase							tpTimeBase;							// 帧速率（类似于视频标准）
	TP_VIDEO_STANDARD					tpVideoStandard;					// 视频制式
	TPImageFormat						tpImageFormat;						// 图像格式
	DWORD								dwFOURCC;							// FOURCC Codes
	TPVideoCompressPara					tpVideoCompressPara;				// 压缩参数
	DWORD								dwSubMediaType;						// 临时使用, 一般不要用
	NX3DFrameType						e3DFrameType;						// 立体视频的帧buffer类型
	BOOL								b3DHasZInfo;						// 立体视频是否有深度信息
	double								db3DDistanceOfEyes;					// 立体视频的双目距离
	double								db3DFocus;							// 立体视频的焦距值
	long								l3DViewCount;						// 立体视频的视角个数
	long								l3DViewAngleValueCount;				// 立体视频多视角的角度个数
	double*								p3DViewAngleValue;					// 立体视频多视角的角度数组
}TPVideoFormat, *LPTPVideoFormat;

// 文件格式结构定义
typedef struct tag_TPFileFormat
{
	DWORD								iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	BOOL								bHasVideo;							// 是否含有视频
	BOOL								bHasAudio;							// 是否含有音频
	GUID								guidFileType;						// 文件类型GUID
	DWORD								dwFileHeadSize;						// 文件头尺寸
	TPVideoFormat						tpVideoFormat;						// 视频格式
	TPAudioFormatEx						tpAudioFormatEx;					// 音频格式
}TPFileFormat, *LPTPFileFormat;

// 某一帧图像和图象数据结构（非压缩）定义
typedef struct tag_TPImageData
{
	int									iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	int									iOrgX;								// 源Buffer位于目标Buffer的起始点X坐标   //ADD BY HAN
	int									iOrgY;								// 源Buffer位于目标Buffer的起始点Y坐标   //ADD BY HAN
	int									iDesWidth;							// 目标Buffer宽
	int									iDesHeight;							// 目标Buffer高
	int									iOffsetX;							// 图像在源Buffer中的偏移X坐标
	int									iOffsetY;							// 图像在源Buffer中的偏移Y坐标
	int									iWidth;								// 图像高
	int									iHeight;							// 图像宽
	int									iSrcPitch;							// 源Buffer Pitch
	int									iSrcHeight;							// 源Buffer高
	int									iBitsPerPixel;						// 像素所占位数
	DWORD								dwCurPos;							// 图像所在帧号
	BYTE*								pData;								// 图像数据
	PixelFormat							ePixFmt;							// 图像格式
	BYTE*								pExData;							// 附属图像数据
	int									iExDataSize;						// 附属图像数据大小
	long								lTimeCode;							// 时码
}TPImageData, *LPTPImageData;

// 音频数据结构定义
typedef struct tag_TPAudioData
{
	int									iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	WORD								iChannels;							// 通道数
	DWORD								dwSamplesRate;						// 采样率
	WORD								iBitsPerSample;						// 量化位数
	TP_MEDIA_CLASS_TYPE					lMediaClassType;					// 音频通道号
	ULONGLONG							ulStartSample;						// 开始采样点位置
	ULONGLONG							ulSampleCount;						// 采样数量
	BYTE*								pData;								// 音频数据
}TPAudioData, *LPTPAudioData;

// 某段音频数据的结构
typedef struct tag_TPAudioSegmentData
{
	int									iSize;								// 结构大小
	DWORD								dwVersion;							// 版本号
	DWORD								dwInPoint;							// 入点
	DWORD								dwOutPoint;							// 出点
	DWORD								dwSampleRate;						// 采样频率
	DWORD								dwSampleSize;						// 采样数
	DWORD								dwValidBitsPerSample;				// 每个sample的有效位数
	DWORD								dwActualBitsPerSample;				// 每个sample的实际位数，即所占内存的位数
	DWORD								dwDataSize;							// 采样数据大小
	BYTE*								pData;								// 音频数据
	BYTE**								pStereoSurround;
	int									nActualChannel;
				// 实际需要的声道数目
	// 立体声环绕音频数据
}TPAudioSegmentData, *LPTPAudioSegmentData;

// 图像大小结构定义
typedef struct tag_TPImageSize
{
	DWORD								dwWidth;							// 宽度
	DWORD								dwHeight;							// 高度
}TPImageSize, *LPTPImageSize;

typedef struct tag_TPPixelAspectRatio
{
	long								lPixelAspectRatioNum;				// 像素宽高比分子
	long								lPixelAspectRatioScale;				// 像素宽高比分母
}TPPixelAspectRatio, *LPTPPixelAspectRatio;

// 图象视频帧支持格式(未压缩)结构定义
typedef struct tag_NXImageFormatSu
{
	// ljj@2010-12-27:去掉dwSize，无用
	// ljj@2011-7-22:去掉dwPrefWidth/Height，用pImageSizeSu来代替。去掉dwVideoStandSu，用pFrameRateSu来代替
	// ljj@2011-7-22:去掉lAspectRatio，用pAspectRatioSu来代替
	// ljj@2011-7-22:去掉了VideoStandardEx，代之以下面两个直观参数（大多数地方是判断的帧率，个别地方是颜色位数：8/10位）：
	// ljj@2011-7-22:增加帧率支持选项
	// ljj@2011-7-22:增加颜色位数支持选项
	// ljj@2011-7-26:去掉bStill，和此结构的上级：NXVideoFormatSu::dwMediaType功能重复，可用过后者进行判断（使用TP_MEDIA_CLASS_V_P|TP_MEDIA_CLASS_V_SERIAL）。
	// ljj@2011-7-26:增加参数bUnLimitImgSize，dwWidthStep，dwHeightStep，bUnLimitFrameRate。
	// ljj@2011-7-26:去掉dwVersion
	// ljj@2011-7-27:增加dbFrameRateStep

	DWORD								dwMinWidth;							// 图像宽
	DWORD								dwMinHeight;						// 图像高
	DWORD								dwMaxWidth;							// 图像宽
	DWORD								dwMaxHeight;						// 图像高
	BOOL								bUnLimitImgSize;					// FALSE:只能支持有限个宽高。如果min/maxWidth/Height是一个范围，如果这个值是TRUE，
																			// 则意思是说，宽高不能在给定的范围内任意调整，而是只能有固定的几个值。这几个固定选择值就在下面的pImgSizeSu里面。
																			// 如果是TRUE，且是范围，则意思是可以在宽高范围内任意调整。调整给出了调整步长。pImgSizeSu里面则是推荐的宽高。
	DWORD								dwWidthStep;						// 宽度值的调整步长
	DWORD								dwHeightStep;						// 高度值的调整步长
	long								lSuggestImageSizeNum;				// 提供可供用户选择的几种尺寸设置
	TPImageSize*						pImageSizeSu;						// 图像大小指针

	double								dbMinFrameRate;						// 最小帧率支持
	double								dbMaxFrameRate;						// 最大帧率支持
	BOOL								bUnLimitFrameRate;					// TRUE:只能支持有限个帧率。FALSE:帧率可无限调整。参考bLimitImgSize.
	double								dbFrameRateStep;					// FrameRate的调整步长
	long								lSuggestFrameRateNum;				// 推荐用户选择的帧率个数
	double*								pSuggestFrameRateSu;				// 推荐用户选择的帧率

	DWORD								dwPixFormat;						// 对于同一种压缩格式来说，有可能有不同的象素格式,可以根据不同的像素格式计算实际的字节数
	DWORD								dwColorBits;						// 支持的ColorBits：NXImgFmtSu_ColorBit_8,10,12,14,16...
	DWORD								dwScanMode;							// 所支持的图像扫描模式,NXImgFmtSu_ScanMode_Interlace,NXImgFmtSu_ScanMode_Progressive，还有顶场/底场优先选项。
	long								lPixelAspectRatioSuNum;				// 支持的像素宽高比个数.如果是0，NULL，意思是只支持默认的1：1像素。
	LPTPPixelAspectRatio				pPixelAspectRatioSu;				// 支持的像素宽高比


}NXImageFormatSu, *LPNXImageFormatSu;

// 图象视频压缩参数支持格式(压缩)结构定义
typedef struct tag_NXVideoCompressParaSu
{
	// ljj@2011-7-22:去掉dwPrefDataRate;代之以SuggestDataRateSu数组
	// ljj@2011-7-22:去掉dwPrefKeyframe;代之以SuggestKeyFrameSu数组
	// ljj@2011-7-26:增加参数dwDataRateStep,bUnLimitDataRate。
	DWORD								dwMinKeyFrame;
	DWORD								dwMaxKeyFrame;
	long								lSuggestKeyFrameNum;				// 推荐用户选择的关键帧个数
	DWORD*								pSuggestKeyFrameSu;					// 推荐用户选择的关键帧

	DWORD								dwMinDataRate;						// 数据率，以bps为单位
	DWORD								dwMaxDataRate;						// 数据率，以bps为单位
	BOOL								bUnLimitDataRate;					// 数据率是否可以无限连续调整，参考NXImageFormatSu::bLimitImgSize的含义。
	DWORD								dwDataRateStep;						// 数据率的调整步长，以bps为单位。
	long								lSuggestDataRateNum;				// 推荐用户选择的码率个数
	DWORD*								pSuggestDataRateSu;					// 推荐用户选择的码率（bps）

	DWORD								dwPrivateDataSize;					// 私有数据字节数
	BYTE*								pPrivateData;						// 私有数据
}NXVideoCompressParaSu, *LPNXVideoCompressParaSu;

// 视频支持格式定义（包括压缩格式和参数）
typedef struct tag_NXVideoFormatSu
{
	// ljj@2010-12-27:去掉dwSize,bRealTime,bIsCompress，无用。dwVideoStandSu与ImageFormatSu内重复，去掉之。改lVideoStandSuNum为lImgFmtSuCount;
	// ljj@2011-7-26:去掉dwVersion
	// ljj@2011-7-28:扩展dwMediaType为ULONGLONG 64位，以便扩展标志
	TCHAR								ptszFormat[MAX_FILETYPE_NAME];		// 视频格式名称
	DWORD								dwFOURCC;							// FOURCC Codes  //对应于编码类型等内容
	TP_ACCESS_MODE						tpAccessType;						// 表明可以进行压缩还是解压缩
	NXVideoCompressParaSu				tpVCParaSu;							// 压缩格式定义

	long								lImgFmtSuCount;						// 所支持的制式数量hh
	NXImageFormatSu*					pImageFormatSu;

	ULONGLONG							dwMediaType;						// 增加一个MediaType标志, 用于完全代替FileManage内的FileTypeTable的CompresserTable, V_V/ V_P/ A等。还有是否支持3DAgent，是否支持流化等。
}NXVideoFormatSu, *LPNXVideoFormatSu;

// 音频支持结构定义，包括音频压缩格式和参数
typedef struct tag_NXAudioFormatSu
{
	// ljj@2010-12-27:去掉dwSize，bIsCompress,无用
	// ljj@2011-7-22:去掉dwPrefCompDataRate;代之以pSuggestDataRateSu数组
	// ljj@2011-7-26:增加参数bUnLimitDataRate，dwDataRateStep，dwVersion
	// ljj@2011-7-28:扩展dwMediaType为ULONGLONG 64位，以便扩展标志

	TCHAR								ptszFormat[MAX_FILETYPE_NAME];		// 音频格式名称
	DWORD								dwFOURCC;							// FOURCC Codes
	TP_ACCESS_MODE						tpAccessType;						// 表明可以进行压缩还是解压缩

	// 音频基本信息
	DWORD								dwChannelInfo;						// TP_AudioChannel
	DWORD								dwSamplesInfo;						// TPAudioSample
	DWORD								dwBitsInfo;							// 量化位数 : TP_AudioBits

	// 压缩参数
	DWORD								dwMinCompDataRate;					// 数据率，以bps为单位
	DWORD								dwMaxCompDataRate;					// 数据率，以bps为单位
	BOOL								bUnLimitDataRate;					// 数据率是否可以无限连续调整，参考NXImageFormatSu::bLimitImgSize的含义。
	DWORD								dwDataRateStep;						// 数据率调整步长，以bps为单位
	long								lSuggestDataRateNum;				// 推荐用户选择的码率个数
	DWORD*								pSuggestDataRateSu;					// 推荐用户选择的码率（bps）


	ULONGLONG							dwMediaType;						// V_V/ V_P/ A等。

	DWORD								dwPrivateSize;						// 私有数据字节数
	BYTE*								pPrivateData;						// 私有数据
}NXAudioFormatSu, *LPNXAudioFormatSu;


// 扩展名表结构定义
typedef struct tab_NXExtNameTable
{
	//ljj@2011-7-26:去掉dwSize和dwVersion
	TCHAR								ptszExtName[MAX_EXT_NAME_SIZE];		// 可能支持多种文件扩展名类型
}NXExtNameTable, *LPNXExtNameTable;

// 文件支持格式定义（包括压缩格式和参数），压缩文件插件和各引擎需要给出针对以下结构的列表
typedef struct tag_NXFileFormatSu
{
	//ljj@2010-12-27:去掉dwSize，无用;dwVideoStandardSu与TPVideoFormatSu重复，去掉。
	//ljj@2011-7-26:去掉dwVersion
	TCHAR								ptszFileTypeGroup[MAX_FILETYPE_NAME];// 文件类型所属组
	long								lExtNameCount;						// 支持文件扩展名数量
	LPNXExtNameTable					lpExtNameTable;						// 扩展名表(内置于插件里)
	GUID								guidFileType;
	TCHAR								ptszFileTypeName[MAX_FILETYPE_NAME];// 文件类型名称
	TP_ACCESS_MODE						tpAccessMode;
	BOOL								bCanVideo;
	BOOL								bCanAudio;
	long								lVideoFormatSuNum;
	NXVideoFormatSu*					pVideoFormatSu;
	long								lAudioFormatSuNum;
	NXAudioFormatSu*					pAudioFormatSu;
	DWORD								dwExtraType;
}NXFileFormatSu, *LPNXFileFormatSu;


//// 基本信息定义，只要包含制式信息
//typedef struct tag_NXBaseSystemInfo
//{
//	TP_VIDEO_STANDARD					tpEditVideoStandard;				// 当前编辑的视频制式
//	TPAudioFormat						tpAudioFormat;						// 当前编辑的音频格式
//	tag_NXBaseSystemInfo()
//	{
//		tpEditVideoStandard = TP_VIDEOSTANDARD_PAL;
//		tpAudioFormat.iChannels = 1;
//		tpAudioFormat.iSamplesRate = 48000;
//		tpAudioFormat.iBitsPerSample = 16;
//	}
//}NXBaseSystemInfo;

// 特技设置grid
typedef struct tag_TPEffectSet_Grid
{
	long								lIntervalX;
	long								lIntervalY;
	long								lOffsetX;
	long								lOffsetY;
	DWORD								dwColor;
}TPEffectSet_Grid, *LPTPEffectSet_Grid;

// 文字的结构定义
typedef struct tag_TPTextOut
{
	long								lOffsetX;							// 文字x位置
	long								lOffsetY;							// 文字y位置
	long								lBkOffsetX;							// 背景x位置
	long								lBkOffsetY;							// 背景y位置
	DWORD								dwColor;
	TCHAR								strTextout[1024];
}TPTextOut, *LPTPTextOut;

// SplitMark结构定义
typedef struct tag_TPSplitMark
{
	BOOL								bShowSplit;
	FLOAT								rcLeft;
	FLOAT								rcRight;
	FLOAT								rcTop;
	FLOAT								rcBottom;
	UINT								type;
}TPSplitMark, *LPTPSplitMark;

// 安全框参数
typedef struct tag_NXSafeBoxParam
{
	BOOL								bShowBoard;							// 是否显示安全框
	float								lSafeBoxX;							// 安全框x值
	float								lSafeBoxY;							// 安全框y值
}NXSafeBoxParam;

// 轨道TC信息结构定义(合并自广电部门)
typedef struct tag_NXTrackTcInfo
{
	int									iTrackCount;						// 轨道个数
	TPTextOut							stTcTextInfo[20];					// Tc文字信息
}NXTrackTcInfo, *LPNXTrackTcInfo;

// 人脸识别检测区域信息定义
typedef struct tag_FaceArea
{
	double								dX;
	double								dY;
	double								dWidth;
	double								dHeight;
	int									iFaceID;
}FaceArea;

// MV/SV显示属性设置结构定义
typedef struct tag_TPVideoDispProperty
{
	double								dRatio;								// 按百分比
	BOOL								bOnlyMove;
	BOOL								bOnlyZoom;
	POINT								ptOffset;
	BOOL								bDrawGrid;
	TPEffectSet_Grid					tpGrid;
	TPTextOut							tpTextOut;							// 文字输出
	BOOL								bShowZebra;
	TPSplitMark							tpSplitMark;
	BOOL								bDrawCenterXY;
	double								dCenterX;
	double								dCenterY;
	BOOL								bIsPlay;
	NXSafeBoxParam						stSafeBox[4];						// 安全框参数：依次规定为16:9视频 字幕；4:3 视频 字幕
	BOOL								bTrackTcDisplay;                    // 是否TC码显示
	BOOL								bMultiTrackTcDisplay;               // 是否是多窗口显示
	DWORD								dwMultiWndCount;                    // 多窗口显示几位数
	ENX_TrackTCPos						eTrackTcDisplay;					// 轨道TC码位置信息
	NXTrackTcInfo						stVideoTrackTc;						// 视频轨道Tc信息
	NXTrackTcInfo						stAudioTrackTc;						// 音频轨道Tc信息
	int									nOverlayDisplayID;
}TPVideoDispProperty, *LPTPVideoDispProperty;

// MV漫游显示模式
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
	MV_MODE_MCSAFEBD,														// 多镜头模式安全框
}MV_MODE;

// 整合广电Seek功能
typedef enum
{
	SEEK_FRAME,
	SEEK_ODD,
	SEEK_EVEN
}SEEK_TYPE;

// Trim的时候显示窗口设置结构定义
typedef struct tag_TPVideoTrimDisplayProperty
{
	TPTextOut							tpTextOut;							// 文字输出
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
	DWORD								dwOutBorderCr;						// 漫游地图外边框颜色
	float								fOutLineWidth;						// 漫游外边框线条大小
	DWORD								dwInBorderCr;						// 漫游地图内边框颜色
	float								fInLineWidth;						// 漫游内边框线条大小
	float								fRatioWH;							// 地图相对于窗口的比例
	DWORD								dwFieldDisplayType;					// 场文字显示类型：0 不显示；1 显示奇场；2 偶场显示
	float								fSpeedShow;
	BOOL								bShowSpeed;
	BOOL								bDrawFaceArea;
	SEEK_TYPE							eSeekType;
}TPVideoTrimDisplayProperty,*LPTPVideoTrimDisplayProperty;

// 用来记录当前引擎的很多配置信息
struct  TPEngineConfigPara
{
	int									nCGProxyEditmode;					// proxy mode cg Full edit or not
	int									nCGScrollMode;						// scroll mode
	BOOL								nAudioMuteWhenNRealTime;			// not realtime audio mute.
	unsigned int						nCGMemoryLimit;						// cg use total mem.
	long								lRealSDlProxyRate;
	long								lRealHDlProxyRate;
	BOOL								bField;								// Frame or field 主要是720P和Proxy编辑。
	BOOL								bFieldTwiceRedner;
	long								lSoundCardDelayTime;				// 声卡延迟时间/for sdi-声卡同步
	int									nCutCount;							// 用来记录音频帧被分割的份数，为了被1920整除，此数应为16的倍数
	BOOL								bLeftEye;							// 设置MV输出那只眼睛的buffer，true表示左眼，false表示右眼
	int									iOutputDevice;						// 输出设备：0 无设备 1 Nv3D 2 电视机
	int									nCG3DAAMode_sd;						// 抗混叠模式
	int									nCG3DAAMode_hd;
	int									nCG3DAALevel_sd;					// 抗混叠等级
	int									nCG3DAALevel_hd;
	int									nCG3DAABlur_sd;						// 抗混叠模糊
	int									nCG3DAABlur_hd;
	BOOL								bLightGPU;							// 轻量级GPU引擎编辑，合并自广电网络
	BOOL								bProxyFrame;						// 低质量按帧编辑还是按场编辑，合并自广电网络
	int									iHDProxySize;						// 低质量编辑幅面索引编号，合并自广电网络
};

// 基本信息定义，只要包含制式信息
typedef struct tag_NXEngineBaseSystemInfo
{
	TP_VIDEO_STANDARD					tpEditVideoStandard;				// 当前编辑的视频制式
	TPAudioFormat						tpAudioFormat;						// 当前编辑的音频格式
}NXEngineBaseSystemInfo;

// 引擎素材信息
typedef struct _tagSTPEngineClipInfo
{
	long								lEffType;							// 0 clip 1: transition
	void*								pCurEffect;							// 当前特技句柄
	void*								pClipInfo;							// 指向时间线的Clip信息,如engineclip等信息,暂时可不用
	void*								pNodeGraph;							// 当前素材上的节点图数据
	void*								pCurNode;							// 当前编辑的节点
	long								lSplitDirection;					// 0:水平 1:垂直
	double								dSplitViewRatio;					// 0~100百分比，缺省为0
	long								lTrackIn;							// Clip在当前时间线上的入出点
	long								lTrackOut;
	GUID								gTrackID;							// Clip所在Track的ID
}STPEngineClipInfo;

// 音频轨道信息结构定义
struct STPSpecialAudioTrack
{
	GUID								gTrackID;
	__int64								iTrackIn;
	__int64								iTrackOut;
};

// 特殊音频信息
typedef struct _tagSTPSpecialAudioInfo
{
	int									    iTrackCount;
}STPSpecialAudioInfo;

// 场景检测系统设置数据结构
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

//参数改变结构定义
typedef struct tag_TPParamChangeStu
{
	int									iIndex;								// 索引
	int									iSubIndexCount;						// mini param adj时候借用
	int*								pIndexArray;						// 索引数组
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

// 立体视频显示参数定义
typedef struct tag_NXStereoDisplayParam
{
	ENX_Present_Window_type				eNXPresentWindowType;				// 预监窗口类型
	ENX_StereoDisplayType				eNXStereoDisplayType;				// 立体视频显示类型
	float								fStereoSplitRatio;					// 左右眼分割比例
	void*								hWnd;								// 窗口句柄
	float								fCenterX;
	float								fCenterY;
	BOOL								bLeft;
	BOOL								bDrawCenter;
}NXStereoDisplayParam;

//////////////////////////////////////////////////////////////////////////
// Raw数据内部最大字符串长度
#define NX_RAWDATA_MAX_STR_LEN			64

// 引擎Raw文件格式数据定义
typedef struct tag_NXEngineRawData
{
	ENX_RawDataType						eRawType;							// Raw数据格式类型
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

