//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

__attribute__((visibility("hidden")))
@interface CKPresentationControllerRootViewController : UIViewController
{
    _Bool _allowsRotation;	// 8 = 0x8
    _Bool _restrictedToPortraitOrientation;	// 9 = 0x9
}

@property(nonatomic) _Bool restrictedToPortraitOrientation; // @synthesize restrictedToPortraitOrientation=_restrictedToPortraitOrientation;
@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000273037
- (_Bool)shouldAutorotate;	// IMP=0x0000000000273025

@end

