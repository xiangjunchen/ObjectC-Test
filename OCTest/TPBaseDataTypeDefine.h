#include "NXBaseVADef.h"

#define TP_CLIP_FILE_MAX 16
#define MAX_LONG 0x7ffffff

typedef DWORD TP_CLIP_STRATEGY_TYPE;
typedef enum
{
    TP_CLIP_STRATEGY_HIGH   = 0,
    TP_CLIP_STRATEGY_LOW    = 1,
    TP_CLIP_STRATEGY_THIS   = 2,
}eTP_CLIP_STRATEGY_TYPE;

typedef DWORD TP_CLIP_QUALITY_TYPE;
typedef enum
{
    TP_CLIP_QUALITY_HIGH   = 0,
    TP_CLIP_QUALITY_LOW    = 1,
    TP_CLIP_QUALITY_MID    = 2,
    TP_CLIP_QUALITY_3      = 3,
    TP_CLIP_QUALITY_4      = 4,
    TP_CLIP_QUALITY_MIX    = 5,
    TP_CLIP_QUALITY_MAX    = 6,
}eTP_CLIP_QUALITY_TYPE;

typedef DWORD TP_CLIP_FILE_TYPE;
#define  TP_CLIP_FILE_VIDEO  		0
#define  TP_CLIP_FILE_A1     		1
#define  TP_CLIP_FILE_A2     		2
#define  TP_CLIP_FILE_A3     		3
#define  TP_CLIP_FILE_A4     		4
#define  TP_CLIP_FILE_A5     		5
#define  TP_CLIP_FILE_A6     		6
#define  TP_CLIP_FILE_A7     		7
#define  TP_CLIP_FILE_A8     		8

#define  TP_CLIP_FILE_A9     		9
#define  TP_CLIP_FILE_A10    		10
#define  TP_CLIP_FILE_A11    		11
#define  TP_CLIP_FILE_A12    		12
#define  TP_CLIP_FILE_A13    		13
#define  TP_CLIP_FILE_A14    		14
#define  TP_CLIP_FILE_A15    		15
#define  TP_CLIP_FILE_A16    		16

/*=======================================================================================*/
typedef DWORD TP_CLIP_TRANS_STYLE;
#define TP_CLIP_TRANS_NONE              0x00000001   //不转码
#define TP_CLIP_TRANS_IMMEDIATELY       0x00000002   //导入时转码
#define TP_CLIP_TRANS_LOCALBACKGROUND   0x00000004   //本机后台转码
#define TP_CLIP_TRANS_SERVERBACKGROUND  0x00000008   //服务器后台转码

typedef DWORD TP_CLIP_MOVE_STYLE;
#define TP_CLIP_MOVE_NONE              0x00000001    //不迁移原文件
#define TP_CLIP_MOVE_COPY              0x00000002    //拷贝
#define TP_CLIP_MOVE_MOVE              0x00000004    //移动

typedef DWORD  TP_CLIP_CLASS_TYPE;                //素材类型

#define  TP_CLIP_CLASS_UNKNOW 0x00000000

#define  TP_CLIP_CLASS_V      0x00000001
#define  TP_CLIP_CLASS_A1     0x00000002
#define  TP_CLIP_CLASS_A2     0x00000004
#define  TP_CLIP_CLASS_A3     0x00000008
#define  TP_CLIP_CLASS_A4     0x00000010
#define  TP_CLIP_CLASS_A5     0x00000020
#define  TP_CLIP_CLASS_A6     0x00000040
#define  TP_CLIP_CLASS_A7     0x00000080
#define  TP_CLIP_CLASS_A8     0x00000100
#define  TP_CLIP_CLASS_A      (TP_CLIP_CLASS_A1 | TP_CLIP_CLASS_A2 | TP_CLIP_CLASS_A3 | TP_CLIP_CLASS_A4 | TP_CLIP_CLASS_A5 | TP_CLIP_CLASS_A6 | TP_CLIP_CLASS_A7 | TP_CLIP_CLASS_A8)

#define  TP_CLIP_CLASS_ALL     0x0000FFFF
#define  TP_CLIP_CLASS_G      0x00040000
#define  TP_CLIP_CLASS_KEY    0x00080000
#define  TP_CLIP_CLASS_EFF    0x00100000

typedef struct  //文件格式
{
    DWORD               dwVersion;
    int                 bAVInterleave;      //视音频同一文件
    NSString*           guidVideoFileType;  //文件类型GUID
    TPVideoFormat       stuVideoFormat;     //视频格式
    NSString*           guidAudioFileType;  //文件类型GUID
    TPAudioFormatEx     stuAudioFormat;     //音频格式
    TPVideoFormat       stuKeyFormat;       //包含的键文件格式
    NSString*           guidKeyFileType;    //文件类型GUID

    TPVideoFormat       stuDepthFormat;     //包含的深度文件格式
    NSString*           guidDepthFileType;  //文件类型GUID

    BOOL                bStereoscopic;      //3D的视频格式 3D by zhh
    DWORD               dwClipClass;
}TPClipVAFormat;

//素材的文件信息结构定义
typedef struct
{
    DWORD                   dwVersion;
    TP_CLIP_QUALITY_TYPE    eQualityType;
    TP_CLIP_CLASS_TYPE      eClipClass;
    TP_CLIP_CLASS_TYPE      eDBEClass;
    TPClipVAFormat          stuClipVAFormat;    //包含所有视音频信息
    long                    lSubIndex;
    int                     uQualityState;
    //这些字段应该合并成一个结构体，然后声明一个结构体的数组或 vector
    NSString*               sDescription[TP_CLIP_FILE_MAX];
    double                  dFade[TP_CLIP_FILE_MAX];
    int                     uQualityFlag[TP_CLIP_FILE_MAX];
    double                  dPan[TP_CLIP_FILE_MAX];
    double                  dEQ[TP_CLIP_FILE_MAX][8];
}TPClipQualityFile2;

typedef enum {
    eRes_program = 0,
    eRes_effTemplate,
    eRes_cgTemplate,
    eRes_efftrTemplate,
    eRes_subjectTemplate,
    eRes_cameraFilter,
    eRes_effect,
    eRes_clip,
    eRes_icon
}eResType;



