//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SPUIContactViewController;

@interface FASpotlightServiceViewController : UIViewController
{
    SPUIContactViewController *_spotlightViewController;	// 8 = 0x8
}

+ (id)_exportedInterface;	// IMP=0x0020000000001bf5
- (void).cxx_destruct;	// IMP=0x0020000000001c4a
@property(readonly, nonatomic) SPUIContactViewController *spotlightViewController; // @synthesize spotlightViewController=_spotlightViewController;
- (void)updateWithContactIdentifier:(id)arg1;	// IMP=0x0010000000001c15
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;	// IMP=0x0010000000001bef
- (void)viewDidLoad;	// IMP=0x00100000000016ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

