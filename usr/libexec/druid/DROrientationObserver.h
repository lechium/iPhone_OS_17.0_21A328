//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSOrientationObserver, NSMutableSet;

@interface DROrientationObserver : NSObject
{
    FBSOrientationObserver *_interfaceOrientationObserver;	// 8 = 0x8
    NSMutableSet *_observers;	// 16 = 0x10
    long long _interfaceOrientation;	// 24 = 0x18
}

+ (id)sharedObserver;	// IMP=0x0040000000004e8a
- (void).cxx_destruct;	// IMP=0x0020000000005462
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void)_didReceiveOrientationUpdate:(id)arg1;	// IMP=0x0010000000005173
- (void)removeObserver:(id)arg1;	// IMP=0x001000000000515d
- (void)addObserver:(id)arg1;	// IMP=0x0010000000005085
- (id)_init;	// IMP=0x0010000000004eef

@end

