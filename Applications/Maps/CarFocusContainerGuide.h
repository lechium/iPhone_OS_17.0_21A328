//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFocusContainerGuide.h>

@class NSArray, UIView;

@interface CarFocusContainerGuide : UIFocusContainerGuide
{
    UIView *_debugView;	// 8 = 0x8
    NSArray *_activationConstraints;	// 16 = 0x10
}

+ (id)focusContainerGuideInstalledInView:(id)arg1;	// IMP=0x00200000007b92a0
- (void).cxx_destruct;	// IMP=0x00200000007b9475
@property(retain, nonatomic) NSArray *activationConstraints; // @synthesize activationConstraints=_activationConstraints;
@property(readonly, nonatomic) UIView *debugView; // @synthesize debugView=_debugView;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00100000007b93cd
- (id)init;	// IMP=0x00100000007b9103

@end
