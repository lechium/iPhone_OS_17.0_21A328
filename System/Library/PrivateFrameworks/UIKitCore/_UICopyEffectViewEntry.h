//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectViewEntry.h"

@class _UIVisualEffectViewBackdropCaptureGroup;

__attribute__((visibility("hidden")))
@interface _UICopyEffectViewEntry : _UIVisualEffectViewEntry
{
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000033a6e4
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup; // @synthesize captureGroup=_captureGroup;
- (id)description;	// IMP=0x000000000033a640
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x000000000033a638
- (void)removeEffectFromView:(id)arg1;	// IMP=0x000000000033a5ec
- (void)addEffectToView:(id)arg1;	// IMP=0x000000000033a551

@end

