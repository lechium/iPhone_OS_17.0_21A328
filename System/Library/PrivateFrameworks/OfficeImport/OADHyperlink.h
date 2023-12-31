//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OADHyperlink : NSObject
{
    NSURL *mTargetLocation;	// 8 = 0x8
    int mTargetMode;	// 16 = 0x10
    NSString *mTargetFrame;	// 24 = 0x18
    NSString *mAction;	// 32 = 0x20
    NSString *mTooltip;	// 40 = 0x28
    NSString *mInvalidUrl;	// 48 = 0x30
    _Bool mDoEndSound;	// 56 = 0x38
    _Bool mIsVisited;	// 57 = 0x39
    _Bool mDoAddToHistory;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x0000000000314674
@property(nonatomic) _Bool doAddToHistory; // @synthesize doAddToHistory=mDoAddToHistory;
@property(nonatomic) _Bool isVisited; // @synthesize isVisited=mIsVisited;
@property(nonatomic) _Bool doEndSound; // @synthesize doEndSound=mDoEndSound;
- (id)description;	// IMP=0x000000000031461b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f76c4
- (unsigned long long)hash;	// IMP=0x00000000003145bd
- (void)setInvalidUrl:(id)arg1;	// IMP=0x00000000001640a0
- (id)invalidUrl;	// IMP=0x00000000003145af
- (void)setTooltip:(id)arg1;	// IMP=0x000000000016408f
- (id)tooltip;	// IMP=0x00000000003145a1
- (void)setAction:(id)arg1;	// IMP=0x000000000016407e
- (id)action;	// IMP=0x00000000001da3ae
- (void)setTargetFrame:(id)arg1;	// IMP=0x000000000016406d
- (id)targetFrame;	// IMP=0x0000000000314593
- (void)setTargetMode:(int)arg1;	// IMP=0x0000000000164064
- (int)targetMode;	// IMP=0x000000000031458a
- (void)setTargetLocation:(id)arg1;	// IMP=0x0000000000164053
- (id)targetLocation;	// IMP=0x00000000002467ea
- (id)init;	// IMP=0x000000000016400e

@end

