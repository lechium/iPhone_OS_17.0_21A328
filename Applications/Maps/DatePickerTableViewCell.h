//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIDatePicker;

@interface DatePickerTableViewCell : UITableViewCell
{
    UIDatePicker *_datePicker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000534a66
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000005349f0
- (void)setupConstraints;	// IMP=0x0010000000534678
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000534590

@end

