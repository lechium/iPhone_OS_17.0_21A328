//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIButton, UILabel;
@protocol WDCheckmarkTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WDCheckmarkTableViewCell : UITableViewCell
{
    UILabel *_displayLabel;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    id <WDCheckmarkTableViewCellDelegate> _delegate;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x0060000000040162
- (void).cxx_destruct;	// IMP=0x0000000000040234
@property(nonatomic) __weak id <WDCheckmarkTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickToggle:(id)arg1;	// IMP=0x000000000004016f
@property(nonatomic, getter=isOn) _Bool on;
- (void)setDisplayText:(id)arg1;	// IMP=0x000000000004010b
- (void)_setupUI;	// IMP=0x000000000003faf8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000003faac

@end

