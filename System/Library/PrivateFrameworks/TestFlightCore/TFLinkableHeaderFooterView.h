//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface TFLinkableHeaderFooterView : UITableViewHeaderFooterView
{
    _Bool _isHeader;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x004000000000486e
+ (double)_heightForTextViewWithText:(id)arg1 font:(id)arg2 isHeader:(_Bool)arg3 fittingWidth:(double)arg4 inTraitEnvironment:(id)arg5;	// IMP=0x004000000000429e
+ (struct CGSize)itemSizeWithText:(id)arg1 isHeader:(_Bool)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;	// IMP=0x0040000000004102
- (void).cxx_destruct;	// IMP=0x00000000000048ac
@property(nonatomic) _Bool isHeader; // @synthesize isHeader=_isHeader;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;	// IMP=0x00000000000047d7
- (void)_updateTextViewWithLinkMap:(id)arg1;	// IMP=0x00000000000043bc
- (void)applyText:(id)arg1 withTextLinkMap:(id)arg2 isHeader:(_Bool)arg3;	// IMP=0x000000000000403d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000003fbf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000003f03
- (void)layoutSubviews;	// IMP=0x0000000000003c4c
- (id)init;	// IMP=0x0000000000003c33
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000000396c

@end

