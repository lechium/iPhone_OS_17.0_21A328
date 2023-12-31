//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

@class NSArray, NSDictionary, UIImageView, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell
{
    _Bool _showsChevron;	// 8 = 0x8
    UITextField *_textField;	// 16 = 0x10
    UIImageView *_chevron;	// 24 = 0x18
}

+ (id)cellIdentifier;	// IMP=0x0060000000296519
+ (Class)containerViewClass;	// IMP=0x0060000000296508
- (void).cxx_destruct;	// IMP=0x00000000002964d7
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool showsChevron; // @synthesize showsChevron=_showsChevron;
@property(copy, nonatomic) NSDictionary *textAttributes;
@property(readonly, nonatomic) NSArray *textFields;
- (void)updateMargins;	// IMP=0x0000000000295f4f
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000000295f3d
- (id)newTextField;	// IMP=0x0000000000295e99
- (void)prepareForReuse;	// IMP=0x0000000000295dcf
- (void)setupTextFields;	// IMP=0x0000000000295d3a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000295c38

@end

