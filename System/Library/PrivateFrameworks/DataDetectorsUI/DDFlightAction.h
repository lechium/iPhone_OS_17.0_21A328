//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDAction.h"

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface DDFlightAction : DDAction
{
    UINavigationController *_viewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000015433
- (id)viewController;	// IMP=0x000000000001520f
- (_Bool)extractAirlineCode:(id *)arg1 flightNumber:(long long *)arg2;	// IMP=0x0000000000015119
- (void)closePressed;	// IMP=0x00000000000150cd
- (int)interactionType;	// IMP=0x00000000000150c2
- (id)quickActionTitle;	// IMP=0x000000000001500c
- (id)iconName;	// IMP=0x0000000000014fff
- (id)localizedName;	// IMP=0x0000000000014fe7
- (void)prepareViewControllerForActionController:(id)arg1;	// IMP=0x0000000000014e6d
- (void)adaptForPresentationInPopover:(_Bool)arg1;	// IMP=0x0000000000014e50

@end

