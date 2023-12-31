//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UITextView;
@protocol SUUIEditorTemplateViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIEditorTemplateView
{
    UIColor *_textColor;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
    _Bool _disabled;	// 56 = 0x38
    double _bottomInset;	// 64 = 0x40
    id <SUUIEditorTemplateViewDelegate> _delegate;	// 72 = 0x48
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000002b7725
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000002b771f
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000002b7709
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000002b7701
- (void).cxx_destruct;	// IMP=0x00000000002b7f1b
@property(nonatomic) __weak id <SUUIEditorTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
- (id)_textFromViewElement:(id)arg1;	// IMP=0x00000000002b7d4f
- (void)_reloadSubviews;	// IMP=0x00000000002b7c4f
@property(readonly, nonatomic) NSString *text;
- (void)layoutSubviews;	// IMP=0x00000000002b7a56
- (void)textViewDidChange:(id)arg1;	// IMP=0x00000000002b79cc
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002b79c4
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002b79bc
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000002b79b4
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000002b79ae
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002b773b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002b76a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

