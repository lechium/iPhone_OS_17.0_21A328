//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSAudioStreamHolding : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _clientIdentity;	// 16 = 0x10
    NSString *_recordModeLockUUIDString;	// 24 = 0x18
    NSString *_listeningMicIndicatorLockUUIDString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000444c4
@property(retain, nonatomic) NSString *listeningMicIndicatorLockUUIDString; // @synthesize listeningMicIndicatorLockUUIDString=_listeningMicIndicatorLockUUIDString;
@property(retain, nonatomic) NSString *recordModeLockUUIDString; // @synthesize recordModeLockUUIDString=_recordModeLockUUIDString;
@property(readonly, nonatomic) unsigned long long clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x0010000000044386
- (id)initWithName:(id)arg1 clientIdentity:(unsigned long long)arg2;	// IMP=0x001000000004430f

@end
