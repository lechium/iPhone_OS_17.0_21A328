//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCell.h"

@class UIPickerTableView, UITapGestureRecognizer, _UIPickerViewStyle;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewCell : UITableViewCell
{
    UITapGestureRecognizer *_tap;	// 128 = 0x80
    UIPickerTableView *pickerTable;	// 136 = 0x88
    _UIPickerViewStyle *_style;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000f96b3e
@property(retain, nonatomic) _UIPickerViewStyle *style; // @synthesize style=_style;
@property(nonatomic) UIPickerTableView *pickerTable; // @synthesize pickerTable;
- (void)_tapAction:(id)arg1;	// IMP=0x0000000000f96a76
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;	// IMP=0x0000000000f96a70
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000f96974

@end
