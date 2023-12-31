//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIColor;
@protocol SFEditableTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFEditableTableViewCell : UITableViewCell
{
    _Bool _enabled;	// 8 = 0x8
    id <SFEditableTableViewCellDelegate> _delegate;	// 16 = 0x10
    UIColor *_overrideEditableTextFieldTextColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000686ac
@property(retain, nonatomic) UIColor *overrideEditableTextFieldTextColor; // @synthesize overrideEditableTextFieldTextColor=_overrideEditableTextFieldTextColor;
@property(nonatomic) __weak id <SFEditableTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)copy:(id)arg1;	// IMP=0x0000000000068532
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000006848f
- (void)_updateTextFieldTextColor;	// IMP=0x00000000000683c1
- (void)tintColorDidChange;	// IMP=0x00000000000682d3
- (id)initWithEnabledState:(_Bool)arg1;	// IMP=0x00000000000681a2

@end

