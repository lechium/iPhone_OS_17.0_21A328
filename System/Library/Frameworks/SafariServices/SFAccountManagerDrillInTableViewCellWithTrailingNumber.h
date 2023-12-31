//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

__attribute__((visibility("hidden")))
@interface SFAccountManagerDrillInTableViewCellWithTrailingNumber : UITableViewCell
{
}

+ (id)_numberFormatter;	// IMP=0x008000000019f5f8
- (void)configureForRecentlyDeletedWithNumberOfRecentlyDeletedAccounts:(unsigned long long)arg1;	// IMP=0x00000000001a01d9
- (void)configureGroupInvitationsDrillInWithNumberOfInvitations:(unsigned long long)arg1;	// IMP=0x000000000019ff4d
- (void)configureCellWithGroup:(id)arg1 numberOfSavedAccounts:(unsigned long long)arg2;	// IMP=0x000000000019fc6e
- (void)configureForSecurityRecommendationsWithNumberOfRecommendations:(unsigned long long)arg1 subtitleText:(id)arg2 warningStyle:(long long)arg3;	// IMP=0x000000000019f6eb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000019f688

@end

