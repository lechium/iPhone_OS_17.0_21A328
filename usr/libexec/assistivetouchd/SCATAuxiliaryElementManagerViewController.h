//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface SCATAuxiliaryElementManagerViewController : UIViewController
{
    _Bool _transitioningToOrFromActive;	// 8 = 0x8
}

@property(nonatomic, getter=isTransitioningToOrFromActive) _Bool transitioningToOrFromActive; // @synthesize transitioningToOrFromActive=_transitioningToOrFromActive;
- (_Bool)_elementContainsAllSubviewsOfView:(id)arg1 view:(id)arg2;	// IMP=0x00100000000ab29c
- (void)updateCustomFocusingViewStateForViewsWithElement:(id)arg1;	// IMP=0x00100000000aae4d
- (id)viewsRequiringStateUpdate;	// IMP=0x00100000000aae45
- (void)updateWithContextElement:(id)arg1;	// IMP=0x00100000000aae3f
- (void)viewDidLoad;	// IMP=0x00100000000aadfc
- (void)loadView;	// IMP=0x00100000000aada4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
