//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionButtonConfigurationUI/NSObject-Protocol.h>

@class ABActionSelectorViewController;

@protocol ABActionSelectorViewControllerDelegate <NSObject>

@optional
- (void)actionSelectorViewController:(ABActionSelectorViewController *)arg1 didUpdateMode:(long long)arg2;
- (void)actionSelectorViewController:(ABActionSelectorViewController *)arg1 didSelectItemAtIndex:(long long)arg2;
@end

