//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI17ListTableViewCell : UITableViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *cellConfiguration;	// 12 = 0xc
    MISSING_TYPE *disclosureIndent;	// 24 = 0x18
    MISSING_TYPE *separatorConfiguration;	// 65536 = 0x10000
    MISSING_TYPE *host;	// 1937330991 = 0x7379532f
    MISSING_TYPE *isDisplaying;	// 1919052108 = 0x7262694c
    MISSING_TYPE *selectionBehavior;	// 1986622032 = 0x76697250
    MISSING_TYPE *viewListID;	// 1701667186 = 0x656d6172
    MISSING_TYPE *outlineRootSeed;	// 0 = 0x0
    MISSING_TYPE *hasDragItemsPreference;	// 0 = 0x0
    MISSING_TYPE *hasItemProviderTrait;	// 1631727475 = 0x61422f73
    MISSING_TYPE *focusItem;	// 1400137831 = 0x53746867
}

- (void).cxx_destruct;	// IMP=0x000000000184d5b7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000184d568
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000184d3e7
@property(nonatomic) _Bool isAccessibilityElement;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x000000000184cb88
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000184c8c8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000184c816
- (void)prepareForReuse;	// IMP=0x000000000184c69c
- (void)layoutMarginsDidChange;	// IMP=0x000000000184bee4

@end
