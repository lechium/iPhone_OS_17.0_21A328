//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSRootController.h>

@class COSPreferencesListController;

@interface COSBridgeRootController : PSRootController
{
    COSPreferencesListController *_rootListController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a0128
@property(readonly, nonatomic) COSPreferencesListController *rootListController; // @synthesize rootListController=_rootListController;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000a0001
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000009fe30
- (void)setupControllerForToolbar:(id)arg1;	// IMP=0x001000000009fe16

@end

