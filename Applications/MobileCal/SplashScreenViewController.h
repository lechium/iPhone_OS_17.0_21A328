//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@interface SplashScreenViewController : OBWelcomeController
{
    CDUnknownBlockType _doneBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000020b27
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
- (void)_continueButtonTappedCallback;	// IMP=0x0010000000020a0d
- (void)dismissSplashScreen;	// IMP=0x00100000000209fb
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000000209f3
- (_Bool)isModalInPresentation;	// IMP=0x00100000000209eb
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000000208c5
- (id)init;	// IMP=0x0010000000020597

@end

