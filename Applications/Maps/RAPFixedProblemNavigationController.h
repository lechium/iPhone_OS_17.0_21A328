//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class RAPFixedProblemViewController;

@interface RAPFixedProblemNavigationController : UINavigationController
{
    CDUnknownBlockType doneHandler;	// 8 = 0x8
    RAPFixedProblemViewController *_fixedProblemViewController;	// 16 = 0x10
    CDUnknownBlockType _doneHandler;	// 24 = 0x18
}

+ (id)fixedProblemNavigationControllerWithProblemStatusResponse:(id)arg1;	// IMP=0x0040000000a4d371
- (void).cxx_destruct;	// IMP=0x0020000000a4d488
@property(retain, nonatomic) RAPFixedProblemViewController *fixedProblemViewController; // @synthesize fixedProblemViewController=_fixedProblemViewController;
@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
- (void)handleDone:(id)arg1;	// IMP=0x0010000000a4d40e
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000a4d403

@end

