//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class DOCAppearance, NSString;

@interface UIViewController (DOCAppearanceInheritance)
+ (void)load;	// IMP=0x001000000000fa05
- (void)effectiveAppearanceDidChange:(id)arg1;	// IMP=0x001000000000fcd4
@property(readonly) DOCAppearance *effectiveAppearance;
- (void)_notifyAppearanceChange:(id)arg1;	// IMP=0x001000000000fb15
- (void)setAppearance:(id)arg1;	// IMP=0x001000000000fab5
- (id)_appearance;	// IMP=0x001000000000faa4
- (void)doc_viewDidLoad;	// IMP=0x001000000000fa25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

