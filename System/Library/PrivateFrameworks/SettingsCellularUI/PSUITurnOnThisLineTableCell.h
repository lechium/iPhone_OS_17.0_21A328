//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PSUITurnOnThisLineTableCell : PSTableCell
{
    UILabel *_titleLabel;	// 120 = 0x78
    UILabel *_statusLabel;	// 128 = 0x80
}

+ (long long)cellStyle;	// IMP=0x006000000004996d
- (void).cxx_destruct;	// IMP=0x000000000004a492
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)detailTextLabel;	// IMP=0x000000000004a440
- (id)textLabel;	// IMP=0x000000000004a438
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000004a343
- (void)_updateStatus:(id)arg1;	// IMP=0x000000000004a129
- (void)_setTitle:(id)arg1 andStatus:(id)arg2;	// IMP=0x000000000004a06e
- (_Bool)canBeChecked;	// IMP=0x000000000004a066
- (_Bool)canReload;	// IMP=0x000000000004a05e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000049978

@end

