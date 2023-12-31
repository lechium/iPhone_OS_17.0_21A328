//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NISession, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface RPNIProximityEstimator : NSObject
{
    NSString *_innerRegionName;	// 8 = 0x8
    NSString *_outerRegionName;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSSet *_deviceIDSIdentifiers;	// 32 = 0x20
    CDUnknownBlockType _deviceRegionChangedHandler;	// 40 = 0x28
    NISession *_session;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000069295
@property(retain, nonatomic) NISession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType deviceRegionChangedHandler; // @synthesize deviceRegionChangedHandler=_deviceRegionChangedHandler;
@property(retain, nonatomic) NSSet *deviceIDSIdentifiers; // @synthesize deviceIDSIdentifiers=_deviceIDSIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSString *outerRegionName; // @synthesize outerRegionName=_outerRegionName;
@property(retain, nonatomic) NSString *innerRegionName; // @synthesize innerRegionName=_innerRegionName;
- (void)session:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;	// IMP=0x0010000000068ec2
- (void)invalidate;	// IMP=0x0010000000068dcd
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068a69
- (id)init;	// IMP=0x0010000000068a08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

