//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PSUIClassKitVisibilityArbitrator : NSObject
{
    unsigned long long _visibilityState;	// 8 = 0x8
    CDUnknownBlockType _visibilityStateChangeHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000105c4
@property(copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
- (void)settingsVisibilityDidChange:(id)arg1;	// IMP=0x000000000001058f
- (void)reloadVisibilityState;	// IMP=0x0000000000010583
- (void)dealloc;	// IMP=0x0000000000010554
- (id)init;	// IMP=0x0000000000010525

@end

