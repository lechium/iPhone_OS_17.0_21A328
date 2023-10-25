//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKSystemShellDescriptor : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundlePath;	// 16 = 0x10
    NSString *_jobLabel;	// 24 = 0x18
    int _pid;	// 32 = 0x20
    double _systemIdleSleepInterval;	// 40 = 0x28
    long long _watchdogType;	// 48 = 0x30
}

+ (id)new;	// IMP=0x0020000000071d35
+ (id)build:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071cc3
- (void).cxx_destruct;	// IMP=0x0020000000071a08
@property(readonly, nonatomic) long long watchdogType;
@property(readonly, nonatomic) double systemIdleSleepInterval;
@property(readonly, nonatomic) int pid;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000007187d
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007183b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071815
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000071752
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x00100000000714e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
