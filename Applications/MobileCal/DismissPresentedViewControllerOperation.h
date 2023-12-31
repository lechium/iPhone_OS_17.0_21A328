//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, UIViewController;
@protocol EnqueueableDismissOperationProtocol, OS_dispatch_queue;

@interface DismissPresentedViewControllerOperation : NSOperation
{
    UIViewController<EnqueueableDismissOperationProtocol> *_presentingViewController;	// 8 = 0x8
    int _transition;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    _Bool _isFinished;	// 32 = 0x20
    _Bool _isExecuting;	// 33 = 0x21
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)blacklistedDismissalClasses;	// IMP=0x00400000000a1c85
- (void).cxx_destruct;	// IMP=0x00200000000a22d7
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)main;	// IMP=0x00100000000a1d43
- (void)finish;	// IMP=0x00100000000a1b25
- (_Bool)isFinished;	// IMP=0x00100000000a1b15
- (_Bool)isExecuting;	// IMP=0x00100000000a1b05
- (void)cancel;	// IMP=0x00100000000a1ad6
- (_Bool)isConcurrent;	// IMP=0x00100000000a1ace
- (void)start;	// IMP=0x00100000000a19f7
- (id)description;	// IMP=0x00100000000a19b8
- (id)initWithPresentingViewController:(id)arg1 transition:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a1879

@end

