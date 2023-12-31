//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLActivityLoggerAdapter : CLIntersiloService
{
    void *_logger;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x00200000001e2d26
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2d0d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001e2cb0
@property(nonatomic) void *logger; // @synthesize logger=_logger;
- (void)logData:(id)arg1;	// IMP=0x00100000001e2e9a
- (void)endService;	// IMP=0x00100000001e2e4f
- (void)beginService;	// IMP=0x00100000001e2dbf
- (id)init;	// IMP=0x00100000001e2d82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

