//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface IXSAppRemovabilityManager : NSObject
{
    NSMutableDictionary *_allAppRemovability;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)stringForRemovability:(unsigned long long)arg1;	// IMP=0x0040000000080ac6
+ (id)sharedInstance;	// IMP=0x0010000000080731
- (void).cxx_destruct;	// IMP=0x0020000000082137
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *allAppRemovability; // @synthesize allAppRemovability=_allAppRemovability;
- (_Bool)clearRemovabilityStateForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000081bf1
- (id)removabilityInfoForAllIdentities;	// IMP=0x0010000000081aa8
- (void)_enumerateRemovability:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081936
- (_Bool)_onQueue_writeRemovabilityWithError:(id *)arg1;	// IMP=0x00100000000814c7
- (_Bool)setRemovability:(unsigned long long)arg1 forAppWithIdentity:(id)arg2 byClient:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0010000000080ebb
- (id)removabilityMetadataForAppWithIdentity:(id)arg1;	// IMP=0x0010000000080cee
@property(readonly, nonatomic) NSURL *legacyRemovabilityURL; // @dynamic legacyRemovabilityURL;
@property(readonly, nonatomic) NSURL *removabilityURL; // @dynamic removabilityURL;
- (void)_onQueue_handleStateChangeForIdentity:(id)arg1;	// IMP=0x0010000000080aea
- (id)init;	// IMP=0x00100000000807be

@end

