//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPresentationController.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasPresentationController : UIPresentationController
{
    UIView *_extrasMenuBarView;	// 8 = 0x8
    struct CGRect _extrasMenuBarFrame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a24b4
@property(nonatomic) struct CGRect extrasMenuBarFrame; // @synthesize extrasMenuBarFrame=_extrasMenuBarFrame;
@property(retain, nonatomic) UIView *extrasMenuBarView; // @synthesize extrasMenuBarView=_extrasMenuBarView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000002a23d5
- (void)dismissalTransitionWillBegin;	// IMP=0x00000000002a1eb0
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000002a1e34
- (void)presentationTransitionWillBegin;	// IMP=0x00000000002a190a
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 extrasMenuBarView:(id)arg3 extrasmenuBarFrame:(struct CGRect)arg4;	// IMP=0x00000000002a1867

@end

