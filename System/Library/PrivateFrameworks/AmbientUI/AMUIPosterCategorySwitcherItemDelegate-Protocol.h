//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/NSObject-Protocol.h>

@class AMUIPosterCategorySwitcherItem, AMUIPosterSwitcherSettings, BKSAnimationFenceHandle, BSAnimationSettings, NSString, NSUUID;

@protocol AMUIPosterCategorySwitcherItemDelegate <NSObject>
- (_Bool)posterCategorySwitcherItemHasInlineAuthenticated:(AMUIPosterCategorySwitcherItem *)arg1;
- (void)posterCategorySwitcherItem:(AMUIPosterCategorySwitcherItem *)arg1 didRequestInlineAuthenticationWithUnlockDestination:(NSString *)arg2;
- (_Bool)posterCategorySwitcherItemIsAuthenticated:(AMUIPosterCategorySwitcherItem *)arg1;
- (void)posterCategorySwitcherItem:(AMUIPosterCategorySwitcherItem *)arg1 relinquishInstanceIdentifier:(NSUUID *)arg2;
- (NSUUID *)posterCategorySwitcherItemRequestInstanceIdentifier:(AMUIPosterCategorySwitcherItem *)arg1 preferring:(NSUUID *)arg2;
- (AMUIPosterSwitcherSettings *)posterCategorySwitcherItemPrototypeSettings:(AMUIPosterCategorySwitcherItem *)arg1;
- (void)posterCategorySwitcherItem:(AMUIPosterCategorySwitcherItem *)arg1 setChromeVisibility:(_Bool)arg2 withAnimationSettings:(BSAnimationSettings *)arg3 animationFence:(BKSAnimationFenceHandle *)arg4;
@end
