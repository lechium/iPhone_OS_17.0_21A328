//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PFStoryRecipeStyle;

@protocol PFStoryRecipeStyle
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) _Bool isCustomized;
@property(readonly, nonatomic) NSString *songAssetIdentifier;
@property(readonly, nonatomic) long long customColorGradeKind;
@property(readonly, nonatomic) NSString *originalColorGradeCategory;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isEqualToStyle:(id <PFStoryRecipeStyle>)arg1;
@end
