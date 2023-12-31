//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VideosExtrasContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasPresenter : NSObject
{
    VideosExtrasContext *_extrasContext;	// 8 = 0x8
    struct CGRect _extrasMenuBarFrame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006f28b
@property(nonatomic) struct CGRect extrasMenuBarFrame; // @synthesize extrasMenuBarFrame=_extrasMenuBarFrame;
@property(retain, nonatomic) VideosExtrasContext *extrasContext; // @synthesize extrasContext=_extrasContext;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000000006f125
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000006f0ef
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000006f0bc
- (void)dismissExtrasAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ef96
- (void)presentExtrasWith:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ee09
- (id)initWithExtrasContext:(id)arg1 extrasMenuBarFrame:(struct CGRect)arg2;	// IMP=0x000000000006ed0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

