//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CULiveActionPeerSession : NSObject
{
    RPCompanionLinkClient *_clinkClient;	// 8 = 0x8
    _Bool _speakDisable;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
    RPCompanionLinkDevice *_destinationDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000064839
@property(nonatomic) _Bool speakDisable; // @synthesize speakDisable=_speakDisable;
@property(retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064518
- (void)setupWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000642b2
- (void)invalidate;	// IMP=0x0000000000064280
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064097

@end
