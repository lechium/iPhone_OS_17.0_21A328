//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DRDragSession, NSString, NSXPCConnection, NSXPCListener;

@interface DRDragContinuationSession : NSObject
{
    DRDragSession *_dragSession;	// 8 = 0x8
    NSXPCConnection *_continuationConnection;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000004e59
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) NSXPCConnection *continuationConnection; // @synthesize continuationConnection=_continuationConnection;
@property(nonatomic) __weak DRDragSession *dragSession; // @synthesize dragSession=_dragSession;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000004cf4
- (id)continuationEndpoint;	// IMP=0x0010000000004cde
- (void)dataTransferSessionFinished;	// IMP=0x0010000000004cd8
- (void)dragContinuationFinishedRequestingData;	// IMP=0x0010000000004cd2
- (id)initWithDragSession:(id)arg1;	// IMP=0x0010000000004c1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

