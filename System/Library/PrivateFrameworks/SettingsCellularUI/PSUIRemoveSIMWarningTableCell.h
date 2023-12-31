//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PSUIRemoveSIMWarningTableCell : PSTableCell
{
    UIImageView *_icon;	// 120 = 0x78
    UILabel *_title;	// 128 = 0x80
    UILabel *_label;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000000ce02
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) UILabel *title; // @synthesize title=_title;
@property(retain) UIImageView *icon; // @synthesize icon=_icon;
- (void)_setupView:(id)arg1;	// IMP=0x000000000000c410
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000000c364
- (id)detailTextLabel;	// IMP=0x000000000000c35c
- (id)textLabel;	// IMP=0x000000000000c354

@end

