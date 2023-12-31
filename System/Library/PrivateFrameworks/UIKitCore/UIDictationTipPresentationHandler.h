//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationTipPresentationHandler : NSObject
{
    _Bool _isShowingTip;	// 8 = 0x8
    _Bool _tipPresentedInCurrentDictationSession;	// 9 = 0x9
    long long _dictationTipSignaled;	// 16 = 0x10
}

@property(nonatomic) _Bool tipPresentedInCurrentDictationSession; // @synthesize tipPresentedInCurrentDictationSession=_tipPresentedInCurrentDictationSession;
@property(nonatomic) long long dictationTipSignaled; // @synthesize dictationTipSignaled=_dictationTipSignaled;
@property(nonatomic) _Bool isShowingTip; // @synthesize isShowingTip=_isShowingTip;
- (long long)dictationTipDisplayCount:(long long)arg1;	// IMP=0x0000000000b594a2
- (_Bool)dictationCommandTipsEnabled;	// IMP=0x0000000000b5944d
- (_Bool)tipShownLastWeek;	// IMP=0x0000000000b59324
- (void)resetDictationTipSignal;	// IMP=0x0000000000b59316
- (void)resetHandler;	// IMP=0x0000000000b592e6
- (void)signalTipPresentedInCurrentDictationSession;	// IMP=0x0000000000b592dc
- (long long)getDictationTipSignaled;	// IMP=0x0000000000b592d2
- (_Bool)shouldSignalDictationTip:(long long)arg1;	// IMP=0x0000000000b5910f
- (_Bool)dictationTipShownOverLimit:(long long)arg1;	// IMP=0x0000000000b5906b
- (id)init;	// IMP=0x0000000000b5901b

@end

