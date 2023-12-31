//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/NSObject-Protocol.h>

@class CNFavoritesEntry, CNUIFavoritesEntryPicker, NSArray;

@protocol CNUIFavoritesEntryPickerDelegate <NSObject>
- (void)favoritesEntryPicker:(CNUIFavoritesEntryPicker *)arg1 didPickEntry:(CNFavoritesEntry *)arg2;

@optional
- (NSArray *)actionTypesForFavoritesEntryPicker:(CNUIFavoritesEntryPicker *)arg1;
@end

