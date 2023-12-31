//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface HMDNetworkConnection : NSObject
{
    NSObject<OS_nw_connection> *_nwConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000008e1da2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSObject<OS_nw_connection> *nwConnection; // @synthesize nwConnection=_nwConnection;
- (void)resetTrafficClass:(unsigned long long)arg1;	// IMP=0x00000000008e1ce8
- (void)setReadCloseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008e1c87
- (void)setStateChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000008e1bc5
- (void)receiveMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000008e1b1c
- (void)receiveWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008e1a68
- (void)sendData:(id)arg1 context:(id)arg2 isComplete:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008e1984
- (void)cancel;	// IMP=0x00000000008e194f
- (void)start;	// IMP=0x00000000008e191a
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;	// IMP=0x00000000008e188a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

