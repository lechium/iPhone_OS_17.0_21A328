//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UITextField;
@protocol SUUIRedeemIdTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemIdTableViewCell : UITableViewCell
{
    id <SUUIRedeemIdTableViewCellDelegate> _delegate;	// 8 = 0x8
    UITextField *_textField;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000381050
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <SUUIRedeemIdTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initializeTextField;	// IMP=0x0000000000380e1d
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0000000000380d87
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x0000000000380d7f
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000380ce8
- (void)setAutoCapitalizationType:(long long)arg1;	// IMP=0x0000000000380c9c
- (void)setReturnKeyType:(long long)arg1;	// IMP=0x0000000000380c50
- (void)setKeyboardType:(long long)arg1;	// IMP=0x0000000000380c04
- (void)setPlaceholderText:(id)arg1;	// IMP=0x0000000000380b9b
- (_Bool)resignFirstResponder;	// IMP=0x0000000000380b17
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000380a90
- (void)layoutSubviews;	// IMP=0x0000000000380971
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000038090e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

