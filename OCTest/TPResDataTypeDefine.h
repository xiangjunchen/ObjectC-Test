#import "TPBaseDataTypeDefine.h"

#define TP_RESBASESTATE_NOSAVE      0x00000001
#define TP_RESBASESTATE_VIRTUALRES  0x00000002
#define TP_RESBASESTATE_RELOAD      0x00000004
#define TP_RESBASESTATE_DELETE      0x00000008
#define TP_RESBASESTATE_USEBYACTTL  0x00000010
#define TP_RESBASESTATE_TODELOBJ    0x00000020
#define TP_RESBASESTATE_FIXCATALOG  0x00000040
#define TP_RESBASESTATE_PREDEL      0x00000080
#define TP_RESBASESTATE_LOSTDB      0x00000100


#define TP_RESUPDATEVIEW_UPDATE		0x01
#define TP_RESUPDATEVIEW_SORTRES	0x02
#define TP_RESUPDATEVIEW_RENAME		0x04

typedef ULONGLONG   TP_GRADE_TYPE;

#define TP_GRADE_UNKNOW       0x00000000
#define TP_GRADE_BASE         0x00000001
#define TP_GRADE_FILE         0x00000002
#define TP_GRADE_SOURCE       0x00000008
#define TP_GRADE_ICON         0x00000010
#define TP_GRADE_EXTINFO      0x00000020
#define TP_GRADE_STATEINFO    0x00000040
#define TP_GRADE_EXTDATA      0x00000080
#define TP_GRADE_SECURITY     0x00000100
#define TP_GRADE_RESINFO      0x00000200
#define TP_GRADE_SCENE        0x00000400
#define TP_GRADE_VIEW         0x00001000
#define TP_GRADE_NS           0x00002000
#define TP_GRADE_RESSOURCE    0x00008000
#define TP_GRADE_GROUP        0x00010000
#define TP_GRADE_VSPEED       0x00020000
#define TP_GRADE_EXTRAINFO    0x00040000
#define TP_GRADE_ALL          0x0007FFFF


#define TP_GRADE_FORCE           0x00200000
#define TP_GRADE_PARENTINFO	     0x00400000
#define TP_GRADE_USERINFO        0x00800000
#define TP_GRADE_NET_BREAKPOINT  0x01000000
#define TP_GRADE_NET_NOFILESPACE 0x08000000

#define TP_GRADE_NOMUTEX         0x10000000
#define TP_GRADE_FILEBASE        0x20000000
#define TP_GRADE_BRDDATA         0x40000000
#define TP_GRADE_REFCOUNT        0x80000000

#define TP_GRADE_CAPTUREINFO    0x100000000
#define TP_GRADE_NOCAPTUREINFO  0x200000000

#define TP_GRADE_ADDGRADE       0x400000000
#define TP_GRADE_SAVEGRADE      0x800000000

#define TP_GRADE_NET_NOMTSAVE  0x1000000000
#define TP_GRADE_NET_KEYFRAME  0x2000000000

typedef ULONGLONG  TP_RES_TYPE;

typedef  ULONGLONG               TP_NODE_TYPE;

#define  TP_NODE_UNKNOW              0x00000000000    //


#define  TP_NODE_TABLE               0x00000000001    //页数据

#define  TP_NODE_PUBLIC              0x00000000002    //公用资源
#define  TP_NODE_PRIVATE             0x00000000004    //我的资源
#define  TP_NODE_RECYCLE             0x00000000008    //回收站
#define  TP_NODE_SHARE               0x00000000010    //共享
#define  TP_NODE_SYSTEM              0x00000000020    //系统


#define  TP_NODE_COLORPREFABRICATE   0x00000000040
#define  TP_NODE_PUBLICPREFABRICATE  0x00000000080
#define  TP_NODE_OBJECTPREFABRICATE  0x00000000100
#define  TP_NODE_CLIP                0x00000000200    //素材
#define  TP_NODE_TLPROGRAM           0x00000000400    //节目
#define  TP_NODE_CGPROGRAM           0x00000000800    //字幕
#define  TP_NODE_VEFFECT             0x00000001000    //视频特技
#define  TP_NODE_AEFFECT             0x00000002000    //音频特技
#define  TP_NODE_VTEMPLATE           0x00000004000    //
#define  TP_NODE_BTEMPLATE           0x00000008000    //

#define  TP_NODE_TREFFECT            0x00000010000    //
#define  TP_NODE_TEAMSPACE           0x00000020000    //
#define  TP_NODE_NODE                0x00000040000    //接点
#define  TP_NODE_PATH                0x00000080000	  //可以删除的接点
#define  TP_NODE_VTRTEMPLATE         0x00000100000    //
#define  TP_NODE_ATEMPLATE           0x00000200000    //
#define  TP_NODE_ATRTEMPLATE         0x00000400000    //
#define  TP_NODE_AMIXTEMPLATE        0x00000800000    //
#define  TP_NODE_AOUTTEMPLATE        0x00001000000    //
#define  TP_NODE_INTEMPLATE          0x00002000000    //
#define  TP_NODE_OUTTEMPLATE         0x00004000000    //
#define  TP_NODE_STAYTEMPLATE        0x00008000000    //
#define  TP_NODE_TTEMPLATE			 0x00010000000    //
#define  TP_NODE_CGTEMPLATE          0x00020000000
#define  TP_NODE_ITEM                0x00040000000    //文件
#define  TP_NODE_ENDNODE             0x00080000000    //接点

#define  TP_NODE_CGEFFECT            0x00100000000    //
#define  TP_NODE_CGPREFABRICATE      0x00200000000    //预制
#define  TP_NODE_CGFILTER            0x00400000000    //字幕滤镜
#define  TP_NODE_PROGRAM            0x000800000000
#define  TP_NODE_VAEFFECT           0x001000000000
#define  TP_NODE_VATEMPLATE         0x002000000000
#define  TP_NODE_PROJECT            0x004000000000    //项目
#define  TP_NODE_PROJECTCHILD       0x008000000000    //项目
#define  TP_NODE_PROJECTITEM       0x0010000000000    //项目
#define  TP_NODE_USER              0x0020000000000    //用户
#define  TP_NODE_E1                0x0040000000000

typedef struct tag_TPResVAType
{
	WORD  vVersion;
	WORD  wAudioIndex[16];
	WORD  wVideoIndex;
	WORD  wCGIndex;

//	tag_TPResVAType()
//	{
//		Reset();
//	}
//	void Reset()
//	{
//		vVersion = 0;
//		for(int l=0;l<16;l++) wAudioIndex[l] = l;
//		wVideoIndex = 0;
//		wCGIndex    = 0;
//	}
}TPResVAType;

