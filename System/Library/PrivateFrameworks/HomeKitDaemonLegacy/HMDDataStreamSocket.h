//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDDataStreamStreamProtocol, NSMutableArray, NSString;
@protocol HMDDataStreamSocketDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDataStreamSocket : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _closing;	// 12 = 0xc
    _Bool _closed;	// 13 = 0xd
    NSString *_applicationProtocolName;	// 16 = 0x10
    id <HMDDataStreamSocketDelegate> _delegate;	// 24 = 0x18
    unsigned long long _trafficClass;	// 32 = 0x20
    HMDDataStreamStreamProtocol *_streamProtocol;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSMutableArray *_pendingReads;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000004c22c7
- (void).cxx_destruct;	// IMP=0x00000000004c2015
@property(readonly) NSMutableArray *pendingReads; // @synthesize pendingReads=_pendingReads;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic, getter=isClosing) _Bool closing; // @synthesize closing=_closing;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDDataStreamStreamProtocol *streamProtocol; // @synthesize streamProtocol=_streamProtocol;
@property(readonly) NSString *applicationProtocolName; // @synthesize applicationProtocolName=_applicationProtocolName;
- (void)closeInitiated;	// IMP=0x00000000004c1f80
- (void)handleIncomingData:(id)arg1;	// IMP=0x00000000004c1eb5
- (void)closeWithError:(id)arg1;	// IMP=0x00000000004c1dcc
- (id)readData;	// IMP=0x00000000004c1d71
- (void)_writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c1c93
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c1be9
- (_Bool)writeData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c1b54
- (void)close;	// IMP=0x00000000004c1b40
@property unsigned long long trafficClass; // @synthesize trafficClass=_trafficClass;
@property __weak id <HMDDataStreamSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStreamProtocol:(id)arg1 applicationProtocolName:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000004c18bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

