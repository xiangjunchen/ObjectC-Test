#import "TPResBase.h"

@interface TPResClipCache : TPResBase
{
    TP_CLIP_STATE m_eClipState;
    __int64 m_lTrimIn;
    __int64 m_lTrimOut;
    __int64 m_lLength;
    __int64 m_lSeekFrame;
    DWORD   m_dwFileType;
    TPClipQualityFile2 m_aQuality[TP_CLIP_QUALITY_MAX];
	TP_VIDEO_STANDARD  m_eVideoStandard;
}
@property TP_CLIP_STATE m_eClipState;
@property __int64 m_lLength;
@property __int64 m_lSeekFrame;

@end

@implementation TPResClipCache
@synthesize m_eClipState;
@synthesize m_lLength;
@synthesize m_lSeekFrame;
- (id) init
{
    if(self = [super init]){
        m_eClipState = TP_CLIP_ONLINE;
    }
    return (self);
}
- (void) dealloc
{
    [super dealloc];
}
- (void) print
{
    NSLog(@"clip name is %@",m_sResName);
}
@end
