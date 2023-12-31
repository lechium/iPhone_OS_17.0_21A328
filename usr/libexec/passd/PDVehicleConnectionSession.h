//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PDVehicleConnectionSession : NSObject
{
    NSObject<OS_dispatch_queue> *_vehicleConnectionSessionQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    NSString *_sessionIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000048df4a
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)_sessionDidFailToConnect;	// IMP=0x001000000048df3a
- (void)endSession;	// IMP=0x001000000048df34
- (void)startSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000048df1e
- (_Bool)sendData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000048df16
- (void)dealloc;	// IMP=0x001000000048dee7
- (id)initForSecureElementPass:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000048deb8

@end

