//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class MISSING_TYPE, NSString;

@interface CLDistributedSensingService : CLIntersiloService
{
}

+ (_Bool)isSupported;	// IMP=0x00200000001f203e
+ (MISSING_TYPE *)getSilo;	// IMP=0x00100000001f1fe2
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f1fc9
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001f1f6c
- (void)unregisterClient:(byref id)arg1 forNotification:(int)arg2;	// IMP=0x00200000001f20c4
- (void)registerClient:(byref id)arg1 forNotification:(int)arg2;	// IMP=0x00100000001f20be
- (void)endService;	// IMP=0x00100000001f20b8
- (void)beginService;	// IMP=0x00100000001f20b2
- (void)dealloc;	// IMP=0x00100000001f2083
- (id)init;	// IMP=0x00100000001f2046

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

