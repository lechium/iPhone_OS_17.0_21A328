//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAContext, NSArray, NSMutableArray, UIScreen;

__attribute__((visibility("hidden")))
@interface _UIDragManager : NSObject
{
    CAContext *_dragImageContext;	// 8 = 0x8
    long long _pendingSessionRequests;	// 16 = 0x10
    NSMutableArray *_pendingSessionRequestsCompletionBlocks;	// 24 = 0x18
    NSArray *_dragSessionSources;	// 32 = 0x20
    NSArray *_dragSessionDestinations;	// 40 = 0x28
    UIScreen *_screen;	// 48 = 0x30
}

+ (void)initializeDraggingSystem;	// IMP=0x0060000000da3500
- (void).cxx_destruct;	// IMP=0x0000000000da4580
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
@property(copy, nonatomic) NSArray *dragSessionDestinations; // @synthesize dragSessionDestinations=_dragSessionDestinations;
@property(copy, nonatomic) NSArray *dragSessionSources; // @synthesize dragSessionSources=_dragSessionSources;
- (void)sessionDestinationDidEnd:(id)arg1;	// IMP=0x0000000000da4442
- (id)dragDestinationWithEvent:(id)arg1;	// IMP=0x0000000000da41b7
- (id)sessionSourceWithIdentifier:(unsigned int)arg1;	// IMP=0x0000000000da4059
- (void)sessionSourceDidEnd:(id)arg1;	// IMP=0x0000000000da3f90
- (void)performPendingSessionCompletionBlocksIfPossible;	// IMP=0x0000000000da3e21
- (void)performAfterCompletingPendingSessionRequests:(CDUnknownBlockType)arg1;	// IMP=0x0000000000da3da8
- (_Bool)hasPendingSessionRequests;	// IMP=0x0000000000da3d9a
- (id)beginDragWithSessionConfiguration:(id)arg1;	// IMP=0x0000000000da3ad3
- (void)deleteSlots:(id)arg1;	// IMP=0x0000000000da393a
- (unsigned int)uploadImage:(struct CGImage *)arg1;	// IMP=0x0000000000da38aa
@property(readonly, nonatomic) CAContext *dragImageContext;
- (void)_willAddDeactivationReason:(id)arg1;	// IMP=0x0000000000da368e
- (id)initWithScreen:(id)arg1;	// IMP=0x0000000000da355d

@end

