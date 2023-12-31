//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, IDSSession, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraIDSSessionHandler : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDCameraStreamSessionID *_sessionID;	// 16 = 0x10
    id <HMDIDSService> _idsStreamService;	// 24 = 0x18
    IDSSession *_idsSession;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000007b4796
- (void).cxx_destruct;	// IMP=0x00000000007b4743
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(readonly, nonatomic) id <HMDIDSService> idsStreamService; // @synthesize idsStreamService=_idsStreamService;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000007b469b
- (void)startKeepAlive;	// IMP=0x00000000007b4695
- (void)dealloc;	// IMP=0x00000000007b457c
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000007b4436

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

