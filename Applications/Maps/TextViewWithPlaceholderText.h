//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class UILabel;

@interface TextViewWithPlaceholderText : UITextView
{
    UILabel *_placeholderLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000005ddf98
@property(readonly, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void)setText:(id)arg1;	// IMP=0x00100000005ddf46
- (void)_updatePlaceholderVisibility;	// IMP=0x00100000005dde2e
- (void)layoutSubviews;	// IMP=0x00100000005ddbd0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000005dd9f2

@end
