//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICandidateViewController : UIViewController
{
    UIView *_candidateView;	// 8 = 0x8
}

+ (double)preferredCandidateBarHeightForTraitCollection:(id)arg1;	// IMP=0x0010000000baf470
- (void).cxx_destruct;	// IMP=0x0000000000bb01e4
@property(retain, nonatomic) UIView *candidateView; // @synthesize candidateView=_candidateView;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000bafd1f
- (long long)overrideUserInterfaceStyle;	// IMP=0x0000000000bafca1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000bafbb8
- (void)loadView;	// IMP=0x0000000000bafb4b
- (_Bool)requiresKeyboard;	// IMP=0x0000000000bafb43
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (_Bool)hidesExpandableButton;	// IMP=0x0000000000bafa93
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000bafa7a
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x0000000000baf3e0
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000baf3d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

