//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoAutoplayVitalityFilter
{
    _Bool _isVisible;	// 8 = 0x8
    _Bool _hasTargetVisibilityOffset;	// 9 = 0x9
    _Bool _isScrolling;	// 10 = 0xa
    _Bool _isDecelerating;	// 11 = 0xb
    double _visibilityOffset;	// 16 = 0x10
    double _targetVisibilityOffset;	// 24 = 0x18
    NSDate *_estimatedScrollEndDate;	// 32 = 0x20
    long long __state;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000bb1c
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(nonatomic, setter=setDecelerating:) _Bool isDecelerating; // @synthesize isDecelerating=_isDecelerating;
@property(nonatomic, setter=setScrolling:) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) NSDate *estimatedScrollEndDate; // @synthesize estimatedScrollEndDate=_estimatedScrollEndDate;
@property(nonatomic) double targetVisibilityOffset; // @synthesize targetVisibilityOffset=_targetVisibilityOffset;
@property(nonatomic) _Bool hasTargetVisibilityOffset; // @synthesize hasTargetVisibilityOffset=_hasTargetVisibilityOffset;
@property(nonatomic) double visibilityOffset; // @synthesize visibilityOffset=_visibilityOffset;
@property(nonatomic, setter=setVisible:) _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void)updateOutput;	// IMP=0x000000000000b894

@end
